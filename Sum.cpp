#include <bits/stdc++.h>
using namespace std;

int main(){
  int tc;
  cin >> tc;
  int a, b, c;
  for (int i = 0; i < tc; i++){
    cin >> a >> b >> c;
    if ((b + c == a) || (a + c == b) || (a + b == c)){
      cout << "YES" << "\n";
    } else {
      cout << "NO" << "\n";
    }
    return 0;
}
