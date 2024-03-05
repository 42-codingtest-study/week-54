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
  int N;
  string s;
  cin >> N;
  cin.ignore();
  while (N--) {
    getline(cin, s);
    for (int i = s.size() - 1; i >= 0; i--) cout << s[i];
    cout << "\n";
  }
}
