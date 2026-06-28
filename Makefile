sheet_music_reader: sheet_music_reader.c
	clang sheet_music_reader.c -o sheet_music_reader -I./include/ -L$(HOME)/code/raylib/src/ -lraylib -lm -lX11

sheet_music_reader_mac: sheet_music_reader.c
	clang sheet_music_reader.c -o sheet_music_reader -framework CoreVideo -framework IOKit -framework Cocoa -framework GLUT -framework OpenGL -I./include/ -L$(HOME)/code/raylib/src/ -lraylib
