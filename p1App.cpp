//---------------------------------------------------------------------------
//
// Name:        p1App.cpp
// Author:      Niña
// Created:     12/05/2017 03:41:49 p.m.
// Description: 
//
//---------------------------------------------------------------------------

#include "p1App.h"
#include "p1Frm.h"

IMPLEMENT_APP(p1FrmApp)

bool p1FrmApp::OnInit()
{
    p1Frm* frame = new p1Frm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int p1FrmApp::OnExit()
{
	return 0;
}
