//Problem NO. 1A
//Time complexity : O(n);
#include<bits/stdc++.h>
using namespace std ;
int main(){
    long long  n , m , a ;
    cin >> n >> m >> a ;
    long long x , y ;
    x = (n + (a-1))/a;
    y = (m + (a-1))/a;
    cout << x*y << endl;
    return 0 ;
}