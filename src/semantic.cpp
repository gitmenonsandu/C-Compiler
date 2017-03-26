#include <bits/stdc++.h>
using namespace std;

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
	if(st.count(a))
	{
		return st[a].type[0];
	}
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