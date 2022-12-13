**You want to know where is the biggest square in your map ?? 
This is possible with this program**

**TO COMPILE IT:**

**ONLY IF YOU ARE ON LINUX OR MAC , DO**
```
make
```
**if it doesn’t work, it's probably because make command is not installed on your pc .**

**To solve that, execute in ubuntu:**
```
sudo apt-get install make
```
on fedora:
```
sudo dnf install make
```
on Mac os:
```
sudo brew install make
```

**after this you will be able to create the ./bsq compile file .**

** IF YOU ARE ON WINDOWS' COMPUTER, DON'T WORRY, YOU'LL BE ABLE TO USE THIS PROGRAM BY USING THE **bsq.exe** WITCH IS IN THE REPOSITORY**

to make this program work ,you need to define a map with **'o'** as obstacles and **'.'** as empty places.
The map should look like 
```
5
ooooooooooooooo
ooooo..oooooooo
ooooo..oooooooo
ooooo..oooooooo
oooooooo....ooo
......ooooooooo
```
the number above the map is the number of (lines - 1)

*why -1 ?? SHHUUUTTT DON'T ASK* 

To execute the program, do in a terminal where the repository folder on your pc:

on linux or mac os:
```
./bsq [filepath of the map]
```
on windows:
```
./bsq.exe [filepath of the map]
```

for exemple, the resolve of this map would be :
```
ooooooooooooooo
oooooxxoooooooo
oooooxxoooooooo
ooooo..oooooooo
oooooooo....ooo
......ooooooooo
```
ENJOY :)

*Copyright Saad Berrada Epitech Toulouse 2020*

