#include <iostream>
#include <vector>

using namespace std;

int main(){
  int n, c = 0;

  cin >> n;

  vector <int> v(n);

  while (n--){
    cin >> v[n];
  }

  for (int i = 1; i < v.size(); i++){
    if (v[i] == v[0]){
      c++;
    }
  }
  cout << c << endl;
}
