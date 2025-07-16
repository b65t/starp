install:
	gcc -o starp starp.c setup.c
	mv ./starp /bin/starp
	cp -r ./templates /etc/starp

uninstall:
	rm /bin/starp
