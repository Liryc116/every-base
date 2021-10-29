#!/usr/bin/env bash

set -e

gcc src/c/*/*.c tests/c/*.c -W -Wall -Wextra -Werror -lcriterion -fsanitize=address -g -o unit_test
./unit_test
