//---------------------------------------------------------------------------
//
// Name:        p1App.h
// Author:      Niña
// Created:     12/05/2017 03:41:49 p.m.
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __P1FRMApp_h__
#define __P1FRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class p1FrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
