#include "자료구조5.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main(void) {
	int i;
	int n = 10;
	element list[MAX_ELEMENT];
	for (i = 0; i < n; i++)
		list[i].key = rand() % n;
	heap_sort(list, n);
	for (i = 0; i < n; i++)
		printf("%d\n", list[i].key);
	system("pause");
	return 0;
}