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

//problem no.1837B
//Time complexity -O(n)

#include<bits/stdc++.h>
using namespace std;
int main (){
    int t ; 
    cin >> t ;
    while (t--){
        int n ; 
        cin >> n ; 
        string s ;
        cin >> s;
        int count1 = 0 ;
        int count2 = 0 ;
        int mx1 =0 ;
        int mx2 =0 ;
        for(int i = 0 ; i < n ; i++){
            if (s[i]=='<'){
                count1++;
                mx1=max(count1,mx1);
            }            else{
                count1=0;
            }
            if(s[i]=='>'){
                count2++;
                mx2=max(count2,mx2);
            }
            else{
                count2=0;
            }
        }
        cout << max(mx1,mx2)+1 << endl;
    }
}