
#include "com_zmd_patchapklib_PatchUtil.h"
#include "bspatch.h"

JNIEXPORT jint JNICALL Java_com_zmd_patchapklib_PatchUtil_bspatch
  (JNIEnv *env, jclass thiz, jstring oldAPK, jstring newAPK, jstring patch)
{
			int argc=4;    
      char * argv[argc];    
      argv[0]="bspatch";    
      argv[1]=(char*)((*env)->GetStringUTFChars(env,oldAPK, 0));    
      argv[2]=(char*)((*env)->GetStringUTFChars(env,newAPK, 0));    
      argv[3]=(char*)((*env)->GetStringUTFChars(env,patch, 0));   
      int ret=bspatch(argc, argv, env);
      (*env)->ReleaseStringUTFChars(env,oldAPK,argv[1]);    
      (*env)->ReleaseStringUTFChars(env,newAPK,argv[2]);    
      (*env)->ReleaseStringUTFChars(env,patch,argv[3]);   
      return ret;    
}
