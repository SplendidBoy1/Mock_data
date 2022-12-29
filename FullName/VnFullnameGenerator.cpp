#include "VnFullnameGenerator.h"


using namespace std;

VnFullnameGenerator :: VnFullnameGenerator(){
}


Fullname* VnFullnameGenerator :: next(){
    stringstream builder;
    vector<string> last_names = {"Nguyen", "Tran", "Le", "Pham", "Hoang", "Huynh", "Vu", "Vo", "Phan", "Truong", "Bui", "Dang", "Do", "Ngo", "Ho", "Duong", "Dinh"};
    vector<string> middle_names[2] = {
        {"Van", "Phuc", "Dang", "Ngoc", "Huu", "Quoc", "Xuan", "Phi", "Tuan", "Nguyen"},
        {"Thi", "Le", "Chau", "My", "Hong", "Phuong", "Ngoc", "Uyen"}
    };
    vector<string> first_names[2] = {
        {"Ai", "Anh", "An", "Ba", "Bach", "Bao", "Bien", "Dat", "Chanh", "Tu", "Lam", "Tuan", "Tra", "Thuong", "Huy", "Khoi", "Kiet", "Thinh", "Quang", "Toan"},
        {"Chi", "Thu", "Trinh", "Thanh", "Tam", "Hang", "Kieu", "Anh", "Duyen", "Dao", "Dung", "Tuyet", "Diem", "Vy", "Vi", "Hoa", "Tien", "Phuong", "Linh", "Mai", "Lan"}
    };
    auto  intGen = IntegerGenerator :: instance();
    int i = intGen -> next() % last_names.size();
    string last_name = last_names[i];

    i = intGen -> next() % middle_names[_selection].size();
    string middle_name = middle_names[_selection][i];

    i = intGen -> next() % first_names[_selection].size();
    string first_name = first_names[_selection][i];
    auto result = new Fullname(last_name, middle_name, first_name);
    _selection = (_selection + 1) % 2;
    return result;
}