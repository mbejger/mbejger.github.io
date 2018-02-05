CFLAGS = -Wall 
LDLIBS = -lm  -lfftw3 

OBJS1 = fftw-simple.o timer.o
OBJS2 = fftw-openmp.o timer.o 

fftw-simple: $(OBJS1)
	$(CC) -o fftw-simple $(OBJS1) $(LDLIBS)

fftw-openmp: $(OBJS2)
	$(CC) -o fftw-openmp $(OBJS2) $(LDLIBS) -lfftw3_omp -fopenmp 

clean:
	rm *.o
