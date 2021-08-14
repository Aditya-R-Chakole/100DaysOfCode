// RightCode 
// D1. Sage's Birthday (easy version)
// https://codeforces.com/contest/1419/problem/D1

#include <bits/stdc++.h>
using namespace std;

// DataTypes
//typedef long long int ll;
#define ll long long int
#define ull unsigned long long int

// Miscellaneous
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define TEST(t) ll t; cin>>t; while(t--) 
#define DBG(var) cout<<"#var = "<<(var)<<endl;
#define DBG2(var1, var2) cout<<"#var1 = "<<(var1)<<" || #var2 = "<<(var2)<<endl;
#define YesNo(cond) ((cond)?(cout<<"YES"<<endl):(cout<<"NO"<<endl))
#define max(a, b) ((a > b)?(a):(b))
#define min(a, b) ((a < b)?(a):(b))

// Array / Vector related things
#define all(c) (c).begin(),(c).end() 
#define clearArr(a, x) memset(a,x,sizeof(a)) 
#define setVal(a, start, end, x) FOR( i, start, end, 1 ) a[i]=x;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define eb emplace_back 

// Constants
#define MAX ((ll)1e9 + 7)
#define INF 0x7fffffff 

// Input and Output Macros
#define scani(x) scanf("%lld",&x) 
#define scanii(x, y) scanf("%lld %lld",&x,&y)
#define scaniii(x, y, z) scanf("%lld %lld %lld",&x,&y,&z)
#define printi(x) printf("%lld\n",x)
#define printii(x, y) printf("%lld %lld\n",x, y)
#define printiii(x, y, z) printf("%lld %lld %lld\n",x, y, z)
#define printd(x) printf("%.9f\n", x); 
#define printA(a,L,R) FOR(i, L, R, 1) cout<<a[i]<<(i==R?'\n':' ')

// Loops 
#define FOR(i,start,end,incr) for(ll i=start;i<=end;i+=incr)
#define FORR(i,start,end,incr) for(ll i=start;i>=end;i-=incr)


void initCode(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE
}

// Code
vector<ll> find_primes(){
    ll n = 1000001;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (ll p = 2; p * p <= n; p++){

        if (prime[p] == true){
            for (ll i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
 	std::vector<ll> primes;
    for (ll p = 2; p <= n; p++){
        if (prime[p]){
        	primes.push_back(p*p);
        }
    }

    return primes;
}

int main() {
	initCode();
	//
	//TEST(t){
		ll N;
		cin>>N;

		ll input[N];
		for( ll i=0;i<N;i++ ){
			cin>>input[i];
		}
		sort(input, input+N);

		for( ll i=1;i<N;i+=2 ){
			swap(input[i-1], input[i]);
		}

		ll count = 0;
		for( ll i=1;i<N-1;i++ ){
			if((input[i]<input[i-1])&&(input[i]<input[i+1])){
				count++;
			}
		}

		printi(count);
		printA(input, 0, N-1);
	//}
	//	
    return 0; 
}