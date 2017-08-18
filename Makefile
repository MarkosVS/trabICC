biocalculator : bioca.o jmv.o
	gcc bioca.o jmv.o -o biocalculator
bioca.o : bioca.c
	gcc bioca.c -c -o bioca.o
jmv.o : jmv.c
	gcc jmv.c -c -o	jmv.o
