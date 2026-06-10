#include<stdio.h>
#define max 100;
int merge(int a[],int low,int high,int mid,int n){
    int i=low;
    int j=mid+1;
    int k=low;
    int temp[100];
    while(i<=mid && j<=high){
        if(a[i]<a[j]){
            temp[k++]=a[i++];
        }
        else{
            temp[k++]=a[j++];
        }
    }
    while(i<=mid){
        temp[k++]=a[i++];
    }
    while(j<=mid){
        temp[k++]=a[j++];
    }
    for(i=0;i<high;i++){
        a[i]=temp[i];
    }
}
int mergesort(int a[],int low,int high){
    int n=8;
    int mid=(low+high)/2;
    mergesort(a,low,mid);
    mergesort(a,mid+1,high);
    merge(a,low,high,mid,n);
}
int main(){
    int a[]={4,1,6,5,7,11,8,2};
    mergesort(a,0,7);
    int i;
    for(i=0;i<=7;i++){
        printf("%d",a[i]);
    }
}