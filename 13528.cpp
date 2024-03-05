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
  int L;
  double C, w, l, a = 0;
  cin >> C >> L;
  while (L--) {
    cin >> w >> l;
    a += w * l * C;
  }
  cout << fixed << a;
}
