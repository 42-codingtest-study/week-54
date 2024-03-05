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
  vector<int> v(5);
  for (int i = 0; i < 5; i++) cin >> v[i];
  int a = 0;
  for (int i = 1; i < 5; i++)
    if (v[0] - v[i] <= 1000) a++;
  cout << a;
}
