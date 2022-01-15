#include<bits/stdc++.h>
using namespace std;
void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void insertionSort(int *array, int size) {
   int key, j;
   for(int i = 1; i<size; i++) {
      key = array[i];
      j = i;
      while(j > 0 && array[j-1]>key) {
         array[j] = array[j-1];
         j--;
      }
      array[j] = key;  
   }
}
void inserAtSortedArray(int *arr,int element,int &length){
    int index=0;
    while (element>=arr[index])
    {
        index=index+1;
    }
    for(int i=length;i>index;i--){
        arr[i]=arr[i-1];

    }
    // cout<<index;
    arr[index]=element;
    length++;

}
int main(){
    int *p;
    p=new int[20];
    int length,element;
    cout<<"Enter the lenght please less than 19 ";
    cin>>length;
    cout<<endl<<"Enter the value to be inserted ";
    cin>>element;
    for (int i = 0; i < length; i++)
    {
        p[i]=rand()%19+1;
    }
    display(p,length);
    insertionSort(p,length);
    cout<<"After sorting: "<<endl;
    display(p,length);
    cout<<"After Inserting: "<<endl;
    inserAtSortedArray(p,element,length);
    display(p,length);

    

    return 1;
}