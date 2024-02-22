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
  double p, r;
  cin >> p >> r;
  if (p / r < 0.2)
    cout << "weak";
  else if (p / r < 0.4)
    cout << "normal";
  else if (p / r < 0.6)
    cout << "strong";
  else
    cout << "very strong";
}
