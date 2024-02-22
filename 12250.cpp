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
  int T, A, B, K, answer;
  cin >> T;
  for (int i = 1; i <= T; i++) {
    cin >> A >> B >> K;
    answer = 0;
    for (int j = 0; j < A; j++) {
      for (int k = 0; k < B; k++) {
        if ((j & k) < K) answer++;
      }
    }
    cout << "Case #" << i << ": " << answer << "\n";
  }
}
