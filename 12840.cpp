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

int toSeconds(int h, int m, int s) { return h * 3600 + m * 60 + s; }

void toHMS(int seconds, int &h, int &m, int &s) {
  h = seconds / 3600;
  seconds %= 3600;
  m = seconds / 60;
  s = seconds % 60;
}

int main() {
  fast;
  int h, m, s, q;
  cin >> h >> m >> s >> q;
  int currentTime = toSeconds(h, m, s);

  for (int i = 0; i < q; i++) {
    int T, c;
    cin >> T;
    switch (T) {
      case 1:
        cin >> c;
        currentTime = (currentTime + c) % 86400;
        if (currentTime < 0) currentTime += 86400;
        break;
      case 2:
        cin >> c;
        currentTime = (currentTime - c) % 86400;
        if (currentTime < 0) currentTime += 86400;
        break;
      case 3:
        toHMS(currentTime, h, m, s);
        cout << h << " " << m << " " << s << "\n";
        break;
    }
  }

  return 0;
}
