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
  int y, m, d;
  char a, b;
  cin >> y >> a >> m >> b >> d;
  cout << (y < 2023 || (y == 2023 && m < 9) || (y == 2023 && m <= 9 && d <= 16)
               ? "GOOD"
               : "TOO LATE");
  return 0;
}
