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
  string s;
  cin >> s;
  vector<string> v;
  for (int i = 0; i < s.size(); i++) v.push_back(s.substr(i, s.size() - i));
  sort(v.begin(), v.end());
  for (auto &st : v) cout << st << "\n";
}
