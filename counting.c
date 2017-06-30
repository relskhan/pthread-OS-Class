#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define num_threads 5

char *list = "abcdefghijklmnopqrstuvwxyz";
int *divList(int MAX, int pos);

int main(int argc, char *argv[])
{
	int i, n;

	n = strlen(list); 
	for (i = 0; i < num_threads; i++){
		if (i <= n % num_threads)
			printf("elements: %d\n", divList(n + 1, i));
		else
			printf("elements: %d\n", divList(n, i));
	}	
}

int *divList(int MAX, int pos)
{
	int i = 0, j;
	int *elements = malloc(MAX + 1);

	for (j = pos; j < MAX; (j = j + num_threads)){
		elements[i] = *(list + j);
		i++;
	}
	return elements;
}