#include <bits/stdc++.h>
using namespace std;

using ull =  unsigned long long;
using ll = long long;
using vll = vector<long long>;
using vvll = vector<vll>;
using vs = vector<string>;
using mll = map<ll, ll>;
using msll = map<string, ll>;
using pii = pair<int, int>;

//alias
#define pb push_back
#define mp make_pair

#define YESNO(bool) if(bool){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}
#define yesno(bool) if(bool){cout<<"yes"<<endl;}else{cout<<"no"<<endl;}
#define YesNo(bool) if(bool){cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}

//rep
#define mcfor(i, L, R) for(ll i = ll(L); i < ll(R); i++)
#define mcford(i, L, R) for(ll i = ll(L-1); i >= ll(R); i--)

#define mcrep(i, N) for(ll i = 0; i < ll(N); i++)
#define mcrepd(i, N) for(ll i = ll(N-1); i >= 0; i--)

#define mcall(arr) arr.begin(), arr.end()
#define mcsize(arr) ll(arr.size())
#define INF32 2147483647
#define INF64 9223372036854775807

//func
inline ll cinll() {ll x; cin >> x; return x;}
inline string cinstr() {string x; cin >> x; return x;}
inline void coutll(ll n){cout<<n<<endl;}
inline void coutstr(ll str){cout<<str<<endl;}


//char '0-9': 48-57, 'A-M,N-Z': 65-77,78-90,
//     'a-m,n-z': 97-109,110-122

int main(){
  ll n = cinll();
  string str = cinstr();
  int t[2];
  t[0] = 0;
  t[1] = 0;
  int dir = 0;
  mcrep(i, n){
    if(str.at(i) == 'S'){
      switch(dir){
        case 0:
        t[0]++;
        break;
        case 1:
        t[1]--;
        break;
        case 2:
        t[0]--;
        break;
        case 3:
        t[1]++;
        break;
      }
    }else{
      dir++;
      if(dir==4){
        dir= 0;
      }
    }
  }
  cout <<t[0] <<" "<< t[1] << endl;
  return 0;
}