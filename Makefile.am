AUTOMAKE_OPTIONS = foreign subdir-objects
bin_PROGRAMS = calculator
calculator_SOURCES = src/main.c src/difference.c src/factorial.c src/product.c src/sum.c src/division.c
noinst_HEADERS = calc.h
clean:
	rm -rf src/*.o auto* aclocal* config.* Makefile Makefile.in configure calculator
	find . -maxdepth 1 -type l -delete


