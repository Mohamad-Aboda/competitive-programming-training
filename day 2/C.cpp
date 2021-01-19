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

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    set<string>a;
    set<string>b;
    int n;cin >> n;
    rep(i, n){
         string s;cin >> s;
        int size = s.size();
        if(s[0] != '!'){
            a.insert(s);
        }

        if(s[0] == '!'){
            s = s.substr(1, size);
            b.insert(s);
        }
    }

    for(auto i : b){
        if(a.count(i) > 0){
            cout << i << endl;
            return 0;
        }
    }
    cout << "satisfiable" << endl;
    
}

