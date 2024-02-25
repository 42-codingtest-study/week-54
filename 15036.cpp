#include <algorithm>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(0), cout.tie(0)
#define ll long long

int main() {
  fast;
  double length = 0;
  int n, a;
  for (cin >> n; n--;) {
    cin >> a;
    length += a == 0 ? 2 : (1 / (double)a);
  }
  cout << fixed << setprecision(6) << length << endl;
}
