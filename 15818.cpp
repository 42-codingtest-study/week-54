#include <algorithm>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(0), cout.tie(0)
#define ll long long

int main() {
  fast;
  int N, M;
  cin >> N >> M;
  vector<int> v(N);
  for (int i = 0; i < N; i++) cin >> v[i];
  ll ans = 1;
  for (int i = 0; i < N; i++) {
    ans *= v[i] % M;
    ans %= M;
  }
  cout << ans;
}
