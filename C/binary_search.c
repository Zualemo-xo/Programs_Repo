#include<stdio.h>  
int search(int[], int, int, int);  
void main ()  
{  
  int n,i,arr[20];
  printf("Enter the value of N ");  
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  int no, loc=-1;   
  printf("Enter the number which you want to search ");  
  scanf("%d",&no);  
  loc = search(arr, 0, 9, no);  
  if(loc != -1)   
  {  
    printf("Number found at loc %d",loc);  
  }  
  else  
  {  
    printf("Number not found");  
  }  
}   
int search(int a[], int start, int end, int no)  
{  
  int mid;  
  if(end >= start)   
  {     
    mid = (start + end)/2;  
    if(a[mid] == no)  
    {  
      return mid+1;  
    }  
    else if(a[mid] < no)   
    {  
      return search(a,mid+1,end,no);  
    }  
    else   
    {  
      return search(a,start,mid-1,no);  
    }  
    
  }  
  return -1;   
}  
