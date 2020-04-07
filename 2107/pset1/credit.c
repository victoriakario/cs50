#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Ask user for Credit Card number.
    // Check for Card Type (eg, Amex, MC, Visa)
    // Check number for validity
    
    
    long long cardNumber;
    string cardCompany;
    long long tempcc = 0;
    int sumcc = 0;
    int tempdiv = 0;
    int digits = 0;
    int cardType = 0;
    
    printf("Enter a Credit Card Number: ");
    cardNumber = get_long_long();
    
    // Put the card number into a temporary file
    tempcc = cardNumber;
    
    // Loop through the entire number and run the calculations
    while(tempcc > 0)
    {
        // Grab the last number and add it straight to the sumcc
        sumcc += tempcc%10;
        // Count each lopped off number
        digits++;
        
        // Take the second to last number and multiply it by 2
        tempcc /= 10;
        
        // Grab the next number and add it straight to the tempdiv after multiplying by 2
        tempdiv = tempcc%10*2;
        
        // Now remove that one
        tempcc /= 10;
        
        // Check the doubled number and add the digits together if it is 10 and above
        if (tempdiv >= 10)
        {
            tempdiv = tempdiv/10 + tempdiv%10;
        }
        // Add the numbers to the sumcc
        sumcc += tempdiv;
        // Count the next digit
        digits++;
        
        // Before continuing, check to see if this is the first two digits
        if (tempcc > 9 && tempcc < 100)
        {
            // If it is the first two digits, capture the numbers.
            cardType = tempcc;
        }
        
    }


    // Once the calculations are finished, check the card type.
    if (sumcc % 10 == 0)
    {
        if (cardType/10 == 4)
        {
            cardCompany = "VISA\n";
        }
        else if (cardType == 34 || cardType ==37)
        {
            cardCompany = "AMEX\n";
        }
        else if (cardType >=50 && cardType <= 55)
        {
            cardCompany = "MASTERCARD\n";
        }
        else
        {
            cardCompany = "INVALID\n";
        }        
    } else {
        cardCompany = "INVALID\n";
    }

    
    // Print the credit card answer.
    printf("%s",cardCompany);
    
}