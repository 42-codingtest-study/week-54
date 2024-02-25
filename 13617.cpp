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
  int N, M, ans = 0, tmp, x;
  cin >> N >> M;
  while (N--) {
    tmp = 0;
    for (int i = 0; i < M; i++) {
      cin >> x;
      if (x > 0) tmp++;
    }
    if (tmp == M) ans++;
  }
  cout << ans;
}
