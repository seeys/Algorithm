#include <bits/stdc++.h>
using namespace std;
char arr[5][16];
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	for (int i = 0; i < 5; i++) {
			cin >> arr[i];
	}

	for (int i = 0; i < 16; i++) {
		for (int j = 0; j < 5; j++) {
			if (arr[j][i] == '\0')
				continue;
			else
				cout << arr[j][i];
		}
	}
}