#include <bits/stdc++.h>
using namespace std;
bool compare(const pair<int, string>& a, const pair<int, string>& b)
{
		return a.first < b.first;
}
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<pair<int, string>> p;
	int age;
	string name;
	for (int k = 0; k < n; k++) {
		cin >> age >> name;
		p.push_back({ age, name });
	}
	stable_sort(p.begin(), p.end(), compare);
	for (auto c : p)
		cout << c.first << " " << c.second << "\n";
}