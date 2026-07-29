class KthLargest {
private:
    priority_queue<int, vector<int>, greater<int>> minHeap;
    const int k;
    
public:
    KthLargest(int k, vector<int>& nums) : k(k) {
        for(int num : nums) {
            minHeap.push(num);
            if(minHeap.size() > k) {
                minHeap.pop();
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