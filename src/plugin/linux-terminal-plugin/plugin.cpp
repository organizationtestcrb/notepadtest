﻿#include <qobject.h>
#include <qstring.h>
#include <include/pluginGl.h>
#include <functional>
#include <qsciscintilla.h>
#include "ndd_plugin_implement.h"

NOTEPAD_PLUGIN_METADATA_IDENTIFY_V1("Linux Terminal", "0.1", "author", u8"基于 LXQT QTerminal 的插件", "");


NOTEPAD_PLUGIN_METADATA_IMPLEMENT_V1(NddPluginImplement, false);
