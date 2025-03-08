class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int wc=0;

        for(int i=0;i<k;i++){
            if(blocks[i]=='W')wc++;
        }

        int res=wc;
        for(int i=k;i<blocks.length();i++){
            if(blocks[i]=='W')wc++;

            if(blocks[i-k]=='W')wc--;

            res=min(res,wc);
        }

        return res;
    }
};