#include<iostream>
#include<regex>

using namespace std;

const int words_length = 4;
const string words[words_length] = {"eraser", "erase", "dreamer", "dream"};

int main()
{
  string str;
  cin >> str;

  for (int i = 0; i < words_length; i++) {
    string w = words[i];
    str = regex_replace(str, regex(w), "");
  }

  if (str.size() == 0) {
    cout <<  "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
