#include <iostream>
#include <vector>
using namespace std;

int maxOnes(const vector<int>& v) {
  int ans = 0;
  int curr = 0;

  for (size_t i = 1; i <= v.size(); i++) {
    if (v[i] == 1 && v[i - 1] == 1) {
      curr++;
    } else if (v[i - 1] == 1 && v[i] == 0) {
      ans = max(ans, curr);
      curr = 0;
    } else if (v[i - 1] == 0 && v[i] == 1) {
      curr = 1;
    }
  }
  return ans;
}

int main() {
  int n;
  cin >> n;
  vector<int> v(n + 2, 0);
  for (int i = 1; i <= n; i++) {
    cin >> v[i];
  }
  cout << maxOnes(v) << endl;
}
