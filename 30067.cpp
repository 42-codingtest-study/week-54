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
  int n, a = 0;
  for (int i = 0; i < 10; i++) {
    cin >> n;
    a += n;
  }
  cout << a / 2;
}
