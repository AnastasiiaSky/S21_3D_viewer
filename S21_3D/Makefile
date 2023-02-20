CC=						gcc
FLAGS=					-Wall -Wextra -std=c11 -Werror -std=c11 -std=c99 -pedantic -g
SRCS=					Back/parser.c Back/affine.c Back/tests.c
OBJ= 					Back/test
GCOV_FLAGS=             -fprofile-arcs -ftest-coverage -lgcov

OS= 					$(shell uname)
var=					$(shell pkg-config --cflags --libs check)

ifeq ($(OS), Darwin)
	TEST_LIBS=			-lcheck
else
	TEST_LIBS=			-lcheck -lsubunit -pthread -lrt -lm -D_GNU_SOURCE
endif

all: install check gcov_report

test: clean
	$(CC) $(SRCS) $(TEST_LIBS) $(var) -o $(OBJ)
	./Back/test

install: uninstall
		mkdir build
		cd build && cmake build ../3dviewer
		make -C ./build/


uninstall:
		rm -rf build/

clean:
	rm -rf *.o *.a *.so *.gcda *.gcno *.gch rep.info *.html *.css \
	$(OBJ) Back/report *.txt test.info test.dSYM  ../.clang-format

dvi:
	doxygen . && open Back/report/index.html

dist:

gcov_report: test
	$(CC) $(var) -o $(OBJ) $(SRCS) $(GCOV_FLAGS)  $(TEST_LIBS)
	./Back/test
	lcov -t "gcov_report" -o $(OBJ).info -c -d .
	genhtml -o Back/report $(OBJ).info
	open Back/report/index.html
	rm $(OBJ)
	rm -rf Back/test.info
	rm -rf *.gcno
	rm -rf *.gcda

check:
	cppcheck --enable=all --suppress=missingIncludeSystem --inconclusive --check-config */*.c *.h
	cp ../materials/linters/.clang-format ../.clang-format
	clang-format -i Back/*.c
	clang-format -n Back/*.c
