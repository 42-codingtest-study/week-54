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
  int N, M, K;
  while (1) {
    cin >> N >> M >> K;
    if (N + M + K == 0) break;
    if (N - K >= (N + 1) / 2)
      cout << N - K - (N + 1) / 2 + 1 << "\n";
    else
      cout << "-1\n";
  }
}
