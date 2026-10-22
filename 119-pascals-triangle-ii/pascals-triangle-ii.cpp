class Solution {
public:
    vector<int> getRow(int rowIndex) {
        rowIndex++; // Why because the solution we did for 1 based indexing and this question reauires 0-based indexing , that's why incremented to get on the track of 1 based indexing 

        vector<int> result;
        long long ans = 1;
        result.push_back(ans);

        for(int i=1; i<rowIndex; i++) {
            ans = ans * (rowIndex - i);
            ans = ans / i;
            result.push_back(ans);
        }

        return result;
    }
};