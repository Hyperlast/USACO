#include <iostream>


int binary_sreach(int arr[],int left, int right,int num){

    if(left<=right){

      int middle = left + (right-left)/2;

      if(arr[middle] > num) {
        return binary_sreach(arr,left,middle-1,num);
      } 
      if(arr[middle] < num){
        return binary_sreach(arr,middle+1,right,num);
      }
        return middle;
    }

}



int binary_search_v2(int arr[],int left, int right,int num){
    int result = -1;
    
    while (left<=right){
        int middle = left + (right-left)/2;
        
        if(arr[middle]>num){
            right = middle-1;
        }
        if(arr[middle] < num){
            left = middle+1;
        }
        if(arr[middle] == num){
            return middle;
        }
        result = middle;
    }

    return result;
}


int main(){
    int arr[] = {1,2,3,4,6,6,7};
    int size = sizeof(arr)/sizeof(int);

    std::cout << binary_search_v2(arr,0,size-1,5);
    
    return 0;
}