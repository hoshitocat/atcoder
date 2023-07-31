#include<iostream>

using namespace std;

int main()
{
  int X, Y, N; cin >> X >> Y >> N;

  int grid[X][Y];
  for (int x = 0; x < X; x++) {
    for (int y = 0; y < Y; y++) {
      grid[x][y] = 0;
    }
  }

  for (int x = 0; x < X; x++) {
    for (int y = 0; y < Y; y++) {
      cout << grid[x][y] << endl;
    }
  }
}
