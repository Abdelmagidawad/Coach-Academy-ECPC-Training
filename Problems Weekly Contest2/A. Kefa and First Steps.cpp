

Problem Name  : A. Kefa and First Steps

Link of problem  : https://codeforces.com/problemset/problem/580/A

Solve Problem :

#include<iostream>
using namespace std;

long long a[100005];
int main()
{
	long long  n, a[100005];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int temp = 1, max1 = 1;
	for (int j = 1; j < n; j++)
	{
		if (a[j] >= a[j - 1]) temp++;
		else temp = 1;

		if (temp > max1)
			max1 = temp;
	}
	cout << max1 << endl;
	
	
	return 0;
}
