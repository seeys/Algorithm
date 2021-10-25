#include <bits/stdc++.h>
using namespace std;

int tomato[102][102][102];
int not_tomato[102][102][102];
typedef struct {
    int x, y, z;
    int cnt;
}types;
queue<types> q;
int n, m, h;
int dx[6] = { 1,-1,0,0,0,0 };
int dy[6] = { 0,0,1,-1,0,0 };
int dz[6] = { 0,0,0,0,1,-1 };

void bfs(void)
{
    while (!q.empty()) {
        auto c = q.front();
        q.pop();
        for (int d = 0; d < 6; d++) {
            int nx = c.x + dx[d];
            int ny = c.y + dy[d];
            int nz = c.z + dz[d];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m || nz < 0 || nz >= h)
                continue;
            if (not_tomato[nx][ny][nz] >= 0)
                continue;
            not_tomato[nx][ny][nz] = not_tomato[c.x][c.y][c.z] + 1;
            q.push({ nx,ny,nz,c.cnt+1 });
        }
    }
}
void print_max(void)
{
    int day = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < h; k++) {
                if (not_tomato[i][j][k] == -1) {
                    cout << -1;
                    return;
                }
                day = max(day, not_tomato[i][j][k]);
            }
        }
    }
    cout << day;
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> m >> n >> h;
    for (int z = 0; z < h; z++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> tomato[i][j][z];
                if (tomato[i][j][z] == 1) //익은 토마토이면 푸시
                    q.push({ i,j,z,0 });
                else if (tomato[i][j][z] == 0) //익지 않은 토마토이면 -1
                    not_tomato[i][j][z] = -1;
            }
        }
    }
    bfs();
    print_max();
}