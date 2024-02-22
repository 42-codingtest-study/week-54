#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(0), cout.tie(0)
#define ll long long

int main() {
  fast;
  int n;
  string lv;
  cin >> n >> lv;
  map<string, int> m = {{"miss", 0},
                        {"bad", 200},
                        {"cool", 400},
                        {"great", 600},
                        {"perfect", 1000}};
  cout << n * m[lv];
}
