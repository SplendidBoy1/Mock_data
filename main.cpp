#include "StudentFactory/StudentFactory.h"
#include "File/File.h"

using namespace std;

int main(){
    

    for (int i = 1; i <= 30; i++){
        StudentFactory student;
        File::InFile("output.txt", student.ToString());
    }
    return 0;
}