//allah ke name se suru

#include<bits/stdc++.h>
using namespace std;

vector<int> mergeSort(vector<int>&arr1,vector<int>&arr2){
     vector<int>arr(arr1.size()+arr2.size());
     int k=0;
     for(int i=0;i<arr1.size();i++){
        arr[k++]=arr1[i];
        
     }
     for(int i=0;i<arr2.size();i++){
        arr[k++]=arr2[i];
        
     }
    
  
    
    for(int i=0;i<arr.size();i++){
       int minIndex=i;
        for(int j=i+1;j<arr.size();j++){
            
            if(arr[j]<arr[minIndex]){
               minIndex=j;
            }
        }
        
        
        if(minIndex !=i){
            int temp=arr[i];
            arr[i]=arr[minIndex];
            arr[minIndex]=temp;
        }
       
    }
     
    
     
    
     return arr;
}

int main(){
   vector<int>arr1={4,3,6,2};
   vector<int>arr2={2,5,1};
  
   
   vector<int> result=mergeSort(arr1,arr2);
    for(int i=0;i<result.size();i++){
         cout<<result[i]<<" ";
         
     }
     
}
