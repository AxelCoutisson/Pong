all:
	g++ -L lib64 -I include64 main.cpp GameWindow.cpp -o Pong -lmingw32 -lSDL2main -lSDL2
clean:
	rm -f *o