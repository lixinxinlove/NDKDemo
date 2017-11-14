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
class Student {

private:
    string name;
    string age;

public:


    void setName(string name) {
        this->name = name;
    }

    void setAge(string age) {
        this->age = age;
    }

    string getName() {
        return name;
    }

    string getAge() {
        return age;
    }

    string getStudent() {
        string str = "这个学生姓名是";
        str += name;
        str += "，年龄";
        str += age;
        return str;
    }

};

using namespace std;
extern "C"
JNIEXPORT jstring JNICALL
Java_com_lixinxin_ndkdemo_MainActivity_getNameFromJNI(JNIEnv *env, jobject, jstring name,
                                                      jstring age) {
    string _name = env->GetStringUTFChars(name, NULL);

    string _age = env->GetStringUTFChars(age, NULL);;

    Student student;
    student.setName(_name);
    student.setAge(_age);

    return env->NewStringUTF(student.getStudent().c_str());
}


