#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int time;
	int a = 300, b = 60, c = 10;
	cin >> time;
	int a_t = 0, b_t = 0, c_t = 0;
	a_t = time / a;
	time = time % a;
	b_t = time / b;
	time = time % b;
	c_t = time / c;
	time = time % c;
	if (time != 0)
		cout << -1;
	else
		cout << a_t << " " << b_t << " " << c_t;
}