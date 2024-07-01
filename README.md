# easymac
A chisel-based multiplier-accumulator generator.

## Environment Setup

### Install JDK
```
sudo apt install openjdk-8-jdk
# or sudo apt install openjdk-11-jdk
```

### Install Scala
The following is for Ubuntu 18.04; for other OS, please refer to [here](https://www.scala-sbt.org/1.x/docs/Setup.html).
```
sudo apt-get update
sudo apt-get install apt-transport-https curl gnupg -yqq
echo "deb https://repo.scala-sbt.org/scalasbt/debian all main" | sudo tee /etc/apt/sources.list.d/sbt.list
echo "deb https://repo.scala-sbt.org/scalasbt/debian /" | sudo tee /etc/apt/sources.list.d/sbt_old.list
curl -sL "https://keyserver.ubuntu.com/pks/lookup?op=get&search=0x2EE0EA64E40A89B84B2DF73499E82A75642AC823" | sudo -H gpg --no-default-keyring --keyring gnupg-ring:/etc/apt/trusted.gpg.d/scalasbt-release.gpg --import
sudo chmod 644 /etc/apt/trusted.gpg.d/scalasbt-release.gpg
sudo apt-get update
sudo apt-get install sbt
```

### Install Chisel
Chisel will be installed automatically according to [`build.sbt`](build.sbt) the first time you run sbt.

### Install Verilator
You should install Verilator for simulation.
```
sudo apt-get install verilator
```

## Run
Run `sbt "Test/runMain mac.test --compressor-file <compressor-representation-file> --prefix-adder-file <adder-representation-file> --accumulator-file <adder-representation-file>"`.
Sample representation files are under [`benchmarks/`](benchmarks/).
For example,
```
sbt "Test/runMain mac.test --compressor-file benchmarks/16x16/ct.txt --prefix-adder-file benchmarks/16x16/ppa.txt --accumulator-file benchmarks/16x16/ppa.txt"
```

## changes for mac with depth

### representation convert
Run `python3 genppa.py --s <source file> --d <destination file>` to generate sequential parallel prefix adder representation from PrefixRL matrix representation[1]

In source file, the first line should be the bit width of augend and addend. The rest of the file should be the half matrix representation.


Run `python3 genwt.py --s <source file> --d <destination file>` to generate sequential wallece tree representation from RLMUL matrix representation[2]

In source file, the first line should contain `m`, `n`, `macdepth`.`m` and `n` is the bit width of multiplicand and multiplier respectively.
`macdepth` is how many multiplication operations are done during one clock cycle. 

Example source files are located at `./oriexp`, and corresponding destination files are located at `./benchmarks/test`

[1]:PrefixRL: Optimization of Parallel Prefix Circuits using Deep
Reinforcement Learning
[2]:RL-MUL: Multiplier Design Optimization with Deep
Reinforcement Learning

### macd generator
For simplicity's sake, mac with depth is called `macd`. To generate a macd, run `sbt "Test/runMain systolic.test --compressor-file <compressor-representation-file> --prefix-adder-file <adder-representation-file> --accumulator-file <adder-representation-file>"`.Note that these files should be the sequential representation.

Systolic array is not done yet, so current systolic.test is just a macd generator. It may be revised later.