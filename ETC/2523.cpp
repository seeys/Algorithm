#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int k;
	cin >> k;

	for (int i = 0; i < k; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
	for (int i = k - 1; i > 0; i--) {
		for (int j = i; j > 0 ; j--) {
			cout << "*";
		}
		cout << "\n";
	}

}