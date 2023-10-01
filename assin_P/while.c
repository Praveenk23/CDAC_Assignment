#include<stdio.h>

int main() {
	int n = 0;

	while(1) {
		n++;
		if (n == 10) {
			break;
		}
	}
	printf("%d\n", n);
	return 0;
}
