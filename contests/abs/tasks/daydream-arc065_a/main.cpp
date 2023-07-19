#include<iostream>

using namespace std;

int main()
{
  string str;
  cin >> str;

  string words[4] = {"dreamer", "eraser", "dream", "erase"};

  bool flag = false;
  while (5 <= str.size()) {
    flag = false;
    for (int i = 0; i < 4; i++) {
      string s = words[i];
      if (str.substr(0, s.size()) == s) {
        str = str.substr(s.size(), str.size());
        flag = true;
        break;
      }
    }

    if (!flag) {
      break;
    }
  }

  if (flag) {
    cout <<  "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
