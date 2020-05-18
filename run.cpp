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



	int n;
	cin >> n;
	while (n--)
	{
		long long int a, b;
		cin >> a >> b;
		std::vector<long long int> v;
		for (long long int i = 1; i < b; i++)
		{

			if ( i < a || ((i / a) != 0))
			{
				v.push_back(i);
			}
		}

		for (auto i : v)
		{
			cout << i << " ";
		}
		cout << v.back();


	}
	return 0;


}
