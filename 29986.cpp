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
  int N, H, A, a = 0;
  cin >> N >> H;
  while (N--) {
    cin >> A;
    if (A <= H) a++;
  }
  cout << a;
}
