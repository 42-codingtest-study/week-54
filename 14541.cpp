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
  int N, s, t;
  while (cin >> N && N != -1) {
    int prev = 0, ans = 0;
    for (int i = 0; i < N; i++) {
      cin >> s >> t;
      ans += (t - prev) * s;
      prev = t;
    }
    cout << ans << " miles\n";
  }
}
