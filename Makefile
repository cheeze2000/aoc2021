CXX = g++
CXXFLAGS = -std=c++17
PY = python3

.PHONY = clean

clean:
	@rm ./build/*

%a.cpp %b.cpp:
	@echo "Compiling src/$@...\n"
	@[ -d build ] || mkdir build
	@$(CXX) $(CXXFLAGS) src/$@ -o build/a.out
	@echo "Input:\nsrc/inputs/$*.txt\n"
	@echo "Output:"
	@./build/a.out < src/inputs/$*.txt
	@make -s clean

%a.py %b.py:
	@echo "Running src/$@...\n"
	@echo "Input:\nsrc/inputs/$*.txt\n"
	@echo "Output:"
	@$(PY) src/$@ < src/inputs/$*.txt

%:
	@if [ -f src/$@.cpp ]; then \
		make -s $@.cpp; \
	elif [ -f src/$@.py ]; then \
		make -s $@.py; \
	fi
