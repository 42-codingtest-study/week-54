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
  int N, U, L;
  cin >> N >> U >> L;
  if (N >= 1000 && (U >= 8000 || L >= 260))
    cout << "Very Good";
  else if (N >= 1000)
    cout << "Good";
  else
    cout << "Bad";
}
