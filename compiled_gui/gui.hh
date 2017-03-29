#ifndef gui_h__
#define gui_h__



// Mainframe macro generated from application: C:\root_v5.34.36\bin\root.exe
// By ROOT version 5.34/36 on 2017-03-18 13:17:26


#ifndef ROOT_TGDockableFrame
#include "TGDockableFrame.h"
#endif
#ifndef ROOT_TGMenu
#include "TGMenu.h"
#endif
#ifndef ROOT_TGMdiDecorFrame
#include "TGMdiDecorFrame.h"
#endif
#ifndef ROOT_TG3DLine
#include "TG3DLine.h"
#endif
#ifndef ROOT_TGMdiFrame
#include "TGMdiFrame.h"
#endif
#ifndef ROOT_TGMdiMainFrame
#include "TGMdiMainFrame.h"
#endif
#ifndef ROOT_TGMdiMenu
#include "TGMdiMenu.h"
#endif
#ifndef ROOT_TGListBox
#include "TGListBox.h"
#endif
#ifndef ROOT_TGNumberEntry
#include "TGNumberEntry.h"
#endif
#ifndef ROOT_TGScrollBar
#include "TGScrollBar.h"
#endif
#ifndef ROOT_TGComboBox
#include "TGComboBox.h"
#endif
#ifndef ROOT_TGuiBldHintsEditor
#include "TGuiBldHintsEditor.h"
#endif
#ifndef ROOT_TRootBrowser
#include "TRootBrowser.h"
#endif
#ifndef ROOT_TGuiBldNameFrame
#include "TGuiBldNameFrame.h"
#endif
#ifndef ROOT_TGFrame
#include "TGFrame.h"
#endif
#ifndef ROOT_TGFileDialog
#include "TGFileDialog.h"
#endif
#ifndef ROOT_TGShutter
#include "TGShutter.h"
#endif
#ifndef ROOT_TGButtonGroup
#include "TGButtonGroup.h"
#endif
#ifndef ROOT_TGCommandPlugin
#include "TGCommandPlugin.h"
#endif
#ifndef ROOT_TGCanvas
#include "TGCanvas.h"
#endif
#ifndef ROOT_TGFSContainer
#include "TGFSContainer.h"
#endif
#ifndef ROOT_TGuiBldEditor
#include "TGuiBldEditor.h"
#endif
#ifndef ROOT_TGColorSelect
#include "TGColorSelect.h"
#endif
#ifndef ROOT_TGTextEdit
#include "TGTextEdit.h"
#endif
#ifndef ROOT_TGButton
#include "TGButton.h"
#endif
#ifndef ROOT_TGFSComboBox
#include "TGFSComboBox.h"
#endif
#ifndef ROOT_TGLabel
#include "TGLabel.h"
#endif
#ifndef ROOT_TGView
#include "TGView.h"
#endif
#ifndef ROOT_TGMsgBox
#include "TGMsgBox.h"
#endif
#ifndef ROOT_TRootGuiBuilder
#include "TRootGuiBuilder.h"
#endif
#ifndef ROOT_TGFileBrowser
#include "TGFileBrowser.h"
#endif
#ifndef ROOT_TGTab
#include "TGTab.h"
#endif
#ifndef ROOT_TGListView
#include "TGListView.h"
#endif
#ifndef ROOT_TGSplitter
#include "TGSplitter.h"
#endif
#ifndef ROOT_TGTextEntry
#include "TGTextEntry.h"
#endif
#ifndef ROOT_TGStatusBar
#include "TGStatusBar.h"
#endif
#ifndef ROOT_TGToolBar
#include "TGToolBar.h"
#endif
#ifndef ROOT_TGuiBldDragManager
#include "TGuiBldDragManager.h"
#endif
#ifndef ROOT_TGObject
#include "TGObject.h"
#endif

#include "Riostream.h"
#include "RQ_OBJECT.h"
#include "TCanvas.h"
#include "TRootEmbeddedCanvas.h"
#include "TF1.h"
#include "TApplication.h"


#ifndef __CINT__
#include "TGSignals.hh"
START__DEFINE_RQ_SLOTS_BASE_CLASS(ui)
__DEFINE_RQ_SLOT__(push1, "push1()");
__DEFINE_RQ_SLOT__(push2, "push2()");
__DEFINE_RQ_SLOT__(push3, "push3()");
END__DEFINE_RQ_SLOTS_CLASS(ui)
#endif // !__CINT__

class ui {
  RQ_OBJECT("ui")

public:
  ui(TApplication* app_);
  void push1();

  void push2();
  void push3();
  void pushint(int i);
  void pushbool(bool i);
  void pushvoid();
  void pushccharStar(const char* test);

  TGMainFrame *fMainFrame1654;
  TGVerticalFrame *fVerticalFrame1325;
  TGHorizontalFrame *fHorizontalFrame1330;
  TGTextButton *fTextButton1353;
  TGTextButton *fTextButton1362;
  TRootEmbeddedCanvas *fRootEmbeddedCanvas1337;
  TCanvas *c123;
  TApplication* m_app;
  //static std::string Class_Name() {return "ui";}
};
#endif // gui_h__