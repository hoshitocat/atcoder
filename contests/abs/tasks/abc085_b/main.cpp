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

  if (N == 1) {
    cout << 1 << endl;
    return 0;
  }

  int layers = 1;
  for (int i = 1; i < N; i++) {
    if (vec.at(i-1) == vec.at(i)) continue;
    layers++;
  }

  cout << layers << endl;
}
