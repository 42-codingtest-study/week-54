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
  int L, R, A;
  cin >> L >> R >> A;
  if (L == R) {
    cout << (L + A / 2) * 2;
  } else if (L < R) {
    if (R - L >= A)
      cout << (L + A) * 2;
    else
      cout << (R + (A - (R - L)) / 2) * 2;
  } else {
    if (L - R >= A)
      cout << (R + A) * 2;
    else
      cout << (L + (A - (L - R)) / 2) * 2;
  }
}
