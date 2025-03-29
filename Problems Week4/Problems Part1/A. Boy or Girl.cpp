
// Problem Name  : A. Boy or Girl

// Link of problem  : https://codeforces.com/problemset/problem/236/A

// Solve Problem :

#include <iostream>

using namespace std;

    int main() {
       
        string a;
        cin>>a;
        int n=a.size();
        int cntr[26]={0};
        for(int i=0;i<n;i++){
            cntr[a[i]-'a']++;
        }
        int ans=0;
        for(int i=0;i<26;i++){
            if(cntr[i]>0)ans++;
        }
        if(ans%2==0){
            cout<<"CHAT WITH HER!"<<"\n";
        }else{
            cout<<"IGNORE HIM!"<<"\n";
        }

    return 0;
}