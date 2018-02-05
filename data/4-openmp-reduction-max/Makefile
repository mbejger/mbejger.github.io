CFLAGS = -fopenmp -Wall  
LDFLAGS = -fopenmp 
LDLIBS = -lm 

OBJS = reduction-max.o

reduction-max: $(OBJS)
	$(CC) $(LDFLAGS) -o reduction-max $(OBJS) $(LDLIBS)

clean:
	rm *.o
