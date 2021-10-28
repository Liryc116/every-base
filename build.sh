#!/usr/bin/env bash

set -e

gcc src/c/*/*.c tests/c/*.c -W -Wall -Wextra -Werror -lcriterion -o unit_test
./unit_test
