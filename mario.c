#include <stdio.h>

void print_row(int bricks);

int main(void)
{   
    int height;

    do
    {
        printf("Height: "); scanf("%i", &height);
    } while (height < 1 || height > 1000);
    

	for (int i = 1; i <= height; i++)
	{
		print_row(i);
	}
}


void print_row(int bricks)
	{
		for (int i = 0; i < bricks; i++)
		{
			printf("#");
		}
		printf("\n");
	}
