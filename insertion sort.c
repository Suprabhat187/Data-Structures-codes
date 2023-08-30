#include<stdio.h>
void insert(int a[],int n){
    int j,key;
    for(int i=1;i<n-1;i++){                ///passes
        key=a[i];
        j=i-1;
        while(j>=0 && key<a[j]){
            a[j+1]=a[j];    
            j--;
        }
        a[j+1]=key;
    }   
}
int main(){
    int a[8]={87,21,54,71,7,18,187,23};
    int n=8;
    insert(a,n);
    for(int i=0;i<8;i++){
        printf("%d ",a[i]);
    }
}