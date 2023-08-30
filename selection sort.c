#include<stdio.h>
void selection(int a[],int n);
int main(){
    int b[7]={71,4,14,21,17,2,9};
    int n=7;
    selection(b,n);
    for(int i=0;i<n;i++){
        printf("%d ",b[i]);
    }

}
void selection(int a[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
}