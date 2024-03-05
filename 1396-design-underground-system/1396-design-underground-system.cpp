class UndergroundSystem {
public:
    map <int,string> mpIdStation;
    map <int,int> mpIdTime;
    map <pair<string,string> , int> distinctCustomers;
    map <pair<string,string> , int> mpSumTime;

    map <pair<string,string> , double> mpAvg;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string startStation, int t1) {
        mpIdStation[id] = startStation;
        mpIdTime[id] = t1;
    }
    
    void checkOut(int id, string endStation, int t2) {
        string startStation = mpIdStation[id];
        int startTime = mpIdTime[id];
        
        ++ distinctCustomers[{startStation,endStation}];
        
        mpSumTime[{startStation,endStation}] += t2 - startTime;
    }
    
    double getAverageTime(string startStation, string endStation) {
        mpAvg[{startStation,endStation}]
            = mpSumTime[{startStation,endStation}]
               / (double)
              distinctCustomers[{startStation,endStation}];
        
        return mpAvg[{startStation,endStation}];
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */