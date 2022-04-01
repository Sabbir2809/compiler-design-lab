/*
    Author: Sabbir Hossain
    Problem_Name: Write a C program to identify whether a given line is a comment or not.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char com[100]; // character Type array
    int i = 2; // com[0]='/', com[1]='/', com[0]='/', com[1]='*'
    int flag = 0; // Counter Value

    // Input
    cin >> com;

    // if Condition
    if(com[0] == '/'){

        if(com[1] == '/'){
            cout << "It is a Single Line Comment.\n";
        }
        else if(com[1] == '*'){

            for(i = 2; i <= 100; i++){

                if(com[i] == '*' && com[i+1] == '/'){
                    cout << "It is a Multi line Comment.\n";
                    flag = 1;
                    break;
                }
                else{
                    continue;
                }
            }
            if(flag == 0){
                cout << "It is Not a Comment.\n";
            }
        }
        else{
            cout << "It is Not a Comment.\n";
        }
    }
    else{
        cout << "It is Not a Comment.\n";
    }
return 0;
}


/*
#include<stdio.h>
#include<conio.h>
void main()
{
    char com[30];
    int i=2,a=0;
    clrscr();
    printf("\n Enter comment:");
    gets(com);
    if(com[0]=='/')
    {
        if(com[1]=='/')
    printf("\n It is a comment");
    else if(com[1]=='*')
    {
        for(i=2;i<=30;i++)
        {
            if(com[i]=='*'&&com[i+1]=='/')
            {
                printf("\n It is a comment");
                a=1;
                break;

            } else continue;

        }
        if(a==0)
        printf("\n It is not a comment");

    } else printf("\n It is not a comment");

    } else printf("\n It is not a comment");
    getch();

}
*/
