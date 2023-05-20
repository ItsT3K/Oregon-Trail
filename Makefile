# Wowza! Look a Makefile! Aint that pretty neat
CXX=g++
# A nasty ass hack for macs
MCX=g++-13
all: oregon.cpp
	$(CXX) -g -Wall -o oregon -O2 oregon.cpp
clean:
	$(RM) oregon
install:
	$(CXX) -g -Wall -o oregon -O2 oregon.cpp
	sudo cp oregon /usr/local/bin/oregon
	rm oregon
mac:
	$(MCX) -g -Wall -o oregon -O2 oregon.cpp

macinstall:
	$(MCX) -g -Wall -o oregon -O2 oregon.cpp
	sudo cp oregon /usr/local/bin/oregon
	rm oregon