//problem no.1850D
//time complexity -O(nlogn)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t ;
    while (t--){
        long long  n , k;
        cin >> n >> k ;
        vector<int>v;
        for(int i = 0 ; i < n ; i++){
            int x ;
            cin >>x ;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        int count = 1;
        int mx =1;
        for(int i = 1 ; i< n ; i++){
            if((v[i]-v[i-1])<=k){
                count++;
            }
            else{
                count=1;
            }
            mx = max(mx,count);
        }
        cout<<n-mx << endl;
    }
    return 0 ; 
}