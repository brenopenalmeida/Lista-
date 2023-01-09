FLAGS := -Wall -lrt -pthread -std=c++11
TARGET := main.o
ARGS :=  
SOURCES := $(shell find -name "*.cpp")
DEPENDENCIES := $(patsubst %.cpp,%.d,$(SOURCES))

all: $(TARGET)
%.o: %.cpp $(DEPENDENCIES)
	@$ g++ -c -o $@ $< $(FLAGS)

$(TARGET): $(SOURCES)
	@$ g++ -o $@ $^ $(FLAGS)

run: $(TARGET)
	sudo taskset -c 0 ./$(TARGET) $(ARGS)

clean:
	@-rm -f *.o $(TARGET)
