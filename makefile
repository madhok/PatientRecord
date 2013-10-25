CC=g++
CFLAGS=-c

all: PatientRecord

PatientRecord: main.o PatientRecord.o 
	$(CC) main.o PatientRecord.o -o PatientRecord

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

PatientRecord.o: PatientRecord.cpp
	$(CC) $(CFLAGS) PatientRecord.cpp

clean:
	rm -rf *o PatientRecord