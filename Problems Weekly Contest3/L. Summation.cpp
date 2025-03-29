


// Problem Name  : L. Summation

// Link of problem  :  https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/L

// Solve Problem :

#include <iostream>

using namespace std;

int main()
{
   int n; cin>>n;
   long long arr[n],s=0;
   
   for(int i=0;i<n;i++){
       cin>>arr[i];
       s+=arr[i];
   }
cout<<s<<endl;
    return 0;
}