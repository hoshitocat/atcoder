#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<int> vec(N);
  for (int i = 0; i < N; i++) {
    cin >> vec.at(i);
  }

  sort(vec.begin(), vec.end(), greater<int>());

  int alice = 0;
  int bob = 0;
  for (int i = 0; i < vec.size(); i++) {
    if (i % 2 == 0) {
      alice += vec.at(i);
    } else {
      bob += vec.at(i);
    }
  }

  cout << alice - bob << endl;
}
