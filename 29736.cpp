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
  int A, B, K, X, a = 0;
  cin >> A >> B >> K >> X;
  for (int i = K - X; i <= K + X; i++)
    if (i >= A && i <= B) a++;
  if (a != 0)
    cout << a;
  else
    cout << "IMPOSSIBLE";
}
