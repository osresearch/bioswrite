KERNEL		= $(shell uname -s)

TARGETS += bioswrite

CFLAGS += \
	-std=c99 \
	-g \
	-O3 \
	-W \
	-Wall \
	-MMD \
	-MF .$(notdir $@).d \
	-I . \

all: $(TARGETS)


ifeq ($(KERNEL),Darwin)
CFLAGS += -D__darwin__
bioswrite: bioswrite-main.o bioswrite.o DirectHW.o
	$(CC) -o $@ $^ -framework IOKit
else
bioswrite: bioswrite-main.o bioswrite.o
	$(CC) -o $@ $^
endif

clean:
	$(RM) *.o .*.d $(TARGETS)

-include .*.d
