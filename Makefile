CXX = g++
CXXFLAGS = -Wall -Wextra -Wpedantic -std=c++17

.PHONY = clean

clean:
	@rm ./build/*

%:
	@[ -d build ] || mkdir build
	@echo "Compiling src/$@.cpp...\n"
	@$(CXX) $(CXXFLAGS) src/$@.cpp -o build/$@
	@echo "Input:\nsrc/inputs/$@.txt\n"
	@echo "Output:"
	@./build/$@ < src/inputs/$@.txt
	@make clean -s
