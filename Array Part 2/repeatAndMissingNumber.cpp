#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	long long int sum=(n*(n+1))/2,square=(n*(n+1)*(2*n+1))/6,missing,repeat;
	//cout<<sum<<" "<<square;
	for(int i=0;i<n;i++){
		sum-=arr[i]; // x-y
		square-=(long long int)arr[i]*(long long int)arr[i]; // x2-y2 i.e (x-y)(x+y)
	}

	missing=(sum + (square/sum))/2;
	repeat=missing-sum;
	return {missing,repeat};	
}
