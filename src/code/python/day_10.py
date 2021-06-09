#!/bin/python3

import math
import os
import random
import re
import sys


if __name__ == '__main__':
    n = int(input().strip())
    ans = 0
    series = 0
    
    while n>0 :
        if n%2 == 1 :
            series += 1
        else :
            series = 0 
        ans = max(ans, series)
        n = n //2
    
    print(ans)