#include <bits/stdc++.h>
using namespace std;

struct symbolTable
{
	/* data */
	string name;
	vector<int> type;
	int addr;
};

map<string,symbolTable> st;

bool lookup(string name)
{
	if(!st.count(name))
		return true;
	else
		return false;
}

void insert(char *n, int type, int addr)
{
	string name(n);
	struct symbolTable sym;
	if(lookup(name))
	{
		
		sym.name = name;
		sym.type.push_back(type);
		sym.addr = addr;
		st[name] = sym;
	}
	else
	{
		sym = st[name];
		if(sym.addr == addr)
		{
			sym.type.push_back(type);
			st[name] = sym;
		}
	}

	return;
}

void delete(char *n)
{
	string name(n);
	map<string,symbolTable>::iterator it;
	if(st.find(n)!=st.end())
	{	
		it=st.find(n);
		st.erase(it);
	}
}
void clearsym()
{
	st.clear();
}
void printsym()
{
	//cout<<"hello"<<endl;
	map<string,symbolTable>::iterator it;
	struct symbolTable s;
	for(it=st.begin();it!=st.end();++it)
	{
		s=it->second;
		cout<<s.addr<<"  "<<s.name<<"  ";
		for(int i=0;i<s.type.size();++i)
			cout<<s.type[i]<<" ";
		cout<<endl;
	}
	return;
}

bool check(char *a, char *b)
{
	string name1(a);
	string name2(b);

	struct symbolTable s1,s2;
	s1 = st[name1];
	s2 = st[name2];

	if(s1.type[0] == s2.type[0])
		return false;

	return true;
}