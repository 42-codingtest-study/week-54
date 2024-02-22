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
  int H, W, in = 0, out = 0;
  cin >> H >> W;
  while (H--) {
    string s;
    cin >> s;
    for (int i = 0; i < W; i++) {
      if (s[i] == '0')
        out++;
      else
        in++;
    }
  }
  cout << min(in, out);
}
