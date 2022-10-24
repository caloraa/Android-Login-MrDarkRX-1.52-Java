#include <sys/types.h>
#include <pthread.h>
#include <jni.h>
#include <unistd.h>
#include "Logger.h"

//url
extern "C" JNIEXPORT jstring
JNICALL
Java_com_calora_login_Auth_Title(JNIEnv *env, jobject thiz) {
    return env->NewStringUTF(("https://yourserverlogin.000webhostapp.com/login.php"));
}

//dialog
extern "C" JNIEXPORT jstring
JNICALL
Java_com_calora_login_MainActivity_Dialog(JNIEnv *env, jobject thiz) {
return env->NewStringUTF(("- Esta aplicación solo durará unos días\n- Esta App Solo Durara Un Par De Fias Subscribete a Caloraa'\n- Aplikasi ini hanya akan bertahan beberapa hari\n   OBBS v1.52"));
}


// canal mb
extern "C" JNIEXPORT jstring
JNICALL
Java_com_calora_login_MainActivity_YTURL(JNIEnv *env, jobject thiz) {
    return env->NewStringUTF(("https://youtube.com/channel/UCJz250ZlHSldmGlSyVDqeDA"));
}

// team
extern "C" JNIEXPORT jstring
JNICALL
Java_com_calora_login_MainActivity_Team(JNIEnv *env, jobject thiz) {
return env->NewStringUTF(("MrDarkRX"));
}
// team
extern "C" JNIEXPORT jstring
JNICALL
Java_com_calora_login_MainActivity_Credits(JNIEnv *env, jobject thiz) {
return env->NewStringUTF(("MrDarkRX Copyright © 2022"));
}
