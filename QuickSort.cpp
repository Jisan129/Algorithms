#include <bits/stdc++.h>

void insertSortSwapping(int elements[100],int start,int last);

void binarySort(int elements[],int start,int last) {

    int mid=(start+last)/2;
    if(start!=last){
        binarySort(elements,start,mid);
        insertSortSwapping(elements,start,mid);

        binarySort(elements,mid+1,last);

        insertSortSwapping(elements,mid+1,last);
    }


}
using namespace std;

void insertSort(int elements[100], int range) {
    for (int i = 1; i < range; i++) {
        if(elements[i]>elements[i+1]){
            swap(elements[i],elements[i+1]);

        }
    }
}


void printArray(int elements[100], int a) {
    cout<<"Sorted Array"<<endl;
    for (int i = 1; i <=a; i++) {
        cout<<elements[i]<<" ";
    }
}

int main() {

    int a,elements[100];
    cin>>a;
    for (int i = 1; i <=a; i++) {
        cin>>elements[i];
    }

    //    std::cout << "Hello, World!" << std::endl;
   binarySort(elements,1,a);
   insertSort(elements,a);
   printArray(elements,a);
    return 0;
}
void insertSortSwapping(int elements[100],int start,int last) {
    if(elements[start]>elements[last]){
        swap(elements[start],elements[last]);
    }
}



