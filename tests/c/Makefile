
tests: my_atoui.o atoui_tests.o my_atoi.o atoi_tests.o
	gcc my_atoui.o my_atoi.o atoui_tests.o atoi_tests.o -W -Wall -Wextra -Werror -lcriterion -fsanitize=address -g -o tests

atoui_tests.o: atoui_tests.c
	gcc -c atoui_tests.c

my_atoui.o: ../../src/c/atoui/*.c my.h
	gcc -c ../../src/c/atoui/*.c

atoi_tests.o: atoi_tests.c
	gcc -c atoi_tests.c

my_atoi.o: ../../src/c/atoi/*.c my.h
	gcc -c ../../src/c/atoui/*.c ../../src/c/atoi/*.c

.PHONY: clean

clean:
	${RM} *.out
	${RM} *.o
	${RM} *.d
	${RM} tests

#END
