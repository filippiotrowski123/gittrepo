#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  palingrom.py 

import os

def czytaj_dane(plik):
    if not os.path.exists(plik):
        print('plik niedostępny')
        return False
    teksty = []
    with open (plik, "r")as f:
        for linia in f:
            teksty.append(linia.strip())
        return teksty
        
        
def czy_palindrom(tekst):
    ile = len(tekst)
    for i in range(ile // 2):
        #print(napis[1])
        #print(napis[-i-1])
        if tekst[i] != tekst [-i-1]:
             return False
        return True






def main(args):
   # tekst = input("podaj tekst ")
    teksty = czytaj_dane('dane01.txt')
    ile = 0
    # if czy_palindrom(tekst):
        # ~print('To palindrom!')
    # else:
        # ~print('To nie jest palindrom')
    for i in range (len(teksty)):
        if czy_palindrom(teksty[i]):
            ile += 1
        else:
            continue
    print (ile)
    return 0
  
if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
