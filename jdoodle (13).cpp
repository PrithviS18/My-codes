#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    int ans=0;
    for (int i=0;i<n-2;i++){
        if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='c' ){
            ans++;
        }
    }
    while (q--){
        int a; char b;
        cin>>a>>b;
        a--;
        for (int i=a-2;i<a+1;i++){
            if (s[i]=='a' && s[i+1]=='b' && s[i+2]=='c'){
                ans--;
            }
        }
        s[a]=b;
        for (int i=a-2;i<a+1;i++){
            if (s[i]=='a' && s[i+1]=='b' && s[i+2]=='c'){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}