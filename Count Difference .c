#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countdiff(char *word1, char *word2)
{
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    int flag = 0;
    
    if (len1 != len2)
    {
        return 0;
    }
    for (int i = 0; i < len1; i++)
    {
        if (word1[i] != word2[i])
        {
            flag++;
        }
        if (flag > 1)
        {
            return 0;
        }
    }
    return flag == 1;
}
int main()
{
    char current[50];
    char previous[50] = "";

    while (1)
    {
        printf("Enter a word: ");
        fgets(current, sizeof(current), stdin);

        int len = strlen(current);
        if (current[len - 1] == '\n')
        {
            current[len - 1] = '\0'; 
        }
        if (strlen(current) > 50)
        {
            printf("The word should have a maximum of 50 letters.\n");
            continue;
        }
        if (previous[0] == '\0')
        {
            strcpy(previous, current);
            printf("Word chain started.\n");
        }
        else if (countdiff(previous, current))
        {
            strcpy(previous, current);
            printf("Word '%s' added to the chain.\n", current);
        }
        else
        {
            printf("Word '%s' does not match the chain. Program ended.\n", current);
            break;
        }
    }
    return 0;
}
