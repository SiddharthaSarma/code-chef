#include<bits/stdc++.h>

using namespace std;


int main() {
  int T;
  cin >> T;
  while(T--) {
    int n, c;
    cin >> n >> c;
    int temp = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
       cin >> temp;
       sum += temp;
    }
    if (sum <= c) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
}
