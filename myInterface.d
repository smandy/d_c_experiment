
extern(C) {
  struct MyStruct {
    void function()        sayHello;
    int function(int, int) add;
    void function(const char *)  greet;
  }

  MyStruct *getStruct();

  MyStruct getStackStruct();
}
