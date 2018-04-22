#!/usr/bin/env bash

clear
make re && mv ./libftprintf.a ./checker/ && make test --directory=./checker/
#make re && gcc main.c -I ./includes/ -L . -lftprintf && ./a.out
