///-----------------------------------------------------------------
///
/// @file      p1Frm.cpp
/// @author    Niña
/// Created:   12/05/2017 03:41:49 p.m.
/// @section   DESCRIPTION
///            p1Frm class implementation
///
///------------------------------------------------------------------

#include "p1Frm.h"
#include <wx/textfile.h>
//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// p1Frm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(p1Frm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(p1Frm::OnClose)
	EVT_MENU(wxID_NEW, p1Frm::WxnewClick)
	EVT_MENU(wxID_OPEN, p1Frm::WxopenClick)
	EVT_MENU(wxID_SAVE, p1Frm::WxsaveClick)
	EVT_MENU(wxID_SAVEAS, p1Frm::WxsaveasClick)
	EVT_MENU(wxID_EXIT, p1Frm::WxexitClick)
	EVT_BUTTON(ID_WXBUTTON2,p1Frm::WxButton2Click)
	EVT_BUTTON(ID_WXBUTTON1,p1Frm::WxButton1Click)
	
	EVT_TEXT(ID_WXEDIT2,p1Frm::WxEdit2Updated)
END_EVENT_TABLE()
////Event Table End

p1Frm::p1Frm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

p1Frm::~p1Frm()
{
}

void p1Frm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxPanel1 = new wxPanel(this, ID_WXPANEL1, wxPoint(-9, -1), wxSize(640, 433));
	WxPanel1->SetBackgroundColour(wxColour(255,204,255));

	WxEdit1 = new wxTextCtrl(WxPanel1, ID_WXEDIT1, _(""), wxPoint(158, 126), wxSize(41, 22), 0, wxDefaultValidator, _("WxEdit1"));

	WxEdit2 = new wxTextCtrl(WxPanel1, ID_WXEDIT2, _(""), wxPoint(473, 297), wxSize(45, 23), 0, wxTextValidator(wxFILTER_NUMERIC, NULL), _("WxEdit2"));

	WxStaticText3 = new wxStaticText(WxPanel1, ID_WXSTATICTEXT3, _("Texto a Codificar"), wxPoint(345, 26), wxDefaultSize, 0, _("WxStaticText3"));
	WxStaticText3->SetFont(wxFont(14, wxSWISS, wxNORMAL, wxNORMAL, false, _("Lucida Calligraphy")));

	WxStaticText4 = new wxStaticText(WxPanel1, ID_WXSTATICTEXT4, _("Texto a Decodificar"), wxPoint(47, 191), wxDefaultSize, 0, _("WxStaticText4"));
	WxStaticText4->SetFont(wxFont(14, wxSWISS, wxNORMAL, wxNORMAL, false, _("Lucida Calligraphy")));

	WxMemo1 = new wxTextCtrl(WxPanel1, ID_WXMEMO1, wxEmptyString, wxPoint(11, 234), wxSize(270, 134), wxTE_MULTILINE, wxDefaultValidator, _("WxMemo1"));
	WxMemo1->SetMaxLength(0);
	WxMemo1->SetFocus();
	WxMemo1->SetInsertionPointEnd();
	WxMemo1->SetBackgroundColour(wxColour(255,128,255));

	WxMemo2 = new wxTextCtrl(WxPanel1, ID_WXMEMO2, wxEmptyString, wxPoint(291, 58), wxSize(270, 134), wxTE_MULTILINE, wxDefaultValidator, _("WxMemo2"));
	WxMemo2->SetMaxLength(0);
	WxMemo2->SetFocus();
	WxMemo2->SetInsertionPointEnd();
	WxMemo2->SetBackgroundColour(wxColour(255,128,255));

	WxButton1 = new wxButton(WxPanel1, ID_WXBUTTON1, _("Codificar"), wxPoint(74, 61), wxSize(129, 45), 0, wxDefaultValidator, _("WxButton1"));
	WxButton1->SetFont(wxFont(9, wxSWISS, wxNORMAL, wxNORMAL, false, _("Lucida Calligraphy")));

	WxButton2 = new wxButton(WxPanel1, ID_WXBUTTON2, _("Decodificar"), wxPoint(362, 232), wxSize(129, 45), 0, wxDefaultValidator, _("WxButton2"));
	WxButton2->SetFont(wxFont(9, wxSWISS, wxNORMAL, wxNORMAL, false, _("Lucida Calligraphy")));

	WxStaticText1 = new wxStaticText(this, ID_WXSTATICTEXT1, _("N° de cifrado"), wxPoint(43, 128), wxDefaultSize, 0, _("WxStaticText1"));
	WxStaticText1->SetForegroundColour(wxColour(0,0,0));
	WxStaticText1->SetBackgroundColour(wxColour(248,175,254));
	WxStaticText1->SetFont(wxFont(9, wxSWISS, wxNORMAL, wxBOLD, false));

	WxStaticText2 = new wxStaticText(this, ID_WXSTATICTEXT2, _("N° de decifrado"), wxPoint(346, 298), wxDefaultSize, 0, _("WxStaticText2"));
	WxStaticText2->SetForegroundColour(wxColour(0,0,0));
	WxStaticText2->SetBackgroundColour(wxColour(248,175,254));
	WxStaticText2->SetFont(wxFont(9, wxSWISS, wxNORMAL, wxBOLD, false));

	WxMenuBar1 = new wxMenuBar();
	wxMenu *wxID_FILE_Mnu_Obj = new wxMenu();
	wxID_FILE_Mnu_Obj->Append(wxID_NEW, _("New"), _(""), wxITEM_NORMAL);
	wxID_FILE_Mnu_Obj->Append(wxID_OPEN, _("Open..."), _(""), wxITEM_NORMAL);
	wxID_FILE_Mnu_Obj->Append(wxID_SAVE, _("Save"), _(""), wxITEM_NORMAL);
	wxID_FILE_Mnu_Obj->Append(wxID_SAVEAS, _("Save as..."), _(""), wxITEM_NORMAL);
	wxID_FILE_Mnu_Obj->Append(wxID_EXIT, _("Exit"), _(""), wxITEM_NORMAL);
	WxMenuBar1->Append(wxID_FILE_Mnu_Obj, _("Archivo"));
	SetMenuBar(WxMenuBar1);

	WxOpenFileDialog1 =  new wxFileDialog(this, _("Choose a file"), _(""), _(""), _("*.*"), wxFD_OPEN);

	WxSaveFileDialog1 =  new wxFileDialog(this, _("Choose a file"), _(""), _(""), _("*.*"), wxFD_SAVE);

	SetTitle(_("p1"));
	SetSize(8,8,599,451);
	Center();
	
	////GUI Items Creation End
}

void p1Frm::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * WxMemo2Updated
 */
void p1Frm::WxMemo2Updated(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * WxButton1Click
 */
void p1Frm::WxButton1Click(wxCommandEvent& event)
{
	cadena=WxMemo2->GetValue();
	numero=WxEdit1->GetValue();
	if(!numero.ToLong(&N)){}
	N=(N%26)*(-1);
	
	for (int i = 0; i < cadena.length(); i++) { 
        comparar=cadena[i];
        if (comparar >= 'a' && comparar <= 'z') { 
            
            comparar=comparar-32;
            
        }if (comparar >= 'A' && comparar <= 'Z') { 
            if (comparar + N > 'Z') { 
                comparar = 'A' - 'Z' + comparar + N - 1; 
            } else if (comparar + N < 'A') { 
                comparar = 'Z' - 'A' + comparar + N + 1; 
            } else { 
                comparar += N; 
            } 
        } 
    cadena[i]=comparar;    
    } 
	WxMemo1->SetValue(cadena);
	
    // insert your code here
}

/*
 * ArchivoSelected
 */
void p1Frm::ArchivoSelected(wxCommandEvent& event )
{
	// insert your code here
}

/*
 * WxMemo1Updated
 */
void p1Frm::WxMemo1Updated(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * WxMemo2Updated0
 */
void p1Frm::WxMemo2Updated0(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * WxMemo2Updated1
 */
void p1Frm::WxMemo2Updated1(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * WxEdit2Updated
 */
void p1Frm::WxEdit2Updated(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * WxButton2Click
 */
void p1Frm::WxButton2Click(wxCommandEvent& event)
{
    cadena=WxMemo1->GetValue();
	numero=WxEdit2->GetValue();
	if(!numero.ToLong(&N)){}
	N=(N%26);
	
	for (int i = 0; i < cadena.length(); i++) { 
        comparar=cadena[i];
        if (comparar >= 'a' && comparar <= 'z') { 
            
            comparar=comparar-32;
            
        }if (comparar >= 'A' && comparar <= 'Z') { 
            if (comparar + N > 'Z') { 
                comparar = 'A' - 'Z' + comparar + N - 1; 
            } else if (comparar + N < 'A') { 
                comparar = 'Z' - 'A' + comparar + N + 1; 
            } else { 
                comparar += N; 
            } 
        } 
    cadena[i]=comparar;    
    } 
	WxMemo2->SetValue(cadena);
	// insert your code here
}

/*
 * WxnewClick
 */
void p1Frm::WxnewClick(wxCommandEvent& event)
{
    
    File.Close();
    WxEdit1->SetValue("");
    WxEdit2->SetValue("");
    WxMemo1->SetValue("");
    WxMemo2->SetValue("");
	// insert your code here
}

/*
 * WxopenClick
 */
void p1Frm::WxopenClick(wxCommandEvent& event)
{


	// insert your code here
	
	if(WxOpenFileDialog1->ShowModal() != wxID_OK){
        return ;
    }else{
        WxMemo1->SetValue("");
        directorioF=WxOpenFileDialog1->GetPath();
        File.Open(directorioF);
        cadena = File.GetFirstLine();
        cadena +='\n';
        WxMemo1->SetValue(cadena);
        while(!File.Eof()){
            cadena +=File.GetNextLine();
            cadena +='\n';
            WxMemo1->SetValue(cadena); 
        }
    }
	
}

/*
 * WxsaveClick
 */
void p1Frm::WxsaveClick(wxCommandEvent& event)
{
    if(File.IsOpened() == true){
        wxString LCadena;
        int number=WxMemo1->GetNumberOfLines();
        File.Clear();
        for(int y=0; y<number;y++){
            LCadena=WxMemo1->GetLineText(y);
            File.AddLine( wxT(Cadena) );
        }
        File.Write();
    }else{
        saveAs();
    } 
    // insert your code here
}

/*
 * WxsaveasClick
 */
void p1Frm::WxsaveasClick(wxCommandEvent& event)
{
    saveAs();
	// insert your code here
}

/*
 * WxexitClick
 */
void p1Frm::WxexitClick(wxCommandEvent& event)
{
	Close();
    // insert your code here
}
