#include <iostream>

using namespace std;

bool is_palindrome(const string& s) {
  for (int i = 0; i < s.size() / 2; i++){
    if (s[i] != s[s.size()-i-1]) { return false; }
  }
  return true;
}

int main(){
  string s;
  while (cin >> s){
    cout << is_palindrome(s) << endl;
  }
}
