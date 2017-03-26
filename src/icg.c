#include <stdio.h>

char tstack[100][10];
int top = -1;
char id[2] = "0";
char temp[2] = "t";

int label[20];
int lnum=0;
int ltop=0;

void printstack()
{
	int i;
	for(i = 0; i <= top; i++)
		printf("%s",tstack[i]);
	printf("\n");
}

void pushicg(char *a)
{
	strcpy(tstack[++top], a);
	//printstack();
	return;
}

void codegen()
{
	strcpy(temp, "t");
	strcat(temp, id);
	//printstack();
	printf("%s = %s %s %s\n", temp, tstack[top-2], tstack[top-1], tstack[top]);
	top -= 2;
	strcpy(tstack[top], temp);
	id[0]++;
	//printstack();
	return;
}

void codegen_assign()
{
	printf("%s %s %s\n", tstack[top-2], tstack[top-1], tstack[top]);
	top -= 3;
	//printstack();
	return;
}

void codegen_array()
{
	strcpy(temp, "t");
	strcat(temp, id);
	printf("%s = %s * 4\n", temp, tstack[top] );
	strcpy(tstack[top], temp);
	id[0]++;
	strcpy(temp, "t");
	strcat(temp, id);
	printf("%s = %s [ %s ]\n", temp, tstack[top-1], tstack[top]);
	top -= 1;
	strcpy(tstack[top], temp);
	id[0]++;
	return;
}

void if1()
{
	 lnum++;
	 strcpy(temp,"t");
	 strcat(temp,id);
	 printf("%s = not %s\n",temp,tstack[top--]);
	 printf("if %s goto L%d\n",temp,lnum);
	 id[0]++;
	 label[++ltop]=lnum;
	 return;
}

void if2()
{
	int x;
	lnum++;
	x=label[ltop--];
	printf("goto L%d\n",lnum);
	printf("L%d: \n",x); 
	label[++ltop]=lnum;
	return;
}

void if3()
{
	int y;
	y=label[ltop--];
	printf("L%d: \n",y);
	return;
}

void while1()
{
	lnum++;
	printf("L%d: \n",lnum);
	label[++ltop] = lnum;
	return;
}

void while2()
{
	lnum++;
 	strcpy(temp,"t");
	strcat(temp,id);
	printf("%s = not %s\n",temp,tstack[top--]);
	printf("if %s goto L%d\n",temp,lnum);
	id[0]++;
	label[++ltop]=lnum;
	return;
}

void while3()
{
	int x;
	x=label[ltop--];
	printf("goto L%d\n",label[ltop--]);
	printf("L%d: \n", x);
	return;
}

void dowhile1()
{
	lnum++;
	printf("L%d: \n",lnum);
	label[++ltop] = lnum;
	return;
}

void dowhile2()
{
	printf("if %s goto L%d\n",tstack[top--],label[ltop--]);
	return;
}

void for1()
{
    lnum++;
	printf("L%d: \n",lnum);
	label[++ltop] = lnum;
	return;
}

void for2()
{
    strcpy(temp,"t");
    strcat(temp,id);
    id[0]++;
    printf("%s = not %s\n",temp,tstack[top--]);
    lnum++;
    printf("if %s goto L%d\n",temp,lnum);
    label[++ltop] = lnum;
    lnum++;
    printf("goto L%d\n",lnum);
    label[++ltop] = lnum;
    lnum++; 
    printf("L%d: \n",lnum);
    label[++ltop] = lnum;
    return;
}
void for3()
{
    printf("goto L%d \n",label[ltop - 3]);
    printf("L%d: \n",label[ltop - 1]);
    return;
}

void for4()
{
    printf("goto L%d \n",label[ltop]);    
    printf("L%d: \n",label[ltop-2]);
   	ltop -= 4;
   	return;
}