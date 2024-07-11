#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, wonAnton, wonDanik;
  string s;
  cin >> n >> s;
  for (int i = 0; i < n; i++){
    if (s[i] == 'A')
      wonAnton++;
    else if (s[i] == 'D')
      wonDanik++;
  }
  if (wonDanik == wonAnton)
    cout << "Friendship" << "\n";
  else if (wonAnton > wonDanik)
    cout << "Anton" << "\n";
  else
    cout << "Danik" << "\n";
  return 0;
}
