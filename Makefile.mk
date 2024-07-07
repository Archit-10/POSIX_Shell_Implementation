CXX=g++
CXXFLAGS=-Wall -pedantic -Werror -g
SRCS=$(wildcard*.cpp)
OBJS=$(patsubst %.cpp,%.o,$(SRCS))

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $< 

Posix_Shell: $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(OBJS)
