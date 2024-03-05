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
  int N, K, G;
  cin >> N >> K;
  while (K--) {
    cin >> G;
    int P = G * 100 / N;
    if (P <= 4)
      cout << 1;
    else if (P <= 11)
      cout << 2;
    else if (P <= 23)
      cout << 3;
    else if (P <= 40)
      cout << 4;
    else if (P <= 60)
      cout << 5;
    else if (P <= 77)
      cout << 6;
    else if (P <= 89)
      cout << 7;
    else if (P <= 96)
      cout << 8;
    else
      cout << 9;
    cout << " ";
  }
}
