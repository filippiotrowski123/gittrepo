#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  euklides.py
def nwdv1(a, b):
    while not a == b:
        if a > b:
            a = a - b
        else:
            b = b - a
    return a
    
def nwdv2(a, b):
    while a > 0:
        a = a % b
        b = b - a
            
        
            
    return b



def main(args):
    a = int(input('Podaj liczbe a:'))
    b = int(input('Podaj liczbę b:'))
    print(nwdv2(a, b))
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
