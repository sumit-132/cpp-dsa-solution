#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key){
    int start = 0,end = n - 1,mid;
    while(start <= end){
        mid = (start+end)/2;

        if(arr[mid] == key)
            return mid;
        else if(arr[mid] < key)
        start = mid + 1;
        else
        end = mid - 1;
    }
    return -1;
}

int main(){
    int arr[100];
    int n,key;
    cout<<"Enter the size of array : ";
    cin>>n;

    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the key : ";
    cin>>key;

    cout<<binarySearch(arr,n,key);

    return 0;
}