#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[100], reverse[100];
    int len, c, index, Begin, End;

    printf("Enter a sentence: ");
    fgets(sentence, 100, stdin);

    len   = strlen(sentence);
    index = 0;

    // Begin checking words from the end of sentence
    Begin = len - 1;
    End   = len - 1;

    while(Begin > 0)
    {
        // If a word is found
        if(sentence[Begin] == ' ')
        {
            // Add the word to the reverse sentence
            c = Begin + 1;
            while(c <= End)
            {
                reverse[index] = sentence[c];
                c++;
                index++;
            }
            reverse[index++] = ' ';

            End = Begin - 1;
        }

        Begin--;
    }

    // Finally add the last word
    for(c=0; c<=End; c++)
    {
        reverse[index] = sentence[c];
        index++;
    }

    // Add NULL character at the end of reverse sentence
    reverse[index] = '\0'; 

    printf("Original sentence: \n%s\n\n", sentence);
    printf("Reverse of sentence: \n%s", reverse);

    return 0;
}