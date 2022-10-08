//https://leetcode.com/problems/smallest-range-covering-elements-from-k-lists/
class Solution {
public:
class node{
    public:
        int data, row, col;
        node(int data, int row, int col){
            this-> data = data;
            this -> col = col;
            this -> row = row;
        }
};

class compare{
    public:
    bool operator()(node * a, node * b){
        return a->data > b->data;
    }
};
    
vector<int> smallestRange(vector<vector<int>>& nums) {
    int mini = INT_MAX;
    int maxi = INT_MIN;
    priority_queue<node *, vector<node *>, compare> minHeap;

    int n = nums.size();

    //finding min and max for first column
    for(int i = 0; i < n; i++){
        int ele = nums[i][0];
        mini = min(mini, ele);
        maxi = max(maxi, ele);
        minHeap.push(new node(ele, i, 0));
    }

    //initial range 
    int start = mini, end = maxi;

    while(!minHeap.empty()){
        auto curr = minHeap.top();
        minHeap.pop();
        
        if(curr -> col + 1 < nums[curr -> row].size()){
            int r = curr -> row;
            int c = curr -> col + 1;
            minHeap.push(new node(nums[r][c], r, c));
            
            mini = minHeap.top()->data;
            maxi = max(maxi, nums[r][c]);
            
            if(maxi - mini < end - start){
                start = mini;
                end = maxi;
            }
        } 
        else break;
    }

    return {start, end};
}
};
