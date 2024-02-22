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

int func(int n) { return n >= 300 ? 1 : n >= 275 ? 2 : n >= 250 ? 3 : 4; }

int main() {
  fast;
  int n, l;
  cin >> n;
  while (n--) {
    cin >> l;
    cout << func(l) << " ";
  }
}
