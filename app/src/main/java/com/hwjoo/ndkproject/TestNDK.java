package com.hwjoo.ndkproject;

/**
 * Created by hwjoo on 2017-01-05.
 */

public class TestNDK {
    static{
        System.loadLibrary("MyLibrary");
    }

    public native String getNDKString();
    public native int sumOneHundred();

}
