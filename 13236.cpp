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
  int N;
  cin >> N;
  while (N != 1) {
    cout << N << " ";
    if (N % 2 == 0)
      N /= 2;
    else
      N = N * 3 + 1;
  }
  cout << N;
}
