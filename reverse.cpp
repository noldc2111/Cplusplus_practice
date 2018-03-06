#include <iostream>
#include <cstring>
#include <cctype>
#include <stdio.h>
using namespace std;

int reverse(char);

int reverse(char *someString){

    char *theReversed = new char[strlen(someString)];
    char temp[100];
    int i = strlen(someString)-1; // remember this: tricky b/c we want to avoid
                                  // null terminating character.
    
    for(int j=0; j<strlen(someString)+1; j++){
      temp[j] = someString[i-j];
    }

    strcpy(theReversed,temp);
    //strcpy(theReversed,someString);

    for(int k =0; k<strlen(someString)+1; k++){
        cout << theReversed[k];
    }
    cout <<'\n';
}


int main(){

    char inp[100];
    char *toReverse;

    //cin >> inp;
    cin.get(inp,100,'\n');
    cin.ignore(100,'\n');
    toReverse = new char[strlen(inp)+1];
    strcpy(toReverse,inp);

    cout << toReverse<<endl;
    reverse(toReverse);
}


