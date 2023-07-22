#include<iostream>
#include<regex>

using namespace std;

int main()
{
  int N;
  string S;
  cin >> N >> S;

  int result = 0;
  bool A = false;
  bool B = false;
  bool C = false;
  for (int i = 0; i < N; i++) {
    char s = S[i];
    switch (s) {
      case 'A':
        A = true;
        break;
      case 'B':
        B = true;
        break;
      case 'C':
        C = true;
        break;
    }
    if (A && B && C) {
      cout << i+1 << endl;
      return 0;
    }
  }
}
