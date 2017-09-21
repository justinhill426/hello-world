#define _XOPEN_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
    
//cracks a users hashed password using the DES Crypt function
int main(int argc, string argv[])
{
    if (argc!=2)
    {
       printf("ERROR! Missing command line argument... use format ./crack hash\n");
       return 1;
    }
    else
    {
        string plaintext= argv[1];
        for(int i='A'; i<='z'; i++)
        {
           char test[2]= {(char)i, '\0'};
           if (strcmp(crypt(test,"50"), plaintext)== 0)
           {
           printf("%c\n", i);
           }
           else
           {
               for (int j= 'A'; j<='z'; j++)
               {
                 char best[3]= {(char)i, (char)j, '\0'};
               if (strcmp(crypt(best,"50"), plaintext)== 0)
                {
                printf("%c%c\n", i, j);
                }
                else
                {
                  for (int h= 'A'; h<='z'; h++)
                    {
                  char west[4]= {(char)i, (char)j, (char)h, '\0'};
                  if (strcmp(crypt(west,"50"), plaintext)== 0)
                        {
                        printf("%c%c%c\n", i, j, h);
                        }
                    else
                    {
                     for (int k= 'A'; k<='z'; k++)
                    {
                  char nest[5]= {(char)i, (char)j, (char)h, (char)k, '\0'};
                  if (strcmp(crypt(nest,"50"), plaintext)== 0)
                        {
                        printf("%c%c%c%c\n", i, j, h, k);
                        }
                    }
                    }  
                }
           }
        }
        
    }
    
    
  } 
 }
 return 0;
}
