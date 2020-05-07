#include<iostream>
#include<stdio.h>


using namespace std;
 int main()
 {
 	string c; int a,b; 
 	cin >>  a >>  b >> c;
 	cout << ((c == "+") ? (a+b) : ((c == "-") ? (a-b) : ((c == "*") ? (a*b) : ((c == "/") ? (a/b) : 0)))); 
  }