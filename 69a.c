#include <stdio.h>
 
void sim()
{
	printf("YES\n");
}
 
void nao()
{
	printf("NO\n");
}
 
void somaVet(int j)
{
	int i;
	int x[2], y[2], z[2];
	
	scanf("%d%d%d", &x[0], &y[0], &z[0]);
	for(i = 1; i < j; i++)
	{
		scanf("%d%d%d", &x[1], &y[1], &z[1]);
	
		x[0] += x[1];
		y[0] += y[1];
		z[0] += z[1];
	}
	if(x[0] == 0 && y[0] == 0 && z[0] == 0)
	{
		sim();
	}
	else
	{
		nao();
	}
}
 
int main()
{
	int n; // numero de linhas
	scanf("%d", &n);
	somaVet(n);
	return 0;
}
