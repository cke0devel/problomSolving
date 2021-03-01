class ParkingSystem {
public:
    ParkingSystem(int big, int medium, int small) 
    : big(big), medium(medium), small(small) {
    }
    
    bool addCar(int carType) {
        if(carType == 1) {
            if(big==0) return false;
            big -= 1;
        } else if(carType == 2) {
            if(medium==0) return false;
            medium -= 1;
        } else if(carType == 3) {
            if(small==0) return false;
            small -= 1;
        }
        
        return true;
    }
    
private:
    int big, medium, small;
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
