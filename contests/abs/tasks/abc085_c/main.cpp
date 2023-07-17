#include<iostream>
#include<vector>

using namespace std;

int main()
{
  int N = 0;
  int Y = 0;
  cin >> N >> Y;

  const int x = 10000;
  const int y = 5000;
  const int z = 1000;

  for (int xn = 0; xn <= N; xn++) {
    for (int yn = 0; yn <= N-xn; yn++) {
      int zn = (N - xn - yn);
      int sum = x*xn + y*yn + z*zn;
      if (sum == Y) {
        cout << xn << " " << yn << " " << zn << endl;
        return 0;
      }
    }
  }

  cout << -1 << " " << -1 << " " << -1 << endl;
}
