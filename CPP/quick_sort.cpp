#include <iostream>
using namespace std;

void swap(int arr[], int i, int j)                      //swap 2 elements
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l, int r)                  //create a pivot point and get it to its right position
{

    int pivot = arr[r];                                 //pivot point can be changed to any random point too
    int i = l - 1;                                      //will point to the largest number smaller than pivot after for loop

    for (int j = l; j < r; j++)                         
    {
        if (arr[j] < pivot)                             //swap every element which is smaller than pivot
        {
            i++;
            swap(arr, i, j);
        }
    }

    swap(arr, i + 1, r);                                //bring pivot to its correct position
    return i + 1;
}

void quicksort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pi = partition(arr, l, r);                  //create pivot point and put it to right spot
        quicksort(arr, l, pi - 1);                      //quicksort called for the left and right subarrays of pivot
        quicksort(arr, pi + 1, r);
    }
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quicksort(arr, 0, n - 1);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}