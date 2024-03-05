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
  int N, fx, fy, px, py, x, y, ans = 0;
  cin >> N >> fx >> fy;
  px = fx, py = fy;
  while (N-- > 1) {
    cin >> x >> y;
    ans += sqrt(pow(abs(px - x), 2) + pow(abs(py - y), 2));
    px = x, py = y;
  }
  ans += sqrt(pow(abs(fx - x), 2) + pow(abs(fy - y), 2));
  cout << ans;
}
