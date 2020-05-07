#include<bits/stdc++.h>
using namespace std;


void print(stack <int> s)
{
	while(!s.empty())
	{
		cout<<" "<<s.top();
		s.pop();
	}
}

int main()
{
	stack <int> s;
	s.push(10);
	s.push(40);
	print(s);
	cout<<s.size()<<" "<<s.top();
	s.pop();
	print(s);

}