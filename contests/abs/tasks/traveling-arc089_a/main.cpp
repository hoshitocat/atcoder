#include<iostream>

using namespace std;

int main()
{
  int N;
  cin >> N;

  int inputs[N][3];
  for (int i = 0; i < N; i++) {
    int t, x, y;
    cin >> t >> x >> y;
    inputs[i][0] = t;
    inputs[i][1] = x;
    inputs[i][2] = y;
  }

  int cur = 0;
  int now = 0;
  int flag = true;
  for (int i = 0; i < N; i++) {
    int t = inputs[i][0];
    int dst = inputs[i][1] + inputs[i][2];

    int remain = t - now;
    int distance = abs(dst - cur);

    if (remain < distance) {
        flag = false;
        break;
    }

    if ((remain % 2 == 0 && distance % 2 == 0) || (remain % 2 == 1 && distance % 2 == 1)) {
        cur = dst;
        now = t;
    } else {
        flag = false;
        break;
    }
  }

  if (flag) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
