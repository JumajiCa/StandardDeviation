
CC = g++ 
CFLGAS = -std=c++2a -Wall
CFLAGS += 
LDFLAGS = 

SRC := $(wildcard src/*.cpp) 
OBJS := $(SRC:%.cpp=%.o) 
BIN = bin

.PHONY: all clean 

all: dir libs main 

check: 
	@echo $(OBJS) 

dir: 
	@echo "Creating Bin Directory. " 
	mkdir -p $(BIN) 

libs:  

 
%.o: %.cpp 
	@echo "Creating Object. " # This Just Prints Out The Contents Inside Of teh Quotations. 
	$(CC) -o $@ -c $< $(CFLAGS) $(LDFLAGS) # This Is The Decrypted Interpretation Of This. 
	# g++ -c %.cpp. 

main: $(OBJS) 
	@echo "Creating The Main Executable. " 
	$(CC) -o $(BIN)/main $^ $(LDFLAGS) 

run: clean all 
	$(BIN)/main 

clean: 
	@echo "Cleaning Up Everything. " 
	rm -rvf src/*.o ${BINS} 

