install:
	gcc ./starp.c -o starp
	mv ./starp /bin/starp
	cp -r ./templates /etc/starp

uninstall:
	rm /bin/starp
