# Nama output program
TARGET = inventory

# Compiler dan flags
CXX = g++
CXXFLAGS = -Wall -std=c++11

# Target untuk build program
all: $(TARGET)

$(TARGET): main.o
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.o

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

# Target untuk menjalankan program
run: $(TARGET)
	./$(TARGET)

# Target untuk menjalankan test
test: $(TARGET)
	./$(TARGET) 

# Target untuk membersihkan file .o dan program executable
clean:
	rm -f *.o $(TARGET) output.txt
