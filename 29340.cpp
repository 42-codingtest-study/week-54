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
  string a, b;
  cin >> a >> b;
  for (int i = 0; i < a.size(); i++) {
    if (a[i] < b[i])
      cout << b[i];
    else
      cout << a[i];
  }
}
