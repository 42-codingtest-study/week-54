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
  char d[4] = {'N', 'E', 'S', 'W'};
  int idx = 0, t = 10, i;
  while (t--) {
    cin >> i;
    if (i == 1)
      idx++;
    else if (i == 2)
      idx += 2;
    else
      idx--;
    if (idx > 3)
      idx -= 4;
    else if (idx < 0)
      idx += 4;
  }
  cout << d[idx];
}
