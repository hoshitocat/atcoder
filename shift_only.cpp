#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<int> vec(n); 
  for (int i = 0; i < n; i++) {
    cin >> vec.at(i);
  }

  bool oddFlag = false;
  int cnt = 0;
  while (true) {
    for (int i = 0; i < n; i++) {
      if (vec.at(i) % 2 == 0) {
        vec.at(i) = vec.at(i) / 2;
      } else {
        oddFlag = true;
        break;
      }
    }

    if (!oddFlag) {
      cnt++;
    } else {
      break;
    }
  }

  cout << cnt << "\n";

  return 0;
}
