#include<bits/stdc++.h>
using namespace std;
void r()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif
}

int main() {
	r();

	array<int, 5> arr;

	arr.fill(10);
	for (int i = 0; i < arr.size(); i++)
		cout << arr[i] << " ";
	cout << endl;
	arr = {1, 5, 3, 4, 6};
	for (int i = 0; i < arr.size(); i++)
		cout << arr[i] << " ";
	cout << endl;
	for (auto& i : arr)
		cout << i << endl;

	cout << arr.back(); //returns first elment
	cout << arr.front(); //eturn last element
	cout << arr.data(); //returns pointer of the array

	cout << endl << *(arr.end()) - arr.back();

}