

Problem Name  : A. Good Number

Link of problem  : https://codeforces.com/problemset/problem/365/A

Solve Problem :

#include <iostream>

using namespace std;
//int freq[1000];
bool iskgood(int n, int k){
	bool freq[k + 1];
	for (int i = 0; i < k + 1; i++)
		freq[i] = 0;
	while (n) {
		freq[n % 10] = true;
		n /= 10;
	}
	for (bool b : freq)
		if (!b)
			return b;
	return true;
}


int main()
{
	int n, k;
	cin >> n >> k;
	int c = 0;
	while (n--) {
		int a;
		cin >> a;
		c += iskgood(a, k);

	}
	cout << c << endl;
	return 0;
}

 



