//
// Created by hwjoo on 2017-01-05.
//
#include "com_hwjoo_ndkproject_TestNDK.h"

JNIEXPORT jstring JNICALL Java_com_hwjoo_ndkproject_TestNDK_getNDKString
  (JNIEnv * env, jobject obj) {
    return (*env).NewStringUTF("My Jni Text");
  }

JNIEXPORT jint JNICALL Java_com_hwjoo_ndkproject_TestNDK_sumOneHundred
        (JNIEnv * env, jobject obj){
    int i = 1;
    for(i ; i<100; i++){
        i++;
    }

    return i;
}



