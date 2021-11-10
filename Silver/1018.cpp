#include <bits/stdc++.h>
using namespace std;
string board[51];
int n, m;
string WB[8] = {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"
};
string BW[8] = {
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"
};
int wb(int x, int y) {
  int cnt = 0;
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (board[x + i][y + j] != WB[i][j])
        cnt++;
    }
  }
  return cnt;
}
int bw(int x, int y) {
  int cnt = 0;
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (board[x + i][y + j] != BW[i][j])
        cnt++;
    }
  }
  return cnt;
}
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
  int min_v = 99999;
	for (int i = 0; i < n; i++) {
    cin >> board[i];
	}
  for (int i = 0; i + 8 <= n; i++) {
    for (int j = 0; j + 8 <= m; j++) {
      int tmp;
      tmp = min(wb(i, j), bw(i, j));
      if (tmp < min_v) {
        min_v = tmp;
      }
    }
  }
  cout << min_v;
	return 0;
}