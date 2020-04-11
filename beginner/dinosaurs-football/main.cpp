#include<bits/stdc++.h>

using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, k;
    cin >> n >> k;
    k = k + 1;
    int a[n];
    for (int i = 0; i < n; i++) {
      a[(i + k) % n] = i + 1;
    }
    for (int i = 0; i < n; i++) {
      cout << a[i] << " ";
    }
    cout << "\n";
  }
  return 0;
}
