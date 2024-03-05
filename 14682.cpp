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
  int N, k, ans = 0;
  cin >> N >> k;
  for (int i = 0; i <= k; i++) {
    ans += N * pow(10, i);
  }
  cout << ans;
}
