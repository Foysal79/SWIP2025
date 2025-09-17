// basic solutions Recursion Problem
// Base Case : 0 or 1 
// Recursive Case : n > 

//* Step-by-Step Example: factorial(5)
// factorial(5) = 5 * factorial(4)
// factorial(4) = 4 * factorial(3)
// factorial(3) = 3 * factorial(2)
// factorial(2) = 2 * factorial(1)
// factorial(1) = 1    // base case

//* Calculation Backtracking:
// factorial(2) = 2 * 1 = 2
// factorial(3) = 3 * 2 = 6
// factorial(4) = 4 * 6 = 24
// factorial(5) = 5 * 24 = 120
#include <bits/stdc++.h>
using namespace std;
int solve(int n){
  if(n <= 1) return 1;
  return n * solve(n-1);
}
int main()
{
    int n;
    cin >> n;
    int res = solve(n);
    cout << res << endl;
    return 0;
}