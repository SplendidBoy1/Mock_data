#include "VnTelNumberGenerator.h"

VnTelNumberGenerator :: VnTelNumberGenerator(){

}


VnTelNumber* VnTelNumberGenerator::next(){
    auto intGen = IntegerGenerator :: instance();
    vector<string> brand_num[4] = {
        {"086", "096", "097", "032", "033", "034", "035", "036"},
        {"088", "091", "094", "083", "084", "085", "081", "082"},
        {"089", "090", "093", "070", "079", "077", "076", "078"},
        {"092", "056", "058"}
    };
    stringstream build;
    int brand = intGen ->next() % 4;
    int first_num = intGen ->next() % brand_num[brand].size();
    build << brand_num[brand][first_num];
    for (int i = 0; i <= 10 - brand_num[brand][first_num].size(); i++){
        build << intGen -> next(0, 9);
    }
    auto result = new VnTelNumber(build.str());
    return result;
}