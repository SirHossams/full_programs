#include <iostream>

using namespace std;

int main()
{
	int n;int A[100];int c=0;
cout << "Insert the Number\n";
	cin >> n;
	int s=n;
	for (int i=2;i<=n;i++)
	/* first stage
	check for the divisors less than the number
	*/
	if (n%i==0) {
	A[c]=i;
	c++;
	}
	
	/* second stage
	check for the primes in the divisors
	(qualification stage)
	*/
	int d=0;int C[c];
	for (int i=0;i<c;i++) {
		bool conds=1;
		for (int j=2;j<A[i];j++)
		if (A[i]%j==0)
		conds=0;
	//check whether the divisor is prime or not
	if (conds==1) {
	C[d]=A[i];
	d++;
	}
    }
    /* third stage
    achieving the main goal
    */
    int t=0;
    cout << "It is a compostion of Base(Power):-\n";
    for (int i=0;i<d;i++) {
    while (n%C[i]==0) {
    	n/=C[i];
    	t++;
    }
    cout << C[i] << " (" << t << ") " << " ";
    t=0;n=s;
    }
	return 0;
}