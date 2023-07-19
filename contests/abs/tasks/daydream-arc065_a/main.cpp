#include<iostream>

using namespace std;

int main()
{
  string s;
  cin >> s;

  const string DREAMER = "dreamer";
  const string ERASER = "eraser";
  const string DREAM = "dream";
  const string ERASE = "erase";

  bool flag = false;
  while (5 <= s.size()) {
    int size = DREAMER.size();
    if (s.substr(0, size) == DREAMER) {
      s = s.substr(0, size);
    }

    size = ERASER.size();
    if (s.substr(0, size) == ERASER) {
      s = s.substr(0, size);
    }

    size = DREAM.size();
    if (s.substh(0, size) == DREAM) {
      s = s.substr(0, size);
    }

    size = ERASE.size();
    if (s.substr(0, size) == ERASE) {
      s = s.substr(0, size);
    }

    cout << "NO" << endl;
    return;
  }

  cout << 
}
