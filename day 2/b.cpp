#include<iostream>
#include<stack>
#include<string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <stdio.h>
#include <unordered_set>
#include <iomanip>
#include <cstring>
#include <math.h>
#include <queue>
#define fast(); ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i, n) for(int i= 0; i < (n); ++i)
#define repp(i, n) for(int i = 1; i <= (n); ++i)
#define ll long long
using namespace std;

int a[100007], b[100007];
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
 int n;cin >> n;
 rep(i, n)cin >> a[i];
 rep(i, n)cin >> b[i];


 int res = 0;
 rep(i, n){
    res += a[i] * b[i];
 }
 if(res == 0)cout << "Yes" << endl;
 else cout << "No" << endl;
 
    
}

