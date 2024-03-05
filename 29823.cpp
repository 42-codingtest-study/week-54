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
  string s;
  cin >> N >> s;
  int a[2] = {0, 0};
  for (int i = 0; i < N; i++) {
    if (s[i] == 'N')
      a[0]++;
    else if (s[i] == 'S')
      a[0]--;
    else if (s[i] == 'E')
      a[1]++;
    else
      a[1]--;
  }
  cout << abs(a[0]) + abs(a[1]);
}
