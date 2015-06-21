#pragma once

#include "stdio.h"
#include "stdlib.h"

typedef struct MyStruct {
  void(*sayHello)();
  int(*add)(int, int);
  void(*greet)( char *);
} MyStruct;


MyStruct* getStruct();

MyStruct getStackStruct();

