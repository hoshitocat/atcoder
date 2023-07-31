// https://atcoder.jp/contests/abc311/tasks/abc311_d
#include<iostream>
#include<queue>
#include<set>

using namespace std;

int main()
{
  // left, right, down, up
  vector<pair<int, int>> moves {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
  int N, M; cin >> N >> M;
  string grid[N];
  for (int i = 0; i < N; i++) {
    cin >> grid[i];
  }

  queue<pair<int, int>> q;
  q.push({1,1});

  set<pair<int, int>> seen;

  while (!q.empty()) {
    pair<int, int> p = q.front();
    q.pop();

    if (seen.find(p) != seen.end()) {
      continue;
    }
    seen.insert(p);

    for (int i = 0; i < 4; i++) {
      pair<int, int> move = moves[i];
      pair<int, int> start = p;
      while (grid[start.first][start.second] != '#') {
        grid[start.first][start.second] = '1';
        start.first += move.first;
        start.second += move.second;
      }
      start.first -= move.first;
      start.second -= move.second;
      q.push(start);
    } 
  }

  int result = 0;
  for (string x : grid) {
    for (char y : x) {
      if (y == '1') {
        result += 1;
      }
    }
  }

  cout << result << endl;
  return 0;
}
