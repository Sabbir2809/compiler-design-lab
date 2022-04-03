/*
    Author: Sabbir Hossain
    Problem_Name: Write a C program to recognize strings under 'a*', 'a*b+', 'abb'.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

  char s[1000];
  gets(s);

  for (int i = 0; i < strlen(s); i++){
    if (s[i] == '"' && s[strlen(s) - 1] == '"'){
      cout << "This statement is String " << endl;
      break;
    }
    else{
      cout << "There is no string" << endl;
      break;
    }
  }
return 0;
}

/*
#include<stdio.h>

int main() {
  char str[1000];
  gets(str);

  int len = strlen(str);
  int i = 0, state = 0;
  
  for (i = 0; i < len; i++) {
    if (state == 0 && str[i] == 'a')
      state = 0;
    else if (state == 0 || state == 1 && str[i] == 'b')
      state = 1;
    else if (state == 1 && str[i] == 'a') {
      state = 2;
      break;
    }
  }
  if (state == 1 || state == 0)
    printf("%s is recognized under a*,a*b+,abb\n", str);
  else
    printf("%s is not recognized under a*,a*b+,abb\n", str);

return 0;
}
*/