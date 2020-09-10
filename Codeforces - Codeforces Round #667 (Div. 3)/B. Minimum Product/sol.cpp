#include<bits/stdc++.h>
using namespace std;
 
typedef vector <int> vi;
typedef pair< int ,int > pii;
#define endl "\n"
#define sd(val) scanf("%d",&val)
#define ss(val) scanf("%s",&val)
#define sl(val) scanf("%lld",&val)
#define debug(val) printf("check%d\n",val)
#define all(v) v.begin(),v.end()
#define PB push_back
#define MP make_pair
#define FF first
#define arr_ip for(int i=0;i<n;i++){cin>>a[i]}
#define arr_op for(int i=0;i<n;i++) {cout<<a[i]}
#define SS second
#define ll long long int
#define MOD 1000000007
#define clr(val) memset(val,0,sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl; 
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 

void solve()
{
   ll n,x,y;
   cin>>n>>x>>y;

   if(n==2)
   {
       cout<<x<<" "<<y<<endl;
       return;
   }
   if(n==(y-x+1))
   {
       for(ll i=x;i<=y;i++)
       {
           cout<<i<<" ";
           cout<<endl;
           continue;
       }
   }

   ll d;
   for(ll i=1;i<=(y-x);i++)
   {
       if((y-x)%i!=0)
       continue;
       ll c1=(y-x)/i;
       if(c1+1<=n)
       {
           d=i;
           break;
       }
   }

   vector<ll>v;
   ll temp=0;
   for(ll i=0;i<=(y-x)/d;i++)
   {
       v.push_back(x+temp);
       temp+=d;
   }

   n=n-(y-x)/d-1;
   temp=x-d;
   while(n!=0 && temp>0)
   {
       v.push_back(temp);
       temp-=d;
       n--;



   }


   temp=y+d;
   while(n!=0)
   {
       v.push_back(temp);
       temp+=d;
       n--;
   }


   for(ll i=0;i<v.size();i++)
   {
       cout<<v[i]<<" ";
   }

   cout<<endl;

}

int main() 
{
 
 speed


 int t;
 cin>>t;

 while(t--)
 {
     solve();


 }
 
 
 
return 0;
   
}