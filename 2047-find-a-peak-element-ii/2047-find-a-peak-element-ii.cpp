class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size(),cst=0,cend=n-1;

        while(cst<=cend){
            int cmid=cst+(cend-cst)/2,maxRow=0;

            for(int r=0;r<m;r++){
                if(mat[r][cmid]>mat[maxRow][cmid])maxRow=r;
            }

            int currEle=mat[maxRow][cmid],
            leftEle=cmid==0?-1:mat[maxRow][cmid-1],
            rightEle=cmid==n-1?-1:mat[maxRow][cmid+1];

            if(currEle>leftEle && currEle>rightEle)return {maxRow,cmid};
            else if(currEle<leftEle)cend=cmid-1;
            else cst=cmid+1;
        }
        return {0,0};
    }
};