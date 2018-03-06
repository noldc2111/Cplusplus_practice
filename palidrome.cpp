#include <iostream>
#include <cstring>
#include <cctype>
#include <stdio.h>
using namespace std;


/* 
 *  Given a string, find out if it is a palidrone
 *  Ex: Take the word KAYAK, both forward and reverse
 *      it is KAYAK
 *
 */

char *reverse(char);

char *reverse(char *someString){

    char *theReversed = new char[strlen(someString)];
    char temp[100];
    int i = strlen(someString)-1;

    for(int j = 0; j<strlen(someString)+1; j++){
        temp[j] = someString[i-j];
    }

    strcpy(theReversed,temp);

    for(int k=0;k<strlen(theReversed);k++){
        cout << theReversed[k];
    };
    cout << '\n'; 
    return theReversed;

}
int main(){
    char inp[100];
    char *toCompare;
    char *isPalidrome;

    cin.get(inp,100,'\n');
    cin.ignore(100,'\n');
    toCompare = new char[strlen(inp)+1];
    strcpy(toCompare,inp);

    cout << toCompare << endl;
    isPalidrome =  reverse(toCompare);

    if(strcmp(isPalidrome,toCompare) ==  0){
        cout << "String is a palindrome... "<< endl;
    }
}


