
// Linear Searching----------------------------------->>>>>

#include <iostream>
using namespace std;

bool targetElement(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return true;
        }
    }
    return false;
}

int index_of_targetElement(int arr[], int size, int target)
{
    int index = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            index = i;
            break;
        }
    }
    return index;
}

int main()
{

    // Find The Target Element----------

    int size;
    cout << "Enter the size of an array: " << endl;
    cin >> size;

    int arr[100];
    cout << "Enter The element of an array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int target_Element;
    cout << "Enter the target element: " << endl;
    cin >> target_Element;

    bool final_ans = targetElement(arr, size, target_Element);
    cout << final_ans;

    int final_index = index_of_targetElement(arr, size, target_Element);
    if (final_index != -1)
    {
        cout << "Element Found at:  " << final_index;
    }
    else
    {
        cout << "Element Not found" << endl;
    }
    
    return 0;
}
