#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *get_string(char *prompt);
char *concatenate(char *word1, char *word2);

int main()
{
    char *first = get_string("Enter a word: ");
    char *second = get_string("Enter a second word: ");

    printf("The concatenated string is: %s", concatenate(first, second));
}

char *concatenate(char *word1, char *word2)
{
    int i;
    int word1length = strlen(word1);
    int word2length = strlen(word2);
    int total_length = word1length + word2length + 1;

    char *cc_word = (char *)malloc(total_length);

    if (cc_word == NULL)
    {
        return NULL;
    }
    
    for (i = 0; i < word1length; i++)
    {
        cc_word[i] = word1[i];
    }
    for (i; i < total_length; i++)
    {
        cc_word[i] = word2[i - word1length];
    }
    
    return cc_word;
}


char *get_string(char *prompt)
{
    printf("%s", prompt);

    int size = 2;
    char *input = (char *)malloc(size);

    int index = 0;
    int c;

    if (input == NULL)
    {
        return NULL;
    }
    
    while (1)
    {
        c = getchar();

        if (c == '\n' || c == EOF)
        {
            input[index] = '\0';
            break;
        }

        input[index] = (char)c;
        index ++;

        if (index >= size - 1)
        {
            size ++;
            char *temp = (char *)realloc(input, size);

            if (temp == NULL)
            {
                free(input);
                return NULL;
            }
            input = temp;
        }

    }
    return input;
    
}