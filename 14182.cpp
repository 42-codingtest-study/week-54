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
  ll N;
  cout << fixed;
  cout.precision(0);
  while (cin >> N && N != 0) {
    if (N > 5000000)
      cout << N * 0.8 << "\n";
    else if (N > 1000000)
      cout << N * 0.9 << "\n";
    else
      cout << N << "\n";
  }
}
