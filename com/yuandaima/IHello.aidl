package com.yuandaima;

import com.yuandaima.ICallback;

interface IHello
{
    void hello();
    int sum(int x, int y);
    void registerCallback(ICallback cb);
}