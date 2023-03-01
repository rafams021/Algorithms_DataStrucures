    /*Naive Solution*/
    int minEatingSpeed(vector<int>& piles, int h) {
        int helper = INT_MIN;
        for(int i = 0; i < piles.size(); i++){
            helper = max(helper, piles[i]);
        }
        for(int i = 1; i <= helper; i++){
            int add = 0;
            for(int j = 0; j < piles.size(); j++){
               add += (piles[j] / i) + ((piles[j] % i) != 0); // round up intger
               if(add > h) break;
            }
            if(add <= h){
                return i;
            }
        }
        return -1;
    }

    /*Eficient Solution*/
        int minEatingSpeed(vector<int>& piles, int h) {
        int high = INT_MIN;
        for(int i = 0; i < piles.size(); i++){
            high = max(high, piles[i]);
        }
        int low = 1, res = INT_MAX;
        while(low <= high){
            int mid = (low + high) / 2;
            int add = 0;
            for(int i = 0; i < piles.size(); i++){
                add += (piles[i] / mid) + ((piles[i] % mid) != 0); // round up intger
                if(add > h) break;
            }
            if(add > h){
                low = mid + 1;
            }
            else if(add <= h){
                res = min(res, mid);
                high = mid -1;
            }
        }
        return res;
    }