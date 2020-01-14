class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        bool foundIt=false;
        bool foundBigger = false;
        
        for(int i = 0; i < nums1.size(); i++){
            foundIt = false;
            foundBigger = false;
            for(int j = 0; j < nums2.size(); j++){
                if(!foundIt && nums1[i] == nums2[j]){
                    foundIt = true;
                }
                if(foundIt){
                    if(nums1[i] < nums2[j]){
                        result.insert(result.end(), nums2[j]);
                        foundBigger=true;
                        break;
                    }
                }
            }
            if(!foundBigger){
                result.insert(result.end(), -1);
            }
        }
        return result;
    }
};