


// Problem Name  : O. Fibonacci

// Link of problem  :  https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/O

// Solve Problem :


#include <iostream>

using namespace std;
int arr[60];
int fib(int n){
    if(n<=1)
    return n;
    if(arr[n]!=-1)
    return arr[n];
    arr[n]=fib(n-1)+fib(n-2);
    return arr[n];
}
int main()
{
    for(int i=0;i<60;i++){
        arr[i]=-1;
    }
   int n;
   cin>>n;
   int x=fib(n-1);
   cout<<x<<endl;

    return 0;
}