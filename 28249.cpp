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
  map<string, int> m = {{"Poblano", 1500},  {"Mirasol", 6000},
                        {"Serrano", 15500}, {"Cayenne", 40000},
                        {"Thai", 75000},    {"Habanero", 125000}};
  int N, answer = 0;
  string s;
  cin >> N;
  while (N--) {
    cin >> s;
    answer += m[s];
  }
  cout << answer;
}
