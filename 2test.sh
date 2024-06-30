#!/usr/bin/env bash
sbt "Test/runMain mac.test --compressor-file benchmarks/16x16/ct.txt --prefix-adder-file benchmarks/16x16/ppa.txt --accumulator-file benchmarks/16x16/ppa.txt"
