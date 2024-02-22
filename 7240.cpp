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
  int N, S, a = 0, x;
  cin >> N >> S;
  while (N--) {
    cin >> x;
    a += x;
    if (N == 0) {
      cout << a;
      break;
    }
    if (a > S) a--;
  }
}
