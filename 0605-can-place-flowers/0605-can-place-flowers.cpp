class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    
        if(n==0)
            return true;
        
        if(flowerbed.size()==1 && n==1){
            if(flowerbed[0]==0){
                return true;
            }
            else return false;
        }
        
        int last = flowerbed.size();
        
        for(int i = 0;i<last;i++){
            if(i==0){
                if(flowerbed[0]==0 && flowerbed[1]==0){
                    flowerbed[0] = 1;
                    n--;
                }
            }
            else if(i==last-1){
                if(flowerbed[last-1]==0 && flowerbed[last-2]==0){
                    flowerbed[last-1] = 1;
                    n--;
                }
            }
            else{

                if(flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0){
                    flowerbed[i]=1 ;
                    n--;
                }

            }
        }

        if(n<=0) 
            return true;
        else 
            return false;
    }
};