#include<iostream>

using namespace std;

string words[4] = {"dreamer", "eraser", "dream", "erase"};

bool find(string* str)
{
  if (str->size() == 0) {
    return true;
  }

  if (str->size() < 5) {
    return false;
  }

  for (int i = 0; i < 4; i++) {
    string s = words[i];
    if (str->substr(0, s.size()) == s) {
      string remain = str->substr(s.size(), str->size());
      if (find(&remain)) {
        return true;
      }
    }
  }

  return false;
}

int main()
{
  string str;
  cin >> str;

  bool flag = find(&str);

  if (flag) {
    cout <<  "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
