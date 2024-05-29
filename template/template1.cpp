/*---------JAI HO GURUDEV---------*/ 
 
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define f(i,n) for(ll i=0;i<n;i++)
#define f1(i,n) for(ll i=n;i>=0;i--)
#define forr(i,a,b) for(ll i=a;i<b;i++)
#define forr1(i,a,b) for(ll i=a;i>=a;i--)
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define sor(vec) sort(vec.begin(),vec.end())
#define asor(ar) sort(ar,ar+ar.size());
#define rsor(vec) sort(vec.rbegin(),vec.rend());
#define vl vector<ll>
#define yes cout << "YES"<< endl;
#define no cout << "NO"<< endl;
#define out(n) cout << n << endl;
#define num(n) ll n; cin >> n;
#define pb push_back
#define so(arr,n) sort(arr,arr+n) 
const ll MOD = 998244353;
#define mod 1000000007
int binarysearch(vector<ll> array,int x,int start,int end)
{
   int n=array.size();
   int a = start, b = end;
while (a <= b) {
int k = (a+b)/2;
if (array[k] == x) {
// x found at index k
   return k;
}
if (array[k] > x) b = k-1;
else a = k+1;
}
return -1;
}
int subarraysum(vector<int> a)   // complexity O(n)
{
   int best=0,sum=0;
   for(int k=0;k<a.size();k++)
   {
      sum=max(a[k],sum+a[k]);
      best=max(best,sum);
   }
   return best;
}
int check(string a,vector<string> v)
{
   int l=0,u=v.size();
   int mid;
   while(l<u)
   {
      mid=(l+u)/2;
      if(v[mid]==a)
      {
         return 1;     }
         else if(v[mid].compare(a)>0)
            u=mid;
         else
            l=mid+1;
            
   }
   return 0;
}
bool checkforcycle(vector<int> adj[],int parent,bool visited[],int s)
{
    visited[s]=true;
     for(int i=0;i<adj[s].size();i++)
    {
        if(visited[adj[s][i]]==false)
        {
            
          if(checkforcycle(adj,s,visited,adj[s][i]))
            return true;
        }
        else if(i!=parent)
            return true;
    }
    return false;
}
void dfs(vector<int> adj[],bool visited[],int s)
{
    visited[s]=true;
    
    for(int i=0;i<adj[s].size();i++)
    {
        if(visited[adj[s][i]]==false)
        {
            dfs(adj,visited,adj[s][i]);
        }
    }
}
bool isvowel(char c)
{
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        return true;
    else
        return false;
} 
 bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
vector<ll> v;
void printDivisors(ll n)
{
    // Note that this loop runs till square root
    for (int i=2; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            // If divisors are equal, print only one
            if (n/i == i)
                v.pb(i);
 
            else 
            {// Otherwise print both
                v.pb(n/i);
                v.pb(i);
            }
        }
    }
  
}
ll bis(vector<ll> &v,ll x,ll l,ll r)
{
    ll mid;
    ll i=l;
    ll j=r;
    while(l<=r)
    {mid=(l+r)/2;
if(v[mid]<=x)
{
    l=mid+1;
}
else
r=mid-1;
    }
    if(r<i || l>r)
        return -1;
    else
        return r;
}
// FERMAT'S LITTLE THEOREM
ll fastpow(ll a, ll b,ll Mod){
    ll res = 1;
    while(b > 0){
        if(b&1)
            res = (res * a) % Mod;
        a = (a * a) % Mod;
        b >>= 1;
    }
    return res;
}
bool checksorted(vector<ll> v,ll n,ll x)
{
    for(int i=0;i<n;i++)
        v[i]=abs(v[i]-x);
    int p=0;
    for(int i=0;i<n-1;i++)
        if(v[i]<=v[i+1])
            p++;
        if(p==n-1)
            return true;
        else
            return false;
}
vector<int>  SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true) {
            // Update all multiples of p greater than or
            // equal to the square of it numbers which are
            // multiple of p and are less than p^2 are
            // already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 vector<int> v;
    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p])
            v.pb(p);
        return v;
}
 ll costAP(ll arr[],ll n) {
    if(n < 3) { return 0; }
    ll minCost = n;
    for(ll i = 0; i < n - 1; i++) {
        for(ll j = i + 1; j <n; j++) {
            ll delta = (arr[j] - arr[i]) / (j - i);
            ll cost = 0;
            for(ll k = 0; k < n; k++) {
                if(k == i) { continue; }
                if((arr[k] + delta * (i - k)) != arr[i]) { cost++; }
            }
            if(cost < minCost) { minCost = cost; }
        }
    }
    return minCost;
} 
int repetition(string s)
{
  int n=s.length();
int mx=1;
for(int i=0;i<n-1;i++)
{
   int c=0;
   while(s[i]==s[i+1] && i<n-1)
   {
    c++;
    i++;
   }
   mx=max(mx,c+1);
}
cout<<mx<<endl;  
} 
void towerofhanoi(int src,int dest,int aux,int n)
{
 if(n<=0)
 return;
towerofhanoi(src,aux,dest,n-1);
cout<<src<<" "<<dest<<endl;
towerofhanoi(aux,dest,src,n-1);
}
ll _mergeSort(ll arr[], ll temp[], ll left, ll right);
ll merge(ll arr[], ll temp[], ll left, ll mid,
        ll right);
 
// This function sorts the
// input array and returns the
// number of inversions in the array
ll mergeSort(ll arr[], ll array_size)
{
    ll temp[array_size];
    return _mergeSort(arr, temp, 0, array_size - 1);
}
 
// An auxiliary recursive function
// that sorts the input array and
// returns the number of inversions in the array.
ll _mergeSort(ll arr[], ll temp[], ll left, ll right)
{
    ll mid, inv_count = 0;
    if (right > left) {
        // Divide the array into two parts and
        // call _mergeSortAndCountInv()
        // for each of the parts
        mid = (right + left) / 2;
 
        // Inversion count will be sum of
        // inversions in left-part, right-part
        // and number of inversions in merging
        inv_count += _mergeSort(arr, temp, left, mid);
        inv_count += _mergeSort(arr, temp, mid + 1, right);
 
        // Merge the two parts
        inv_count += merge(arr, temp, left, mid + 1, right);
    }
    return inv_count;
}
 
// This function merges two sorted arrays
// and returns inversion count in the arrays.
ll merge(ll arr[], ll temp[], ll left,ll mid,
        ll right)
{
    ll i, j, k;
    ll inv_count = 0;
 
    i = left;
    j = mid;
    k = left;
    while ((i <= mid - 1) && (j <= right)) {
        if (arr[i]<=arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
 
            // this is tricky -- see above
            // explanation/diagram for merge()
            inv_count = inv_count + (mid - i);
        }
    }
 
    // Copy the remaining elements of left subarray
    // (if there are any) to temp
    while (i <= mid - 1)
        temp[k++] = arr[i++];
 
    // Copy the remaining elements of right subarray
    // (if there are any) to temp
    while (j <= right)
        temp[k++] = arr[j++];
 
    // Copy back the merged elements to original array
    for (i = left; i <= right; i++)
        arr[i] = temp[i];
 
    return inv_count;
}
 
void solve()
{
 ll n;
 cin>>n;
 ll ar[n];
 map<ll,ll> m;
 f(i,n)
 {
 cin>>ar[i];
m[ar[i]]++;
}
 
 ll ans=mergeSort(ar,n);
 
 for(auto i:m)
 {
    if(i.second>1)
    {
        ll x=i.second;
        ans+=(x*(x-1))/2;
    }
 }
cout<<ans<<endl; 
 
}
int main()
{
int t;
  cin>>t;
for(int t1=1;t1<=t;t1++)
    {
        //body of the loop
   solve();  
  
    }
}
 
  
    
 
 
 
 
 
 
 
 
   
  
 
 
 
 
 /*    GRAPH--------------------->
  int n,m;
   cin>>n>>m;
   vector<int> a(n+1);
   f(i,n)
   cin>>a[i+1];
   map<int,set<int>> mp;
   int x,y;
   f(i,m)
   {
      cin>>x>>y;
      mp[x].insert(y);
   }
   ll sum=0;
   
   for(auto i:mp)
   {
      set<pair<int,int>> s;
      if(i.second.size()>0)
      {
          set<int, greater<int> >::iterator itr;
   
    for (itr = i.second.begin(); itr != i.second.end(); itr++) {
        {
         pair<int,int> p;
         p.first=i.first;
         p.second=*itr;
         if(s.count(p)==0)
         {
         sum+=min(a[i.first],a[*itr]);
         s.insert(make_pair(i.first,*itr));
          s.insert(make_pair(*itr,i.first));
          }
         
        }
    }
      }
   }
   */
 
 
/*   BFS ------------------------------->>>>>>
determining level of each node
vector <int> v[10] ;   //Vector for maintaining adjacency list explained above
    int level[10]; //To determine the level of each node
    bool vis[10]; //Mark the node if visited 
    void bfs(int s) {
        queue <int> q;
        q.push(s);
        level[ s ] = 0 ;  //Setting the level of the source node as 0
        vis[ s ] = true;
        while(!q.empty())
        {
            int p = q.front();
            q.pop();
            for(int i = 0;i < v[ p ].size() ; i++)
            {
                if(vis[ v[ p ][ i ] ] == false)
                {
            //Setting the level of each node with an increment in the level of parent node
                    level[ v[ p ][ i ] ] = level[ p ]+1;                 
                     q.push(v[ p ][ i ]);
                     vis[ v[ p ][ i ] ] = true;
      }
            }
        }
    }*/
 
 
 /*    DFS--------------> HAPPY--- cycle detection----------<<<<<<<<
 #include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
 
using namespace std;
 
 
bool iscycle(int s,vector<int> adj[],bool vis[],int par)
{
    bool iscycleexist=false;
    vis[s]=true;
    for(int i=0;i<adj[s].size();i++)
    {
    if(vis[adj[s][i]] && adj[s][i]==par)continue;
    if(vis[s]) return true;
    isloopexist|=iscycleexist(adj[s][i],adj,vis,s);
    }
    return isloopexist;
}
 
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    int x,y;
    for(int i=1;i<=n;i++)
    {
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
    }
    bool vis[n+1];
    for(int i=1;i<=n;i++)
    vis[i]=false;
    for(int i=1;i<=n;i++)
    {
    if(vis[i])continue;
    if(dfs(i,adj,vis,1));
    {
    isloopexist=true;
    break;
    }
    }
    cout<<isloopexist<<endl;
}*/
 
/*
int main()
{
    
}
 
 
 /* MINIMUM SPANING TREE -------->>>>>>>   KRUSKAL'S ALGORITHM-------------->
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
 
using namespace std;
const int MAX = 1e4 + 5;
int id[MAX], nodes, edges;
pair <long long, pair<int, int> > p[MAX];
 
void initialize()
{
    for(int i = 0;i < MAX;++i)
        id[i] = i;
}
 
int root(int x)
{
    while(id[x] != x)
    {
        id[x] = id[id[x]];
        x = id[x];
    }
    return x;
}
 
void union1(int x, int y)
{
    int p = root(x);
    int q = root(y);
    id[p] = id[q];
}
 
long long kruskal(pair<long long, pair<int, int> > p[])
{
    int x, y;
    long long cost, minimumCost = 0;
    for(int i = 0;i < edges;++i)
    {
        // Selecting edges one by one in increasing order from the beginning
        x = p[i].second.first;
        y = p[i].second.second;
        cost = p[i].first;
        // Check if the selected edge is creating a cycle or not
        if(root(x) != root(y))
        {
            minimumCost += cost;
            union1(x, y);
        }    
    }
    return minimumCost;
}
 
int main()
{
    int x, y;
    long long weight, cost, minimumCost;
    initialize();
    cin >> nodes >> edges;
    for(int i = 0;i < edges;++i)
    {
        cin >> x >> y >> weight;
        p[i] = make_pair(weight, make_pair(x, y));
    }
    // Sort the edges in the ascending order
    sort(p, p + edges);
    minimumCost = kruskal(p);
    cout << minimumCost << endl;
    return 0;
} 
time complexity = O(ElogV)
*/