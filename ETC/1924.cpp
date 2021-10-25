#include <bits/stdc++.h>
using namespace std;
int a[5];
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x, y;
	cin >> x >> y;
	int month[13] = { 0, 31,28,31,30,31,30,31,31,30,31,30,31 };
	int res = 0;
	for (int i = 0; i < x; i++) {
		res += month[i];
	}
	res += y;
	int day = res % 7;
	switch (day) {
	case 1:
		cout << "MON";
		break;
	case 2:
		cout << "TUE";
		break;
	case 3:
		cout << "WED";
		break;
	case 4:
		cout << "THU";
		break;
	case 5:
		cout << "FRI";
		break;
	case 6:
		cout << "SAT";
		break;
	case 0:
		cout << "SUN";
		break;
	default:
		cout << "...";
		break;
	}
	
}
