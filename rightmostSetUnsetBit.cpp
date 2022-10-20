// C++ implementation to set the rightmost unset bit
#include <bits/stdc++.h>
using namespace std;

int setRightmostUnsetBit(int n)
{
	// if all bits of 'n' are set
	// the number is of form 2^k -1 return n
	if (!(n & (n + 1)))
		return n;
	// else
	return n | (n + 1);
}

// Driver program to test above
int main()
{
	int n = 21;
	cout << setRightmostUnsetBit(n);
	return 0;
}

// This code is contributed by Kasina Dheeraj.
