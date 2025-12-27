CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -pedantic -std=c++17 -g -fsanitize=address
LDFLAGS =  -fsanitize=address

EXT = .cpp
SRCDIR = src

SRC = $(wildcard $(SRCDIR)/*$(EXT))
OBJ = $(SRC:.cc=.o)
EXEC = Baggage-Screening-Pipeline

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(LDFLAGS) -o $@ $(OBJ) $(LBLIBS)

clean:
	rm -rf $(OBJ) $(EXEC)