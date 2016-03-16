main:
	@for f in src/*.cpp; do \
		echo $$f;           \
	 	$(GXX)"$$f";          \
		./a.out;            \
	done
