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
  int N, W, H, a = 0;
  cin >> N;
  while (N--) {
    cin >> W >> H;
    a += W == 154 ? 50000 : W == 148 ? 10000 : W == 142 ? 5000 : 1000;
  }
  cout << a;
}
