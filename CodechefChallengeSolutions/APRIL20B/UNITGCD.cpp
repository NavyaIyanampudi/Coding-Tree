#include <bits/stdc++.h>
using namespace std;
/* set<int>v;
int prime(int n)
{
    bool  prime[n+1]; 
   
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
    v.insert(1);
    for (int p=2; p<=n; p++) 
       if (prime[p]) 
           v.insert(p);
} */

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	   // prime(n);
	    //set<int>r;
	    if(n==1)
	    {cout<<"1"<<"\n";
	    cout<<"1"<<" "<<"1"<<"\n";continue;}
	    cout<<n/2<<"\n";
	    if(n%2==0)
	    { 
	  for(int i=1;i<n;i+=2)
	  {
	      cout<<"2"<<" ";
	          cout<<i<<" "<<i+1<<"\n";
	  }
	    }
	    else
	    {  
	        for(int i=1;i<n-1;i+=2)
	        {
	            if(abs(i-n)==2)
	           {cout<<"3"<<" "; cout<<i<<" "<<i+1<<" "<<i+2<<"\n";}
	            else
	            {cout<<"2"<<" ";cout<<i<<" "<<i+1<<"\n";}
	        }
	    }
	}
}