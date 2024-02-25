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
  int a, d, k;
  cin >> a >> d >> k;
  if ((k - a) % d == 0 && (k - a) / d >= 0)
    cout << (k - a) / d + 1;
  else
    cout << "X";
}
