class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        auto cmp = [](const vector<int>& a, const vector<int>& b) {
            return (a[0]*a[0] + a[1]*a[1]) > (b[0]*b[0] + b[1]*b[1]); // min-heap
        };

        priority_queue<vector<int>, vector<vector<int>>, decltype(cmp)> 
        minHeap(points.begin(), points.end(), cmp);

        vector<vector<int>>result;
        while(k--) {
            result.push_back(minHeap.top());
            minHeap.pop();
        }
        return result;
    }
};
