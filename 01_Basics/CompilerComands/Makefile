DEBUG_FLAGS = -g3 -O0
RELEASE_FLAGS = -DNDEBUG -O3

FLAGS = $(RELEASE_FLAGS)

preproccess:
	clang++ -E functions2.cc > temp.cc

assemble:
	clang++ -S functions2.cc

compile:
	clang++ -c functions2.cc -o functions2.o

build:
	clang++ functions2.o -o functions2

print_exe:
	objdump -CS functions2
