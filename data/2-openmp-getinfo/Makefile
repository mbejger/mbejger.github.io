CFLAGS = -fopenmp -Wall  
LDFLAGS = -fopenmp 
LDLIBS = -lm 

OBJS = getinfo.o

getinfo: $(OBJS)
	$(CC) $(LDFLAGS) -o getinfo $(OBJS) $(LDLIBS)

clean:
	rm *.o
