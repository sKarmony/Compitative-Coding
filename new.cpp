#include<bits/stdc++.h>
using namespace std;
void r()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif
}
int countDigit(int n)
{
	if (n == 0)
		return 0;
	return 1 + countDigit(n / 10);
}
void print(std::vector<int> v)
{
	cout << v.size() << endl;
	for (auto i : v)
	{
		cout << i << " " ;
	}
}

int main()
{	r();

	int n;
	cin >> n;
	while (n--)
	{
		int a;
		cin >> a;
		int b = 0;
		b = a;
		vector<int> v;
		vector<int> vec;

		int digits = countDigit(a);
		int f = (pow(10, (digits) )) + 1;
		// cout << digits << " " << f << endl;
		for (unsigned int i = f / 10; i > 0; i /= 10)
		{
			v.push_back(a / i);
			a = a % i;
		}
		if (count ((v.begin() + 1), v.end(), 0) == (digits - 1))
		{
			cout << "1" << endl << b << endl;
		}
		else if (1)
		{

			for (int i = 1; i <= v.size(); i++)
			{
				long long int y = 0; y = (digits - i) ;
				// cout << endl << "y: " << y << endl;
				int x = 0;
				long long int z = 0; z = pow(10, y) + 0.5;
				x = v[i - 1] * z;
				if (x != 0)
				{
					// cout << " " << x << " ";
					vec.push_back(x);
				}
			}
			print(vec);
			cout << endl;
		}



	}

	return 0;
}
