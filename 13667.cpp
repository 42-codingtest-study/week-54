#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(0), cout.tie(0)
#define ll long long

char determineAnswer(const vector<int>& marks) {
  int countBlack = 0;
  char answer = ' ';

  for (int i = 0; i < 5; ++i) {
    if (marks[i] <= 127) {
      if (countBlack == 0)
        answer = 'A' + i;
      else
        return '*';
      ++countBlack;
    }
  }
  return (countBlack == 1) ? answer : '*';
}

int main() {
  fast;
  int N;
  while (cin >> N && N != 0) {
    for (int i = 0; i < N; ++i) {
      vector<int> marks(5);
      for (int j = 0; j < 5; ++j) cin >> marks[j];
      cout << determineAnswer(marks) << '\n';
    }
  }
  return 0;
}
