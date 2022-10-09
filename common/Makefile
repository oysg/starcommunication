# ------------------------------------------------------------
# My Test || starmsgproto
# ------------------------------------------------------------

SHELL = /bin/bash

HOMEDIR=/root/starcommunication

ALLLIBS: starmsgproto

starmsgproto:
	protoc -I $(HOMEDIR)/common --cpp_out=$(HOMEDIR)/common $(HOMEDIR)/common/starmsgproto.proto
	gcc -c -fPIC -I. starmsgproto.pb.cc -o starmsgproto.pb.o
	cp starmsgproto.pb.cc starmsgproto.pb.h $(HOMEDIR)/starmsgserver

clean:
	rm -f *.o *.pb.cc *.pb.h