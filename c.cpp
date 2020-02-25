#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  int prev = 0;
  vector<int> result;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (i == 0 || prev != x) {
      result.push_back(x);
    }
    prev = x;
  }
  for (auto v : result) {
    cout << v << endl;
  }
}
