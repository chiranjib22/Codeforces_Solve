#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
  if (n < 2)
    return 0;
  for (int i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
      return 0;
  }
  return 1;
}
void solve(int n)
{
  int almostPrime = 0;
  for (int i = 2; i <= n; i++)
  {
    int count = 0;
    for (int j = 2; j * j <= i; j++)
    {
      if (i % j == 0)
      {
        int a = i / j;
        if (isPrime(j) && j != a)
          count++;
        if (isPrime(a) && j != a)
          count++;
      }
    }
    if (count == 2)
    {
      almostPrime++;
    }
  }
  cout << almostPrime << endl;
}

int main()
{
  int n;
  cin >> n;

  solve(n);
  return 0;
}