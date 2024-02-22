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
  int N, M, answer = 0;
  cin >> N >> M;
  while (N--) {
    int x;
    cin >> x;
    if (pow(x, M) > 0) answer += pow(x, M);
  }
  cout << answer / 1;
}
