#include "shulaing_han_ndk_callback_DataProvider.h"
#include "first.h"
#include <string.h>
#include <android/log.h>
#define LOG_TAG "System.out"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)

JNIEXPORT void JNICALL Java_shulaing_han_ndk_1callback_DataProvider_callCcode
  (JNIEnv * env, jobject obj)
{
	//调用DataProvider对象中的helloFromJava()方法
	//获取到某个对象, 获取对象中的方法, 调用获取到的方法
	LOGI("in code");
	//DataProvider完整类名 shulaing.han.ndk_callback.DataProvider
	char* classname = "shulaing/han/ndk_callback/DataProvider";


	jclass dpclazz = (*env)->FindClass(env, classname);
	if(dpclazz == 0)
		LOGI("class not find !!!");
	else
		LOGI("class find !!!");

	//参数介绍 : 第二个参数是Class对象, 第三个参数是方法名,第四个参数是方法的签名, 获取到调用的method
	jmethodID methodID = (*env)->GetMethodID(env, dpclazz, "helloFromJava", "()V");
	if(methodID == 0)
			LOGI("method not find !!!");
		else
			LOGI("method find !!!");

	/*
	 * 调用方法 void (*CallVoidMethod)(JNIEnv*, jobject, jmethodID, ...);
	 * 参数介绍 : 后面的 ... 是可变参数, 如果该返回值void的方法有参数, 就将参数按照次序排列
	 */
	LOGI("before call method");
	(*env)->CallVoidMethod(env, obj, methodID);
	LOGI("after call method");

}

JNIEXPORT void JNICALL Java_shulaing_han_ndk_1callback_DataProvider_callCcode1
  (JNIEnv *env, jobject obj)
{
	//调用DataProvider对象中的helloFromJava()方法
		//获取到某个对象, 获取对象中的方法, 调用获取到的方法
		LOGI("in code");
		//DataProvider完整类名 shulaing.han.ndk_callback.DataProvider
		char* classname = "shulaing/han/ndk_callback/DataProvider";


		jclass dpclazz = (*env)->FindClass(env, classname);
		if(dpclazz == 0)
			LOGI("class not find !!!");
		else
			LOGI("class find !!!");

		//参数介绍 : 第二个参数是Class对象, 第三个参数是方法名,第四个参数是方法的签名, 获取到调用的method
		jmethodID methodID = (*env)->GetMethodID(env, dpclazz, "printString", "(Ljava/lang/String;)V");
		if(methodID == 0)
				LOGI("method not find !!!");
			else
				LOGI("method find !!!");

		/*
		 * 调用方法 void (*CallVoidMethod)(JNIEnv*, jobject, jmethodID, ...);
		 * 参数介绍 : 后面的 ... 是可变参数, 如果该返回值void的方法有参数, 就将参数按照次序排列
		 */
		LOGI("before call method");
		(*env)->CallVoidMethod(env, obj, methodID, (*env)->NewStringUTF(env, "printString method callback success!!"));
		LOGI("after call method");
}

/*
 * 实际开发的情况
 * C代码工程师给我们 first.h first.c , 我们只需要将first.h引入, 然后就可以使用其中的方法了
 */
JNIEXPORT void JNICALL Java_shulaing_han_ndk_1callback_DataProvider_callCcode2
  (JNIEnv *env, jobject obj)
{
	//调用DataProvider对象中的helloFromJava()方法
		//获取到某个对象, 获取对象中的方法, 调用获取到的方法
		LOGI("in code");
		//DataProvider完整类名 shulaing.han.ndk_callback.DataProvider
		char* classname = "shulaing/han/ndk_callback/DataProvider";


		jclass dpclazz = (*env)->FindClass(env, classname);
		if(dpclazz == 0)
			LOGI("class not find !!!");
		else
			LOGI("class find !!!");

		//参数介绍 : 第二个参数是Class对象, 第三个参数是方法名,第四个参数是方法的签名, 获取到调用的method
		jmethodID methodID = (*env)->GetMethodID(env, dpclazz, "Add", "(II)I");
		if(methodID == 0)
				LOGI("method not find !!!");
			else
				LOGI("method find !!!");

		/*
		 * 调用方法 void (*CallVoidMethod)(JNIEnv*, jobject, jmethodID, ...);
		 * 参数介绍 : 后面的 ... 是可变参数, 如果该返回值void的方法有参数, 就将参数按照次序排列
		 */
		LOGI("before call method");
		(*env)->CallIntMethod(env, obj, methodID, 3, 5);
		LOGI("after call method");

}
