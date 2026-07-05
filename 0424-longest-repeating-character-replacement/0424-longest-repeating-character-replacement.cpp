class Solution {
public:
int find(vector<int> &a)
{
   int max_count=-1;
   for(int i=0;i<256;i++)
   max_count=max(max_count,a[i]);
   
   return max_count;
}

    int characterReplacement(string s, int k) {
        int high=0, low=0;
        int n= s.size();
        int res=INT_MIN;
        vector<int> f(256,0);

        for(high=0;high<n;high++){
            f[s[high]]++;
            int len = high-low+1;
            int max_count= find(f);
            int diff= len-max_count;

            while(diff>k){
                f[s[low]]--;
                low++;
                max_count=find(f);
                len=high-low+1;
                diff=len-max_count;
            }

            len=high-low+1;
            res=max(len, res);



        }
        return res;

    }
};