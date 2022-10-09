# ------------------------------------------------------------
# My Test || starmsgproto
# ------------------------------------------------------------

HOST_SYSTEM = $(shell uname | cut -f 1 -d_)
SYSTEM ?= $(HOST_SYSTEM)
CXX = g++
CPPFLAGS += `pkg-config --cflags protobuf grpc`
CXXFLAGS += -std=c++11 -I ../common -D_GLIBCXX_USE_CXX11_ABI=0

LDFLAGS += -L/usr/local/lib `pkg-config --libs protobuf grpc++`\
           -pthread\
           -Wl,--no-as-needed -lgrpc++_reflection -Wl,--as-needed\
           -ldl\
           /usr/local/lib64/libprotobuf.a\
           -lmuduo_base -lmuduo_net\
           -lstdc++\

CMDMSG_ROOT = /root/starcommunication

all: starmsgserver 

starmsgserver: $(CMDMSG_ROOT)/common/starmsgproto.pb.o main.o servicemanager.o serviceregistrycenter.o
	$(CXX) $^ $(LDFLAGS) -o $@

clean:
	rm -f *.o starmsgserver