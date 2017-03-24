/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wolfssl_wolfcrypt_Rng */

#ifndef _Included_com_wolfssl_wolfcrypt_Rng
#define _Included_com_wolfssl_wolfcrypt_Rng
#ifdef __cplusplus
extern "C" {
#endif
#undef com_wolfssl_wolfcrypt_Rng_NULL
#define com_wolfssl_wolfcrypt_Rng_NULL 0LL
/*
 * Class:     com_wolfssl_wolfcrypt_Rng
 * Method:    mallocNativeStruct
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_wolfssl_wolfcrypt_Rng_mallocNativeStruct
  (JNIEnv *, jobject);

/*
 * Class:     com_wolfssl_wolfcrypt_Rng
 * Method:    initRng
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wolfssl_wolfcrypt_Rng_initRng
  (JNIEnv *, jobject);

/*
 * Class:     com_wolfssl_wolfcrypt_Rng
 * Method:    freeRng
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wolfssl_wolfcrypt_Rng_freeRng
  (JNIEnv *, jobject);

/*
 * Class:     com_wolfssl_wolfcrypt_Rng
 * Method:    rngGenerateBlock
 * Signature: (Ljava/nio/ByteBuffer;II)V
 */
JNIEXPORT void JNICALL Java_com_wolfssl_wolfcrypt_Rng_rngGenerateBlock__Ljava_nio_ByteBuffer_2II
  (JNIEnv *, jobject, jobject, jint, jint);

/*
 * Class:     com_wolfssl_wolfcrypt_Rng
 * Method:    rngGenerateBlock
 * Signature: ([BII)V
 */
JNIEXPORT void JNICALL Java_com_wolfssl_wolfcrypt_Rng_rngGenerateBlock___3BII
  (JNIEnv *, jobject, jbyteArray, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
