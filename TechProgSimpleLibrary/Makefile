ifeq ($(PREFIX),)
    PREFIX := /usr/local
endif

install: 
    install -d $(PREFIX)/lib/
    install -m 644 libbuffer.so $(PREFIX)/lib/
    install -d $(PREFIX)/include/
    install -m 644 buffer.h $(PREFIX)/include/
