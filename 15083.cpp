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
  vector<double> v(3);
  for (int i = 0; i < 3; i++) cin >> v[i];
  double a, b, c;
  cin >> a >> b >> c;
  if (b < c) swap(b, c);
  sort(v.begin(), v.end(), greater<double>());
  double x = (v[0] + v[1] + v[2]) * (a / 100);
  double y = v[0] * (b / 100) + v[1] * (c / 100);
  cout << fixed << setprecision(2);
  if (x > y)
    cout << "one " << x << "\n";
  else
    cout << "two " << y << "\n";
}
