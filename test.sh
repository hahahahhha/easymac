#!/usr/bin/env bash
export PATH=/usr/bin:$PATH
sbt "Test/runMain systolic.test --compressor-file benchmarks/16x16_d/ct.txt --prefix-adder-file benchmarks/16x16_d/ppa.txt --accumulator-file benchmarks/16x16_d/ppa.txt"
