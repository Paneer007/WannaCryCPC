#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>arr, int n){
    for(int i=1;i<n;i++){
        int key = arr[i], j =i-1;
        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j--];
        }
    }
}