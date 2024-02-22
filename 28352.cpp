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

ll factorial(ll n) { return n == 0 ? 1 : n * factorial(n - 1); }

int main() {
  fast;
  ll n;
  cin >> n;
  cout << factorial(n) / 7 / 24 / 60 / 60;
}
