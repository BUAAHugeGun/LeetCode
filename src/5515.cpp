class ParkingSystem {
public:
    int a[4];
    ParkingSystem(int big, int medium, int small){
        a[1]=big;
        a[2]=medium;
        a[3]=small;
    }
    
    bool addCar(int carType) {
        if(a[carType]==0)return false;
        else return a[carType]--,true;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
