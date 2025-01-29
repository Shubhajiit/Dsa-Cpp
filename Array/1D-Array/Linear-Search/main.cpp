// Linear Searching-------------------------------------------
#include<iostream>
#include<math.h>
#include<limits.h>
using namespace std;

// Find The Target Element----------
bool targetElement(int arr[], int size, int target){
    for(int i=0 ; i<size ; i++){
        if(arr[i]==target){
            return true;
        }
    }
    return false;
}


// Find Index of an Target Element---------
int index_of_targetElement(int arr[], int size , int target){
    int index=-1 ;
    for(int i=0 ; i<size ; i++){
        if(arr[i]==target){
            index = i;
            break;
        }
    }
    return index;
}

// Find Max_Element of an Array---------
int findMax_Element(int arr[], int size){
    int ans = INT_MIN;
    for(int i=0 ; i<size ; i++){
        if(arr[i]>ans){
            ans = arr[i];
        }
    }
    return ans;
}


// count 0's/1's----------------
void count(int arr[], int size){
    int ZeroesCount =0;
    int OneCount=0;
    for(int i =0 ; i<size ; i++){
        if(arr[i]==0){
            ZeroesCount++;
        }else if(arr[i]==1){
            OneCount++;
        }
    }
    cout<<"Total Zeroes: "<<ZeroesCount<<endl;
    cout<<"Total One: "<<OneCount<<endl;
    
}


// ExtremePrinting----------------
void ExtremePrinting(int arr[], int size){
    int i=0;
    int j= size-1;
    while(i<=j){
        if(i==j){
            cout<<arr[i]<<" ";
            break;
        }
        else{
            cout<<arr[i]<<" ";
            i++;
            cout<<arr[j]<<" ";
            j--;
        }
    }
}

// *********Reversed Array----------------
void ReverseArray(int arr[], int size){
    int i=0;
    int j =size-1;
    while(i<j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

// FLips 0 to 1 And 1 to 0------------
void Flips(int arr[], int size){
    for(int i=0 ; i<size ; i++){
        if(arr[i]==0){
            arr[i]=1;
        }
        else if(arr[i]==1){
            arr[i]=0;
        }
    }
}


