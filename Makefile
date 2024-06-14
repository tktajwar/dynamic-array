library: libdynamic_array.so

libdynamic_array.so: dynamic_array.o
	$(CC) -shared -o libdynamic_array.so dynamic_array.o
dynamic_array.o:
	$(CC) -c -Wall -Werror -fpic dynamic_array.c

clean:
	$(RM) *.o *.so dynamic_array
