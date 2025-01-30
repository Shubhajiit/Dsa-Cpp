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
// Print ALL pairs ------------
void printAllpair(int arr[], int size){
    for(int i=0 ; i<size ; i++){
        for(int j=0 ; j<size ; j++){
            cout<<arr[i]<<" , "<<arr[j]<<endl;
        }
    }
}

// Two Sum == Target Element----------- Your can do it by Two pointer teqnices. for better Time and Space Complexity 
int TwoSum(int arr[], int size, int target){
    int ans = -1;
    for(int i=0 ; i<size; i++){
        for(int j=0 ; j<size ; j++){
            if(arr[i]+arr[j]==target){
                ans =1;
            }
        }
    }
    return ans;
}

// Triplet count of an Array-------
void total_triplet_count(int arr[], int size){
    // to count how much triplet are there
    int count=0;
    for(int i=0 ; i< size ; i++){
        for(int j=0 ; j<size ; j++){
            for(int k =0; k<size; k++){
                cout<<arr[i]<<", "<<arr[j]<<" ,"<<arr[k]<<endl;
                count++;
            }
        }
    }

    cout<<"Total Triplet count : "<<count<<endl;
}




int main(){

    int size;
    cout<<"Enter the size of an array: "<<endl;
    cin>>size;

    int arr[100];
    cout<<"Enter The element of an array: "<<endl;
    for(int i=0 ; i<size ; i++){
        cin>>arr[i];
    }

    int target_Element;
    cout<<"Enter the target element: "<<endl;
    cin>>target_Element;

    bool final_ans = targetElement(arr,size,target_Element);
    cout<<final_ans;

    int final_index = index_of_targetElement(arr, size , target_Element);
    if(final_index != -1){
        cout<<"Element Found at:  "<<final_index;
    }else{
        cout<<"Element Not found"<<endl;
    }


    int Max = findMax_Element(arr,size);
    cout<<Max;

    count(arr,size);
    ExtremePrinting(arr, size);
    ReverseArray(arr,size);
    Flips(arr, size);
    for (int i = 0; i <size; i++)
    {
        cout<<arr[i]<<" ";
    }

    int arr[] = {10,20,30,5};
    int size = 4;

    total_triplet_count(arr, size);

    int ans = TwoSum(arr, size , 35);
    cout<<ans;
    
    printAllpair(arr,size);
    
    return 0;
}

