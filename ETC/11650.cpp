#include <bits/stdc++.h>
using namespace std;
bool compare(const pair<int, int>& a, const pair<int, int>& b)
{
	if (a.first == b.first)
		return a.second < b.second;
	else
		return a.first < b.first;
}
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<pair<int, int>> p;
	int i, j;
	for (int k = 0; k < n; k++) {
		cin >> i >> j;
		p.push_back({ i, j });
	}
	sort(p.begin(),p.end(),compare);
	for (auto c : p)
		cout << c.first << " " << c.second << "\n";
}