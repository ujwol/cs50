/*
*   Created by : Ujwol Shresth
*   Email contactujwol@gmail.com
*   Date Tue Mar 24 2015
*   Sudo code start here
*   
*/
#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main (int argc, string argv[])
{
    if( argc != 2 || atoi(argv[1]) < 1 )
    {
        printf("Opps!! Something went wrong !!\n");
        return 1;
    }
   
    //set key value
    int key = atoi(argv[1]);
    
    //user input
    string input =  GetString();
    
    
    for (int i = 0, n =strlen(input); i < n; i++)
    {
        if( isalpha(input[i]) )
        {
            if( isupper(input[i]))
            {
                int val = input[i] - 65; 
                int mresult = ( val + key ) % 26; 
                int result = mresult + 65 ;
                printf("%c", result);
            }
            else if ( islower(input[i]))
            {
                int val = input[i] - 97; 
                int mresult = ( val + key ) % 26; 
                int result = mresult + 97  ;
                printf("%c", result);
            }
        }
        else
        {
            printf("%c", input[i] );
        }        
    }
    printf("\n");    
      
}
