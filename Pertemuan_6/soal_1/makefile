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
	# Jalankan program dan simpan output ke file
	./$(TARGET) > output.txt
	# Bandingkan output dengan file expected_output.txt
	diff output.txt expected_output.txt && echo "Test Passed" || echo "Test Failed"

# Target untuk membersihkan file .o dan program executable
clean:
	rm -f *.o $(TARGET) output.txt
