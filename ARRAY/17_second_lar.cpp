// // We have populated the solutions for the 10 easiest problems for your support.
// // Click on the SUBMIT button to make a submission to this problem.

// #include <bits/stdc++.h>
// // #include <boost/multiprecision/cpp_int.hpp>
// #include <iostream>
// using namespace std;
// // using namespace boost::multiprecision;

// int main() {
// 	// your code goes here
// 	// int t;
// 	// cin>>t;
// 	// while(t--)
// 	// {
// 	//     int n;
// 	//     cin>>n;
// 	//     cpp_int ans = 1;
// 	//     while(n > 1)
// 	//     {
// 	//         ans = ans*n;
// 	//         n--;
// 	//     }
// 	//     cout<<ans<<endl;
// 	// }


// 	int n;
// 	cout<<"ENter"<<endl;
// 	cin>>n;
// 	int arr[n];
// 	cout<<"elements"<<endl;
// 	for(int i = 0; i < n; i++)
// 	{
// 		cin>>arr[i];
// 	}
	

// 	int m = *max_element(arr,arr+n);
// 	cout<<m<<endl;
	
// 	return 0;
// }



#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    
	    int x,y;
	    cin>>x>>y;
	    
	    string s;
	    cin>>s;
	    int count = 0;
	    for(int i = 0; i < s.length();i++)
	    {
	        if(s[i] == '1')
	        {
	            count++;
				// cout<<"hello"<<" ";
	        }
	    }
	    
	    cout<<count<<endl;
	    // int actual = x*count;
	    
	    int arr[15];
	    for(int i = 0; i < 15; i++)
	    {
	        arr[i] = 0;
	    }
	    
		
	    int bigday = 0;
	    int k = 0;
	    for(int i = 0; i < s.length();i++)
	    {
	        if(s[i] == '1')
	        {

	            ++bigday;
				
	        }else{
	            if(bigday > 0)
	            {
	                arr[k++] = bigday;
	                bigday = 0;
	            } 
	        }
	    }
		if(bigday > 0)
	            {
	                arr[k++] = bigday;
	                bigday = 0;
	            } 
	    // cout<<bigday<<endl;
	    int m = *max_element(arr,arr+15);
	    // cout<<m<<endl;
	    
	
	    
	    
	}
	return 0;
}





