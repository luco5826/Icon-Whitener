# Icon-Whitener
A simple single-file program which makes your icons whiter

## Description
You have a really dark theme on your distro, and you love it.

You have installed the most awesome icon pack around, and you love it.

But, the Icon pack designer thought that nobody would have used HIS Icon pack with a dark themed distro.
This Software is what you're looking for!

## Requirements
You'll need at least the boost libraries that works with your filesystem and with strings:
### Debian
```
sudo aptitude install libboost-filesystem-dev
```
I don't know which is the library for strings manipulation, so I would suggest that you install all the dev file for boost
```
sudo aptitude install libboost-all-dev
```

## Usage
Copy the icons you want to edit inside a folder named `icons`

Copy `whitener.cpp` and the Makefile inside the folder where the `icons` folder is, run `make`

Then simply run
```
./white
```
And that's it


