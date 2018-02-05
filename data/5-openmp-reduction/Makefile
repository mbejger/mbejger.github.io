CFLAGS = -fopenmp -Wall  
LDFLAGS = -fopenmp
LDLIBS = -lm 

OBJS1 = main.o isum.o timer.o
OBJS2 = main.o openmpsum.o timer.o 

isum: $(OBJS1)
	$(CC) $(LDFLAGS) -o isum $(OBJS1) $(LDLIBS)

openmpsum: $(OBJS2)
	$(CC) $(LDFLAGS) -o openmpsum $(OBJS2) $(LDLIBS)

clean:
	rm *.o
