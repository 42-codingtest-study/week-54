#include <algorithm>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(0), cout.tie(0)
#define ll long long

int main() {
  fast;
  int N;
  double a, b, x;
  cin >> N;
  while (N--) {
    cin >> a >> b;
    x = a / b * 60;
    cout << x * (a - 1) / a << " " << x << " " << x * (a + 1) / a << "\n";
  }
}
