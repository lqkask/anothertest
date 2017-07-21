#include <jni.h>
#include <com_example_simplejni_SimpleInterface.h>
JNIEXPORT jstring JNICALL Java_com_example_simplejni_SimpleInterface_sayName
  (JNIEnv *env, jclass){
    return env->NewStringUTF("I'm Eric!");
}
