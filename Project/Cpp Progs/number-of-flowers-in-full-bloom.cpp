class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, 
    vector<int>& people) 
    {
        int n=flowers.size();
        vector<int>start,eend;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            start.push_back(flowers[i][0]);
            eend.push_back(flowers[i][1]);
        }
        sort(start.begin(),start.end());
        sort(eend.begin(),eend.end());
        for(int i=0;i<people.size();i++)
        {
            int bloom=upper_bound(start.begin(),start.end(),
            people[i])-start.begin();

            int dead=lower_bound(eend.begin(),eend.end(),
            people[i])-eend.begin();
            ans.push_back(bloom-dead);
        }
        return ans;

    }
};
