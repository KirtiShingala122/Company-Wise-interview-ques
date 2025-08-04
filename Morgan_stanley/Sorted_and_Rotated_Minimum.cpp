class Solution {
  public:
    int findMin(vector<int>& arr)
    {
        // complete the function here
       
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i-1]>arr[i])
          {
             return arr[i];
               
          }
        
        }
        return arr[0];
        
    }
    
};
