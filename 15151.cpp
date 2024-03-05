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
  int x, y, sum = 0, ans = 0;
  cin >> x >> y;
  while (1) {
    sum += x;
    if (sum > y) break;
    ans++, x *= 2;
  }
  cout << ans;
}
