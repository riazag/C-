#include <iostream>
#include <queue>
#include <climits>

using namespace std;

const int MAX_N = 30;
const int MAX_M = 30;
const int INF = INT_MAX;

char grid[MAX_N][MAX_M];
int dist[MAX_N][MAX_M];

int main()
{
    int T;
    cin >> T;

    for (int t = 1; t <= T; t++)
    {
        int N, M;
        cin >> N >> M;

        int startX, startY, endX, endY;

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                cin >> grid[i][j];
                dist[i][j] = INF;

                if (grid[i][j] == 'T')
                {
                    startX = i;
                    startY = j;
                }
                else if (grid[i][j] == 'C')
                {
                    endX = i;
                    endY = j;
                }
            }
        }

        int dx[] = {1, -1, 0, 0};
        int dy[] = {0, 0, 1, -1};

        queue<pair<int, int>> q;
        q.push({startX, startY});
        dist[startX][startY] = 0;

        while (!q.empty())
        {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            if (x == endX && y == endY)
            {
                cout << "Case #" << t << ": " << dist[endX][endY] << endl;
                break;
            }

            for (int d = 0; d < 4; d++)
            {
                int nx = x + dx[d];
                int ny = y + dy[d];

                if (nx >= 0 && nx < N && ny >= 0 && ny < M && grid[nx][ny] != 'X' && dist[nx][ny] == INF)
                {
                    dist[nx][ny] = dist[x][y] + 1;
                    q.push({nx, ny});
                }
            }
        }
    }

    return 0;
}
