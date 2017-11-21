package com.lixinxin.ndkdemo.test;

/**
 * Created by android on 2017/11/21.
 */

public class MyJin {

    static {
        System.loadLibrary("native-lib");
    }
    public  native String getJinString();

}
