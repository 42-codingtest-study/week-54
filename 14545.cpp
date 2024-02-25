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
  int P, l;
  cin >> P;
  while (P--) {
    cin >> l;
    int ans = 0;
    for (int i = 1; i <= l; i++) {
      ans += (l - i + 1) * (l - i + 1);
    }
    cout << ans << "\n";
  }
}
