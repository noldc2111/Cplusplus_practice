
/*
 *  Binary seach implementation:
 *
 *
 *
 */

#include<iostream>
#include<cctype>
#include<cstring>
#include<stdio.h>
using namespace std;

int binary_search(int [], int l, int r, int target);

int binary_search(int arr [], int l, int r, int target){

    if(r >= l){
        int mid = l + (r-l)/2; // find the mid point:
                               // at first it will be 0 + (size-0)/2
                               // but after the next iteration, l could change to be
                               // the mid point plus one
                               // or r could be the mid point minus 1....

        if(arr[mid] == target)
            return mid;
        if(arr[mid] > target)
            return binary_search(arr,l,mid-1,target);
        if(arr[mid] < target)
            return binary_search(arr,mid+1,r,target);
    }
    return -1;




}

int main(){

    int array [] = {1,2,3,4,6,7,8,10,24,56,78};

    int right = sizeof(array)/sizeof(array[0]);
    //cout << sizeof(array) /sizeof(array[0]) <<endl; 
    int target = 10;
    int res = binary_search(array,0,right-1,target);

    cout << "this is the index: " << res<< ", and this is the value: "<< array[res]<< endl;

}
