#include <stdio.h>

int main()
{
    char word[100];
    int vowel[10] = {0};
    int i;

    printf("Enter a sentence: ");
    gets(word);

    for (i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' ||
            word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U')
        {
            vowel[0]++;
            if (word[i] == 'a')
            {
                vowel[1]++;
            }

            else if (word[i] == 'e')
            {
                vowel[2]++;
            }

            else if (word[i] == 'i')
            {
                vowel[3]++;
            }

            else if (word[i] == 'o')
            {
                vowel[4]++;
            }

            else if (word[i] == 'u')
            {
                vowel[5]++;
            }
            else if (word[i] == 'A')
            {
                vowel[6]++;
            }
            else if (word[i] == 'E')
            {
                vowel[7]++;
            }
            else if (word[i] == 'I')
            {
                vowel[8]++;
            }
            else if (word[i] == 'O')
            {
                vowel[9]++;
            }
            else if (word[i] == 'U')
            {
                vowel[10]++;
            }
        }
    }

    printf("Total vowels: %d\n", vowel[0]);
    return 0;
}