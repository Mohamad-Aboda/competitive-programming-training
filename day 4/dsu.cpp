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

int parent[100];#include<iostream>
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



// make a set 
void make(int v){
	parent[v] = v;
}
}


// find loader of the set O(N) 
int find(int v){
	if(v = parent[v])return v;
	return find(parent[v]);
}


// path compression O(log(N))

int find_set(int v){
	if(v = parent[v])return v;


	return parent[v] = find_set(parent[v]);
}

// merge to sets 
void merge(int a, int b){
	a = find(a);
	b = find(b);

	if(a != b){
		parent[b] = a;
	}
}





int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 





}

