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
  int N;
  map<char, int> m = {{'C', 0}, {'A', 0}, {'S', 0}, {'I', 0}};
  char c;
  cin >> N;
  while (N--) {
    cin >> c;
    m[c]++;
  }
  cin >> c;
  cout << m[c];
}
