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

class ui{
      RQ_OBJECT("ui")

public:
ui(){
  // main frame
   fMainFrame1654 = new TGMainFrame(gClient->GetRoot(),10,10,kMainFrame | kVerticalFrame);
   fMainFrame1654->SetName("fMainFrame1654");

   // vertical frame
   fVerticalFrame1325 = new TGVerticalFrame(fMainFrame1654,577,559,kVerticalFrame);
   fVerticalFrame1325->SetName("fVerticalFrame1325");

   // horizontal frame
   fHorizontalFrame1330 = new TGHorizontalFrame(fVerticalFrame1325,573,26,kHorizontalFrame);
   fHorizontalFrame1330->SetName("fHorizontalFrame1330");
   fTextButton1353 = new TGTextButton(fHorizontalFrame1330,"fTextButton1353",-1,TGTextButton::GetDefaultGC()(),TGTextButton::GetDefaultFontStruct(),kRaisedFrame);
   fTextButton1353->SetTextJustify(36);
   fTextButton1353->SetMargins(0,0,0,0);
   fTextButton1353->SetWrapLength(-1);
   fTextButton1353->Resize(96,22);
   fHorizontalFrame1330->AddFrame(fTextButton1353, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));
   fTextButton1362 = new TGTextButton(fHorizontalFrame1330,"fTextButton1362",-1,TGTextButton::GetDefaultGC()(),TGTextButton::GetDefaultFontStruct(),kRaisedFrame);
   fTextButton1362->SetTextJustify(36);
   fTextButton1362->SetMargins(0,0,0,0);
   fTextButton1362->SetWrapLength(-1);
   fTextButton1362->Resize(96,22);
   

   
   fHorizontalFrame1330->AddFrame(fTextButton1362, new TGLayoutHints(kLHintsLeft | kLHintsTop,2,2,2,2));

   fVerticalFrame1325->AddFrame(fHorizontalFrame1330, new TGLayoutHints(kLHintsLeft | kLHintsTop | kLHintsExpandX,2,2,2,2));

   // embedded canvas
  fRootEmbeddedCanvas1337 = new TRootEmbeddedCanvas(0,fVerticalFrame1325,573,525,kSunkenFrame);
   fRootEmbeddedCanvas1337->SetName("fRootEmbeddedCanvas1337");
   Int_t wfRootEmbeddedCanvas1337 = fRootEmbeddedCanvas1337->GetCanvasWindowId();
   TCanvas *c123 = new TCanvas("c123", 10, 10, wfRootEmbeddedCanvas1337);
   fRootEmbeddedCanvas1337->AdoptCanvas(c123);
   fVerticalFrame1325->AddFrame(fRootEmbeddedCanvas1337, new TGLayoutHints(kLHintsLeft | kLHintsTop | kLHintsExpandX | kLHintsExpandY,2,2,2,2));

   fMainFrame1654->AddFrame(fVerticalFrame1325, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY,1,1,1,1));

   fMainFrame1654->SetMWMHints(kMWMDecorAll,
                        kMWMFuncAll,
                        kMWMInputModeless);
   fMainFrame1654->MapSubwindows();

   fMainFrame1654->Resize(fMainFrame1654->GetDefaultSize());
   fMainFrame1654->MapWindow();
   fMainFrame1654->Resize(579,561);
   fTextButton1353->Connect("Clicked()", "ui",this,"push1()");
   fTextButton1362->Connect("Clicked()", "ui",this,"push2()");
   
}
  void push1(){
  
   TF1 *fa1 = new TF1("fa1","sin(2*x)/x",0,10);    
   fRootEmbeddedCanvas1337->GetCanvas()->cd();
   fa1->Draw();
   fRootEmbeddedCanvas1337->GetCanvas()->Update();
   
  }
  
    void push2(){
  
   TF1 *fa1 = new TF1("f2","sin(x)/x",0,10);    
   fRootEmbeddedCanvas1337->GetCanvas()->cd();
   fa1->Draw();
   fRootEmbeddedCanvas1337->GetCanvas()->Update();
   
  }
  
  TGMainFrame *fMainFrame1654;   
  TGVerticalFrame *fVerticalFrame1325;
  TGHorizontalFrame *fHorizontalFrame1330 ;
  TGTextButton *fTextButton1353;
  TGTextButton *fTextButton1362;
  TRootEmbeddedCanvas *fRootEmbeddedCanvas1337;
};

 ui* gui()
{

  return new ui();
}  
