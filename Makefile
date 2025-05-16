sequence: sequence.c
	mkdir -p bin
	cc sequence.c -o bin/sequence
	bin/sequence <test/sample.txt >test/sample-result.txt
	diff test/sample-expected.txt test/sample-result.txt
