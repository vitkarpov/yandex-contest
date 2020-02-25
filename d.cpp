#include <iostream>
#include <vector>
using namespace std;

void GenerateBracketsList(size_t len, vector<string>& result, string curr, size_t open, size_t closed) {
  if (curr.size() == len) {
    result.push_back(curr);
  } else {
    if (2 * open < len) {
      GenerateBracketsList(len, result, curr + "(", open + 1, closed);
    }
    if (closed < open) {
      GenerateBracketsList(len, result, curr + ")", open, closed + 1);
    }
  }
}

int main() {
  size_t n;
  cin >> n;
  vector<string> result;

  GenerateBracketsList(2 * n, result, "", 0, 0);

  for (auto v : result) {
    cout << v << endl;
  }
}
