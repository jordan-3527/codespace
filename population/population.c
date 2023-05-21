#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size

    int start_size;
    do
    {
        start_size = get_int("Starting Population Size: ");
    }
    while(start_size < 9);

    // TODO: Prompt for end size

    int end_size;
    do
    {
        end_size = get_int("Ending Population Size: ");
    }
    while(start_size > end_size);

    // TODO: Calculate number of years until we reach threshold

    int years = 0;
    do
    {
        start_size = start_size + (start_size/3) - (start_size/4);
        years++;
    }
    while(start_size < end_size);

    // TODO: Print number of years

    printf("Number of Years: %i, years");
}
