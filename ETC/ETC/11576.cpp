#include <bits/stdc++.h>
using namespace std;

void TenToEight(int n,int b) {
	stack<int> res;
	while (true) {
		if (n < b) {
			res.push(n);
			break;
		}
		else {
			res.push(n % b);
			n = n / b;
		}
	}
	while (!res.empty()) {
		cout << res.top() << " ";
		res.pop();
	}
}
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b;
	cin >> a >> b;
	int m;
	cin >> m;
	stack<int> s;
	int ten = 0;
	
	for (int i = 0; i < m; i++) {
		int k;
		cin >> k;
		s.push(k);
	}
	int j = s.size();
	// 10진수 변환
	for (int i = 0; i < j; i++) {
		ten = ten + (pow(a, i) * s.top());
		s.pop();
	}
	
	TenToEight(ten, b);
}