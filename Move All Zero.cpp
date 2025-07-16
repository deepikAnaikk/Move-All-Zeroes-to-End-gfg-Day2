class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int n = arr.size();
        int count = 0;
        
        //transverse the array
        for (int i = 0; i < n; i++) {
            if(arr[i] != 0) {
                //swap only if i and count are different
                if (i != count)
                   swap(arr[i], arr[count]);
                count++;
            }
        }
        
    }
};
