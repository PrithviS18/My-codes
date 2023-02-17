#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--){
        int n,k;
        cin>>k>>n;
        vector <int > vec;
        int count=1;
        int temp=n-k;
        int sum=0;
        while(true){
            count++;
            sum+=count-1;
            if (sum<=temp){
                vec.push_back(count);
            }
            else {
                break;
            }
        }
        int ele=k-vec.size();
        for (int i=1;i<=ele;i++){
            vec.push_back(1);
        }
        int summ=1;
        for (int i=0;i<k;i++){
            cout<<summ<<" ";
            summ+=vec[i];
        }
        cout<<endl;
    }
}