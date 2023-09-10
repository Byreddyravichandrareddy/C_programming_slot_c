#include <stdio.h>

void SortArray(int Size, int *parr)
{
	int i, j, temp;
	i = 0;

	while (i < Size)
	{
		j = i + 1;
		while (j < Size)
		{
			if (*(parr + j) < *(parr + i))
			{
				temp = *(parr + i);
				*(parr + i) = *(parr + j);
				*(parr + j) = temp;
			}
			j++;
		}
		i++;
	}
	printf("\nSorted Array Elements using Pointer = ");
	i = 0;
	while (i < Size)
	{
		printf("%d  ", *(parr + i));
		i++;
	}
}
void acceptArrayItems(int Size, int *parr)
{
	printf("\nPlease Enter %d elements of an Array = ", Size);

	int i = 0;
	while (i < Size)
	{
		scanf("%d", parr + i);
		i++;
	}
}
int main()
{
	int Size;

	printf("\nEnter Array Size to Sort using Pointers = ");
	scanf("%d", &Size);

	int arr[Size];
	acceptArrayItems(Size, arr);

	SortArray(Size, arr);
	printf("\n");
}
