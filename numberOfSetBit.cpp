int getSetBitsFromOneToN(int N){
	int two = 2,ans = 0;
	int n = N;
	while(n){
		ans += (N/two)*(two>>1);
		if((N&(two-1)) > (two>>1)-1) ans += (N&(two-1)) - (two>>1)+1;
		two <<= 1;
		n >>= 1;
	}
	return ans;
}
