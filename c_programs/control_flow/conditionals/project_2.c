/*User enters one character.
Program prints:
Character: A
ASCII value: 65
Type: Alphabet
Case: Uppercase
Vowel/Consonant: Vowel
Next character: B
Previous character: @*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the Charcter: ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("Type: Alphabet\n");
        printf("Case: Uppercase\n");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("Type: Alphabet\n");
        printf("Case: Lowercase\n");
    }
    else 
    printf("Its Special charcter\n");
    switch(ch)
    {
        case 'A': printf("A is vowel\n");
        break;
        case 'E': printf("E is vowel\n");
        break;
        case 'I': printf("I is vowel\n");
        break;
        case 'O': printf("O is vowel\n");
        break;
        case 'U': printf("U is vowel\n");
        break;
        case 'a': printf("a is vowel\n");
        break;
        case 'e': printf("e is vowel\n");
        break;
        case 'i': printf("i is vowel\n");
        break;
        case 'o': printf("o is vowel\n");
        break;
        case 'u': printf("u is vowel\n");
        break;
        default: printf("Input is not a alphabate\n");
    }
    printf("Next charcter is %c\n",ch+1);
    printf("Previous charcter is %c\n",ch-1);
}