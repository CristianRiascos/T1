CC=gcc
%.o: %.c
    $(CC) -c -o $@ $<

all: removeEntry

removeEntry: removeEntry.o
    gcc -o removeEntry removeEntry.o

tar:
    tar czvf ../basics.tgz . 
    mv ../basics.tgz ./processes_basics.tgz

clean:
    rm -f *.o removeEntry