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
  vector<int> v(10, 0);
  for (int i = 0; i < 5; i++) {
    int n;
    cin >> n;
    v[n]++;
  }
  for (int i = 0; i < 10; i++) {
    if (v[i] % 2) {
      cout << i;
      break;
    }
  }
}
