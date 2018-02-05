CFLAGS = -fopenmp -Wall  
LDFLAGS = -fopenmp 
LDLIBS = -lm 

OBJS = helloworld.o

helloworld: $(OBJS)
	$(CC) $(LDFLAGS) -o helloworld $(OBJS) $(LDLIBS)

clean:
	rm *.o
