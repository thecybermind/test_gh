/*
Test_GH - Golf With Your Friends test plugin
Copyright 2026
https://github.com/thecybermind/test_gh/
3-clause BSD license: https://opensource.org/license/bsd-3-clause

Created By:
    Kevin Masterson < k.m.masterson@gmail.com >

*/

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <string>

#include <aetherim.hpp>
#include <ghapi.hpp>

#include "main.hpp"
#include "version.h"


plugin_info g_plugininfo = {
	GH_PIFV_MAJOR,								// plugin interface version major
	GH_PIFV_MINOR,								// plugin interface version minor
	"Test_GH",									// name of plugin
	TEST_GH_VERSION,							// version of plugin
	"Test plugin",								// description of plugin
	TEST_GH_BUILDER,							// author of plugin
	"https://github.com/thecybermind/test_gh",	// website of plugin
	"TEST",										// logtag of plugin
};
plugin_funcs g_pluginfuncs;
plugin_vars g_pluginvars;


C_DLLEXPORT void GolfHook_Query(plugin_info** plugininfo, plugin_funcs** pluginfuncs, plugin_vars** pluginvars) {
    GH_GIVE_PTRS();
}


C_DLLEXPORT bool GolfHook_Attach() {
	GH_WRITEGHLOG(GHLOG_INFO, "Test plugin loaded!\n");
	return true;
}


C_DLLEXPORT void GolfHook_Detach() {
    // nothing
}
