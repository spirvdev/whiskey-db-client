#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring Java_com_beloncode_whiskeydbclient_MainActivity_stringFromJNI
    (JNIEnv* env, jobject)
{
    const std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
