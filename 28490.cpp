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
  int n, h, w, a = 0;
  cin >> n;
  while (n--) {
    cin >> h >> w;
    a = max(a, h * w);
  }
  cout << a;
}
