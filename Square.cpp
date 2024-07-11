#include <bits/stdc++.h>
using namespace std;

int main(){
  int tc;
  cin >> tc;
  while(tc--){
    vector<int> x(4);
    vector<int> y(4);
    for(int i = 0; i < 4; i++){
      cin >> x[i] >> y[i];
    }
    sort(x.begin(), x.end()); // can also sort the y coordinates
    int s = abs(x[3] - x[0]);
    cout << s*s << "\n";
  }
  return 0;
}
