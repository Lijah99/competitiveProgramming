class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int groupsize = groupSizes.size();
        unordered_map<int, vector<int>> dict{};
        vector<vector<int>> answer;
        
        for(int i = 0; i < groupsize; i++)
        {
            int groupSize = groupSizes[i]; // grab group size
            
            if(dict.count(groupSize) > 0)   //if group already exists, add to
                dict[groupSize].push_back(i);
            else
                dict[groupSize] = vector<int>{i};   //create the new group and add as vec
            
            if(dict[groupSize].size() == groupSize) //check for full group or double, then add to ans
            {
                answer.push_back(dict[groupSize]);
                dict.erase(groupSize);  //clear map at key for multiple group nums
            }       
        }
        
        return answer;
    }
};