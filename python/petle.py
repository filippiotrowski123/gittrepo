#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  petle.py
#  

def cw1():
    suma = 0
    while suma <= 75:
        suma += int(input("Podaj liczbę: "))
    print(suma)

def cw2():
    n = int(input("Od: "))
    m = int(input("Do: "))
    for i in range(n, m + 1):
        print(i, end=' ')

def cw3():
    n = int(input("Liczba: "))
    for i in range(n + 1):
        print(i*i)

def main(args):
    cw3()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
