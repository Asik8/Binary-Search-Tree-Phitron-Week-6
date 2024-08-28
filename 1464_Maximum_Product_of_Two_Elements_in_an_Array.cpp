class Solution {
public:
    int maxProduct(vector<int>& v) {
        sort(v.begin(),v.end());
        int n = v.size();
        return (v[n-2]-1)*(v[n-1]-1);
    }
};