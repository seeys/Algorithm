#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int res = 0;
	while (n--) {
		stack<char> s;
		string c;
		cin >> c;
		for (auto i : c) {
			if (s.empty()) {
				s.push(i);
			}
			else {
				if (s.top() == i) {
					s.pop();
				}
				else {
					s.push(i);
				}
			}
		}
		if (s.empty()) res++;
	}
	cout << res;
}