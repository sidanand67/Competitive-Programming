#include <stdio.h>
#include <string.h>

int main()
{
    char s[100000];
    scanf("%s", s);
    int counter = 0;
    int len = strlen(s);

    // as long as the number consists of more than 1 digit,
    // the condition is true
    while (len > 1)
    {
        int sum = 0;
        for (int i = 0; i < len; i++)
        {
            // add all the digits to sum
            sum += s[i] - '0';
        }

        // update the string that we are working on
        itoa(sum, s, 10);
        
        // also update its length
        len = strlen(s);

        // increment the counter to print at the end
        ++counter;
    }

    printf("%d", counter);

    return 0;
}