#include <bits/stdc++.h>
using namespace std;
#define x -2
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		v.push_back(k);
	}
	if (!next_permutation(v.begin(), v.end())) {
		cout << "-1";
		return 0;
	}
	for (int i = 0; i < n; i++) {
		cout << v[i] << ' ';
	}
}