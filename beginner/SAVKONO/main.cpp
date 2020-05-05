#include <bits/stdc++.h>

#define endl "\n"
#define IOS                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);

using namespace std;

int main() {
  IOS;
  int T;
  cin >> T;
  while (T--) {
    int n, P;
    cin >> n >> P;
    priority_queue<int> pq;
    for (int i = 0; i < n; i++) {
      int temp;
      cin >> temp;
      pq.push(temp);
    }
    int count = 0;
    while (P > 0 && pq.top() > 0) {
      count++;
      int val = pq.top();
      P -= val;
      pq.pop();
      pq.push(val / 2);
    }
    if (P > 0)
      cout << "Evacuate" << endl;
    else
      cout << count << endl;
  }
  return 0;
}
