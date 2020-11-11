# tictactoe

A cli tic tac toe game.

### Prerequisites

You need to have g++ installed. Ubuntu 18.04 and 20.04 comes with it.
```
$ sudo apt update
$ sudo apt install g++
```

Validate the installation with
```
$ g++ --version
```

The default output of g++ in Ubunbu 18.04 looks like this:
```
g++ (Ubuntu 7.4.0-1ubuntu1~18.04) 7.4.0
Copyright (C) 2017 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```

### Installing

Clone this repository.
```
$ cd ~
$ git clone git@github.com:Katalam/tictactoe.git
$ cd tictactoe
```
Compile the source code with g++
```
$ mkdir build
$ g++ -g src/main.cpp -o build/main
```

### Running the program
Run
```
$ ./build/main
```

## Built with

* C++

## Author

* [Katalam](https://github.com/Katalam)

## License

This project is licensed under the GPLv3 License - see [LICENSE](LICENSE) file for details.
