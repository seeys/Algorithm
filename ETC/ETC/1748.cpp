#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int res = 0;
	for (int i = 1; i <= n; i = i * 10) { // 자리수 증가
		res += n - i + 1;
	}
	cout << res;
}