//Insertion sort of an array

#include<stdio.h>

int insertionsort(int a[],int n){         //Pass the array and it's size as parameters to the function
	
	int i,j,key;                         //Key is the current element which has to be sorted
	 
	for(i=1;i<n;i++)                  
	{
		key=a[i];                      //The elements to the left of the key are sorted and the elements to the right of it are unsorted
		j=i-1;                          
		
		while(j>=0 && a[j]>key)       //Checking if j is a valid index and placing the key in it's appropriate position so as to sort the array
		{
			a[j+1]=a[j];              //Shifting the elements from that position onwards to their right to create vacancy for the key
			j=j-1;
		}
		
		a[j+1]=key;                 //Placing the key in it's sorted position
	}
	
	printf("\n");
	printf("\nSorted array:\n");
    for(i=0;i<n;i++)
    {
    	printf("%d\n",a[i]);        //Printing the sorted array
	}
       
}

int main(){
	int n,a[1000],i;                           //Declare the array and it's size
	
	printf("Enter the size of the array:");
	scanf("%d",&n);     // Read the size of the array
	
	printf("\nEnter the array elements:\n");
	for(i=0;i<n;i++)
	   scanf("%d",&a[i]);            // Read the array elements one by one
	   
	insertionsort(a,n);            // Call the insertion sort function
}
