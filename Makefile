CXX = g++
CXXFLAGS = -Wall -Werror -Wextra

.PHONY: $(STRUCT) all clean
all: src/$(STRUCT).cpp
	$(CXX) $(CXXFLAGS) src/$(STRUCT).cpp -o bin/$(STRUCT)

clean:
	rm -f $(STRUCT).cpp
