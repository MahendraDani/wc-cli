# wc-cli

wc-cli is a minimal version of `wc` command. This project is developed as a hobby project, by referring to [Jhon Cricket's Coding Challenge](https://codingchallenges.fyi/challenges/challenge-wc). I will be improving this project even more in the near future, stay tuned!.

# How to use

So you really are a developer,right? Because only monkeys use GUI,don't they?

1. Clone this repository

```bash
git clone https://github.com/MahendraDani/wc-cli.git
```

2. Change directory to projects directory

```bash
cd wc
```

3. Compile the wc-cli

```bash
g++ main.cpp -o wc
```

4. Run the wc-cli

```bash
./wc [option] <path-to-file>
```

## Example

Try running the following command to test the cli

```bash
./wc -c test.txt
```

If the optput is `342190`, the cli is working perfectly!

# CLI Guide

Each command in the wc-cli follows the following structure:

```bash
./wc [option] <path-to-file>
```

## Options

You can use any of the following Options

- `-c` : To get size of the file in bytes
- `-l` : To get number of lines in the file
- `-w` : To get number of words in the file
- `-m` : To get number of characters in the file

> Note: Please put the file inside the directory and provide its path from the root directory of this project in the command

## How to get help?

Whenever you feel stuck in something, try running the `help` command:

```bash
./wc help
```

# Contributing

If you feel the need to fix any bug or add a new feature, please create a issue in the repository and we will look into it, Thanks!
