#include "gui.hh"
#include <iostream>
#include "TGSignals.hh"
#include "Unew.hh"




ui::ui(TApplication* app_):m_app(app_)
{
  // main frame
  fMainFrame1654 = Unew TGMainFrame(gClient->GetRoot(), 10, 10, kMainFrame | kVerticalFrame);
  fMainFrame1654->SetName("fMainFrame1654");

  // vertical frame
  fVerticalFrame1325 = Unew TGVerticalFrame(fMainFrame1654.get(), 577, 559, kVerticalFrame);
  fVerticalFrame1325->SetName("fVerticalFrame1325");

  // horizontal frame
  fHorizontalFrame1330 = Unew TGHorizontalFrame(fVerticalFrame1325.get(), 573, 26, kHorizontalFrame);
  fHorizontalFrame1330->SetName("fHorizontalFrame1330");
  fTextButton1353 = Unew TGTextButton(fHorizontalFrame1330.get(), "fTextButton1353", -1, TGTextButton::GetDefaultGC()(), TGTextButton::GetDefaultFontStruct(), kRaisedFrame);
  fTextButton1353->SetTextJustify(36);
  fTextButton1353->SetMargins(0, 0, 0, 0);
  fTextButton1353->SetWrapLength(-1);
  fTextButton1353->Resize(96, 22);
  flout1 = Unew TGLayoutHints(kLHintsLeft | kLHintsTop, 2, 2, 2, 2);
  fHorizontalFrame1330->AddFrame(fTextButton1353.get(), flout1.get());
  fTextButton1362 = Unew TGTextButton(fHorizontalFrame1330.get(), "fTextButton1362", -1, TGTextButton::GetDefaultGC()(), TGTextButton::GetDefaultFontStruct(), kRaisedFrame);
  fTextButton1362->SetTextJustify(36);
  fTextButton1362->SetMargins(0, 0, 0, 0);
  fTextButton1362->SetWrapLength(-1);
  fTextButton1362->Resize(96, 22);


  flout2 = Unew TGLayoutHints(kLHintsLeft | kLHintsTop, 2, 2, 2, 2);
  fHorizontalFrame1330->AddFrame(fTextButton1362.get(), flout2.get());
  flout3 = Unew TGLayoutHints(kLHintsLeft | kLHintsTop | kLHintsExpandX, 2, 2, 2, 2);
  fVerticalFrame1325->AddFrame(fHorizontalFrame1330.get(), flout3.get());

  // embedded canvas
  fRootEmbeddedCanvas1337 = Unew TRootEmbeddedCanvas(0, fVerticalFrame1325.get(), 573, 525, kSunkenFrame);
  fRootEmbeddedCanvas1337->SetName("fRootEmbeddedCanvas1337");
  Int_t wfRootEmbeddedCanvas1337 = fRootEmbeddedCanvas1337->GetCanvasWindowId();
  c123 = new TCanvas("c123", 10, 10, wfRootEmbeddedCanvas1337);
  fRootEmbeddedCanvas1337->AdoptCanvas(c123);

  flout4 = Unew TGLayoutHints(kLHintsLeft | kLHintsTop | kLHintsExpandX | kLHintsExpandY, 2, 2, 2, 2);
  fVerticalFrame1325->AddFrame(fRootEmbeddedCanvas1337.get(), flout4.get());

  flout5 = Unew TGLayoutHints(kLHintsExpandX | kLHintsExpandY, 1, 1, 1, 1);
  fMainFrame1654->AddFrame(fVerticalFrame1325.get(), flout5.get());

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

ui::~ui()
{

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

