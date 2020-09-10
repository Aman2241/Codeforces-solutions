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
 
 
int main() 
{
 
 int n;
 cin>>n;
 int x=0;
 while(n--)
 {
     string s;
     cin>>s;

     if(s[0]=='+' && s[1]=='+')
     {
         x+=1;
     }
     else if(s[0]=='-' && s[1]=='-')
     {
         x-=1;
     }
     else if(s[1]=='+' && s[2]=='+')
     {
         x+=1;
     }
     else
     {
         x-=1;
     }
     
     

 }

 cout<<x<<endl;
 
 
 
return 0;
   
}