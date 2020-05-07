#include<bits/stdc++.h>
using namespace std;
void r()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif
}

int main()
{	r();
	string s;
	cin >> s;

	int arr[26] = {0};
	// Note: above means '= {0}' will initialize all garbage with 0, which is
	// ***IMPORTANT***
	int i = 0;
	for (; i < s.size(); i++) {
		arr[s[i] - 'a']++;
	}

	for (i = 0; i < s.size(); i++) {
		if (arr[s[i] - 'a'] == 1) cout << i;

	}

}
//leetcode may 5 hashing sol fastest
