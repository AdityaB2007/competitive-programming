#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int sum_p = 0;
  for (int i = 0; i < n; i++){
    int p;
    cin >> p;
    sum_p += p;
  }
  double ans = sum / (double) n;
  cout << ans << "\n";
}
