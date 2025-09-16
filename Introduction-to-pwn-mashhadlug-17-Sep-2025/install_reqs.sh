#!/bin/bash

if (( $EUID == 0 )); then
	echo "don't run me as root!"
	exit 1
fi

sudo apt install python3 python3-pwntools gdb gcc neovim make

bash -c "$(curl -fsSL https://gef.blah.cat/sh)" #install geff
