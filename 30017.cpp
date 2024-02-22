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
  int A, B;
  cin >> A >> B;
  cout << (A > B ? B * 2 + 1 : A * 2 - 1);
}
