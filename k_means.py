import pandas as pd
import numpy as np
import statistics as st
import random

inp = [22,9,12,15,10,27,35,18,36,11]

k = int(input("Enter the value of k => "))

randomValue = []
for i in range(0, k):
  rand = inp[random.randint(0, len(inp)-1)]
  if rand not in randomValue:
    randomValue.append(rand)
print(randomValue)

def distance(a,b):
  return abs(a-b)

def itr(randomValue):
  global c1
  global c2
  global c3
  c1=[]
  c2=[]
  c3=[]
  lst = []
  for i in inp:
    d1 = distance(i,randomValue[0])
    d2 = distance(i,randomValue[1])
    d3 = distance(i,randomValue[2])
    val = {"d1":d1,"d2":d2,"d3":d3}
    minValue = sorted(val.items(), key=lambda t: t[1])[0][0]
    if minValue == "d1":
      c1.append(i)
    elif minValue == "d2":
      c2.append(i)
    else: c3.append(i)
  # print(c1)
  # print(c2)
  # print(c3)
  c1 = np.array(c1)
  c2 = np.array(c2)
  c3 = np.array(c3)
  c1_mean = np.mean(c1)
  c2_mean = np.mean(c2)
  c3_mean = np.mean(c3)
  c1 = list(c1)
  c2 = list(c2)
  c3 = list(c3)
  lst.append(c1_mean)
  lst.append(c2_mean)
  lst.append(c3_mean)
  # print(c1_mean,c2_mean,c3_mean)
  return lst

prev_lst = []
new_lst = itr(randomValue)
while prev_lst != new_lst:
  prev_lst = new_lst
  new_lst = itr(new_lst)

print(c1, c2, c3)
