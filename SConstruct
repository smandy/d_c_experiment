

env = Environment(CPPFLAGS = ['-std=c++11'])

impl = env.Object('impl.c')

env.Program( 'myMain' , ['myMain.d', impl])

helloWorld = env.Object('helloWorld.cpp')

env.Program('callHello', [ 'callHello.d', helloWorld], LIBS = ['stdc++'])
