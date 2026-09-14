class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
     vector<int>stck;
     
     for(int i = 0; i < asteroids.size(); i++){
        while(!stck.empty() && asteroids[i] < 0 && stck.back() > 0){
            int diff  =  asteroids[i] + stck.back();
            if (diff < 0){
                stck.pop_back();
            }else if( diff > 0){
                asteroids[i] = 0;
                break;
            }else{
                asteroids[i] = 0;
                stck.pop_back();
                break;
            }
        }
        if( asteroids[i] != 0){
            stck.push_back(asteroids[i]);
        }
     }
        return stck;
    }
};