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

  for (int n = 0; n < N; n++) {
    int x, y; cin >> x >> y;
    grid[x-1][y-1] = 1;
  }

  int count = 0;
  for (int x = 0; x < X; x++) {
    for (int y = 0; y < Y; y++) {
      if (grid[x][y] == 0)
        count++;
    }
  }


  for (int x = 0; x < X; x++) {
    for (int y = 0; y < Y; y++) {
      cout << grid[x][y] << endl;
    }
  }

  cout << count << endl;
  return 0;
}
