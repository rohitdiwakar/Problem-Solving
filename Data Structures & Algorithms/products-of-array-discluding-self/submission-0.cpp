class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    vector<int>ans(nums.size(),0);
    int pre=1;
    int zerocnt=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0 && zerocnt<=1){
            zerocnt++;
            
        }else{
            pre*=nums[i];
        }


    }

       
    if(zerocnt>1){
        return ans;
    }
    else{
      for(int i=0;i<nums.size();i++){
        if(nums[i]==0)ans[i]=pre;
        else if(zerocnt>0){
            ans[i]=0;
        }
        else{
            ans[i]=pre/nums[i];
        }
      }
    }
    return ans;
    }
};
