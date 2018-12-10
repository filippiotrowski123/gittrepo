#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  car.py
# marka np fiat
# model np tipo
# rok produkcji np 2002
# metoda wiek(), która zwróci wiek samochodu w latch
from datetime import date

class samochód:
    def __init__(self, marka, model, rocznik):
        self.maeka = marka
        self.model = model
        self.rok = rocznik
    def wiek(self):
        dzis = date.today()
        return dzis.year - self.rok
        

def main(args):
    s1 = Samochod('Fita', 'Tipo', 2000)
    s2 = Samochod('Peugot', '307', 2007)
    s3 = Samochod('Opel', 'Astra', 2003)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
