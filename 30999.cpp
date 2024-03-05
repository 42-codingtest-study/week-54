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
  int N, M, a = 0;
  string s;
  cin >> N >> M;
  while (N--) {
    cin >> s;
    int tmp = 0;
    for (int i = 0; i < M; i++)
      if (s[i] == 'O') tmp++;
    a = M / 2 < tmp ? a + 1 : a;
  }
  cout << a;
}
