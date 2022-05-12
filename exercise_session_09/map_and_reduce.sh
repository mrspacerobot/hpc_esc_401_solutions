#!/bin/bash
(for var in "$@" ; do cat $@ | ./mapper.py ; done ) | sort | ./reducer.py
