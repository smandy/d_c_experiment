import std.string;


extern(C++)
struct Foo {
    int x;
    int y;
};


extern(C++)
struct FooPtr {
    size_t n;
    Foo *ptr;
};

extern(C++)
struct HelloWorld(T) {
    void sayHello();
    void sayHello2( const char *s );
    void getFoos( Foo[] f);
};

void main() {
    string s  = "Hello there";
    string s2 = "Woot";
    
    HelloWorld!int h;;
    h.sayHello();
    h.sayHello2(s.toStringz());

    HelloWorld!float h2;
    h2.sayHello();
    h2.sayHello2(s2.toStringz());

    Foo foo1 = { 1,2 };
    Foo foo2 = { 3,4};
    auto xs = [ Foo(1,2), Foo(3,4)];

    h.getFoos( cast(FooPtr) xs);
    //h2.getFoos(xs);
    pragma(msg, typeof(xs));
};
