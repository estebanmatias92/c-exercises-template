#### Compile and run the program

*`docker compose run --rm -i app`*


#### Clear source files and binaries

*`docker compose run --rm -i app make clean`*

#### Folder structure

There is a *`./src`* directory which contains the *`.c`* source files and an *`./include`* directory which contains the *`.h`* headers files.

*`main.c`* file is in *`./src/core`* directory

Everything is a module, so in *`./src`* and *`./include`* everything is organized within folders according to their responsability.

**Core** module contains the files with the exercise per se and the menu, and everything else are helpers and additional functionalities.