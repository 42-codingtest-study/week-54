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
  int T, N;
  cin >> T;
  while (T--) {
    cin >> N;
    if ((N + 1) % (N % 100) == 0)
      cout << "Good\n";
    else
      cout << "Bye\n";
  }
}
