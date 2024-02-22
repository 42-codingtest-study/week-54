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
  int n, t, l, a = 2147483647;
  cin >> n;
  while (n--) {
    cin >> t >> l;
    a = min(a, t + l);
  }
  cout << a;
}
