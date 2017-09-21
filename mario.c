#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int height;
    do
    {
    printf("Height: ");
    height = GetInt();
    
    int spaces = height-1;
    int hashes= 0;
    
    if(height<=23 && height >0)
    {
    for (int y=height; y>0; y--)
        {
            for (int j=spaces; j>0; j--)
            {
                printf(" ");
            }
            spaces--;
            
            for (int i=0; i<=hashes; i++)
            {
                printf("#");
                
            }
            
            printf(" ");
            printf(" ");
            for (int i=0; i<=hashes; i++)
            {
                printf("#");
            }
           
            hashes++;
            printf("\n");
        }
    }
       else
    {
        if (height==0)
        {
            return 0;
        }
        
        else printf("Height must be a positive number less than 23...try again\n");
    }
    }
    while(height < 0 || height > 23);
    
}
    
