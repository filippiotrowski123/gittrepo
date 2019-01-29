#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  potega.py
def czy_naturalna(a):
    if a.isdigit():
        return True
    return False
def potega_it(a, n):
    wynik = 1
    for i in range(n):
        wynik = wynik * a
    return wynik

def main(args):
    assert potega_it(2, 0) == 1
    assert potega_it(2, 1) == 2
    assert potega_it(0, 10) == 0
    assert potega_it(1, 10) == 1
    assert potega_it(3, 3) == 27
    a = int(input("Podaj podstawę: "))
    n = int(input("Podaj liczbe naturalną: "))
    if not czy_naturalna(a) or not czy_naturalna(n):
        print("Błędne dane!")
        return 0
    print("{} do potęgi {} = {}".format(a, n, potega_it(int(a), int(n))))
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
