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
  int M, H, N, C, B, a = 0;
  cin >> M >> H >> N;
  while (N--) {
    cin >> C >> B;
    a += max(C * M, B * H);
  }
  cout << a;
}
