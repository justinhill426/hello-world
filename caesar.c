#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


//implements the caesar cipher to encode a message
int main(int argc, string argv[])
{
    if (argc==2)
    {
       int k= atoi(argv[1]);
       printf("plaintext:");
       string h= get_string();
       for(int i=0;i<strlen(h);i++)
       {
           if(h[i]>='a'&& h[i]<='z')
           {
           h[i]=tolower((((h[i]+k)-97)%26)+97);
           }
           else if(h[i]>='A'&& h[i]<='Z')
           {
           h[i]=toupper((((h[i]+k)-65)%26)+65);
           }
       }
       printf("ciphertext:%s\n", h);
       
    }
    else
    {
        printf("ERROR! Missing command line argument\n");
        return 1;
    }
}

