main:
	@for f in src/*.cpp; do \
		echo $$f;           \
	 	g++ "$$f";          \
		./a.out;            \
	done
