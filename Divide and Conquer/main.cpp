#include <bits/stdc++.h>
using namespace std;
int elements[1000],newElements[1000];
map<int,int> table;

void mergeList( int first, int mid, int last) {

    int i=first,j=mid+1,k=first;
    while (i<=mid&&j<=last){
        if(elements[i]>elements[j]){
            newElements[k]=elements[j];
            table.insert(pair<int,int>(elements[j++],k++));


        } else{
            newElements[k]=elements[i];
            table.insert(pair<int,int>(elements[i++],k++));

        }
    }
    for (; i <=mid ; i++) {
        newElements[k]=elements[i];
        table.insert(pair<int,int>(elements[i],k++));

    }
    for ( ; j <=last ; j++) {
        newElements[k]=elements[j];
        table.insert(pair<int,int>(elements[j],k++));
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
    cout<<endl;
    map <int,int>::iterator it;
    for (it=table.begin();it!=table.end();it++) {
        cout<<it->first<<"  "<<it->second<<endl;
    }


}





