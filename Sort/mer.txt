#include <bits/stdc++.h>
using namespace std;

void mergeList(int elements[1000], int first, int mid,int last);

void mergeList(int *elements, int first, int mid, int last) {

    int newElements[1000],i=first,j=mid+1,k=0;
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

}

void mergeSort(int elements[100], int first, int last) {

    int mid=(first+last)/2;
    if(first!=last){
        mergeSort(elements,first,mid);
        mergeSort(elements,mid+1,last);
        mergeList(elements,first,mid,last);

    }


}

int main() {
int a,elements[100];
cin>>a;
    for (int i = 0; i < a; i++) {
        cin>>elements[i];
    }


    mergeSort(elements,0,a);



}



