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
  int N, p, answer = 0;
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> p;
    answer += p;
  }
  cout << answer;
}
