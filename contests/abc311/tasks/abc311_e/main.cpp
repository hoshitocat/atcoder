#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
  const int max = 3001;
  static int dp[max][max];
  static int hole[max][max];

  int X, Y, N; cin >> X >> Y >> N;
  for (int n = 0; n < N; n++) {
    int x, y;
    cin >> x >> y;
    hole[x][y] = 1;
  }

  long cnt = 0;
  for (int i = 1; i <= X; i++) {
    for (int j = 1; j <= Y; j++) {
      if (hole[i][j])
        continue;
      dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]})+1;
      cnt += dp[i][j];
    }
  }

  cout << cnt << endl;
}
