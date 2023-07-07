#include <jni.h>
#include <string>
#include "testadd.h"
extern "C" JNIEXPORT jstring JNICALL
Java_com_datnlt_testcpp_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    int a= 1;
    int b= 2;
    int c=add(a,b);
    std::string hello = "Hello from C++"+std::to_string(c);


    return env->NewStringUTF(hello.c_str());
}