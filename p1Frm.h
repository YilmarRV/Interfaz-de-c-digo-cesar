///-----------------------------------------------------------------
///
/// @file      p1Frm.h
/// @author    Niña
/// Created:   12/05/2017 03:41:49 p.m.
/// @section   DESCRIPTION
///            p1Frm class declaration
///
///------------------------------------------------------------------

#ifndef __P1FRM_H__
#define __P1FRM_H__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/frame.h>
#else
	#include <wx/wxprec.h>
#endif

//Do not add custom headers between 
//Header Include Start and Header Include End.
//wxDev-C++ designer will remove them. Add custom headers after the block.
////Header Include Start
#include <wx/filedlg.h>
#include <wx/menu.h>
#include <wx/button.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/panel.h>
#include <wx/textfile.h>
////Header Include End

////Dialog Style Start
#undef p1Frm_STYLE
#define p1Frm_STYLE wxCAPTION | wxRESIZE_BORDER | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxMAXIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End

class p1Frm : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		p1Frm(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("p1"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = p1Frm_STYLE);
		virtual ~p1Frm();
		void WxMemo2Updated(wxCommandEvent& event);
		void WxButton1Click(wxCommandEvent& event);
		void ArchivoSelected(wxCommandEvent& event );
		void WxMemo1Updated(wxCommandEvent& event);
		void WxMemo2Updated0(wxCommandEvent& event);
		void WxMemo2Updated1(wxCommandEvent& event);
		void WxEdit2Updated(wxCommandEvent& event);
		void WxButton2Click(wxCommandEvent& event);
		void WxnewClick(wxCommandEvent& event);
		void WxopenClick(wxCommandEvent& event);
		void WxsaveClick(wxCommandEvent& event);
		void WxsaveasClick(wxCommandEvent& event);
		void WxexitClick(wxCommandEvent& event);
		
		void saveAs(){
            if (WxSaveFileDialog1->ShowModal() != wxID_CANCEL){
                directorioF=WxSaveFileDialog1->GetPath();
                wxString LCadena;
                int number=WxMemo1->GetNumberOfLines(); 
                wxTextFile File(directorioF);
     
                File.Create();
                File.Open();
                File.Clear();
                for(int y=0; y<number;y++){
                    LCadena=WxMemo1->GetLineText(y);
                    File.AddLine( wxT(Cadena) );
                }
         
                File.Write();
                File.Close();
            }
        }
		
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxFileDialog *WxSaveFileDialog1;
		wxFileDialog *WxOpenFileDialog1;
		wxMenuBar *WxMenuBar1;
		wxStaticText *WxStaticText2;
		wxStaticText *WxStaticText1;
		wxButton *WxButton2;
		wxButton *WxButton1;
		wxTextCtrl *WxMemo2;
		wxTextCtrl *WxMemo1;
		wxStaticText *WxStaticText4;
		wxStaticText *WxStaticText3;
		wxTextCtrl *WxEdit2;
		wxTextCtrl *WxEdit1;
		wxPanel *WxPanel1;
		////GUI Control Declaration End
		wxTextFile File;
		char comparar;
		wxString numero, cadena, directorioF;
		long N;
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_WXSTATICTEXT2 = 1018,
			ID_WXSTATICTEXT1 = 1015,
			ID_WXBUTTON2 = 1030,
			ID_WXBUTTON1 = 1029,
			ID_WXMEMO2 = 1028,
			ID_WXMEMO1 = 1027,
			ID_WXSTATICTEXT4 = 1025,
			ID_WXSTATICTEXT3 = 1024,
			ID_WXEDIT2 = 1021,
			ID_WXEDIT1 = 1020,
			ID_WXPANEL1 = 1019,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

#endif
