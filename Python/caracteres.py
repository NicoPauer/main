#!/usr/bin/python3

import numpy as np

cadena = ''

for caracter in np.linspace(4, 128):
  # A Partir del codigo de cada caracter unicode lo transformo en caracter	
	cadena = cadena + chr(int(caracter) + np.random.randint(1, (caracter // 2)))
	
print(cadena)
