#include <jni.h>
#include <string>
#include <iostream>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_lixinxin_ndkdemo_MainActivity_stringFromJNI(JNIEnv *env, jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

using namespace std;
extern "C"
JNIEXPORT jstring JNICALL
Java_com_lixinxin_ndkdemo_MainActivity_getNameFromJNI(JNIEnv *env, jobject, jstring name) {

    string hello = env->GetStringUTFChars(name, NULL);
    hello.append("lalal");
    return env->NewStringUTF(hello.c_str());
}
