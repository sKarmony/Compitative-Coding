 #include<iostream>
using namespace std;

int main()
{ int x, n=0, t=0, i;
	cin >> x;

	// for(int i=1;i<x;i++)
	// {
	// 	if(x & (1<<(i-1)))
	// 		t++;
	// }
	// cout<<t;
	for(int i=0; x>0; i++)
		if((x & 1)!=0)
			{t++; x >>= 1; }
		else
			{x >>= 1; }



	cout<<t;
}