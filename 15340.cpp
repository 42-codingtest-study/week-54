#include <algorithm>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(0), cout.tie(0)
#define ll long long

int main() {
  fast;
  int c, d;
  while (1) {
    cin >> c >> d;
    if (c == 0 && d == 0) break;
    vector<int> v = {c * 30 + d * 40, c * 35 + d * 30, c * 40 + d * 20};
    sort(v.begin(), v.end());
    cout << v[0] << "\n";
  }
}
