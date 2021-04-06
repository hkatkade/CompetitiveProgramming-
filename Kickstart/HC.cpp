#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define Max 1e5 + 1
#define ff first
#define ss second
#define ll int
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define mp make_pair
#define pii pair<ll, ll>
#define vi vector<ll>
#define v vector
#define mii map<ll, ll>
#define umap unordered_map
#define pq priority_queue<ll>
#define pqm priority_queue<ll, vi, greater<ll>>
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define ps(x, y) fixed << setprecision(y) << x
#define mk(arr, n, type) type *arr = new type[n];
#define w(x)  \
	ll x;     \
	cin >> x; \
	while (x--)
#define all(x) x.begin(), x.end()
#define sp ' '
#define pi 3.14159265359
#define intmax INT32_MAX
#define intmin INT32_MIN
#define conti continue
#define null NULL
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
ll d8[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
ll d4[4][2] = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds;
/* ordered set:
tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>
member functions :
1. order_of_key(k) : number of elements strictly lesser than k
2. find_by_order(k) : k-th element in the set
*/

void IO()
{
#ifndef ONLINE_JUDGE
	freopen("f.txt", "r", stdin);
	freopen("of.txt", "w", stdout);
#endif
}
void fastIO()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}
class Street
{
public:
	string name;
	pii in;
	ll t;
};
class Car
{
public:
	ll ns;
	v<string> streetN;
};
bool comp(pair<string, pii> a, pair<string, pii> b)
{
	return a.second.first > b.second.first;
}
map<string, v<ll>> m;
int main()
{
	fastIO();
	IO();
	ll D, I, S, V, F,mean=0;
    float st_d = 0;
    cin >> D >> I >> S >> V >> F;
	v<Street> street(S);
	for (ll i = 0; i < S; i++)
	{
		cin >> street[i].in.ff >> street[i].in.ss;
		cin >> street[i].name;
		cin >> street[i].t;
		m[street[i].name].emplace_back(street[i].in.first);
		m[street[i].name].emplace_back(street[i].in.ss);
		m[street[i].name].emplace_back(street[i].t);
		m[street[i].name].emplace_back(0);
	}
	v<Car> car(V);
	for (ll i = 0; i < V; i++)
	{
		cin >> car[i].ns;
		string temp;
		for (ll j = 0; j < car[i].ns; j++)
		{
			cin >> temp;
			car[i].streetN.pb(temp);
			m[temp][3]++;
		}
	}
	v<v<ll>> g(Max);
	v<v<pair<string, ll>>> op(I);
	v<pair<string, pii>> z;
    ll sum = 0,sum_s=0;
    for (auto i : m)
	{
		z.pb(mp(i.first, mp(i.second[3], i.second[1])));
        sum += i.second[3];
    }
    mean = sum /z.size();
    for (auto i : m)
	{
        sum_s += pow(i.second[3]-mean,2);
    }
    std = floor(sqrt(sum_s / (z.size() - 1)));
    sort(all(z), comp);
    //i.second[3] -> NC
	for (auto i : z)
	{
		if(z.second.first<(mean-st_d))
		{
			continue;
		}
		op[i.second.second].pb(mp(i.first, 1));
	}
	ll ans = 0;
	for (ll i = 0; i < I; i++)
	{
		if (!op[i].empty())
		{
			ans++;
		}
	}
	cout << ans << endl;
	for (ll i = 0; i < I; i++)
	{
		if (!op[i].empty())
		{
			cout << i << endl;
			cout << op[i].size() << endl;
			for (auto j : op[i])
			{
				cout << j.first << sp << j.second << endl;
			}
		}
	}
	return 0;
}