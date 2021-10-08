#include <bits/stdc++.h>
using namespace std;
bool solution(int n) {
	for (int i = 1; i <= 100; i++) {
		if (i * i == n) {
			return 1;
		}
	}
	return 0;
}
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int m, n;
	cin >> m >> n;
	int res = 0;
	int min_x = 10001;

	for (int i = m; i <= n; i++) {
		if (solution(i)) {
			res += i;
			min_x = i < min_x ? i : min_x;
		}
	}
	
	if (res == 0) {
		cout << "-1";
	}
	else {
		cout << res << "\n" << min_x;
	}
	
}