// my solution of 'Google' version of the program: 
// 1.create file; 
// 2.write to file; 
// 3.read from file; 
// 4.repeat steps 2 and 3;

#include <iostream>
#include <fstream>
//#include <ostream>

int main(){
    // char file_name[20] {};
    // std::string file_line {};
    
    // char person_first_name[30] {};
    // char person_last_name[30] {};
    // int person_age {};
    // // int person_id {};

    // std::cout << "Enter the name of the file (don't forget .txt at the end): ";
    // std::cin >> file_name;
    // std::ofstream outf_People(file_name);
    // if(!outf_People){
    //     std::cerr << "[ERROR]: a file could not be open for writing!\n";
    //     return 1;
    // }
    // outf_People.close();

    // std::fstream People(file_name, std::ios::in | std::ios::out);
    // for(int i = 1; i < 11; ++i){
    //     std::cout << "Enter First Name: ";
    //     std::cin >> person_first_name;
    //     std::cout << "Enter Last Name: ";
    //     std::cin >> person_last_name;
    //     std::cout << "Enter Age: ";
    //     std::cin >> person_age;

    //     People << i << ": " << person_first_name << ' ' << person_last_name  << ". Age: " << person_age << '\n';
    //     std::getline(People, file_line);
    //     std::cout << file_line;
    // }

    // return 0;

    std::string file_name { "test.txt" };
    std::fstream file_stream;
    file_stream.open(file_name, std::ios::out);
    file_stream.close();
    file_stream.open(file_name, std::ios::in | std::ios::out);

    file_stream << "Hello World!";

    std::string text {};
    file_stream.seekp(0);
    std::getline(file_stream, text);
    std::cout << text;

    return 0;
}
