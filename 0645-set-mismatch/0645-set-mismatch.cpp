class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums)
    {   
        int n = nums.size();
        vector<int> freq(n+1,0);
        vector<int> result(2);
        int i;
        for (int i : nums)
            freq[i]++;
        for (i = 1; i<=nums.size(); i++)
        {
            if (freq[i]==2)
                result[0]=i;
            if (freq[i]==0)
                result[1]=i;
        }
        return result;
    }
};