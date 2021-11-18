#include <iostream>
#include <vector>

using namespace std;

bool exist (int x, const vector<int>& v){
  for (auto i : v){
    if (i == x) { return true; }
  }
  return false;
}

int main(){

}
