#include <iostream>
#include <vector>
#include <queue>
#include <deque>
using namespace std;

int main() {
  int k;
  cin >> k;

  priority_queue<int, vector<int>, greater<int>> q;
  vector<deque<int>> m(k);
  int all = 0;

  for (int i = 0; i < k; i++) {
    int n;
    cin >> n;
    for (int j = 0; j < n; j++) {
      int x;
      cin >> x;
      m[i].push_back(x);
    }
    all += n;
  }
  while (all > 0) {
    for (int i = 0; i < k; i++) {
      if (!m[i].empty()) {
        q.push(m[i].front());
        m[i].pop_front();
        all--;
      }
    }
  }
  while (!q.empty()) {
    cout << q.top() << ' ';
    q.pop();
  }
  cout << endl;
}
