#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	int flag = 0;
	int size = s.size();
	int res = 0;
	string num;
	for (int i = 0; i <= size; i++) {
		if (s[i] == '-' || s[i] == '+' || i == size) {
			if (flag == 1) {
				res -= stoi(num);
				num = "";
			}
			else {
				res += stoi(num);
				num = "";
			}
		}
		else {
			num += s[i];
		}
		if (s[i] == '-') {
			flag = 1;
		}
	}
	cout << res;
}