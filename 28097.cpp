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
  int N, h = 0, t;
  cin >> N;
  while (N--) {
    cin >> t;
    h += t;
    if (N) h += 8;
  }
  cout << h / 24 << " " << h % 24;
}
