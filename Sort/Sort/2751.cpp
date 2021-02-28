#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n, m;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m;
		v.push_back(m);
	}
	sort(v.begin(), v.end());
	for (auto c : v)
		cout << c << '\n';
}