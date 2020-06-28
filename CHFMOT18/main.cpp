#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    ll a, b;
    cin >> a >> b;
    ll ans = 0;

    if (a & 1) {
      a--;
      ans++;
    }
    while (a > 0) {
      ans += a / b;
      b = a % b;
      a = b;
    }
    cout << ans << endl;
  }

  return 0;
}
