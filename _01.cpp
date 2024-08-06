#include<stdio.h>
#include<string.h>
int main()
{
	char a[30];
	int i, j, n;
	char t;
	gets(a);
	n = strlen(a);
	for (j =1;j<n;j++)
	{
		for (i = 0;i<n-j;i++)
		{
				if (a[i] > a[i + 1])
				{
					t = a[i + 1];
						a[i + 1] = a[i];
						a[i] = t;
				}
		}

	}
	puts(a);
	return 0;
}
	