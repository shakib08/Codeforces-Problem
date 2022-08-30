#include<bits/stdc++.h>
using namespace std;
int main(){
int t, n, r,s, z;
cin>>t;
string a;
while(t--){
    cin>>n;
    cin>>a;
    sort(a.begin(), a.end());
    r = unique(a.begin(), a.end())-a.begin();
    s = r*2;
    z = n - r;
    cout<<(s+z)<<"\n";
    }
}
