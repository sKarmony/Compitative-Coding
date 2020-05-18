#include<bits/stdc++.h>
using namespace std;
const unsigned int M = 1000000007;
typedef long long ll;

void r()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif
}

int main()
{	r();
	int n = 4;
	vector<vector<int>> v{{1, 3}, {1, 4}, {2, 3}, {2, 4}, {4, 3}};
	// trust = {[1, 3], [1, 4], [2, 3], [2, 4], [4, 3]};
	// cout << trust[3][1];
	unordered_map<int, list<int>>M ;
	for (int i = 0; v.size(); i++)
	{

		if (M.find(v[i][0]) == M.end())
		{
			M.insert(make_pair(v[i][0], v[i][1]));
		}

		else

			M[i]->second = (v[i][1]);
	}
}









return 0;


}
