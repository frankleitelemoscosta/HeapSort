all:

	gcc ./src/main.c ./src/heapSort.c ./src/heapSort.h -o ./build/object/executavel

clean:

	rm -rf ./build/object/executavel

run:

	./build/object/executavel