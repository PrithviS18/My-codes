#include <bits/stdc++.h>

using namespace std;

int main() {
   int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        long long count1=0;long long count0=0;
        for (int i=0;i<n;i++){
            if (s[i]=='1'){
                count1++;
            }
            else {
                count0++;
            }
        }
        long long count=1;long long  mx=INT_MIN;
        if (n!=1){
        for (int i=0;i<n-1;i++){
            if (s[i]==s[i+1]){
                count++;
                mx=max(mx,count);
            }
            else {
                //mx=max(mx,count);
                count=1;
            }
        }
        long long ele= mx*mx;
        long long ele2= count1*count0;
        cout<<max(ele,ele2)<<endl;
        }
        else {
            cout<<1<<endl;
        }
    }
    //cout<<(long long)100110987*(long long)999899876;
}