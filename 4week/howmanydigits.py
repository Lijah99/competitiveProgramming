#!/usr/bin/env python3

import math
from sys import stdin

for line in stdin:
    line = line.split()
    if line[1] == '+':
        temp = int(line[0]) +  int(line[2])

    if line[1] == '*':
        temp = int(line[0]) *  int(line[2])

    if line[1] == '^':
        temp = int(line[0]) **  int(line[2])
    value = int(str(temp)[-4:])
    print(str(value))