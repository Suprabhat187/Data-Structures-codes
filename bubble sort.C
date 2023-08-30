#include<stdio.h>
void bubble(int a[],int n);
int main(){
    int a[7]={71,4,14,21,17,2,9};
    int n=7;
    bubble(a,n);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
void bubble(int a[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;    
            }
        }
    }

}
