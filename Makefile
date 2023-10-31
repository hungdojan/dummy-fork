CC=gcc
TARGET=find_max
OBJS=$(patsubst %c,%o,$(wildcard *.c))

all: $(TARGET)

run: $(TARGET)
	./$<

$(TARGET): $(OBJS)
	$(CC) -o $@ $^

clean:
	rm -rf $(OBJS) $(TARGET)

