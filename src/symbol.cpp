#include <bits/stdc++.h>
using namespace std;

struct symbolTable
{
	/* data */
	string name;
	int type;
	int addr;
	int scope;
	float value;
	int other;
};

multimap<string,symbolTable> st;
typedef multimap<string, symbolTable>::iterator stit;
typedef pair< stit, stit > rangeit;

void insert(char *n, int type, int addr, int scope, float value, int other)
{
	string name(n);
	struct symbolTable sym;
	sym.name = name;
	sym.type = type;
	sym.addr = addr;
	sym.scope = scope;
	sym.value = value;
	sym.other = other;
	st.insert(make_pair(name, sym));
	return;
}

void update(char *n, int scope, float value)
{
	string name(n);
	rangeit eqit = st.equal_range(name);
	stit it, res;

	for( it = eqit.first ; it != eqit.second ; it++ )
	{
		if(it->second.scope == scope)
		{
			it->second.value = value;
			return;
		}
	}
	return;
}

void delete1(char *n)
{
	string name(n);
	map<string,symbolTable>::iterator it;
	if(st.find(n)!=st.end())
	{	
		it=st.find(n);
		st.erase(it);
	}
	return;
}

void clearsym()
{
	st.clear();
	return;
}

void printsym()
{
	stit it;
	struct symbolTable s;
	for(it=st.begin();it!=st.end();++it)
	{
		s=it->second;
		cout<<s.addr<<"  "<<s.name<<"  "<<s.type<<"  "<<s.scope<<"  "<<s.value<<"  "<<s.other;
		cout<<endl;
	}
	return;
}