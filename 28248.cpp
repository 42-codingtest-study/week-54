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
  int P, C;
  cin >> P >> C;
  int answer = (P > C) ? 500 : 0;
  answer += P * 50 - C * 10;
  cout << answer;
}
