#include <bits/stdc++.h>
using namespace std;

bool flag_function = false;
int scope = 0;
int ef[100] = {0};
stack<int> cscope;
char function_names[10][10] = { "getchar", "putchar", "putc", "puts", "getc", "gets", "getch", "remove" }; 

bool main_check()
{
	stit it;
	for(it = st.begin(); it!= st.end(); it++)
	{
		if(it->second.name == "main")
			return true;
	}
	return false;
}

bool function_check(char *a)
{
	int i;
	for( i = 0; i < 10; i++)
		if(!strcmp(a, function_names[i]))
			return true;
	return false;
}

int isnum(string a)
{
	for(int i = 0; i < a.size(); i++)
	{
		if(!isdigit(a[i]))
		{
			if(a[i] == '.')
				return 1; // REAL
			else 
				return 2; // ID
		}
	}
	return 0; // NUM
}

int type_of(string a)
{
	int current_scope = cscope.top();
	rangeit eqit = st.equal_range(a);
	stit it, res;
	bool flag = false;
	if(eqit.first == eqit.second)
	{
		return -1;
	}

	for( it = eqit.first ; it != eqit.second ; it++ )
	{
		if(it->second.scope <= current_scope && (!ef[it->second.scope] || flag_function))
			res = it, flag = true;
	}
	if(flag)
		return res->second.type;
	else
		return -1;
}

bool check(char *a, char *b)
{
	string name1(a);
	string name2(b);

	int type_1, type_2, flag_1, flag_2;

	flag_1 = isnum(name1);
	flag_2 = isnum(name2);

	if( (flag_1 == 0 && flag_2==0) || (flag_1==1 && flag_2==1) )
		return false;
	else if((flag_1 == 0 && flag_2 == 1))
		return true;
	else if((flag_1 == 1 && flag_2 == 0))
		return true;
	else if((flag_1 == 0 || flag_1 == 1) && flag_2 == 2)
	{
		type_2 = type_of(name2);
		if(type_2 == -1)
			return false;
		if(flag_1 == 0 && type_2 == 266)
			return false;
		if(flag_1 == 1 && type_2 == 267)
			return false;
		return true;
	}
	else if((flag_2 == 0 || flag_2 == 1) && flag_1 == 2)
	{
		type_1 = type_of(name1);
		if(type_1 == -1)
			return false;
		if(flag_2 == 0 && type_1 == 266)
			return false;
		if(flag_2 == 1 && type_1 == 267)
			return false;
		return true;
	}
	else
	{
		type_1 = type_of(name1);
		type_2 = type_of(name2);

		if(type_1 == -1 || type_2 == -1)
			return false;
		if(type_1 == type_2)
			return false;
		return true;
	}
}

int check1(char *a)
{
	int current_scope = cscope.top();
	string name(a);

	rangeit eqit = st.equal_range(name);
	stit it;

	for( it = eqit.first ; it != eqit.second ; it++ )
	{
		if(it->second.scope == current_scope)
			return 0;
	}

	return 1;
}

int check2(char* a)
{
	int current_scope = cscope.top();
	rangeit eqit = st.equal_range(a);
	stit it, res;
	bool flag = false;

	if(eqit.first == eqit.second)
	{
		return -1;
	}

	for( it = eqit.first ; it != eqit.second ; it++ )
	{
		if(it->second.scope <= current_scope && !ef[it->second.scope])
			res = it, flag = true;
	}

	if(flag)
		return res->second.scope;
	else
		return 0;
}