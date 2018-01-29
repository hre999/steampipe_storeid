PREFIX = /usr/local

.PHONY: clean install uninstall

all: steampipe_storeid
	

steampipe_storeid: steampipe_storeid.cpp
	g++ -o $@ $^
#	g++ -static -o $@ $^

clean: 
	rm -f steampipe_storeid

install: steampipe_storeid
	mkdir -p $(PREFIX)/bin
	cp steampipe_storeid $(PREFIX)/bin/

uninstall: 
	rm -f $(PREFIX)/bin/steampipe_storeid
