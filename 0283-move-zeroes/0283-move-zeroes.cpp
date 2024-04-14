class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(count (nums.begin(),nums.end(),0)==0)
        return ;

        // for (int i=0;i<nums.size();i++){
        //     if(nums[i] == 0){
        //         int j=i;

        //         while(j<nums.size()-1){
        //             nums[j]=nums[j+1];
        //             j++;
        //         }
        //         nums[j]=0;
        //     }
        // }  

        vector<int>tmp;
        int zeros=0;
        for (int i=0;i<nums.size();i++){
            if(nums[i]==0)
            zeros++;
            else
            tmp.push_back(nums[i]);
        }
        for (int i=0;i<nums.size();i++){
            if(i<tmp.size())
            nums[i]=tmp[i];
            else
            nums[i]=0;
        }
    }
};