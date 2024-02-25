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
  int N, angle, sum;
  cin >> N;
  while (N--) {
    sum = 0;
    for (int i = 0; i < 3; i++) {
      cin >> angle;
      cout << angle << " ";
      sum += angle;
    }
    cout << (sum == 180 ? "Seems OK\n" : "Check\n");
  }
}
