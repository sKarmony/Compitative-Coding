#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
	int arr[10], big=0, small;
	for(int i=0; i<10; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < 10; ++i)
	{
		if(big<arr[i])
			big = arr[i];
		else
			continue;

	}
	cout << "Biggest Number is: " <<big << endl ;
	cout << "Size of the array is: " <<sizeof(arr)/sizeof(arr[0]);
}