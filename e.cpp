#include <iostream>
#include <vector>
using namespace std;

bool isAnagram(const string& s1, const string& s2) {
  if (s1.size() != s2.size()) {
    return false;
  }
  vector<int> m(26, 0);
  for (auto ch : s1) {
    m[ch - 'a']++;
  }
  for (auto ch : s2) {
    if (m[ch - 'a'] == 0) {
      return false;
    }
    m[ch - 'a']--;
  }
  return true;
}

int main() {

  string s1, s2;
  cin >> s1 >> s2;
  cout << isAnagram(s1, s2) << endl;
}
