package com.zmd.patchapklib;

import java.io.IOException;

import android.content.Context;

public class PatchUtil {

	native private static int bspatch(String oldAPK,String newAPK,String patch);

	public static void applyPatch(String oldAPK,String newAPK,String patch) throws IOException{
		bspatch(oldAPK, newAPK, patch);
	}

	public static void applyPatch(Context context,String newAPK,String patch) throws IOException{
		String oldAPK = context.getApplicationInfo().sourceDir;
		bspatch(oldAPK, newAPK, patch);
	}

    static {
        System.loadLibrary("bspatch");
    }
}
