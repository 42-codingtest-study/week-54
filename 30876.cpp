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
  int N, x, y, a[2] = {0, 2147483647};
  cin >> N;
  while (N--) {
    cin >> x >> y;
    if (a[1] > y) a[0] = x, a[1] = y;
  }
  cout << a[0] << " " << a[1];
}
