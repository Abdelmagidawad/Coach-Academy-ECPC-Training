

Problem Name  : A. Array with Odd Sum

Link of problem  : https://codeforces.com/problemset/problem/1296/A

Solve Problem :

#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {

		int n;
		cin >> n;
		int *ar=new int[n];
		int sum = 0,even=0,odd=0;
		
		for(int i=0;i<n;i++){
			cin >> ar[i];
			sum += ar[i];
			if (ar[i] % 2 == 0)
				even++;
			else odd++;
			
		}
		
		if (sum % 2 == 1||(even>0&&odd>0))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

	}
	
	return 0;
}