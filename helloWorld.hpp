#pragma once

#include <vector>
#include <iostream>


struct Foo {
    int x;
    int y;
};

template<typename T>
class HelloWorld {

public:
    void sayHello2(const char* c) {
        std::string s { c };
        T t;
        std::cout << "Hello " << s << " " << t << std::endl;
    };

    void getFoos(size_t len, Foo* ptr) {
        std::vector<Foo> myFoos( ptr, ptr + len);
        for (auto& f : myFoos) {
            std::cout << f.x << "," << f.y << std::endl;
        };
    };
    
    void sayHello() {
        T t;
        std::cout << "Helllo " << t << std::endl;
    }

};
