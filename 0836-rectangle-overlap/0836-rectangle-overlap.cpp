class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        bool X = rec1[0]<rec2[2] && rec2[0]<rec1[2];
        bool Y = rec1[1]<rec2[3] && rec2[1]<rec1[3];
        return X && Y;
    }
};