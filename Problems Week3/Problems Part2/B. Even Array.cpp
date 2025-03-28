

Problem Name  : B. Even Array

Link of problem  : https://codeforces.com/contest/1367/problem/B

Solve Problem :

#include <iostream>

using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		int *ar=new int[n];
		for (int i = 0; i < n; i++) {
			cin >> ar[i];
		}
		int numofevens = 0, numofodd = 0;
		int ceven = 0, codd = 0;

		for (int i = 0; i < n; i++) {
			if (ar[i] % 2 == 0)
				numofevens++;
			else
				numofodd++;
			if (ar[i] % 2 == 0 && i % 2 == 1)
				ceven++;
			else if (ar[i] % 2 == 1 && i % 2 == 0)
				codd++;
		}
		if (numofevens != (n + 1) / 2 && numofodd != n / 2)
			cout << -1 << endl;
		else
			cout << max(ceven, codd) << endl;
		
	}
	

	 
	return 0;
}