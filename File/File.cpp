#include "File.h"

void File::InFile(const char* file, string data){
    ofstream out;
    out.open(file, ios :: app);
    out << data;
    out.close();
}