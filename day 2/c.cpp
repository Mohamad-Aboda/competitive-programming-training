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

int arr[100007];
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
 	int n;cin >>n;
 	rep(i, pow(2,n))cin >> arr[i];

 	int a = -1;
 	int b = -1;
 	int aa = -1;
 	int bb = -1;

 	for(int i = 0; i <= pow(2, n) / 2 - 1; ++i){
 		if(arr[i] > a){
 			a = arr[i];
 			aa = i;
 		}
 	}

 	for(int i = pow(2, n) / 2; i <= pow(2, n) - 1; ++i){
 		
 		if(arr[i] > b){
 			b = arr[i]; bb = i;
 		}

 	}


 	if(a > b)cout << bb + 1 << endl;
 	else cout << aa + 1 << endl;
    
}

