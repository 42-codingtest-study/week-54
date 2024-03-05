#include <algorithm>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(0), cout.tie(0)
#define ll long long

int main() {
  fast;
  int P, K, N, sum;
  cin >> P;
  while (P--) {
    cin >> K >> N;
    sum = 0;
    for (int i = 1; i <= N; i++) sum += i;
    cout << K << " " << sum + N << "\n";
  }
}
