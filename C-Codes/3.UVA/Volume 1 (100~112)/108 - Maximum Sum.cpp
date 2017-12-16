#include <bits/stdc++.h>

using namespace std;

int table[100][100];
int sum[100];
int N;

int max_continuous_sum()
{
	int maxs=0,s=0;
	for(int i=0; i<N; i++)
	{
		if(s>=0) s+=sum[i];
		else s=sum[i];
		maxs = maxs>s ? maxs : s;
	}
	return maxs;
}
int main()
{
	cin >> N;
	int maxsum=0;
	int tmp;
	for(int i=0; i<N; i++)
	{
		for(int j=0; j<N; j++)
		{
			cin >> table[i][j];
			sum[j]=table[i][j];
		}
		tmp = max_continuous_sum();
		maxsum = maxsum>tmp ? maxsum : tmp;
		for(int j=i-1; j>=0; j--)
		{
			for(int k=0; k<N; k++)
				sum[k]+=table[j][k];
			tmp = max_continuous_sum();
			maxsum = maxsum>tmp ? maxsum : tmp;
		}
	}
	cout << maxsum << endl;
	return 0;
}
