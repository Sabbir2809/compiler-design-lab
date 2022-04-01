/*
    Author: Sabbir Hossain
    Problem_Name:  Write a C program to develop a lexical analyzer to recognize a few patterns.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int identifiers = 0, numbers = 0, operators = 0;
    char s[30];

    gets(s);

    int i;
    for(i = 0; s[i] != '\0'; i++){

        char ch = s[i];
        if(isalpha(ch)){
            printf("%c is an Identifier.\n", ch);
            identifiers++;
        }
        else if(isdigit(ch)){
            printf("%c is an Number.\n", ch);
            numbers++;
        }
        else{
            printf("%c is an Operator.\n", ch);
            operators++;
        }
    }
    printf("\nTotal Identifiers: %d\n",identifiers);
    printf("Total Numbers: %d\n",numbers);
    printf("Total Operators: %d\n",operators);
    printf("\nTotal Tokens: %d\n",(identifiers+numbers+operators));

return 0;
}
