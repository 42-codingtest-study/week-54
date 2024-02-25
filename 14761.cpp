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
  int X, Y, N;
  cin >> X >> Y >> N;
  for (int i = 1; i <= N; i++) {
    if (!(i % X) && !(i % Y))
      cout << "FizzBuzz\n";
    else if (!(i % X))
      cout << "Fizz\n";
    else if (!(i % Y))
      cout << "Buzz\n";
    else
      cout << i << "\n";
  }
}
