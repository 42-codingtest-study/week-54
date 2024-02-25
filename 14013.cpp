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
  double x, y, z;
  int N;
  char unit;
  cin >> x >> y;
  cin >> N;
  double conversionRate = y / x;
  for (int i = 0; i < N; i++) {
    cin >> z >> unit;
    if (unit == 'A')
      cout << fixed << setprecision(9) << z * conversionRate << "\n";
    else if (unit == 'B')
      cout << fixed << setprecision(9) << z / conversionRate << "\n";
  }
}
