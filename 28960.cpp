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
  int h, l, a, b;
  cin >> h >> l >> a >> b;
  cout << ((a <= l && b <= h * 2) || (a <= h * 2 && b <= l) ? "YES" : "NO");
}
