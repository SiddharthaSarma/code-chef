#include<bits/stdc++.h>

using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int n, a;
    cin >> n >> a;
    int b[n];
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
      if (a - b[i] >= 0) {
        cout << "1";
        a -= b[i];
      } else {
        cout << "0";
      }
    }
    cout << "\n";
  }
  return 0;
}
