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
  int H1, M1, H2, M2;
  while (true) {
    cin >> H1 >> M1 >> H2 >> M2;
    if (H1 == 0 && M1 == 0 && H2 == 0 && M2 == 0) break;
    int start = H1 * 60 + M1;
    int end = H2 * 60 + M2;
    int sleepTime;
    sleepTime = end >= start ? end - start : (24 * 60 - start) + end;
    cout << sleepTime << '\n';
  }
}
