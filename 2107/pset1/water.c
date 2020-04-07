#include <cs50.h>
#include <stdio.h>


int main(void)
{
    // Variable declaration
    
    int gallon = 128;
    float shower = 1.5 * gallon;
    int showertime = 0;
    
    
    while (showertime <= 0)
    {
        // Ask user for shower-time in Minutes
        
        printf("Please enter the number of whole minutes you shower: ");
        
        // Get shower time in minutes
        
        showertime = get_int();
    }
    
    // Calculate ounces of water per minute
    
    int wasted = showertime*shower;
    
    // Translate ounces into 16oz Bottles of Water
    
    printf("Your shower takes about %i 16oz bottles of water.\n", wasted/16);
}