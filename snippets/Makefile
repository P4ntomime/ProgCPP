CXX = clang++
CXXFLAGS = -Wall -c
LDFLAGS = -o
BIN = main
OBJS = main.o otherfile.o

all!
\tikz[overlay, remember picture]\node[xshift=-1mm,yshift=1mm](target){};
!: $(BIN)!\tikz[overlay, remember picture]\node[yshift=0.6mm](depend){};!

%.o: %.cpp
   !
\tikz[overlay, remember picture]\node[xshift=-1mm,yshift=1mm](indent){};
! $(CXX) $(CXXFLAGS) $<

$(BIN): $(OBJS)
	$(CXX) $(LDFLAGS) $@ $^

clean:
	rm -f $(OBJS) $(BIN)

.PHONY: clean all