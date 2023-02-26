#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector <int> pos,vec;
        int count=0;
        int count1=0;
        for (int i=0;i<n;i++){
            int x; cin>>x;
            if (x>0){
                pos.push_back(x);
                count++;
            }
            else if (x<0){
                pos.push_back(x);
                count1++;
            }
            else {
                if (vec.size()<2){
                    vec.push_back(x);
                }
            }
        }
        if (count>2 || count1>2){
            cout<<"NO"<<endl;
        }
        else if (count==0 && count1==0){
            cout<<"YES"<<endl;
        }
        else {
        for (int i=0;i<pos.size();i++){
            vec.push_back(pos[i]);
        }
        int count=0;
        for (int i=0;i<vec.size();i++){
            for (int j=i+1;j<vec.size();j++){
                for (int k=j+1;k<vec.size();k++){
                    int ele=vec[i]+vec[j]+vec[k];
                    int flag=0;
                    for (int l=0;l<vec.size();l++){
                        if (ele==vec[l]){
                            flag=1;
                        }
                    }
                    if (flag==0){
                        count++;
                    }
                }
            }
        }
        if (count==0){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
        
    }
}