CXX = g++
CXXFLAGS = -std=c++14 -g -MMD -Werror=vla
EXEC = cc3k
OBJECTS =  enemies.o main.o player.o potions.o
DEPENDS = ${OBJECTS:.o=.d}

${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC} 

-include ${DEPENDS}

.PHONY: clean

clean:
	rm ${OBJECTS} ${EXEC} ${DEPENDS}
