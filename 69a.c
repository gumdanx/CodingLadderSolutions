#include <stdio.h>
 
void vectorialSum(int j)
{
	int i; // counter
	int x[2], y[2], z[2]; // [0] as origin, [1] as 'new point'
	
	scanf("%d%d%d", &x[0], &y[0], &z[0]); // origin
	for(i = 1; i < j; i++) // each new point add to origin
	{
		scanf("%d%d%d", &x[1], &y[1], &z[1]);
	
		x[0] += x[1];
		y[0] += y[1];
		z[0] += z[1];
	}
	
	if(x[0] == 0 && y[0] == 0 && z[0] == 0) // equilibrium
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
}
 
int main()
{
	int n; // number of lines
	scanf("%d", &n);
	vectorialSum(n);
	return 0;
}
