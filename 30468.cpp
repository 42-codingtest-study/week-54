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
  int S, D, I, L, N, A;
  cin >> S >> D >> I >> L >> N;
  A = S + D + I + L;
  N *= 4;
  for (int i = 0;; i++) {
    if (A >= N) {
      cout << i;
      return 0;
    }
    A += 1;
  }
}
