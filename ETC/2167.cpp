#include <bits/stdc++.h>
using namespace std;
int arr[301][301];
void solution(int n, int m) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> arr[i][j];
        }
    }
    int cnt;
    cin >> cnt;
    for (int r = 0; r < cnt; r++) {
        int i, j, x, y;
        int res = 0;
        cin >> i >> j >> x >> y;
        for (int a = i; a <= x; a++) {
            for (int b = j; b <= y; b++) {
                res += arr[a][b];
            }
        }
        cout << res <<endl;
    }

}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    solution(n, m);
    return 0;
}