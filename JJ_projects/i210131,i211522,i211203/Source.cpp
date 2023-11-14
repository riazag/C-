#include <iostream>
#include"Header.h"
using namespace std;
#define ROWS 20
#define COLS 20
// Map entities
#define SAFE 'C'
#define OBSTACLE '#'
#define JEWEL 'J'
#define POTION 'P'
#define WEAPON 'W'
#define DEATH_POINT '%'
#define DRAGON '&'
#define GOBLIN '$'
#define WEREWOLF '@'
#define CRYSTAL '*'
struct Node2
{
    int row, col;
};

int Dijkstra_Algorithm(char map[ROWS][COLS], Node2 start, Node2 end, int& accumulatedScore)
{
    int dist[ROWS][COLS];
    int score[ROWS][COLS];
    bool visited[ROWS][COLS];

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            dist[i][j] = INT_MAX;
            score[i][j] = 0;
            visited[i][j] = false;
        }
    }
    dist[start.row][start.col] = 0;
    score[start.row][start.col] = 0;

    while (true) {
        Node2 current;
        int minDist = INT_MAX;
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                if (!visited[i][j] && dist[i][j] < minDist) {
                    minDist = dist[i][j];
                    current.row = i;
                    current.col = j;
                }
            }
        }

        if (current.row == end.row && current.col == end.col) {
            accumulatedScore = score[end.row][end.col];
            return dist[end.row][end.col];
        }

        visited[current.row][current.col] = true;
        int dr[] = { -1, 1, 0, 0 };
        int dc[] = { 0, 0, -1, 1 };

        for (int i = 0; i < 4; i++) {
            int newRow = current.row + dr[i];
            int newCol = current.col + dc[i];
            if (newRow >= 0 && newRow < ROWS && newCol >= 0 && newCol < COLS) {
                if (map[newRow][newCol] != OBSTACLE && !visited[newRow][newCol]) {
                    int weight = 1;
                    int entityScore = 0;

                    if (map[newRow][newCol] == JEWEL) {
                        weight = 50;
                        entityScore = 10;
                    }
                    else if (map[newRow][newCol] == POTION) {
                        weight = 30;
                        entityScore = 5;
                    }
                    else if (map[newRow][newCol] == WEAPON) {
                        weight = 70;
                        entityScore = 15;
                    }
                    else if (map[newRow][newCol] == DRAGON || map[newRow][newCol] == GOBLIN || map[newRow][newCol] == WEREWOLF) {
                        weight = 0;
                        entityScore = -50;
                    }
                    else {
                        // Update score for moving to a safe cell
                        entityScore = 0;
                    }

                    if (dist[current.row][current.col] + weight < dist[newRow][newCol]) {
                        dist[newRow][newCol] = dist[current.row][current.col] + weight;
                        score[newRow][newCol] = score[current.row][current.col] + entityScore;
                    }
                }
            }

        }
    }

    
    return -1;
}

int main()
{

    int ch;
    char map[ROWS][COLS] = {
    {'C', '#', 'C', '#', 'C', 'C', 'C', 'C', 'J', '#', 'C', 'C', 'C', 'C', 'C ', '% ','C', 'C ','C', 'C'},
    { 'C', 'C', ' & ', 'C', 'C', 'C', '%' , 'C', 'C', 'C', 'C', 'C', 'J', '#', 'W', 'C', 'C', 'C', 'C', 'C' },
    {'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C'},
    {'C','#', 'C', 'C', 'C', 'C', 'W', 'C', 'C','#', 'C', 'C', 'C', 'C', 'C','#', 'C', 'C', 'C', 'C'},
    {'%','#', 'P', 'C', 'C', 'C','#', 'C', 'C','#','J', 'C', 'C', 'C', 'C', '$','%', '@', 'C','&'},
    {'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C','#','#', 'C', 'C', 'C', 'C', 'C', 'C', 'C'},
    {'C','J', 'C', 'C', 'C', 'C', 'C', 'C','#', 'C', 'C','#', 'C', '$','%', 'C','#', 'C', 'C', 'C'},
    {'C', 'C','#', 'C', 'C', 'C', 'C','J', 'C', 'W','#', 'C', 'C', 'W', 'C','#', 'C', 'C','#', 'C'},
    {'C','J', 'C', 'C', 'C', 'C', 'P', 'C','#', '&', '$', 'W', 'C', '%', 'C', 'C', 'C', 'C', 'C', 'C'},
    { '%', 'C', '&', 'C','#','#', 'C', 'C', 'C', '%', 'C', 'C', 'C','#','#', 'C','J', 'C', 'C', 'C'},
    {'C', 'C', 'C', 'C', '$', 'C','#', 'C', 'C', 'C', 'C', 'C','%', 'C','#', 'C', 'C', 'C', '@', 'C'},
    {'C', 'C','%', 'C', 'C', 'C', 'C', 'C', 'C','#', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C'},
    {'C', '$','&', 'P','J', 'C', 'C', 'C', 'C', 'C', 'C', 'C','#', 'C','&', '$', 'C','%', 'C', '@'},
    {'C', 'C', 'C', 'C', 'C', 'C','#', 'W', 'C','#', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', '$'},
    {'C','#', 'C', 'C', '@', 'C','#', 'C', 'C', 'C','#', 'C', 'C','#', 'C', 'C', 'C', 'C', 'C', 'C'},
    {'C', '%', 'P','#', 'C','#', 'C', 'C', 'C', 'C', 'C', 'C','#', 'P', 'C', 'C','J','J', 'C','#'},
    {'C', 'C', 'C', 'C', 'C', 'C', 'P', 'C', 'C', 'C', 'C', 'C', 'C','#', 'C', 'C', 'W','#', 'C', 'C' },
    {'C', 'C', 'C',' *' ,'C', 'C', 'C', 'C', 'C', '$', 'C', 'C', 'P','#', 'C', 'C','#', 'C','%', 'C'},
    {'C','#','#', 'C', 'C', 'C', 'C', 'C','#', 'C', 'C', 'C', 'C','#', 'C', 'C','#', '@','#', '%'},
    {'#', 'C', 'C', 'C', 'C', 'C', 'C', 'C','#', 'C', 'C', 'C', 'C', 'C', '@', 'C', 'C', 'P', 'C', '%'}
    };
    Node* root = NULL;

    cout << "1. Display Map" << endl;
    cout << "2. ID for player" << endl;
    cout << "3. Shortest Distance to Crystal" << endl;
    cout << "4. Floyd's Algorithm\n";
    cout << "Enter choice \n";
    cin >> ch;
    switch (ch)
    {
        cout << "****************************************************************************Choose options***************************************************************************************" << endl;
    case 1:
    {cout << "Print map \n";
    cout << "---------------------MAP------------------------" << endl;

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++) {
            cout << map[i][j] << " ";
        }
        cout << endl;
    }
    }
    case 2:
    {
        cout << "Id for player" << endl;

        printTree(root);
    }
    case 3:
    {

        Node2 start = { 0, 0 };
        Node2 crystal = { 3, 17 }; //3 col and 17 row
        int accumulatedScore;
        int distance = Dijkstra_Algorithm(map, start, crystal, accumulatedScore);

        if (accumulatedScore != -1)
        {
            cout << "Shortest distance to the destination: " << distance << endl;
            cout << "Total Score: " << accumulatedScore << endl;
        }
        else
        {
            cout << "No valid path found from start to crystal." << endl;
        }
    }
    case 4:
        /*
          const int N = 20;
          int adjMat[N * N][N * N];

          for (int i = 0; i < N * N; i++) {
              for (int j = 0; j < N * N; j++) {
                  if (i == j) {
                      adjMat[i][j] = 0;
                  }
                  else {
                      adjMat[i][j] = 100;
                  }
              }
          }


          // -------------------------Adj Matric Code-------------------

          for (int i = 0; i < N; i++) {
              for (int j = 0; j < N; j++) {
                  int u = i * N + j;
                  if (map[i][j] != '#') {
                      if (i > 0 && map[i - 1][j] != '#') {

                          int v = (i - 1) * N + j;
                          adjMat[u][v] = 1;
                          adjMat[v][u] = 1;
                      }
                      if (j > 0 && map[i][j - 1] != '#') {

                          int v = i * N + (j - 1);
                          adjMat[u][v] = 1;
                          adjMat[v][u] = 1;
                      }
                      if (i < N - 1 && map[i + 1][j] != '#') {

                          int v = (i + 1) * N + j;
                          adjMat[u][v] = 1;
                          adjMat[v][u] = 1;
                      }
                      if (j < N - 1 && map[i][j + 1] != '#') {
                          int v = i * N + (j + 1);
                          adjMat[u][v] = 1;
                          adjMat[v][u] = 1;
                      }
                  }
              }

          }

          cout << "\n-----------------------------Adj Matrix-----------------------------\n" << endl;

          for (int i = 0; i < N; i++) {
              for (int j = 0; j < N; j++) {
                  //cout<<adjMat[i][j]<<" ";
                  std::cout << std::setw(3) << adjMat[i][j] << " ";
              }
              cout << endl;
          }

          FloyedAlgorithm(adjMat, 20*20);
      */
        return 0;

    }
}