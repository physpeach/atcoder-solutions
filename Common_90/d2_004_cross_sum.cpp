#include <bits/stdc++.h>
using namespace std;
 
#define REP(i, N) for(int i = 0; i < N; i++)
 
int main(){
  int H, W;
  cin >> H >> W;
  
  vector<vector<int>> mat(H, vector<int>(W));
  vector<int> hvec(H, 0), wvec(W, 0);
  REP(i, H){
    REP(j, W){
      cin >> mat.at(i).at(j);
      hvec.at(i) += mat.at(i).at(j);
      wvec.at(j) += mat.at(i).at(j);
    }
  }
  
  REP(i, H){
    REP(j, W){
      cout << hvec.at(i) + wvec.at(j) - mat.at(i).at(j) << " ";
    }
    cout << endl;
  }
  return 0;
}