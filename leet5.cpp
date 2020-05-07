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
	unordered_map<char, int> M;

	for (int i = 0; i < s.length(); i++) {

		if (M.find(s[i]) == M.end()) {
			M.insert(make_pair(s[i], 1));
		}
		else {
			M[s[i]]++;
		}
	}
	for (auto& it : M) {
		cout << it.first << ' '
		     << it.second << '\n';
	}
	for (int i = 0; i < s.length(); i++)
	{
		if (M[s[i]] == 1)
			cout << i;
	}

	// for (int i = 0; i < s.length(); i++) {

// 	if (M.find(s[i]) == 1) {

// 	}
// }



	return 0;
}
