#include <iostream>
#include <list>
#include <cstdlib>
#include <iterator>

int main(int argc, char* argv[]){

    std::list<int> intList;

    for(int i=0; i<argc; i++){
        int temp = std::atoi(argv[i]);
        intList.push_back(temp);
    }

    std::list<int>::iterator it = intList.begin();

    while(it!=intList.end()) {
        std::cout << *it <<std::endl;
        it++;
    }

    return 0;

}