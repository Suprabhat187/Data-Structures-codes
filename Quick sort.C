//PIVOT=LOW
#include<stdio.h>
int partition(int a[],int low,int high){
    int i=low+1;
    int j=high;
    int temp;
    int pivot=a[low];
    do{
    while(a[i]<=pivot){
        i++;
    }
    while(a[j]>pivot){
        j--;
    }
    if(i<j){
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    }
    }while(i<j);
    temp=a[low];
    a[low]=a[j];
    a[j]=temp;
    
    return j;
    
}
void quicksort(int a[],int low,int high){
    int partindex;
    if(low<high){
    partindex=partition(a,low,high);
    quicksort(a,low,partindex-1);
    quicksort(a,partindex+1,high);
    }
}
int main(){
    int a[8]={8,7,6,1,4,7,11,9};
    int n=8;
    int low=0,high=n-1;
    quicksort(a,low,high);
    for(int k=0;k<n;k++){
        printf("%d ",a[k]);
    }
    return 0;
}