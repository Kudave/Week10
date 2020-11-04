#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char vote[10000], A[8] = { 'A','B','C','D','E','F','G' },tmp2;
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, num[1000] = { 0,0,0,0,0,0,0 }, tmp,total=0;
	while (vote[0] != '!') {
		scanf("%s", vote);
		for (int i = 0; i <= strlen(vote); i++) {
			switch (vote[i]) {
			case'A':
				num[0]++;
				break;
			case'B':
				num[1]++;
				break;
			case'C':
				num[2]++;
				break;
			case'D':
				num[3]++;
				break;
			case'E':
				num[4]++;
				break;
			case'F':
				num[5]++;
				break;
			case'G':
				num[6]++;
				break;
			}
		}
	}
	for (int i = 0; i < 7; i++) {
		if (num[i] > 0) {
			total++;
		}
	}
	int i = 0;
	do
	{
		if (i < 8 && num[i] < num[i + 1])
		{
			tmp = num[i + 1];
			num[i + 1] = num[i];
			num[i] = tmp;
			tmp2 = A[i + 1];
			A[i + 1] = A[i];
			A[i] = tmp2;
			i = 0;
		}
		else
		{
			i++;
		}

	} while (i < 7);
	printf("%d", total);
	for (i = 0; i < 7; i++) {
		printf("\n%c %d", A[i], num[i]);
	}
}