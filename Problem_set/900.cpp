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

//problem no 1875A
//time complexity - O(n)


#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin >> t ;
    while (t--){
        long long a , b , n ;
        cin >> a >> b >> n ;
        vector<long long >v;
        for(int i  = 0 ; i < n ; i++){
            int x ;
            cin >> x ;
            v.push_back(x);
        }
        long long total = b ;
        for(int i = 0 ; i < n ; i++){
            total += min(v[i],a-1);
        }
        cout  << total << endl;
    }
}

//problem no. - 556A
// time complexity - O(n)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n ;
    string s ;
    cin >> s ;
    n = s.size();
    int count1 = 0 , count2 = 0; 
    for(int i = 0 ; i < n ; i++){
        if(s[i]=='0'){
            count1++;
        }
        else {
            count2++;
        }
    }
    cout << abs(count1-count2) << endl;
    return 0 ;
}


//problem mo.320A
//time complexity -O(n)


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s ;
    cin >> s;
    n=s.size();
    bool found = true;
    for(int i = 0 ; i<n ; i++){
        if(s[0]==('4') || s.find("444")!=-1){
            found = false;
        }
    }
    for (int i = 0 ; i < n ; i++){
        if(s[i]!='1' && s[i]!='4'){
            found = false;
        }
    }
    if(found){
        cout << "YES" ;
    }
    else {
        cout << "NO";
    }
    return 0 ;
}

//problem no.149A
//time complexity - O(nlogn)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin >> k;
    vector<int>v;
    for(int i = 0 ; i < 12 ; i++){
        int x ;
        cin >> x ;
        v.push_back(x);
    }
    sort(v.begin(),v.end(),greater<int>());
    int total = 0 , count = 0 ;
    for(int i =0 ; i< 12 ; i++){
        if(total < k ){
            count++;
            total += v[i];
        }
    }
    if(total >= k)
    cout << count << endl;
    else 
    cout << "-1" << endl;
    return 0 ;
}

//problem no. 460A 
// time complexity - O(n)

#include<bits/stdc++.h>
using namespace std;
int main(){
   int n , m ;
   cin >> n >> m ;
   int day = 0 ;
   while(n>0){
        n=n-1;
        if(day%m == 0){
            n=n+1;
        }
        day++;
    }
    cout << day-1 << endl;        
    return 0 ;
}