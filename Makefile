SRC_FILES = main.cpp
CC_FLAGS = -Wall -Wextra -g -std=c11
CC = clang


all:
	${CC} $[SRC_FILES] ${CC_FLAGS} -o VirtuX
