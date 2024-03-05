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
  vector<int> v(16);
  ll pw;
  int ans = 0;
  cin >> pw;
  for (int i = 15; i >= 0; i--) {
    v[i] = pw % 10;
    pw /= 10;
  }
  for (int i = 0; i < 16; i += 2) {
    v[i] *= 2;
    if (v[i] > 9) {
      string s = to_string(v[i]);
      int sum_s = 0;
      for (int i = 0; i < s.size(); i++) {
        sum_s += s[i] - '0';
      }
      v[i] = sum_s;
    }
  }
  for (int i = 0; i < 16; i++) ans += v[i];
  cout << (ans % 10 == 0 ? "DA" : "NE");
}
