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
  int N, K, s = 0, a = 0, A, B;
  cin >> N >> K;
  while (N--) {
    cin >> A >> B;
    s += A - B;
    if (s > K) a = max(a, s - K);
  }
  cout << a;
}
