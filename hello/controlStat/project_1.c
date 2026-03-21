/*This is very close to how low-level input parsing works in embedded systems.
Program behavior
User enters one character.

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
    printf("**Value Converter to for values**\n");
    printf("Enter the charcter: ");
    scanf("%c",&ch);
    printf("ASCII value: %d\n",ch);
    if(ch>='A' && ch<='Z')
    {
        printf("Case: Uppercase\n");
    }
    else if(ch>='a'&&ch<='z')
    {
        printf("Case: Lowercase\n");
    }
    (ch=='a'||ch=='A')||(ch=='e'||ch=='E')||(ch=='i'||ch=='I')||(ch=='o'||ch=='O')||(ch=='u'||ch=='U')?printf("%c is vowel\n",ch):printf("%c is a consenet \n",ch);
    printf("Next Charcter: %c\n",ch+1);
    printf("Previous Charcter:%c\n",ch-1);
}