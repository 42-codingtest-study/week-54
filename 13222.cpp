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
  int N, W, H, L;
  cin >> N >> W >> H;
  while (N--) {
    cin >> L;
    if (L * L <= W * W + H * H)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}
