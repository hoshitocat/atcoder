// https://atcoder.jp/contests/abc311/tasks/abc311_d
#include<iostream>
#include<queue>
#include<set>

using namespace std;

int main()
{
  int N, M; cin >> N >> M;
  string grid[N];
  for (int i = 0; i < N; i++) {
    cin >> grid[i];
  }

  queue<pair<int, int>> q;
  q.push({1,1});

  set<pair<int, int>> seen;

  cout << q.front().first << endl;
  while (!q.empty()) {
    pair<int, int> p = q.pop();

    if (seen.find(p) != seen.end()) continue;
    seen.insert(p);

    for (int i = 0; i < 4; i++) {
    } 
  }
}
