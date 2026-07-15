/*Calculate the number of grains of wheat on a chessboard.
A chessboard has 64 squares. Square 1 has one grain, square 2 has two grains,
square 3 has four grains, and so on, doubling each time.
Write code that calculates:
the number of grains on a given square
the total number of grains on the chessboard*/
#include<stdio.h>
#include <stdint.h>
int main()
{
    uint32_t n;
    uint32_t square_value;
    uint32_t total_square=0;
    printf("Enter the place to want nuber of grains: ");
     if(scanf("%d",&n) != 1 ||n < 1 || n > 64)
        {
            printf("Error please enter the valid number");
        }
    square_value = 1ULL << (n-1);
    printf("The number of grains in that square is %llu\n",square_value);
    for(int i = 0; i < 65; i++)
    {
        total_square += 1ULL << (i-1);
    }
    printf("The total number of grain in 64 squares is %llu",total_square);
}
