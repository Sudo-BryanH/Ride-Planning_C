CFLAGS += -std=gnu11 -g
EXES   =  hash
OBJS1   =  ref_counter.o hash_table.o person.o hash_test.o

all: $(EXES)

hash: $(OBJS1)


clean:
	rm -f $(EXES) $(OBJS1)
tidy:
	rm -f $(OBJS1)

.PHONY: all clean tidy