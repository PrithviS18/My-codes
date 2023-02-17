#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long ans=0;
        sort(arr,arr+n);
        vector <int> vec(n);
        vec[0]=1;
        for (int i=1;i<n;i++){
            vec[i]=min(vec[i-1]+1,arr[i]);
        }
        for (int i=0;i<n;i++){
            ans+=(arr[i]-vec[i]);
        }
        cout<<ans<<endl;
    }
}