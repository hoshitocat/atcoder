#include <iostream>
#include <vector>
#define mod 998244353

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
  for (int c=-m+1; c <= n-1; c++) {
    for (int j=m-1; j >= 0; j--) {
      dp[j] += dp[j+1];
      dp[j] %= mod;
    }
    // WIP
  }
}
