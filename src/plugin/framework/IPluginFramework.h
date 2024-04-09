#ifndef __IPLUGINFRAMEWORK__H__
#define __IPLUGINFRAMEWORK__H__

#include <QAction>
#include <cstddef>
#include <qmenu.h>
#include <qobject.h>
#include <qobjectdefs.h>
#include <qsciscintilla.h>

#define IPluginFramework_IID "com.gitee.ndd.pluginframework"

/** 
    在使用 IPluginFramework 时，请使用 : public IPluginFramework 并实现必要的代码
    另外：使用生成器生成适用于基于 IPluginFramework 的代码

    基于 IPluginFramework 开发的ndd插件，主要为了更标准化生产一个插件
*/
class IPluginFramework
{
public:
    /**
     * @brief 提供给编辑器的菜单类型
     * @note None 为单功能菜单，SecondaryMenu 为二级菜单
     * @since v1.0
     */
    enum MenuType {
        None = 0,
        SecondaryMenu = 1,
    };

    /**
     * @brief 让编辑器做指定的事
     * @note 目前编辑器支持由插件发出两种指令
     * @since v2.0
     */
    enum Do {
        NewEdit = 1,
        ChangeSyntax = 2,
    };

    /**
     * @brief 当指定编辑器做改变语法的时候提供以下实现
     * @since v2.0
     */
    enum SyntaxType {
        Js = 0,
        Json,
        Html,
    };

    /********************************************* 插件基本信息/
    /**
     * @brief 插件名称
     * @return
     */
    virtual QString PluginName() = 0;
    /**
     * @brief 插件版本
     * @return
     */
    virtual QString PluginVersion() = 0;
    /**
     * @brief 插件作者
     * @return
     */
    virtual QString PluginAuthor() = 0;
    /**
     * @brief 插件说明
     * @return
     */
    virtual QString PluginComment() = 0;
    /**
     * @brief 插件菜单类型
     * @note 如仅提供插件，而不实现任何其它菜单功能则建议为 None，否则
     * @return
     */
    virtual MenuType PluginMenuType() = 0;


    /********************************************* 插件的主程序 Notepad 注册*/

    /**
     * @brief registerNotepad
     * @param notepad
     */
    virtual void registerNotepad(QWidget *notepad)
    {
        s_notepad = notepad;
    }

    /********************************************* 插件路径注册*/
    /**
     * @brief registerStrFileName
     * @param str_file_name 主程序加载插件时提供 .dll/so 路径(也就是最终本插件被加载时的 .dll/so 文件位置)
     */
    virtual void registerStrFileName(QString str_file_name)
    {
        s_str_file_name = str_file_name;
    }

    /********************************************* 插件的一级(MenuType=None)或二级(MenuType=SecondaryMenu)菜单触发与注册接口/

    /**
     * @brief 由插件实现的一级菜单触发动作(默认提供的动作)
     * @note 由于框架无法在 C 风格函数入口处完成事件注册，则由插件提供者自行在 registerTirgger 中连接信号到此处
     */
    virtual void PluginTrigger() = 0;

    /**
     * @brief 由插件实现的二级菜单触发动作集合(默认提供的动作)
     * @param menu
     * @note 由框架在 C 风格函数入口处代为转交，则由插件提供者自行实现来完成提供内部的 QAction 集合
     * @since v1.0
     */
    virtual void registerPluginActions(QMenu *rootMenu) = 0;

    /********************************************* 当前编辑器函数回调注册*/

    /**
     * @brief 由框架提供的获取当前编辑器的回调函数注册
     * @param curEdit
     * @note 由于框架无法在 C 风格函数入口处完成回调函数注册，则由插件提供者自行在 registerCurrentEditCallback 中连接信号到此处
     * @since v2.0
     */
    virtual void registerCurrentEditCallback(std::function<QsciScintilla*(QWidget*)> get_cur_edit_callback)
    {
        s_get_cur_edit_callback = get_cur_edit_callback;
    }

    /********************************************* 编辑器功能函数回调注册*/
    /**
     * @brief 由框架提供的对 Notepad 进行的执行动作
     * @param plugin_callBack
     * @note 让编辑器做指定的事，目前编辑器支持由插件发出两种指令(Do::NewEdit, Do::)
     * @since v2.0
     */
    virtual void registerPluginCallBack(std::function<bool(QWidget*, int, void*)> plugin_callback)
    {
        s_plugin_callback = plugin_callback;
    }


    /********************************************* 为插件拷贝以下信息 */
    /** s_notepad 为 CCNotepad，当前主程序 */
    /** s_strFileName 为当前路径 */
    /** s_get_cur_edit_callback 为回调函数，用于获取当前编辑器 */
    /** s_plugin_callBack 为回调函数，用于使当前主程序做某些事 */
protected:
    QWidget *s_notepad;
    QString s_str_file_name;
    std::function<QsciScintilla*(QWidget*)> s_get_cur_edit_callback;
    std::function<bool(QWidget*, int, void*)> s_plugin_callback;
};

Q_DECLARE_INTERFACE(IPluginFramework, IPluginFramework_IID)

#endif  //!__IPLUGINFRAMEWORK__H__

#ifdef  NOTEPAD_PLUGIN_MANAGER

#include "qdebug.h"
#include <pluginGl.h>
#include <functional>
#include <qsciscintilla.h>

#define NDD_EXPORTDLL

#if defined(Q_OS_WIN)
	#if defined(NDD_EXPORTDLL)
		#define NDD_EXPORT __declspec(dllexport)
	#else
		#define NDD_EXPORT __declspec(dllimport)
	#endif
#else
	#define NDD_EXPORT __attribute__((visibility("default")))
#endif

#ifdef __cplusplus
	extern "C" {
#endif

	NDD_EXPORT bool NDD_PROC_IDENTIFY(NDD_PROC_DATA* pProcData);
	NDD_EXPORT int NDD_PROC_MAIN(QWidget* pNotepad, const QString& strFileName, std::function<QsciScintilla* (QWidget*)>getCurEdit, std::function<bool(QWidget*, int, void*)> pluginCallBack, NDD_PROC_DATA* procData);

#ifdef __cplusplus
	}
#endif

#define NDD_DECLARE_PLUGIN(plugin)                                     \
    NDD_EXPORT  bool NDD_PROC_IDENTIFY(NDD_PROC_DATA* pProcData) {     \
        qDebug() << (pProcData == NULL);                               \
        if(pProcData == NULL)                                          \
        {                                                              \
            return false;                                              \
        }                                                              \
        pProcData->m_strPlugName = plugin.PluginName();                \
        pProcData->m_strComment = plugin.PluginComment();              \
        pProcData->m_version = plugin.PluginVersion();                 \
        pProcData->m_auther = plugin.PluginAuthor();                   \
        pProcData->m_menuType = plugin.PluginMenuType();               \
                                                                       \
        return true;                                                   \
    }                                                                  \
    NDD_EXPORT int NDD_PROC_MAIN(QWidget* pNotepad,                                          \
                            const QString& strFileName,                                      \
                            std::function<QsciScintilla* (QWidget*)>getCurEdit,              \
                            std::function<bool(QWidget*, int, void*)> pluginCallBack,        \
                            NDD_PROC_DATA* procData){                                        \
                                                                                             \
        plugin.registerNotepad(pNotepad);                                                    \
        plugin.registerStrFileName(strFileName);                                             \
        plugin.registerCurrentEditCallback(getCurEdit);                                      \
        plugin.registerPluginCallBack(pluginCallBack);                                       \
                                                                                             \
        if (plugin.PluginMenuType() == IPluginFramework::None) {                             \
            procData->m_pAction->connect(procData->m_pAction, &QAction::triggered, [](){     \
                plugin.PluginTrigger();                                                      \
            });                                                                              \
        } else {                                                                             \
            plugin.registerPluginActions(procData->m_rootMenu);                              \
        }                                                                                    \
                                                                                             \
        qDebug() << strFileName;                                                             \
        return 0;                                                                            \
    }                                                                                        \

#else

    #error Missing definition NOTEPAD_PLUGIN_MANAGER

#endif  //NOTEPAD_PLUGIN_MANAGER
