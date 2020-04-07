#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Print out a double half-pyramid of user-specified height.
    // Height cannot exceed 23.
    
    int brickHeight;
    
    // Ask user for brick height
    // Loop until a usable answer is acquired (0-23)
    
    do
    {
        printf("How many bricks high should Mario clear? ");
        
        // Get user input
        brickHeight = get_int();
        
    } while (brickHeight < 0 || brickHeight > 23);

    // Build pyramids.
    int n = brickHeight;
    
    // for each row
    for (int i = 0; i < n; i++)
    {
        // Calculate max width of spaces
        int w = (n-i)-1;
        
        // Print out the blank spaces, if any.
        for (int j = 0; j < w; j++)
        {
            printf(" ");
        }
        
        // Print out the Bricks
        for (int k = 0; k<i+1; k++)
        {
            printf("#");
        }
        
        // Print out the set gap of two spaces
        printf("  ");
        
        // Print out mirrored bricks
        for (int l = 0; l < i+1; l++ )
        {
            printf("#");
        }
        // When it reaches the end of the row, start a new row
        printf("\n");
    }
    
}