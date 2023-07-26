#!/bin/bash

aidl-cpp com/yuandaima/ICallback.aidl ./ ./ICallback.cpp
aidl-cpp -I./com/yuandaima com/yuandaima/IHello.aidl ./ ./IHello.cpp