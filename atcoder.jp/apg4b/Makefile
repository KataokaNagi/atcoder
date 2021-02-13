# @file Makefile
# @brief Auto compiler in the "current" directory for AtCoder
# @auther Kataoka Nagi calm1836[at]gmail.com
# @date 2021-02-13 11:39:54
# @see 競プロ用Makefileのススメ https://woodyzootopia.github.io/2019/01/%E7%AB%B6%E3%83%97%E3%83%AD%E7%94%A8makefile%E3%81%AE%E3%82%B9%E3%82%B9%E3%83%A1/
# @see 競プロ（AtCorder)の標準入力を楽にするためmakeを使う 　C++/Java/PythonのサンプルMakefile掲載 https://qiita.com/aoi_stoic/items/8e3c81b0c277a28dcb23
# @see makefileを利用して簡単にmac,VSCodeでbits/stdc++.hを使う https://o-treetree.hatenablog.com/entry/2020/04/27/194001
# Copyright (c) 2020 Kataoka Nagi

SRC_DIR := ./src
EXE_DIR := ./exe
STDCXX_DIR := ../../bits

CXX := c++
CXX_FLAGS := -g -std=c++14 -Wall -I $(STDCXX_DIR)

########################################
# default target name
########################################

# compile all files
.PHONY: all
all: a b c d e f

# compile each files
a: $(SRC_DIR)/a.cpp
	$(CXX) $(CXX_FLAGS) $< -o $(EXE_DIR)/$@

b: $(SRC_DIR)/b.cpp
	$(CXX) $(CXX_FLAGS) $< -o $(EXE_DIR)/$@

c: $(SRC_DIR)/c.cpp
	$(CXX) $(CXX_FLAGS) $< -o $(EXE_DIR)/$@

d: $(SRC_DIR)/d.cpp
	$(CXX) $(CXX_FLAGS) $< -o $(EXE_DIR)/$@

e: $(SRC_DIR)/e.cpp
	$(CXX) $(CXX_FLAGS) $< -o $(EXE_DIR)/$@

f: $(SRC_DIR)/f.cpp
	$(CXX) $(CXX_FLAGS) $< -o $(EXE_DIR)/$@

# run
runa: $(EXE_DIR)/a.exe
	$(EXE_DIR)/a.exe

runb: $(EXE_DIR)/b.exe
	$(EXE_DIR)/b.exe

runc: $(EXE_DIR)/c.exe
	$(EXE_DIR)/c.exe

rund: $(EXE_DIR)/d.exe
	$(EXE_DIR)/d.exe

rune: $(EXE_DIR)/e.exe
	$(EXE_DIR)/e.exe

runf: $(EXE_DIR)/f.exe
	$(EXE_DIR)/f.exe

# clean outs
cl:
	rm $(EXE_DIR)/*.exe

########################################
# unique target name
########################################

# compile each files
# %: %.cpp # select at console
%: $(SRC_DIR)/%.cpp
	$(CXX) $(CXX_FLAGS) $< -o $(EXE_DIR)/$@
