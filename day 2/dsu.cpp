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
struct Job
{
    char id;
    int deadline;
    int profit;    
};

bool compare(Job a, Job b){
    return (a.profit > b.profit);
}

void solve(Job arr[], int n){
    int res[n];
    bool take[n];
    sort(arr, arr + n, compare);
    memset(take, false, sizeof take);
    for(int i = 0; i < n; ++i){
        for(int j = min(n, arr[i].deadline) - 1; j >= 0; --j){
            if(take[j] == false){
                take[j] = true;
                res[j] = i;
                break;
            }
        }
    }
    for(int i = 0; i < n; ++i){
        if(take[i]){
            cout << arr[res[i]].id;
        }
    }
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
 cout << "hi Fromk day 2 " << endl;
 cout << "hi ";
    
}

