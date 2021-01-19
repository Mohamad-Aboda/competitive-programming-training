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

int x[1007], y[1007];
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    int n;cin >>n;
    for(int i = 0; i < n; ++i){
    	cin >> x[i] >> y[i];

    }
    int res = 0;
    for(int i = 0; i < n; ++i){
    	for(int j = i + 1; j < n; ++j){
    		int xx = x[j] - x[i];
    		int yy = y[j] - y[i];
    		if(abs(yy) <= abs(xx))res++;
    	}
    }
    cout << res << endl;
    
}

