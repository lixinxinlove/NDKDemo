#include <jni.h>
#include <string>
#include <iostream>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_lixinxin_ndkdemo_test_MyJin_getJinString(JNIEnv *env, jobject instance) {
    std::string returnValue = "lee";
    return env->NewStringUTF(returnValue.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_lixinxin_ndkdemo_MainActivity_stringFromJNI(JNIEnv *env, jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

using namespace std;
extern "C"
JNIEXPORT jstring JNICALL
Java_com_lixinxin_ndkdemo_MainActivity_getNameFromJNI(JNIEnv *env, jobject, jstring name,
                                                      jstring age) {
    string _age = env->GetStringUTFChars(age, NULL);
    return env->NewStringUTF(_age.c_str());
}


