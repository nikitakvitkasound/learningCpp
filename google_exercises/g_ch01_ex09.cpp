#include <iostream>
#include <fstream>

int main(){
    std::string file_name {};
    std::cout << "Enter a file name (.txt): ";
    std::cin >> file_name;
    
    std::fstream fstream;
    fstream.open(file_name, std::ios::out | std::ios::in | std::ios::app);
    if(!fstream){
        fstream.open(file_name, std::ios::out);
        fstream.close();
        fstream.open(file_name, std::ios::out | std::ios::in | std::ios::app);
        std::cout << "[ALERT]: a file is created!\n";
    }
    else{
        std::cout << "[ALERT]: a file is opened!\n";
    }
    
    std::string name {};
    int i {0};
    while(i < 3){
        std::cout << "Enter a name: ";
        std::cin >> name;
        fstream << name + '\n';
        ++i;
    }

    fstream.seekp(0);
    std::string line {};
    
    while(std::getline(fstream, line)){
        std::cout << line << '\n';
    }
    
    std::cout << '\n';
    system("pause");
    return 0;
}
