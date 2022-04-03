/*
    Author: Sabbir Hossain
    Problem_Name: Write a C program to identify whether a given line is a comment or not.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){

    char s[1000];
    gets(s);

    int strLength = strlen(s);

    if (s[0] == '/' && s[1] == '/'){

        if (s[0] == '/' && s[1] == '/' && s[2] == '/'){
            printf("Comment! But Different Type.");
            exit(0);
        }
        printf("Single Line Comment!");
    }
    else if (s[0] == '/' && s[1] == '*' && s[strLength - 1] == '/' && s[strLength - 2] == '*'){
        printf("Multi Line Comment!");
    }
    else{
        printf("It's not a Comment!");
    }
return 0;
}

/*
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
*/