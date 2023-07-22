#include<iostream>

using namespace std;

int main()
{
  int N, D;
  cin >> N >> D;

  char schedules[N][D];
  for (int i = 0; i < N; i++) {
    string schedule;
    cin >> schedule;
    for (int j = 0; j < D; j++) {
      schedules[i][j] = schedule[j];
    }
  }

  int max = 0;
  int cur = 0;
  for (int i = 0; i < D; i++) {
    bool flag = true;
    for (int j = 0; j < N; j++) {
      if (schedules[j][i] == 'x') {
        flag = false;
        cur = 0;
        break;
      }
    }
    if (flag) {
      cur++;
    }

    if (max < cur) {
      max = cur;
    }
  }

  cout << max << endl;
}
