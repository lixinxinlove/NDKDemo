#include <jni.h>
#include <string>
#include <iostream>
#include <android/log.h>
#include "Student.h"
#include "Student.cpp"
#include <list>


#define  LOG_TAG    "native-lib"
#define  LOGI(...)  __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define LOGE(...)  __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)
#define LOGI(...)  __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)


using namespace std;
extern "C"
JNIEXPORT jstring JNICALL
Java_com_lixinxin_ndkdemo_test_MyJin_getJinString(JNIEnv *env, jobject instance) {

    std::string returnValue = "lee";

    Student student;
    student.setName("lee");
    std::string name = student.getName();

    list<string>::iterator itor;  //定义迭代器
    list<string> names;
    for (int i = 0; i < 10; i++) {
        names.push_back("lee");
    }


    itor = names.begin();
    while (itor != names.end()) {
        LOGI("name_item=%s", (*itor++).c_str());
    }


    LOGI("name=%s", name.c_str());

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


