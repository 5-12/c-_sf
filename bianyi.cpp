#include <iostream>
#include <windows.h>
#include <shellapi.h>
int main(const int argc,char *argv[])
{
    std::string can_shu;
    std::string kong_ge=" ";
    std::string current_path;
    can_shu="g++"+kong_ge+argv[1]+kong_ge+"-o"+kong_ge+argv[2];
    //std::cout<<can_shu<<std::endl<<"1"<<std::endl;
    system(can_shu.c_str());
    //std::cout<<argv[2]<<std::endl;
    //system();
    //system(argv[2]);
    current_path="exe";
    SetCurrentDirectoryA(current_path.c_str());
    system("pause");
}