#include <stdio.h>

int main()
{

    int arr[] = {1,-22,10,300,8,7,55,-10};
    int length=sizeof(arr)/sizeof(int);

    for(int i=0;i<length-1;i++){

        int min=i;

        for(int j=i+1;j<length;j++){
            if(arr[j]<arr[min])
            min=j;

        }


        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;

    }


    for(int i=0;i<length;i++){
        printf("%d\n",arr[i]);
    }

    return 0;
}
