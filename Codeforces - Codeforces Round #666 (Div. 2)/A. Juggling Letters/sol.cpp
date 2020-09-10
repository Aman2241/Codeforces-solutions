/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

#define SIZE 26 
  
void check(string s,int n1) 
{ 
	
	// creating a frequency array 
	 int freq[SIZE]; 
    bool flag=false;
    int count=0;
    // initialize all elements of freq[] to 0 
    memset(freq, 0, sizeof(freq)); 
	
	// Finding length of s 
	int n = s.length(); 
	for (int i = 0; i < s.length(); i++) 
	
	// counting frequency of all characters 
		freq[s[i] - 'a']++; 
	
	// checking if any odd frequency 
	// is there or not 
	for (int i = 0; i < 26; i++) 
	{
		if (freq[i] % n1 == 0) 
	    {
	        flag=true;
	    }
	    
	    else
	    {
	        count++;
	    }
	    
	    
	}	 
	
	
	if(count>0)
	{
	    cout<<"NO"<<endl;
	}
	
	if(flag==true)
	{
	    if(count==0)
	    {
	        cout<<"YES"<<endl;
	    }
	}
	
	
} 
 



int main() 
{ 
	int t;
    cin>>t;
    string s1;
     int n;
     int n1;
    
    while(t--)
    {
       s1=" ";
        cin>>n;
        n1=n;
        while(n--)
        {
            string s;
            cin>>s;

            

            s1+=s;
            
        }
        
     
    check(s1,n1);
        
    }
	return 0; 
} 