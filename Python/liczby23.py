#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  liczby2 3py
#  
def liczby2():
    """
    Drukowanie wszystkich cyfr 2-cyfrowsych 
    liczby o niepowtarzajacych się cyfrach
     nie drukujemy:11, 22, 33, ..."""
    licznik = 0
    for i in range(1, 10):
        for j in range(0, 10):
            if i != j:
                print("{}{}".format(i, j))
                licznik = licznik + 1
    print("liczb 2 syfrowych",licznisk)

def main(args):
    liczby2()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))