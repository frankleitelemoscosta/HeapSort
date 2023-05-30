all:

	gcc ./src/main.c -o ./build/object/executavel

clean:

	rm -rf ./build/object/executavel

run:

	./build/object/executavel