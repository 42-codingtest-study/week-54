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
  int X, N, a = 0, p;
  cin >> X >> N;
  while (N--) {
    cin >> p;
    a += X - p;
  }
  cout << a + X;
}
