#include "interface.h"

void mySayHello() {
  printf("Hello\n");
};

int myAdd( int a, int b) {
  return a +b;
};

void myGreet( char *s) {
  printf("Awright %s!!!\n", s);
};


MyStruct* getStruct() {
  MyStruct* ret = (MyStruct*) malloc( sizeof( MyStruct));
  printf("Ret lives at %p\n", ret);

  //*ret = { mySayHello, myAdd, myGreet };
  ret->sayHello = mySayHello;
  ret->add      = myAdd;
  ret->greet    = myGreet;
  printf("MySayHello is %p %p\n", mySayHello , ret->sayHello);
  printf("add is        %p %p\n", myAdd      , ret->add );
  printf("greet is      %p %p\n", myGreet    , ret->greet );
  return ret;
};


MyStruct getStackStruct() {
  MyStruct ret = {mySayHello, myAdd, myGreet};
  return ret;
};


