#include "AddressGenerator.h"

AddressGenerator :: AddressGenerator(){
}

Address* AddressGenerator :: next(){
    auto number = new FakeHouseNumber();
    vector<string> districts = {"1", "2", "3", "4", "5"};
    vector<string> wards[5] = {
        {"Ben Nghe", "Cau Kho", "Da Kao", "Pham Ngu Lao", "Tan Dinh", "Nguyen cu Trinh", "Nguyen Thai Binh", "Pham Ngu Lao"},
        {"An Khanh", "An Phu", "Cat Lai", "Thu Thiem", "Thao Dien", "Binh An", "Binh Khanh", "Binh Trung Dong"},
        {"1", "2", "3", "4", "5", "9", "10", "11"},
        {"1", "2", "3", "4", "5", "6", "8", "9"},
        {"1", "2", "3", "4", "5", "6", "7", "8"}
    };
    vector<string> streets[5] = {
        {"Bui Vien", "Dien Bien Phu", "Dong Khoi", "Hai Ba Trung", "Hoang Sa"},
        {"An Phu", "Binh Minh", "Nguyen Cu", "Song Hanh", "Nguyen Van Giap"},
        {"Pham Ngoc Thach", "Vo Thi Sau", "Truong Quyen", " Cao Thang", "Le Van Sy"},
        {"Ton That Thuyet", "Khanh Hoi", "Le Quoc Hung", "Le Thach", "Le Van Linh"},
        {"Yet Kieu", "Nguyen Van Cu", "Ly Thuong Kiet", "Tan Da", "Nguyen Trai"}
    };
    auto  intGen = IntegerGenerator :: instance();
    const int dis = intGen -> next() % districts.size();
    string district = districts[dis];
    int i = intGen -> next() % wards[dis].size();
    string ward = wards[dis][i];

    i = intGen -> next() % streets[dis].size();
    string street = streets[dis][i];
    auto result = new Address(number, street, ward, district);
    return result;
}