
class Solution{
  public:
    void swapElements(int arr[], int sizeof_array){
        
        for(int i=0;i< sizeof_array-2;i++)
        swap(arr[i],arr[i+2]);
        
    }
};
