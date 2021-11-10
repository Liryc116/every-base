#!/usr/bin/env bash

set -e

g++ src/cpp/*/*.cpp tests/cpp/*.cpp -W -Wall -Wextra -Werror -lcriterion -fsanitize=address -g -o unit_test
./unit_test
