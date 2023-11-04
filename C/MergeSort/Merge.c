#include <stdio.h>

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d |", arr[i]);
    }
    printf("\n");
}

void merge(int *arr, int mid, int left, int right){
    int i, j, k, n1,n2 ;
    n1=mid - left+1;
    n2=right-mid;

    int LA[n1],RA[n2];
    for(i=0; i<n1; i++){
        LA[i]=arr[left+i];
    }
    for(int j=0; j<n2; j++){
        RA[j]=arr[mid+1+j];
    }

     i=0;
     j=0;
     k =left;

    while (i<n1 && j<n2)
    {
        if(LA[i]<=RA[j]){
            arr[k]=LA[i];
            i++;
        }
        else{
            arr[k]=RA[j];
            j++;
        }
        k++;
    }
        while (i < n1) {
        arr[k] = LA[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = RA[j];
        j++;
        k++;
    }
    
}

void mergeSort(int *arr, int left, int right)
{
   
        if (left < right){
    int mid = (right + left) / 2;

            mergeSort(arr, left, mid);
            mergeSort(arr, mid + 1, right);
            merge(arr,mid,left,right);
            
        }
    
}

int main()
{
    int n, left, right;
    int arr[7] = {12, 9, 5, 7, 6, 5, 23};

    n = sizeof(arr) / sizeof(arr[0]);
    left = 0;
    right = n - 1;

    printArray(arr, n);
    mergeSort(arr,0,n-1);
    printArray(arr, n);

    return 0;
}
