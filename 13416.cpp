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
  int T, N;
  cin >> T;
  while (T--) {
    cin >> N;
    int a = 0, m, tmp = 0;
    while (N--) {
      m = 0;
      for (int i = 0; i < 3; i++) {
        cin >> tmp;
        m = max(m, tmp);
      }
      a += m;
    }
    cout << a << "\n";
  }
}
