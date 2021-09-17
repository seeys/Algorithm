#include <bits/stdc++.h>
using namespace std;
char arr[8][8];
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int res = 0;
	
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> arr[i][j];
			if ((i + j) % 2 == 0) {
				if (arr[i][j] == 'F')
					res++;
			}
		}
	}
	cout << res;
}