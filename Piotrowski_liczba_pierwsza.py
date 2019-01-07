#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  liczba_pierwsza.py
def Liczba_Pierwsza():5
    i = 2
    n = int(input("Podaj liczbę"))
    while n % i == 0:
        print("Liczba złożona")
        return 0
    i = i + 1
    
    print("Liczba pierwsza")
    return 0           

def main(args):
    Liczba_Pierwsza()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
