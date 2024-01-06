class Solution {
public:
    bool checkOverlap(int radius, int x, int y, int x1, int y1, int x2, int y2) {
        for(int i=x1;i<=x2;i++){
            for(int j=y1;j<=y2;j++){
                double p=(i-x)*(i-x)+(j-y)*(j-y);
                double r=radius*radius;
                if(p<=r){
                    return true;
                }
            }
        }
        return false;
        
    }
     
};