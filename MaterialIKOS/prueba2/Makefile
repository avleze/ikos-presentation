TARGET  = prueba2
ZTARGET  = zpryeba2
SOURCES = $(shell echo *.c)
HEADERS = $(shell echo *.h)
OBJECTS = $(SOURCES:.c=.o)
ZOBJECTS = $(SOURCES:.c=.oz)

INSTALLDIR  = /usr/local/bin

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^ $(LFLAGS)
