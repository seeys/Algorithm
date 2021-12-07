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
	while (n != 1) {
		if (n == 0) {
			cout << 0;
			return 0;
		}
		if (n < 0) {
			if (abs(n) % 2 == 0) {
				n /= x;
				v.push_back(0);
			}
			else {
				n = abs(n) / 2 + 1;
				v.push_back(1);
			}
		}
		else {
			int r = n % 2;
			n /= x;
			v.push_back(r);
		}
	}
	v.push_back(1);
	reverse(v.begin(), v.end());
	for (auto c : v) {
		cout << c;
	}
	return 0;
}