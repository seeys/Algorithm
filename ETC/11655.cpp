#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	getline(cin, s);
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ' || (48 <= s[i] && s[i] <= 57))
			continue;
		else {
			if ((65 <= s[i] && s[i] <= 77) || (97 <= s[i] && s[i] <= 109))
				s[i] = s[i] + 13;
			else
				s[i] = s[i] - 13;
		}
	}
	cout << s;

}