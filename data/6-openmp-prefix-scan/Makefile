CFLAGS = -fopenmp -Wall  
LDFLAGS = -fopenmp
LDLIBS = -lm 

OBJS1 = serial-psum.o
OBJS2 = parallel-psum.o

serial-psum: $(OBJS1)
	$(CC) $(LDFLAGS) -o serial-psum $(OBJS1) $(LDLIBS)

parallel-psum: $(OBJS2)
	$(CC) $(LDFLAGS) -o parallel-psum $(OBJS2) $(LDLIBS)

clean:
	rm *.o
