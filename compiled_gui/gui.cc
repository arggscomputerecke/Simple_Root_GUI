#include "gui.hh"
#include <iostream>
#include "TGSignals.hh"




ui::ui(TApplication* app_):m_app(app_)
{
  // main frame
  fMainFrame1654 = new TGMainFrame(gClient->GetRoot(), 10, 10, kMainFrame | kVerticalFrame);
  fMainFrame1654->SetName("fMainFrame1654");

  // vertical frame
  fVerticalFrame1325 = new TGVerticalFrame(fMainFrame1654, 577, 559, kVerticalFrame);
  fVerticalFrame1325->SetName("fVerticalFrame1325");

  // horizontal frame
  fHorizontalFrame1330 = new TGHorizontalFrame(fVerticalFrame1325, 573, 26, kHorizontalFrame);
  fHorizontalFrame1330->SetName("fHorizontalFrame1330");
  fTextButton1353 = new TGTextButton(fHorizontalFrame1330, "fTextButton1353", -1, TGTextButton::GetDefaultGC()(), TGTextButton::GetDefaultFontStruct(), kRaisedFrame);
  fTextButton1353->SetTextJustify(36);
  fTextButton1353->SetMargins(0, 0, 0, 0);
  fTextButton1353->SetWrapLength(-1);
  fTextButton1353->Resize(96, 22);
  fHorizontalFrame1330->AddFrame(fTextButton1353, new TGLayoutHints(kLHintsLeft | kLHintsTop, 2, 2, 2, 2));
  fTextButton1362 = new TGTextButton(fHorizontalFrame1330, "fTextButton1362", -1, TGTextButton::GetDefaultGC()(), TGTextButton::GetDefaultFontStruct(), kRaisedFrame);
  fTextButton1362->SetTextJustify(36);
  fTextButton1362->SetMargins(0, 0, 0, 0);
  fTextButton1362->SetWrapLength(-1);
  fTextButton1362->Resize(96, 22);



  fHorizontalFrame1330->AddFrame(fTextButton1362, new TGLayoutHints(kLHintsLeft | kLHintsTop, 2, 2, 2, 2));

  fVerticalFrame1325->AddFrame(fHorizontalFrame1330, new TGLayoutHints(kLHintsLeft | kLHintsTop | kLHintsExpandX, 2, 2, 2, 2));

  // embedded canvas
  fRootEmbeddedCanvas1337 = new TRootEmbeddedCanvas(0, fVerticalFrame1325, 573, 525, kSunkenFrame);
  fRootEmbeddedCanvas1337->SetName("fRootEmbeddedCanvas1337");
  Int_t wfRootEmbeddedCanvas1337 = fRootEmbeddedCanvas1337->GetCanvasWindowId();
  c123 = new TCanvas("c123", 10, 10, wfRootEmbeddedCanvas1337);
  fRootEmbeddedCanvas1337->AdoptCanvas(c123);
  fVerticalFrame1325->AddFrame(fRootEmbeddedCanvas1337, new TGLayoutHints(kLHintsLeft | kLHintsTop | kLHintsExpandX | kLHintsExpandY, 2, 2, 2, 2));

  fMainFrame1654->AddFrame(fVerticalFrame1325, new TGLayoutHints(kLHintsExpandX | kLHintsExpandY, 1, 1, 1, 1));

  fMainFrame1654->SetMWMHints(kMWMDecorAll,
    kMWMFuncAll,
    kMWMInputModeless);
  fMainFrame1654->MapSubwindows();

  fMainFrame1654->Resize(fMainFrame1654->GetDefaultSize());
  fMainFrame1654->MapWindow();
  fMainFrame1654->Resize(579, 561);

  
  _RQ_signals(fTextButton1353).Clicked() >> _RQ_slots(this).push1();
  _RQ_signals(fTextButton1362).Clicked() >> _RQ_slots(this).push2();
  _RQ_signals(fMainFrame1654).CloseWindow() >> _RQ_slots(this).push3();


}

void ui::push1()
{

  TF1 fa1("fa1", "sin(2*x)/x", 0, 10);
  fRootEmbeddedCanvas1337->GetCanvas()->cd();
  fa1.Draw();
  fRootEmbeddedCanvas1337->GetCanvas()->Update();
}

void ui::push2()
{

  TF1 fa1("f2", "sin(x)/x", 0, 10);
  fRootEmbeddedCanvas1337->GetCanvas()->cd();
  fa1.DrawCopy();
  fRootEmbeddedCanvas1337->GetCanvas()->Update();
}

void ui::push3()
{
  m_app->Terminate(0);
}

void ui::pushint(int i)
{
  std::cout << i << std::endl;
}

void ui::pushbool(bool i)
{
  std::cout << std::boolalpha << i << std::endl;
}

void ui::pushvoid()
{
  std::cout << "VOID" << std::endl;
}

void ui::pushccharStar(const char* i)
{
  std::cout << i << std::endl;

}

// std::string ui::Class_Name(){
//   return "ui";
// }

