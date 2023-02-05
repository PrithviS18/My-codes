#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        if (n%2==0){
            cout<<"YES"<<endl;
            for (int i=0;i<n;++i){
                if (i%2==0){
                    cout<<1<<" ";
                }
                else {
                    cout<<-1<<" ";
                }
            }
            cout<<endl;
        }
        else {
            if (n<5){
                cout<<"NO"<<endl;
            }
            else {
                int ele=n/2;
                cout<<"YES"<<endl;
                for (int i=0;i<n;++i){
                    if (i%2==0){
                        cout<<(1-ele)<<" ";
                    }
                    else {
                        cout<<ele<<" ";
                    }
                }
                cout<<endl;
            }
        }
    }
}