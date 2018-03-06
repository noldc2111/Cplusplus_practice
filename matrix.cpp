#include<stdio.h>
#include<iostream>
#include<cstring>
using namespace std;

/*
 * Given a matrix find the sum of the 
 * query box
 *   A------B
 *   |      |
 *   C------D
 *
 *
*/
int getSum(int a_x,int a_y,int d_x,int d_y, int mat[10][10]);


int getSum(int a_x,int a_y,int d_x,int d_y, int mat[10][10]){

    int sum = 0;
    for(int i= a_x; i<d_x+1; i++){
        for(int j=a_y; j<d_y+1; j++){
            sum += mat[i][j];
        }
    }

    return sum;
}


int main(){

    int mat[10][10] = {};
    for(int i =0; i< 10;i++){
        for(int j=0; j<10; j++){
            if(j % 10 < 5){
                mat[i][j] = 1;
            }
            cout << mat[i][j] <<" ";
        }
        cout<< '\n';
    }

    int val = getSum(0,0,2,4,mat);

    cout << '\n' << val <<'\n';
    
    return 0;
}
