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
  int C, n;
  cin >> C;
  while (C--) {
    cin >> n;
    cout << n << " ";
    int a = 0;
    for (int i = 1; i <= n; i++)
      if (n % i == 0) a++;
    cout << a << "\n";
  }
}
