// Problem no. 344A
// Time complexity - O(n)
#include<iostream>
using namespace std;
int main (){
    cout << "ENTER: ";
    int n ;
    cin >> n ;
    int count = 0 ;
    string arr[n];
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    
    for (int i = 0 ; i < n-1 ; i++){
        if (arr[i] != arr[i+1]){
            count ++ ;
        }
    }
    count = count +1;
    cout << count << endl;
    return 0;
}

//Problem no. 405A
//Time Complexity - O(nlog(n))
#include <bits/stdc++.h>
using namespace std ;
int main (){
    cout << "ENTER: ";
    int n ;
    cin >> n ;
    int arr[n] ;
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    sort (arr, arr+n);
    for (int i = 0 ; i <n ; i++){
        cout <<  arr[i];
    }
    return 0 ;
}

//Problem no. 791A
//Time complexity O()

#include<bits/stdc++.h>
using namespace std;
int main (){
    cout << "ENTER: ";
    int a , b ;
    cin >> a ;
    cin >> b ;
    int count = 0 ;
    while(a<=b){
            a = a*3;
            b = b*2;
            count++;
    }
    cout << count << endl;
    return 0 ;
}

//Problem no. 731A
//Time complexity : O(n)
#include<bits/stdc++.h>
using namespace std ;
int main (){
    string s ;
    cin >> s ;
    int n = s.size();
    char current = 'a', target ;
    int distance1 , distance2, new_distance = 0;
    for (int i = 0 ; i < n ; i++ ){
         target = s[i];
         distance1 = abs(current - target);
         distance2 = 26 - abs(current - target );
         current = target ;
         if(distance1 < distance2){
             new_distance += distance1 ;
         }
         else if (distance1 > distance2){
             new_distance += distance2 ;
         }
         else if (distance1 == distance2){
             new_distance += distance1 ; 
         }
    }
    cout << new_distance << endl ; 
    return 0 ;
}

//Problem no. 151A 
//time complexity - O(1)
 
#include<bits/stdc++.h>
using namespace std ;
int main (){
    cout << "ENTER: ";
    int n , k , l , c , d , p , nl , np ;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np ;
    int total_drink , total_slices, total_salt, toast1,toast2, toast3 ;
    
    total_drink=k*l;
    toast1=total_drink/nl;
    
    total_slices=c*d;
    toast2=total_slices;
    
    total_salt=p/np;
    toast3=total_salt;
    
    if(toast1 > toast2){
        if(toast2 < toast3){cout<< toast2 / n;}
        else if (toast2 > toast3){cout<< toast3 / n;}
    }
    else if(toast1 < toast2){
        if(toast1 < toast3){cout<<toast1 / n;}
        else if (toast1 >toast3){cout<<toast3 / n;}
    }
   else if ((toast1 == toast2) && (toast2 == toast3)) {
    cout << toast1 / n;
}
else if (toast1 == toast2) {
    if (toast1 < toast3) {
        cout << toast1 / n;
    }
    else if (toast1 > toast3) {
        cout << toast3 / n;
    }
}
else if (toast2 == toast3) {
    if (toast2 > toast1) {
        cout << toast1 / n;
    }
    else if (toast2 < toast1) {
        cout << toast2 / n;
    }
}
else if (toast1 == toast3) {
    if (toast1 < toast2) {
        cout << toast1 / n;
    }
    else if (toast1 > toast2) {
        cout << toast2 / n;
    }
}
  return 0;
    }


    ////////// another method for same earlier giving error in test 13 .
    #include<bits/stdc++.h>
using namespace std ;
int main (){
    int n , k , l , c , d , p , nl , np ;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np ;
    int total_drink , total_slices, total_salt, toast1,toast2, toast3 ;
    
    total_drink=k*l;
    toast1=total_drink/nl;
    
    total_slices=c*d;
    toast2=total_slices;
    
    total_salt=p/np;
    toast3=total_salt;
    
    int ans = min({toast1, toast2, toast3});
      cout << ans / n;
  return 0;
    }
 

//Problem no. : 1030A
// Time Complexity : O(n)

#include<bits/stdc++.h>
using namespace std ;
int main (){
    int n ;
    cin >> n ;
    int arr[n];
    int sum = 0 ; 
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i] ;
    }
    for (int i = 0 ; i < n ; i++){
        if (arr[i] == 1){
            sum = sum + arr[i];
        }
    }
    if (sum != 0 ){
        cout << "Hard";
    }
    else 
        cout << "Easy";
    return 0 ;
}

//Problem no. 58A
//Time Complexity :O(n)

#include <bits/stdc++.h>
using namespace std;
int main (){
    cout << "ENTER: ";
    int n ;
    string a = "hello";
    string s ;
    cin >> s ; 
    n = s.size();
    int target=0;
    for (int i = 0 ; i < n ; i++){//ahhellllloou
        if (s[i] == a[target]){// h e l l o
            target++;          // 0 1 2 3 4
        }
    }    
    if (target== a.size())
        cout << "Yes" << endl;
    else 
    cout << "NO" << endl ;
    return 0 ;
}

// problem no . 427A
// Time complexity : O(n)

#include <bits/stdc++.h>
using namespace std;
int main (){
    cout << "ENTER: ";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    int police =0 , untreated = 0 ;
    for (int i = 0 ; i < n ; i++){
        if (arr[i] >= 1){police+=arr[i];}
        else if (arr[i] == -1){
           if (police > 0){police--;}
           else
               untreated++;
        }
    }
    cout << untreated << endl ;
    return 0 ;
}

// problem no. 266A
// time complexity : O(n)

#include <bits/stdc++.h>
using namespace std;
int main (){
    cout << "ENTER: ";
    int n ;
    cin >> n ;
    int k;
    cin >> k ;
    int count = 0;

    int arr[n];
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    int score = arr[k-1];
    for (int i = 0 ; i < n ; i++){
        if ((arr[i] >= score) && (arr[i]> 0 )){
         count++;   
        }
    }
    
        cout <<  count <<endl ;
    
    return 0 ;
}

// problem no. - 116A
// time complexity - O(n)

#include <bits/stdc++.h>
using namespace std;
int main (){
    int n ;
    cin >> n ;
    
    int current = 0, total=0;
    
    int arr[n][2];
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i][0]>>arr[i][1];
    }
    
    for (int i = 0 ; i < n ; i++){
        current -= arr[i][0];
        current += arr[i][1];
        total = max(total,current);
    }
     cout << total <<endl ;
    return 0 ;
}

// probelm no .469A 
// T.C : 

#include <bits/stdc++.h>
using namespace std;
int main (){
    int n ;
    cin >> n ;
    
    int p ;
    cin >> p ;
    bool arr[101] = {0};
    for (int i = 0 ; i < p ; i++){
        int x ;
        cin >> x ; 
        arr[x] = 1 ;
    }
    
    int q ;
    cin >> q ; 
    for (int i = 0 ; i < q ; i++){
        int x ;
        cin >> x ;
        arr[x] = 1;
    }
    for (int i = 1 ; i <= n ; i++){
        if (!arr[i]){
        cout << "Oh, my keyboard!" << endl ;
        return 0;
        } 
    }
    cout << "I become the guy." << endl ; 
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
int main (){
    cout << "ENTER: ";
    int n ;
    cin >> n ;
    int x , y ;
    cin >> x >> y ;
       bool found = false ;
       for (int i = 1 ; i < y ; i++){
                if((i%x == 0) && (y%i != 0)){
                 found = true ;
                }
        }
        if (found){
            cout << "YES" << endl;
        }
        else if (!found){
            cout << "NO" << endl;
        }
    
    return 0;
}




#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n , count = 0;
    string s = "{a,b,}";
    s.erase(remove(s.begin(),s.end(),'{'),s.end());
    s.erase(remove(s.begin(),s.end(),','),s.end());
    s.erase(remove(s.begin(),s.end(),'}'),s.end());
    cout << s << endl; 
    n=s.size();
    sort(s.begin(),s.end());
    bool copy = false;
    for (int i = 1 ; i < n ; i++){
        if (s[i] != s[i-1]){
            copy = true ;
            count++;
        }
    }
    cout << count << endl ;
    return 0;
}

//Problem No. 50A
//Time complexity - O(1)
#include<bits/stdc++.h>
using namespace std ; 
int main (){
    int M , N ;
    cin >> M >> N ;
    int cells;
    cells=M*N;
    cout << cells/2 << endl ; 
    return 0 ;
}

//Problem NO.122A
// Time complexity -O(1)

#include<bits/stdc++.h>
using namespace std ;
int main (){
    int n ;
    cin >> n ;
    if (n%4==0 || n%7==0 || n%44==0 || n%47==0 || n%74==0 || n%77==0 || n%444==0 || n%447==0 || n%474==0 || n%477==0 || n%744==0 || n%747==0 || n%774==0 || n%777==0){
            cout << "YES" << endl;    
    }
    else
       cout << "NO" <<endl;
    return 0 ;   
}

//486A 
//t.c - O(1)

#include<bits/stdc++.h>
using namespace std ;
int main (){
    long long  n ;
    cin >> n ;
    if (n%2==0)
        cout << n/2 ;
    else 
        cout << -((n/2) +1) ;
    return 0;    
}


// problem no. 231A
// Time complexity - O(n)

#include<bits/stdc++.h>
using namespace std;
int main (){
    int n ;
    cin >> n;
    int arr[n][3];
    int count = 0,total , score=0;
    for (int i = 0 ; i<n ; i++){
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }
    for (int i = 0 ; i<n ; i++){
        total = arr[i][0] + arr[i][1] + arr[i][2] ;
        if (total > 1){
            count++;
        }
    }
    cout <<count << endl ;
    return 0 ;
}

//problem no.271A
//Time complexity - O(1)

#include<bits/stdc++.h>
using namespace std;
int main (){
    int y ;
    cin >> y ;
    while (true){
        y++;
        int d=y%10;
        int c = (y/10)%10;
        int b = (y/100)%10;
        int a = (y/1000)%10;
        
        if ((a!=b) && (a!=c) && (a!=d) &&  (b!=a) && (b!=c) && (b!=d) && (c!=a) && (c!=b) && (c!=d) && (d!=a) && (d!=b) && (d!=c)){
            cout << y <<endl;
            break;
        }
    }
    return 0 ;
}

//problem no.1903A 
// Time complexity -O(nlogn)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin >> t;
    while (t--){
        int n , k ;
        cin >> n >> k ;
        int arr[n];
        for (int i = 0 ; i < n ; i++){
            cin >> arr[i];
        }
        int dup[n];
        bool found = true ;
        for(int i = 0 ; i < n ; i++){
            dup[i]=arr[i];
        }
        sort (dup , dup+n);
        
        for (int i = 0 ; i < n ; i++){
            if(arr[i]!=dup[i]){
                found = false;
            }
        }
    
        if ((k>1)||(found == true)){
            cout << "YES" << endl;
        }
        else if ((k==1)||(found == false)){
            cout << "NO" << endl;
        }
    }
    return 0 ;
}

// problem no. - 200B
// time complexity O(n)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int arr[n];
    double result =0 ;
    for (int i = 0 ; i<n ; i++){
        cin >> arr[i];
        result += arr[i];
    }
    cout << result/n << endl;
    return 0 ;
}

//problem no. 136A
// time complexity - O(n)

#include<bits/stdc++.h>
using namespace std ;
int main (){
    int n ;
    cin >> n ;
    int arr[n];
    int per[n]={0};
    for (int i = 1 ; i<= n ; i++){
        cin >> arr[i];
        per[arr[i]]=i;
    }
    for (int i = 1 ; i<= n ; i++){
        cout << per[i] << " ";
    }
    return 0 ;
}

// practice question - finding 1st , 2nd , 3rd , 4th largest no. ;
// time complexity - O(n);

#include <bits/stdc++.h>
using namespace std ;
int main (){
    int n ;
    cin >> n;
    vector<int>v;
    for (int i = 0 ; i < n ; i++){
        int x ; 
        cin >> x ;
        v.push_back(x);
    }
    int m1 = 0 , m2 = 0 , m3 = 0 , m4 = 0 ;
    for (int i = 0 ; i < n ; i ++){
        int x = v[i];
        if (x > m1){
            m4 = m3;
            m3 = m2;
            m2 = m1;
            m1 = x ;
        }
        else if (x > m2 && x!=m1){
            m2 = x ;
        }
        else if (x > m3 && x!=m1 && x!=m2){
            m3 = x ;
        }
        else if (x > m4 && x!=m1 && x!=m2 && x!=m3){
            m4 = x;
        }
    }
    cout << "m1: " << m1 << " m2: " << m2 << " m3: " << m3 << " m4: " << m4 << endl;
    return 0 ;
}

// problem no . - 61 A 
// time complexity - O(n)

#include <bits/stdc++.h>
using namespace std ;
int main (){
    int n ;
    string s1 ; 
    string s2 ;
    cin >> s1 >> s2 ;
    n = s1.size();
    string s3 (n, '0');
    
    for (int i = 0 ; i < n ; i++){
        if (s1[i] == s2[i]){
            s3[i]='0';
        }
        else if (s1[i]!=s2[i]){
            s3[i]='1';
        }
    }
    for (int i = 0 ; i < n ; i++){
        cout << s3[i] ;   
    }
    return 0 ;
}

//problem no .  144A
// time complexity - O(n);

#include <bits/stdc++.h>
using namespace std ;
int main (){
    int n,count1=0,count2=0;
    cin >> n;
    vector<int>v;
    for (int i = 1; i <=n ; i++){
        int x ;
        cin >> x ;
        v.push_back(x);
    }
    int x=*max_element(v.begin(),v.end());
    int y=*min_element(v.begin(),v.end());
    
    for (int i =0; i <=n-1 ; i++){
        if (v[i]==x){
            count1 = i;
            break;
        }
    }
    for (int i = n-1 ; i>=0 ; i--){
        if (v[i] ==y){
            count2 = (n-1)-i;
            break;
        }
    }
    int total = count1 + count2;
    if (count1 > ((n-1)-count2)){
        total--;
    }
    cout << total << endl;
    return 0 ;
}

//problem no . 148A
// time complexity - O(n)

#include<bits/stdc++.h>
using namespace std;
int main (){
    int k , l , m , n , d ;
    int count = 0 ; 
    cin  >> k >> l >> m >> n >> d ;
    for (int i = 1 ; i <= d ; i++){
        if ( i% k == 0 || i% l == 0 || i% m ==0 || i% n==0){
            count++;
        }
    }
    cout << count << endl;
}

//problem no. 785A
//time complexity :O(n)

#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n ;
    vector<string>v(n);
    int total = 0;
    for (int i = 0 ; i <n ; i++){
        cin >> v[i];
    }
    for (int i = 0 ; i < n ; i++){
        if (v[i]=="Tetrahedron"){
            total+=4;
        }
        else if (v[i]=="Cube"){
            total+=6;
        }
        else if (v[i]=="Octahedron"){
            total+=8;
        }
        else if (v[i]=="Dodecahedron"){
            total+=12;    
        }
        else if (v[i]=="Icosahedron"){
            total+=20;    
        }
    }
    cout << total << endl;
    return 0 ;
}

//problem no .510
//time compelxity  - O(n)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , m ;
    cin >> n >> m ;
    for (int i = 1 ;i <=n ; i++){
        if (i%2==1){
            for (int j = 1 ; j <=m ; j++){
                cout << "#";
            }
            cout << endl;
        }
        else if (i%4==2){
            for (int j = 1 ; j<m; j++){
                cout << ".";
            }
            cout << "#"<<endl;
        }
        else {
            cout << "#";
            for (int j = 1 ; j < m ; j++){
                cout << ".";
            }
            cout << endl;
        }
    }
    return 0 ;
}

//problem no . -1742A
// time complextiy - O(n)

#include<bits/stdc++.h>
using namespace std ;
int main (){
    int t;
    cin >> t ;
    while (t--){
        vector<int>v;
        for (int i = 0 ; i <3 ; i++){
            int x ;
            cin  >> x;
            v.push_back(x);
        }
        bool found = false; 
        for (int i = 0 ; i < 1; i++){
            int a = v[i];
            int b = v[i+1];
            int c = v[i+2];
            if ( a+b==c || a+c == b || b+c== a){
                found = true ;
            }
        }
        if (found ){
            cout << "YES" << endl;
        }
        else 
            cout << "NO" << endl;
    }
    return 0 ;
}

//problem no . 1352A
//time complexity -O(n)

#include<bits/stdc++.h>
using namespace std;
int main (){
    int t ; 
    cin  >> t;
    while (t--){
        int n ;
        cin >> n ;
        vector<int>v;
        int place = 1 ;
        
        while(n>0){
            int l = n % 10 ;
            if (l!=0){
                v.push_back(l*place);
            }
            n = n/10;
            place = place * 10 ;
        }
        
        cout << v.size() << endl;
        for (int i = 0 ; i < v.size() ; i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
}


// problem no. - 
// time complexity - O(n)

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long  n , k;
    cin >> n >> k;
    long long odd = (n+1)/2;
    long long value ;
    long long pos = k- odd;
    if (k <= odd){
         value = 2*k-1;    
    }
    else if (k > odd){
         value = pos*2 ;
    }
    cout << value << endl;
    return 0 ;
}

//problem no. - 1328A
// time complexity - O(1)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin >> t ;
    while (t--){
      long long a, b ;
      cin >> a >> b ;
      int count ;
      if (a%b==0){
          cout << 0 << endl;
      }
      else {
          count = b-(a%b);
          cout<< count << endl;
      }
    }
    return 0 ;
}

//problem no.1475 
//time complexity - O(1)

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t ; 
    cin >> t ; 
    while (t--){
        long long n ;
        cin >> n ;
        bool found = false;
        while(n%2==0){
            n=n/2;
        }
        if(n==1){cout << "NO" << endl;}
        else {cout << "YES" << endl;}
    }
    return 0 ;
}

//problem no.479A
// time complexity - O(1)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a , b , c;
    cin >> a >> b >> c ;
    int m1,m2,m3,m4,m5 ;
    m1= a+b*c;
    m2= a*(b+c);
    m3= a*b*c;
    m4= (a+b)*c;
    m5= a+b+c;
    cout << max({m1,m2,m3,m4,m5}) << endl;
    return 0 ;
}

//problem no. - 451A
//Time complexity - O(1)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , m ; 
    cin >> n >> m ;
    if (min(n,m) % 2==1){
        cout << "Akshat" << endl;}
    else {cout << "Malvika" << endl;}
    return 0 ;
}



#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m ;

    vector<int>v;
    for(int i = 0 ; i < m ; i++){
        int x ;
        cin >> x ; 
        v.push_back(x);
    }
    int  mn= v[0];
    sort(v.begin(),v.end());
    for(int i = 1 ; i <m; i++){
        mn=min(mn,v[i]-v[i-1]);
    }
    cout << mn << endl;
    return 0 ;
}


//problem no.1703A
//time complexity -O(n)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin >> t ;
    while(t--){
        string s;
        cin >> s;
        string s1="YES";
        for(int i = 0 ; i < 3 ; i++){
            s[i]=toupper(s[i]);
        }
        if(s1==s){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

//problem no. - 723A
//time complexity - O(n)

#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int>v;
     for(int i = 0 ;  i < 3 ; i++){
         int x;
         cin >> x ;
         v.push_back(x);
     }
     int a , b , c;
     int first , second , third ;
     for(int i = 0 ; i < 1 ; i++){
         a =abs(v[i]-v[i+1]);
         b =abs(v[i+1]-v[i+2]);
         c =abs(v[i+2]-v[i]);
         
         first = min(a,min(b,c));
         third = max(a,max(b,c));
         second = a+b+c-first-third;
     }
     cout << first+second << endl;
     return 0 ;
}


//problem no.141A
//time complexity - O(nlogn)

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2,s3;
    cin >> s1 >> s2 >> s3;
  
    string s = s1 + s2;
    int n = s.size();
    int m = s3.size();
    
    sort(s.begin(),s.end());
    sort(s3.begin(),s3.end());
    
    bool string = true;
    for(int i = 0 ; i < n ; i++){
        if(s3[i]!=s[i]){
            string = false;
        }
    }
    
    if(string && m==n){
        cout<<"YES" <<endl;
    }
    else {
        cout << "NO" <<endl;
    }
    return 0 ;
}

//problem no. 996A
//time complexity - O(n)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n ;
    int count= 0 , x=n ;
    for (int i = 0 ; i < x ; i++){
        if (n/100 > 0){
            n=n-100;
            count++;
        }
        else if (n/20 > 0){
            n=n-20;
            count++;
        }
        else if (n/10 > 0){
            n=n-10;
            count++;
        }
        else if (n/5 > 0){
            n=n-5;
            count++;
        }
        else if (n/1 > 0){
            n=n-1;
            count++;
        }
        else if(n==0){
            break;
        }
    }
    cout << count << endl;
    return 0 ;
}
    

// problem no. 1409A
//time complexity - O(n)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin >> t ;
    while (t--){
        int a , b ;
        cin >> a >> b ;
        int diff ;
        diff = abs(a-b);
        int ans = (diff + 9)/10;
        cout << ans << endl;
    }
    return 0 ;
}

//problem no.1399A
//time complexity -O(nlogn)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        bool found = true;
        for (int i = 1; i < n; i++) {
            if (abs(v[i] - v[i - 1]) > 1) {
                found = false;
                break;
            }
        }
        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

//problem no. 1857A
//time complexity - O(n)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t ;
    while (t--){
        int n ;
        cin >> n ;
        vector<int>v;
        for(int i = 0 ; i < n ; i++){
            int x;
            cin >> x ;
            v.push_back(x);
        }
        int total = 0 ;
        int sum = 0 ;
        if(n%2==0){
            for(int i = 0 ; i < n/2; i++){
                total+= v[i];
            }
            for(int i = n/2 ; i < n ; i++){
                sum+= v[i];
            }
            if((sum%2==0 && total%2==0) || (sum%2==1 && total%2==1)){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else if (n%2==1){
            for(int i = 0 ; i < 1; i++){
                total += v[i];
            }
            for(int i = 1 ; i < n; i++){
                sum += v[i];
            }
            if((sum%2==0 && total%2==0) || (sum%2==1 && total%2==1)){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
    return 0 ;
}

//problem no.1878A
//time complexity - O(n)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin >> t ;
    while (t--){
        int n , k ;
        cin >> n >> k ;
        vector<int>v;
        for(int i = 0 ; i < n ;i++){
            int x ;
            cin >> x ;
            v.push_back(x);
        }
        bool found = false ;
        for(int i = 0 ; i < n ; i++){
            if(v[i]==k){
                found = true ;
            }
        }
        if(found){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0 ;
}

//problem no. 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        bool found = true;
        for (int i = 1; i < n; i++) {
            if (abs(v[i] - v[i - 1]) > 1) {
                found = false;
                break;
            }
        }
        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

//////////////////


//problem no .1355A
//time complexity -O(n)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t ;
    while (t--){
        int n ;
        cin >> n ;
        int ans;
        if(n%2==0){
            ans = n/2-1;
        }
        else {
            ans=n/2;
        }
        
        cout << ans << endl;
    }
    return 0 ;
}

//problem no .- 750A 
// time complexity - O(n)

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int m = 240 - k;
    int count = 0;

    for (int i = 5; i <= 5 * n; i += 5) {
        m = m - i;
        if (m >= 0) {
            count++;
        } 
        else {
            break;
        }
    }

    cout << count << endl;
    return 0;
}

//problem no. 1901A
// time complexity - O(n)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin >> t;
    while(t--){
        int n , x;
        cin >> n >> x ;
        vector<int>v;
        for(int i = 0 ; i < n ; i++){
            int x ;
            cin >> x;
            v.push_back(x);
        }
        int total=v[0];
        for(int i = 1 ; i < n ;i++){
            total = max(total,v[i]-v[i-1]);
        }
        total = max(total,2*(x-v[n-1]));
        cout << total <<  endl;
    }
    return 0 ;
}

//problem no. 1899A
//time complexity - O(n)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; 
    cin >> t ;
     while (t--){
         int n ;
         cin >> n ;
         int total , sum ;
         if(((total=n-1)%3==0) ||((sum=n+1)%3==0)){
             cout << "First" << endl;
         }
         else {
             cout << "Second" << endl;
         }
     }
    return 0 ;
}

//problem no.490A
//time complexity - O(n)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n ;
    vector<int>one,two,three;
    for(int i = 0 ; i < n ; i++){
        int x ; 
        cin >> x ;
        if(x==1){one.push_back(i+1);}
        else if (x==2){two.push_back(i+1);}
        else if (x==3){three.push_back(i+1);}
        }
    int teams = min({one.size(),two.size(),three.size()});
    cout << teams << endl;
    for(int i = 0 ; i < teams ;i++){
        cout << one[i] << " " << two[i] << " " << three[i] << endl;
    }
    return 0;    
}

//problem no 432A
//time complexity -O(N)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , k ;
    cin >> n >> k ;
    vector<int>v;
    for(int i = 0 ; i < n ; i++){
        int x ;
        cin >> x ;
        if(x+k <=5){
            v.push_back(x);
        }
    }
    cout << v.size()/3 << endl;
    return 0;
}

//problem no. 1858A
//time complexity - O(n)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin >> t ;
    while (t--){
        int a , b , c;
        cin >> a >> b >> c ;
        int anna , katie ;
        if(c%2==1){
            anna = c/2 + 1 + a ;
            katie = c/2 + b ;
            if (anna > katie){
                cout << "First" << endl;
            }
            else if (anna == katie){
                cout << "Second" << endl;
            }
            else if (anna < katie){
                cout << "Second" << endl;
            }
        }
        else if (c%2 == 0){
            anna = c/2 + a;
            katie = c/2 + b ;
            if (anna > katie){
                cout << "First" << endl;
            }
            else if (anna == katie){
                cout << "Second" << endl;
            }
            else if (anna < katie){
                cout << "Second" << endl;
            }
        }
    }
    return 0 ;
}

//problem no. 732A
//time complexity - O(n)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int k , r ;
    cin >> k >> r ;
    int n = k;
    int total ;
    if(k == 1000){
        cout<< "1" << endl;
    }
    else if (k /100 >=1){
        for (int i = 1 ; i <=n ; i++){
            total=k*i;
            if(total%10 ==0 || total%10 ==r ){
                cout << i << endl;
                break;
            }
        }
    }
    else if (k/10 >= 1){
        for (int i = 1 ; i <=n ; i++){
            total=k*i;
            if(total%10 == 0 || total%10 == r){
                cout << i << endl;
                break;
            }
        }
    }
    else if (k>=1 && k<=9){
        for (int i = 1 ; i <=1000; i++){
            total=k*i;
            if(total%10 == 0 || total%10 == r){
                cout << i << endl;
                break;
            }
        }
    }
    return 0 ;
}

//problem no. 1154A 
//time complexity - O(n)

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    for(int i = 0 ; i < 4 ;i++){
        int x ;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int sum = v[3];
    cout << sum - v[0] << " " << sum - v[1] << " " <<sum - v[2] << endl;
    return 0;
}

//problem no - 581A
//time complexity - O(1)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a , b ;
    cin >> a >> b ;
    int same , diff ;
    same = abs(a-b)/2;
    if(same == 0 ){
        diff=min(a,b);
        cout << diff << " " << same << endl;
    }
    else {
        diff= max(a,b)-abs(a-b);
        cout << diff << " " << same << endl;
    }
    return 0 ;
}


//problem no. - 1370A
//time complexity - O(n)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        int total = n/2;
        cout << total << endl;
    }
    return 0 ;
}

//problem no.1900A
//time complexity - O(n)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        string s;
        cin >> s;
        int count = 0 ;
        for(int i = 0 ; i < n ; i++){
            if(s[i]=='.' && s[i]==s[i-1] && s[i]==s[i+1]){
                count = 2 ;
                break;
            }
            else if (s[i]=='.'){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0 ;
}

//problem no.1367B
//time complexity - O(n)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        vector<int>v;
        int evenwrong = 0 , oddwrong = 0 ;
        for(int i = 0 ; i < n ; i++){
            int x ;
            cin >> x ;
            v.push_back(x);
        }
        for(int i = 0 ; i < n ; i++){
            if(i % 2 != v[i] % 2 ){
                if(i%2 == 0 ){
                    evenwrong++;
                }
                else if (i%2 == 1){
                    oddwrong++;
                }
            }
        }
        if(evenwrong == oddwrong ){
            cout << evenwrong << endl;
        }
        else {
            cout << "-1" << endl;
        }
    }
    return 0 ;
}

//problem no. 1999A
//time complexity - O(t)


#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin >> t ;
    while (t--){
        int n;
        cin >> n ;
        int a = n/10 ;
        int b = n%10;
        int c = a+b;
        cout << c << endl;
    }
    return 0 ;
}

//problem no. - 758A
//time complexity - O(n)


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n ;
    vector<int>v;
    for(int i = 0 ; i < n ; i++){
        int x ;
        cin >> x ;
        v.push_back(x);
    }
    int mx = v[0];
    int total = 0 ;
    for(int i = 0 ; i < n; i++){
        mx = max(mx,v[i]);
    }
    for(int i = 0 ; i < n ; i++){
        total = total + mx-v[i];
    }
    cout << total << endl;
    return 0 ;
}


//problem no.2009A
//time complexity -O(1) 


#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin >> t ;
    while(t--){
        int a , b ;
        cin >> a >> b ;
        cout << b-a << endl;
    }
    return 0 ;
}