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
  int N;
  double x, y, r, s;
  string str;
  cin >> N;
  cin >> x >> y;
  for (int i = 0; i < N - 1; i++) {
    cin >> str;
    cin >> r;
    s = r / sqrt(2);
    if (str == "N")
      y += r;
    else if (str == "NE")
      x += s, y += s;
    else if (str == "E")
      x += r;
    else if (str == "SE")
      x += s, y -= s;
    else if (str == "S")
      y -= r;
    else if (str == "SW")
      x -= s, y -= s;
    else if (str == "W")
      x -= r;
    else if (str == "NW")
      x -= s, y += s;
  }
  cout.precision(7);
  cout << fixed << x << " " << y << "\n";
}
