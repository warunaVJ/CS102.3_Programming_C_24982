#include <stdio.h>

int main()
{
    char word;
    printf("Enter a single character in the alphabet: ");
    scanf(" %c", &word);

    switch (word)
    {
        case 'A':
        case 'a':
            printf("The word is a vowel");
            break;
        case 'E':
        case 'e':
            printf("The word is a vowel");
            break;
        case 'I':
        case 'i':
            printf("The word is a vowel");
            break;
        case 'O':
        case 'o':
            printf("The word is a vowel");
            break;
        case 'U':
        case 'u':
            printf("The word is a vowel");
            break;
        default:
            printf("This word is not a vowel");
            break;
    }
}
