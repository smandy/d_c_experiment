import myInterface;

import std.stdio;
import core.stdc.stdlib: free;

import std.string;

void main() {
  writefln("Starting");
  auto s = getStruct();
  pragma(msg, typeof(s));
  writefln("Got a struct %s %s", s , &s);
  writefln("Sayhello lives at %s", s.sayHello);
  s.sayHello();
  writefln("Called it");
  writefln("Add heap %s %s %s", 2, 3, s.add( 2, 3) );
  s.greet("smandy".toStringz());
  auto s2 = getStackStruct();
  writefln("Have from stack allocation %s %s", s2, &s2);
  writefln("Calling hello on stack allocated obj");
  s2.sayHello();
  writefln("Adding %s %s %s", 3,2, s2.add(3,2) );
  s2.greet("pandy".toStringz());
  free(s);
};