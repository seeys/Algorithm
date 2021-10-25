#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int k;
	cin >> k;

	for (int i = 0; i < k; i++) {
		for (int j = 0; j < k - i - 1; j++) {
			cout << " ";
		}
		for (int j = 0; j < i + 1; j++) {
			cout << "*";
		}
		cout << "\n";
	}
	for (int i = 0; i < k - 1; i++) {
		for (int j = 0; j < i+1; j++) {
			cout << " ";
		}
		for (int j = 0; j < k - i - 1; j++) {
			cout << "*";
		}
		cout << "\n";
	}

}