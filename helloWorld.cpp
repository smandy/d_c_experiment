#include "helloWorld.hpp"

void doit() {
    HelloWorld<int> x;
    
    x.sayHello();
    x.sayHello2("hello");
    x.getFoos(3, nullptr);

    HelloWorld<float> y;

    y.sayHello();
    y.sayHello2("hello2");
    y.getFoos( 3, nullptr); // Should cause instantiation
}
