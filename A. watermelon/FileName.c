#include <stdio.h>

int main() {
	int w, sum, i = 2, r, ctr = 0;
	printf("Enter the weight of the watermelon: ");
	scanf("%d", &w);
	while (w > ctr) {
		if (w % i == 0) {
			r = w / i;
			printf("the boys can divide the watermelon into %.0d parts and %.0d weight \n", i, r);
			i = i + 2;
		}
		else if (w % i != 0) {
			printf("the boys cannot divide the watermelon into equal parts:<");
			break;
		}
		ctr++;

	}
	return 0;
}
