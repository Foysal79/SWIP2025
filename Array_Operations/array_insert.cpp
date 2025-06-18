#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin >> n;
int a[n+1];
for(int i = 0; i < n; i++)
{
	cin >> a[i];
}

int index, val;
cin >> index >> val;

for( int i = n -1; i >= index; i--)
{
	a[i+1] = a[i];
}
a[index] = val;

for(int i = 0; i < n+1; i++)
{
	cout << a[i] << " ";
}

    return 0;
}
