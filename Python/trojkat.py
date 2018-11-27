#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  trojkat.py
#  



def main(args):
    a, b ,c = eval(input('Podaj liczby oddzielone przecinkikem'))
    #-if a + b > c:
        #print('prawda') 
        #if a + c > b:
          #print('prawda')   
          #if b + c > a:
              #print('trójkąt!')
          #else:
              #print('nie trójkąt!')
        #else:
            #print('nie trójkąt!')
      if a + b > c and a + c > a :
             print ('trójkąt')
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
