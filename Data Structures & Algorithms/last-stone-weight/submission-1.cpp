class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size()==1){
            return stones[0];
        }
        priority_queue<int>maxHeap;
        for(int stone : stones){
            maxHeap.push(stone);
        }
        while(maxHeap.size()>1) {
            int x = maxHeap.top();
            maxHeap.pop();
            int y = maxHeap.top();
            maxHeap.pop();
            if(x>y) {
                maxHeap.push(x-y);
            }
            if(maxHeap.size()==1){
                return maxHeap.top();
            }
        }
        return 0;
    }
};
