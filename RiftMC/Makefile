CXX = g++
CXXFLAGS = -std=c++17 -I./src -I./src/auth -I./src/launcher -I./src/utils

SRC = $(wildcard src/**/*.cpp src/*.cpp)
OBJ = $(SRC:.cpp=.o)

all: RiftMC

RiftMC: $(OBJ)
	$(CXX) $(OBJ) -o RiftMC

clean:
	rm -f $(OBJ) RiftMC
