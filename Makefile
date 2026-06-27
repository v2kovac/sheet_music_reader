sheet_music_reader: sheet_music_reader.c
	clang sheet_music_reader.c -o sheet_music_reader -I$(HOME)/code/raylib/src/ -L$(HOME)/code/raylib/src/ -lraylib -lm -lX11
