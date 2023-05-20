# Wowza! Look a Makefile! Aint that pretty neat
CXX=g++
all: oregon.cpp
	$(CXX) -g -Wall -o oregon -O2 oregon.cpp
clean:
	$(RM) oregon
install:
	$(CXX) -g -Wall -o oregon -O2 oregon.cpp
	sudo cp oregon /usr/local/bin/oregon
	rm nyan