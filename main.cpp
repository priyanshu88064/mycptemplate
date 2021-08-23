// Curr Rating -> NEWBIE ( 1202 )
// 1stG -> To reach 1250 (DONE ✔✔)
// 2ndG -> To reach 1400 (not done)
// 3rdG -> To reach 1600 (not done)
// 4thG -> To reach 1900 (not done)
// 5thG -> To reach 2100 (not done)

// Author		- Priyanshu Tiwari
// Email		- priyanshutiwari88064@gmail.com
// Target   	- To reach Master(in Codeforces)

#include <bits/stdc++.h>
using namespace std;

/*-------------------------------------------------------------------------------------------------*/
//DEBUGGING

#define n_l '\n'
#define check(...) cerr << "[" << #__VA_ARGS__ << "]: "; cerr << to_string(__VA_ARGS__) << endl
template <typename T, size_t N> int SIZE(const T (&t)[N]) { return N; } template<typename T> int SIZE(const T &t) { return t.size(); } string to_string(const string s, int x1 = 0, int x2 = 1e9) { return '"' + ((x1 < s.size()) ? s.substr(x1, x2 - x1 + 1) : "") + '"'; } string to_string(const char* s) { return to_string((string) s); } string to_string(const bool b) { return (b ? "true" : "false"); } string to_string(const char c) { return string({c}); } template<size_t N> string to_string(const bitset<N> &b, int x1 = 0, int x2 = 1e9) { string t = ""; for (int __iii__ = min(x1, SIZE(b)),  __jjj__ = min(x2, SIZE(b) - 1); __iii__ <= __jjj__; ++__iii__) { t += b[__iii__] + '0'; } return '"' + t + '"'; } template <typename A, typename... C> string to_string(const A (&v), int x1 = 0, int x2 = 1e9, C... coords); int l_v_l_v_l = 0, t_a_b_s = 0; template <typename A, typename B> string to_string(const pair<A, B> &p) { l_v_l_v_l++; string res = "(" + to_string(p.first) + ", " + to_string(p.second) + ")"; l_v_l_v_l--; return res; } template <typename A, typename... C> string to_string(const A (&v), int x1, int x2, C... coords) { int rnk = rank<A>::value; string tab(t_a_b_s, ' '); string res = ""; bool first = true; if (l_v_l_v_l == 0) res += n_l; res += tab + "["; x1 = min(x1, SIZE(v)), x2 = min(x2, SIZE(v)); auto l = begin(v); advance(l, x1); auto r = l; advance(r, (x2 - x1) + (x2 < SIZE(v))); for (auto e = l; e != r; e = next(e)) { if (!first) { res += ", "; } first = false; l_v_l_v_l++; if (e != l) { if (rnk > 1) { res += n_l; t_a_b_s = l_v_l_v_l; }; } else { t_a_b_s = 0; } res += to_string(*e, coords...); l_v_l_v_l--; } res += "]"; if (l_v_l_v_l == 0) res += n_l; return res; } void dbgm() {;} template<typename Heads, typename... Tails> void dbgm(Heads H, Tails... T) { cerr << to_string(H) << " | "; dbgm(T...); }
#define dbgm(...) cerr << "[" << #__VA_ARGS__ << "]: "; dbgm(__VA_ARGS__); cerr << endl


/*-------------------------------------------------------------------------------------------------*/
//MACROS

#define/*-------------------------------------*/Bhaag_Bhaag_DK_Bose ios_base::sync_with_stdio(false); cin.tie(0);
#define/*-------------------------------------*/LL long long
#define/*-------------------------------------*/hack 1LL*
#define/*-------------------------------------*/rep(i,a,b) for(int i=a;i<b;i++)
#define/*-------------------------------------*/repp(i,a,b) for(int i=a;i<=b;i++)
#define/*-------------------------------------*/repr(i,a,b) for(int i=a;i>=b;i--)
#define/*-------------------------------------*/vi vector<int>
#define/*-------------------------------------*/vLL vector<LL>
#define/*-------------------------------------*/vii vector<vi>
#define/*-------------------------------------*/vLLLL vector<vector<LL>>
#define/*-------------------------------------*/vcc vector<vector<char>>
#define/*-------------------------------------*/vp vector<pair<int,int>>
#define/*-------------------------------------*/vc vector<char>
#define/*-------------------------------------*/vb vector<bool>
#define/*-------------------------------------*/vbb vector<vector<bool>>
#define/*-------------------------------------*/mn INT_MIN+1
#define/*-------------------------------------*/mod 1000000007
#define/*-------------------------------------*/mx INT_MAX-1
#define/*-------------------------------------*/inf 1e18+4
#define/*-------------------------------------*/str string
#define/*-------------------------------------*/fi first
#define/*-------------------------------------*/se second
#define/*-------------------------------------*/sot(w) sort(w.begin(),w.end())
#define/*-------------------------------------*/rsot(w) sort(w.rbegin(),w.rend())
#define/*-------------------------------------*/pb push_back
#define/*-------------------------------------*/min_v(w) *min_element(w.begin(),w.end())
#define/*-------------------------------------*/max_v(w) *max_element(w.begin(),w.end())
#define/*-------------------------------------*/endl "\n"
#define/*-------------------------------------*/mem(w,x) memset(w,x,sizeof(w))
#define/*-------------------------------------*/ppb pop_back
#define/*-------------------------------------*/pii pair<int,int>
#define/*-------------------------------------*/all(x) (x).begin(),(x).end()
#define/*-------------------------------------*/cmax(x,y) x=x>y?x:y
#define/*-------------------------------------*/cmin(x,y) x=x<y?x:y
#define/*-------------------------------------*/sz(a) a.size()

bool custom_compare(pair<LL, LL> &a, pair<LL, LL> &b) {
	return a.se < b.se;
}
bool custom_compare2(pair<int, int> &a, pair<int, int> &b) {
	if (a.fi != b.fi) return a.fi < b.fi;
	else return a.se > b.se;
}

class dsu {
public:
	int parent[1005],rnk[1005];

	dsu(int n){
		repp(i,1,n)
			make_set(i);
	}
	void make_set(int v){
		parent[v]=v;
		rnk[v]=0;
	}
	int find_set(int v){
		if(v==parent[v])
			return v;
		return parent[v]=find_set(parent[v]);
	}
	void union_set(int a,int b){
		a=find_set(a);
		b=find_set(b);

		if(a!=b){
			if(rnk[a]<rnk[b])swap(a,b);
			parent[b]=a;
			if(rnk[a]==rnk[b]) rnk[a]++;
		}
	}
};

class sieve{ 					// Can Find Prime Factors
public:
	vi spf,prime;
	set<int> s;

	sieve(int n):spf(n){ // upto 1e6 O(loglogN)
		spf[1]=1;
		repp(i,1,n) spf[i]=i;
		for(int i=4;i<=n;i+=2) spf[i]=2;

		for(int i=3;i*i<=n;i++){
			if(spf[i]==i){
				for(int j=i*i;j<n;j+=i){
					if(spf[j]==j) spf[j]=i;
				}
			}
		}
	}

	void createPrimeFactor(int n){ // O(logN)
		while(n!=1){
			s.insert(spf[n]);
			n/=spf[n];
		}	
	}
};

LL calc_power(LL n, LL b, LL modd=-1) {	// O(Log N)
	LL res = 1;
	while (b > 0) {
		if (b & 1){
			if(modd==-1)res = (res * n);	
			else res = (res*n) % modd;
		}
		if(modd==-1) n = n*n;
		else n = n * n %(modd);
		b >>= 1;
	}
	return modd==-1?res:res % modd ;
}

LL gcd(LL a, LL b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

LL lcm(LL a, LL b) {
	return a / gcd(a, b) * b;
}

/*---------------------------------------CAUTION:ABOVE------------------------------------------*/
// taskkill -im main.exe -f

void testcase() {}

int main() {
	Bhaag_Bhaag_DK_Bose;

	// cout << setprecision(10);

	int t; cin >> t; repp(i, 1, t)
	testcase();
}
//taskkill -im main.exe -f
/*----------------------------------------------------------------------------------------*/