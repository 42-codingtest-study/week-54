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

int main() {
  fast;
  int N, X, prev, curr, answer = 2147483647;
  cin >> N >> X;
  cin >> prev;
  N--;
  while (N--) {
    cin >> curr;
    answer = min(answer, prev * X + curr * X);
    prev = curr;
  }
  cout << answer;
}
