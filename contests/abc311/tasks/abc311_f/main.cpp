#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int N, M; cin >> N >> M;
  vector<string> s(N);
  for (auto &ss : s) {
    cin >> ss;
  }

  for (int n = 0; n < N; n++) {
    for (int m = 0; m < M; m++) {
      if (s[n][m] == '#') {
        if (n+1 < N)
          s[n+1][m] = '#';
        if (n+1 < N && m+1 < M)
          s[n+1][m+1] = '#';
      }
    }
  }

  vector<long long> dp(m+1, 0);
  dp[m] = 1;
  // TODO
}
