#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int a,b,c;
    cin >>a>>b>>c;
    int x=max({a,b,c});
    int y=min({a,b,c});
    cout << x-y << endl;
}

}

