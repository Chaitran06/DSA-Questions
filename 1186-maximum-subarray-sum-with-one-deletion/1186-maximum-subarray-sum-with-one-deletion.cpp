class Solution {
public:
    int maximumSum(vector<int>& arr) {
         int nodelete=arr[0];
         int onedelete=INT_MIN;
         int res= arr[0];
         int n= arr.size();

         for(int i=1;i<n;i++){
            int prev_nodelete=nodelete;
            int prev_onedelete=onedelete;

            nodelete=max(nodelete+arr[i], arr[i]);
            int v2;
            if(prev_onedelete==INT_MIN){
                v2=arr[i];
            }
            else{
                v2=prev_onedelete+arr[i];
            }
            onedelete=max(v2, prev_nodelete);

            res= max(res, max(onedelete, nodelete));


         }
         return res;
        
    }
};