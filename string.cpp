#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
 	cin>>s;
 	for(int i=0;i<s.length();i++)
 	{
 		// cout<<s[i];
 		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y')
 		{
 			s.erase(s.begin() + i);
 			i--;
 		}
 	}
 	for(int i=0;i<s.length();i++)
 	{
 		if(s[i]>64 && s[i]<97)
 			s[i]=s[i]+32;
 	}
 	for(int i=0;i<s.length();i++)
 	{
 		s.insert(i,".");
 		i++;
 	}
 	cout<<s;




// deletes all the vowels,
// inserts a character "." before each consonant,
// replaces all uppercase consonants with corresponding lowercase ones.
	// s.erase(1,1);
	// cout<<s;
}