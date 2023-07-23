#include<iostream>
#include<vector>
#include<map>

using namespace std;

map<int, int> mp;
int check(int a, vector<bool> &checks)
{
  if (checks[a]) return a;
  checks[a] = true;
  return check(mp[a], checks);
}

int main()
{
  int n, t; cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> t;
    mp[i] = t-1;
  }

  vector<bool> vec(n);
  int cnt = 1;
  int start = check(0, vec);
  int p = start;
  while (mp[p] != start) {
    cnt++;
    p = mp[p];
  }

  cout << cnt << endl;
  for (int i = 0; i < cnt; i++) {
    cout << mp[start]+1 << " ";
    start = mp[start];
  }
  cout << endl;
}
