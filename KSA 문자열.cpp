#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(0), cout.tie(0)
#define ll long long

char ksa[3] = {'K', 'S', 'A'};

int isTrue(string s) {
  int ret = s.size();
  for (int i = 0; i < s.size(); i++) {
    if (i % 3 == 1 && s[i] != 'K') ret--;
    if (i % 3 == 2 && s[i] != 'S') ret--;
    if (i % 3 == 0 && s[i] != 'A') ret--;
  }
  return ret;
}

int main() {
  fast;
  string s;
  cin >> s;
  queue<pair<string, vector<int>>> q;
  q.push({s, {0, isTrue(s)}});
  while (!q.empty()) {
    string ns = q.front().first;
    vector<int> nc = q.front().second;
    if (isTrue(ns) == s.size()) {
      cout << nc[0];
      break;
    }
    for (int i = 0; i < s.size(); i++) {
      string tmp = ns;
      tmp.erase(i, 1);
      for (int j = 0; j < 3; j++) {
        if (nc[1] < isTrue(ksa[j] + tmp))
          q.push({ksa[j] + tmp, {nc[0] + 1, isTrue(ksa[j] + tmp)}});
        if (nc[1] < isTrue(tmp + ksa[j]))
          q.push({tmp + ksa[j], {nc[0] + 1, isTrue(tmp + ksa[j])}});
      }
    }
  }
}
