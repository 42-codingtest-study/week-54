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
  int N, T;
  cin >> T;
  for (int i = 1; i <= T; i++) {
    cin >> N;
    cout << "Case #" << i << ": ";
    if (N <= 25)
      cout << "World Finals\n";
    else if (N <= 1000)
      cout << "Round 3\n";
    else if (N <= 4500)
      cout << "Round 2\n";
    else
      cout << "Round 1\n";
  }
}
