#include<iostream>

using namespace std;

int main()
{
  int N;
  cin >> N;
  int arr[N];
  bool visited[N];
  for (int i = 0; i < N; i++) {
    cin >> arr[i];
    visited[i] = false;
  }

  if (N == 2) {
    cout << 2 << endl;
    cout << arr[0] << " " << arr[1] << endl;
  }


  int loop_start = 0;
  int p = arr[0];
  while (1) {
    if (visited[p]) {
      loop_start = p;
      break;
    }

    visited[p] = true;
    p = arr[p-1];
  }

  string result = to_string(loop_start);
  int next = arr[loop_start-1];
  int count = 1;
  while (next != loop_start) {
    count++;
    result += " ";
    result += to_string(next);
    next = arr[next-1];
  }

  cout << count << endl;
  cout << result << endl;
}
