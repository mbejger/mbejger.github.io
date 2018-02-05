CFLAGS = -fopenmp -Wall  
LDFLAGS = -fopenmp 
LDLIBS = -lm 

OBJS = workshare.o

workshare: $(OBJS)
	$(CC) $(LDFLAGS) -o workshare $(OBJS) $(LDLIBS)

clean:
	rm *.o
