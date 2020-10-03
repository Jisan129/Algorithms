#include <bits/stdc++.h>
using namespace std;
int elements[1000],newElements[1000];

void mergeList( int first, int mid, int last) {

    int i=first,j=mid+1,k=first;
    while (i<=mid&&j<=last){
        if(elements[i]>elements[j]){
            newElements[k++]=elements[j++];
        } else{
            newElements[k++]=elements[i++];
        }
    }
    for (; i <=mid ; i++) {
        newElements[k++]=elements[i];
    }
    for ( ; j <=last ; j++) {
        newElements[k++]=elements[j];
    }
    for ( i = first; i <=last ; i++) {
        elements[i]=newElements[i];
    }


}

void mergeSort( int first, int last) {

    if(first<last){
        int mid=(first+last)/2;
        mergeSort(first,mid);
        mergeSort(mid+1,last);
        mergeList(first,mid,last);

    }


}

int main() {
int a;
cin>>a;
    for (int i = 0; i < a; i++) {
        cin>>elements[i];
    }


    mergeSort(0,a-1);
    for (int i = 0; i < a; i++) {
        cout<<elements[i]<<" ";
    }


}
