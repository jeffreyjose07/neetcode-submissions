class KthLargest {
private:
    priority_queue<int, vector<int>, greater<int>> minHeap;
    const int k;
    
public:
    KthLargest(int k, vector<int>& nums) : k(k) {
        // Sort in descending order to process largest elements first
        sort(nums.begin(), nums.end(), greater<int>());
        
        // Only process k largest elements
        for (int i = 0; i < min(k, (int)nums.size()); i++) {
            minHeap.push(nums[i]);
        }
        
        // Process remaining elements only if they're larger than current kth largest
        for (int i = k; i < nums.size(); i++) {
            if (!minHeap.empty() && nums[i] > minHeap.top()) {
                minHeap.pop();
                minHeap.push(nums[i]);
            }
        }
    }
    
    int add(int val) {
        if (minHeap.size() < k) {
            minHeap.push(val);
        } else if (val > minHeap.top()) {
            minHeap.pop();
            minHeap.push(val);
        }
        return minHeap.top();
    }
};