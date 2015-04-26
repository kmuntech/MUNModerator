#ifndef __MAIN_FRAME_H__
#define __MAIN_FRAME_H__

#include <wx/artprov.h>
#include <wx/string.h>
#include <wx/combobox.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/stattext.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
#include "control.h"
#include <wx/textfile.h>
#include <wx/filedlg.h>
#include<iostream>

class Main_Frame : public wxFrame 
{
	DECLARE_EVENT_TABLE()
	private:
            void _wxFB_c_Combo_Box( wxCommandEvent& event ){ c_Combo_Box( event ); }
		    void _wxFB_c_m_Start_Voting( wxCommandEvent& event ){ c_m_Start_Voting( event ); }
		    void _wxFB_c_m_For_Motion( wxCommandEvent& event ){ c_m_For_Motion( event ); }
		    void _wxFB_c_m_Against_Motion( wxCommandEvent& event ){ c_m_Against_Motion( event ); }
		    void _wxFB_c_m_Pass( wxCommandEvent& event ){ c_m_Pass( event ); }
		    void _wxFB_c_m_Open_File( wxCommandEvent& event ){ c_m_Open_File( event ); }
		    void _wxFB_c_m_KMUN_Website( wxCommandEvent& event ){ c_m_KMUN_Website( event ); }
		    void _wxFB_c_m_Menu_Item1( wxCommandEvent& event ){ c_m_Menu_Item1( event ); }
		    void _wxFB_c_m_About( wxCommandEvent& event ){ c_m_About( event ); }
		
	protected:
              enum
              {
                  wxID_Main_Frame = 1000,
			      wxID_m_Voting_And_Timer,
			      wxID_m_Combo_Box,
			      wxID_m_Label1,
			      wxID_m_Start_Voting,
			      wxID_m_Label,
			      wxID_m_For_Motion,
			      wxID_m_Against_Motion,
			      wxID_m_Pass,
			      wxID_Menu_Bar,
			      wxID_Menu_Item2,
			      wxID_m_KMUN_Website,
			      wxID_Menu_Item1,
			      wxID_m_About,
			      wxID_m_Status_Bar
		       };
               wxPanel* m_Voting_And_Timer;
		       wxComboBox* m_Combo_Box;
		       wxStaticText* m_Label1;
		       wxButton* m_Start_Voting;
		       wxStaticText* m_Label;
		       wxButton* m_For_Motion;
		       wxButton* m_Against_Motion;
		       wxButton* m_Pass;
		       wxMenuBar* m_Menu_Bar;
		       wxMenu* m_Menu_File;
		       wxMenu* m_Sub_Menu_1;
		       wxMenu* m_Help;
		       wxStatusBar* m_Status_Bar;
		       wxTextFile file;
		       
		       void c_Combo_Box( wxCommandEvent& event );
	           void c_m_Start_Voting( wxCommandEvent& event );
		       void c_m_For_Motion( wxCommandEvent& event );
		       void c_m_Against_Motion( wxCommandEvent& event );
		       void c_m_Pass( wxCommandEvent& event );
		       void c_m_Open_File( wxCommandEvent& event );
		       void c_m_KMUN_Website( wxCommandEvent& event );
		       void c_m_Menu_Item1( wxCommandEvent& event );
		       void c_m_About( wxCommandEvent& event );
		
	
	public:
           void Open_File();
           void Calc_Results();
           Main_Frame( wxWindow* parent, wxWindowID id = wxID_Main_Frame, const wxString& title = wxT("MUN Moderator V0.1"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 716,409 ), long style = wxCAPTION|wxICONIZE|wxMINIMIZE_BOX|wxSYSTEM_MENU|wxTAB_TRAVERSAL);
		   ~Main_Frame();
	
};

#endif
