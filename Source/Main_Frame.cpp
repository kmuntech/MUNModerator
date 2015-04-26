#include "Main_Frame.h"

BEGIN_EVENT_TABLE( Main_Frame, wxFrame )
	EVT_COMBOBOX( wxID_m_Combo_Box, Main_Frame::_wxFB_c_Combo_Box )
	EVT_BUTTON( wxID_m_Start_Voting, Main_Frame::_wxFB_c_m_Start_Voting )
	EVT_BUTTON( wxID_m_For_Motion, Main_Frame::_wxFB_c_m_For_Motion )
	EVT_BUTTON( wxID_m_Against_Motion, Main_Frame::_wxFB_c_m_Against_Motion )
	EVT_BUTTON( wxID_m_Pass, Main_Frame::_wxFB_c_m_Pass )
	EVT_MENU( wxID_Menu_Item2, Main_Frame::_wxFB_c_m_Open_File )
	EVT_MENU( wxID_m_KMUN_Website, Main_Frame::_wxFB_c_m_KMUN_Website )
	EVT_MENU( wxID_Menu_Item1, Main_Frame::_wxFB_c_m_Menu_Item1 )
	EVT_MENU( wxID_m_About, Main_Frame::_wxFB_c_m_About )
END_EVENT_TABLE()

Main_Frame::Main_Frame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	wxBoxSizer* b_Main_Sizer;
	b_Main_Sizer = new wxBoxSizer( wxVERTICAL );
	
	m_Voting_And_Timer = new wxPanel( this, wxID_m_Voting_And_Timer, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_Voting_And_Timer->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INFOTEXT ) );
	m_Voting_And_Timer->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNFACE ) );
	
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );
	
	m_Combo_Box = new wxComboBox( m_Voting_And_Timer, wxID_m_Combo_Box, wxT("--Select Vote Type--"), wxDefaultPosition, wxSize( 100,20 ), 0, NULL, 0 );
	m_Combo_Box->Append( wxT("Two-Thirds Majority") );
	m_Combo_Box->Append( wxT("50%+1 Majority") );
	bSizer5->Add( m_Combo_Box, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_Label1 = new wxStaticText( m_Voting_And_Timer, wxID_m_Label1, wxT("Press This Button to Start Voting ->"), wxDefaultPosition, wxDefaultSize, 0 );
	m_Label1->SetFont( wxFont( 9, 73, 90, 92, false, wxT("Comic Sans MS") ) );
	
	bSizer5->Add( m_Label1, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_Start_Voting = new wxButton( m_Voting_And_Timer, wxID_m_Start_Voting, wxT("Start Voting"), wxDefaultPosition, wxDefaultSize, 0 );
	m_Start_Voting->SetFont( wxFont( 10, 74, 90, 92, false, wxT("Arial") ) );
	
	bSizer5->Add( m_Start_Voting, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer4->Add( bSizer5, 1, 0, 5 );
	
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );
	
	m_Label = new wxStaticText( m_Voting_And_Timer, wxID_m_Label, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_Label->SetFont( wxFont( 60, 74, 90, 92, false, wxT("Arial Black") ) );
	
	bSizer6->Add( m_Label, 1, wxALL|wxEXPAND, 5 );
	
	
	bSizer4->Add( bSizer6, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );
	
	m_For_Motion = new wxButton( m_Voting_And_Timer, wxID_m_For_Motion, wxT("For the Motion"), wxDefaultPosition, wxDefaultSize, 0 );
	m_For_Motion->SetFont( wxFont( 16, 74, 90, 90, false, wxT("Arial") ) );
	m_For_Motion->SetToolTip( wxT("Accept Motion") );
	
	bSizer7->Add( m_For_Motion, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_Against_Motion = new wxButton( m_Voting_And_Timer, wxID_m_Against_Motion, wxT("Against the Motion"), wxDefaultPosition, wxDefaultSize, 0 );
	m_Against_Motion->SetFont( wxFont( 16, 74, 90, 90, false, wxT("Arial") ) );
	m_Against_Motion->SetToolTip( wxT("Decline") );
	
	bSizer7->Add( m_Against_Motion, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_Pass = new wxButton( m_Voting_And_Timer, wxID_m_Pass, wxT("Pass"), wxDefaultPosition, wxDefaultSize, 0 );
	m_Pass->SetFont( wxFont( 16, 74, 90, 90, false, wxT("Arial") ) );
	
	bSizer7->Add( m_Pass, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer4->Add( bSizer7, 1, wxEXPAND, 5 );
	
	
	m_Voting_And_Timer->SetSizer( bSizer4 );
	m_Voting_And_Timer->Layout();
	bSizer4->Fit( m_Voting_And_Timer );
	b_Main_Sizer->Add( m_Voting_And_Timer, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( b_Main_Sizer );
	this->Layout();
	m_Menu_Bar = new wxMenuBar( 0 );
	m_Menu_File = new wxMenu();
	wxMenuItem* m_Open_File;
	m_Open_File = new wxMenuItem( m_Menu_File, wxID_Menu_Item2, wxString( wxT("Open Committee Profile") ) , wxEmptyString, wxITEM_NORMAL );
	m_Menu_File->Append( m_Open_File );
	
	wxMenuItem* m_KMUN_Website;
	m_KMUN_Website = new wxMenuItem( m_Menu_File, wxID_m_KMUN_Website, wxString( wxT("KMUN Website") ) , wxEmptyString, wxITEM_NORMAL );
	m_Menu_File->Append( m_KMUN_Website );
	
	m_Sub_Menu_1 = new wxMenu();
	wxMenuItem* m_Sub_Menu_1Item = new wxMenuItem( m_Menu_File, wxID_ANY, wxT("Sub_Menu1"), wxEmptyString, wxITEM_NORMAL, m_Sub_Menu_1 );
	wxMenuItem* m_Menu_Item1;
	m_Menu_Item1 = new wxMenuItem( m_Sub_Menu_1, wxID_Menu_Item1, wxString( wxT("Menu_Item1") ) , wxEmptyString, wxITEM_NORMAL );
	m_Sub_Menu_1->Append( m_Menu_Item1 );
	
	m_Menu_File->Append( m_Sub_Menu_1Item );
	
	m_Menu_Bar->Append( m_Menu_File, wxT("File") ); 
	
	m_Help = new wxMenu();
	wxMenuItem* m_About;
	m_About = new wxMenuItem( m_Help, wxID_m_About, wxString( wxT("About") ) , wxEmptyString, wxITEM_NORMAL );
	m_Help->Append( m_About );
	
	m_Menu_Bar->Append( m_Help, wxT("Help") ); 
	
	this->SetMenuBar( m_Menu_Bar );
	
	m_Status_Bar = this->CreateStatusBar( 1, wxST_SIZEGRIP, wxID_m_Status_Bar );
	
	this->Centre( wxBOTH );
	
    m_For_Motion->Enable(false);
    m_Against_Motion->Enable(false);
    m_Pass->Enable(false);
    m_Start_Voting->Enable(false);
}

void Main_Frame::Open_File()
{
     wxFileDialog *OpenDialog = new wxFileDialog(this, _("Choose a Text File to open"), wxEmptyString, wxEmptyString,_("Text File (*.txt)|*.txt"),wxOPEN, wxDefaultPosition);
	 if (OpenDialog->ShowModal() == wxID_OK) // do only if the user click "Open"  and not cancel
	 {
                                 DocPath = OpenDialog->GetPath();// Sets our current document to the file the user selected
                                 file.Open(DocPath);
                                 Is_File_Open=true;
                                 Total_Country=file.GetLineCount();
                                 Total_Country--;
                                 m_Label->SetLabel(_(""));
                                 Count_Of_Passed=0;
                                 Count_Of_For=0;
                                 Count_Of_Against=0;
                                 file.GoToLine(0);
                                 For_Percent=0;
                                 m_Start_Voting->Enable(false);
                                 m_For_Motion->Enable(false);
                                 m_Against_Motion->Enable(false);
                                 m_Pass->Enable(false);
     }  
}

void Main_Frame::c_Combo_Box( wxCommandEvent& event ) 
{
     m_Combo_Box_Ch = m_Combo_Box->GetSelection();
     m_Label->SetLabel(_(""));
     Count_Of_Passed=0;
     Count_Of_For=0;
     Count_Of_Against=0;
     file.GoToLine(0);
     For_Percent=0;
     m_Start_Voting->Enable(true);
     m_For_Motion->Enable(false);
     m_Against_Motion->Enable(false);
     m_Pass->Enable(false);
}
void Main_Frame::c_m_Start_Voting( wxCommandEvent& event )
{
     file_content.Empty();
     pass_country.Empty();
     for (wxString str = file.GetFirstLine(); !file.Eof();str = file.GetNextLine())
     {
         file_content<<str;
         file_content<<"~";
     }
     file_content<<"~";
     wxString str=file_content.BeforeFirst('~');
     m_Label->SetLabel(str);
     str<<"~";
     file_content.Replace(str,"");
     Count_Of_Passed=0;
     Count_Of_For=0;
     Count_Of_Against=0;
     file.GoToLine(0);
     For_Percent=0;
     m_Combo_Box->Enable(false);
     m_Start_Voting->Enable(false);
     m_For_Motion->Enable(true);
     m_Against_Motion->Enable(true);
     m_Pass->Enable(true);
//     wxString msg;
//     msg<<"Total number of countries=";
//     msg = wxString::Format(wxT("%i"), Total_Country);
//     wxMessageBox(msg, _T("ERROR!"), wxOK | wxICON_ERROR , this);
     
}
void Main_Frame::c_m_For_Motion( wxCommandEvent& event )
{
     if(!file_content.IsEmpty())
     {
                            Count_Of_For++;
                            wxString str=file_content.BeforeFirst('~');
                            m_Label->SetLabel(str);
                            str<<"~";
                            file_content.Replace(str,"");
                            if(file_content.IsEmpty())
                            m_Pass->Enable(false);
                            if((file_content.IsEmpty())&&(pass_country.IsEmpty()))
                            {
                                                    m_Label->SetLabel("");
                                                    m_Combo_Box->Enable(true);
                                                    m_Start_Voting->Enable(false);
                                                    m_For_Motion->Enable(false);
                                                    m_Against_Motion->Enable(false);
                                                    m_Pass->Enable(false);               
                                                    Calc_Results();
                            }
     }
     else if((file_content.IsEmpty())&&(!pass_country.IsEmpty()))
     {
                            Count_Of_For++;
                            Count_Of_Passed--;
                            wxString str=pass_country.BeforeFirst('~');
                            m_Label->SetLabel(str);
                            str<<"~";
                            pass_country.Replace(str,"");
                            m_Pass->Enable(false);
                            if((file_content.IsEmpty())&&(pass_country.IsEmpty()))
                            {
                                                    m_Label->SetLabel("");
                                                    m_Combo_Box->Enable(true);
                                                    m_Start_Voting->Enable(false);
                                                    m_For_Motion->Enable(false);
                                                    m_Against_Motion->Enable(false);
                                                    m_Pass->Enable(false);               
                                                    Calc_Results();
                            }
     }
     else if((file_content.IsEmpty())&&(pass_country.IsEmpty()))
     {
         m_Label->SetLabel("");
         m_For_Motion->Enable(false);
         m_Against_Motion->Enable(false);
         m_Pass->Enable(false);
         m_Combo_Box->Enable(true);
         m_Pass->Enable(true);        
         Calc_Results();
     }
}
void Main_Frame::c_m_Against_Motion( wxCommandEvent& event ) 
{
     if(!file_content.IsEmpty())
     {
                            Count_Of_Against++;
                            wxString str=file_content.BeforeFirst('~');
                            m_Label->SetLabel(str);
                            str<<"~";
                            file_content.Replace(str,"");
                            if(file_content.IsEmpty())
                            m_Pass->Enable(false);
                            if((file_content.IsEmpty())&&(pass_country.IsEmpty()))
                            {
                                                    m_Label->SetLabel("");
                                                    m_Combo_Box->Enable(true);
                                                    m_Start_Voting->Enable(false);
                                                    m_For_Motion->Enable(false);
                                                    m_Against_Motion->Enable(false);
                                                    m_Pass->Enable(false);               
                                                    Calc_Results();
                            }
     }
     else if((file_content.IsEmpty())&&(!pass_country.IsEmpty()))
     {
                            Count_Of_Against++;
                            Count_Of_Passed--;
                            wxString str=pass_country.BeforeFirst('~');
                            m_Label->SetLabel(str);
                            str<<"~";
                            pass_country.Replace(str,"");
                            m_Pass->Enable(false);
                            if((file_content.IsEmpty())&&(pass_country.IsEmpty()))
                            {
                                                    m_Label->SetLabel("");
                                                    m_Combo_Box->Enable(true);
                                                    m_Start_Voting->Enable(false);
                                                    m_For_Motion->Enable(false);
                                                    m_Against_Motion->Enable(false);
                                                    m_Pass->Enable(false);  
                                                    Calc_Results();             
                            }
     }
     else if((file_content.IsEmpty())&&(pass_country.IsEmpty()))
     {
         m_Label->SetLabel("");
         m_For_Motion->Enable(false);
         m_Against_Motion->Enable(false);
         m_Pass->Enable(false);
         m_Combo_Box->Enable(true);
         m_Pass->Enable(true);         
         Calc_Results();
     }
}
void Main_Frame::c_m_Pass( wxCommandEvent& event )
{
     if(!file_content.IsEmpty())
     {
                            Count_Of_Passed++;
                            wxString str=file_content.BeforeFirst('~');
                            m_Label->SetLabel(str);
                            str<<"~";
                            pass_country=pass_country.Append(str);
                            file_content.Replace(str,"");
                            if((file_content.IsEmpty())&&(pass_country.IsEmpty()))
                            {
                                                    m_Label->SetLabel("");
                                                    m_Combo_Box->Enable(true);
                                                    m_Start_Voting->Enable(false);
                                                    m_For_Motion->Enable(false);
                                                    m_Against_Motion->Enable(false);
                                                    m_Pass->Enable(false);               
                                                    Calc_Results();
                            }
     }
     else if((file_content.IsEmpty())&&(pass_country.IsEmpty()))
     {
         m_Label->SetLabel("");
         m_For_Motion->Enable(false);
         m_Against_Motion->Enable(false);
         m_Pass->Enable(false);
         m_Combo_Box->Enable(true);
         m_Pass->Enable(true);         
         Calc_Results();
     }
}
void Main_Frame::Calc_Results()
{
     wxString ma, mt;
     For_Percent=(Count_Of_For/Total_Country)*100;
     wxString mf = wxString::Format(wxT("%.2f%% In Favour of Motion."), For_Percent);
//     wxString mf = wxString::Format(wxT("%d"), Count_Of_For);
//     ma = wxString::Format(wxT("%d"), Count_Of_Against);
//     mt = wxString::Format(wxT("%d"), Total_Country);
     wxMessageBox(mf, _T("Result:"), wxOK | wxICON_INFORMATION , this);
//     wxMessageBox(ma, _T("ERROR!"), wxOK | wxICON_ERROR , this);
//     wxMessageBox(mt, _T("ERROR!"), wxOK | wxICON_ERROR , this);
     Count_Of_Passed=0;
     Count_Of_For=0;
     Count_Of_Against=0;
     file.GoToLine(0);
     For_Percent=0;
     m_Combo_Box->Enable(true);
     m_Start_Voting->Enable(false);
     m_For_Motion->Enable(false);
     m_Against_Motion->Enable(false);
     m_Pass->Enable(false);
}
void Main_Frame::c_m_Open_File( wxCommandEvent& event )
{
     Open_File();
}
void Main_Frame::c_m_KMUN_Website( wxCommandEvent& event )
{
     
}
void Main_Frame::c_m_Menu_Item1( wxCommandEvent& event )
{
     
}
void Main_Frame::c_m_About( wxCommandEvent& event )
{
     
}

Main_Frame::~Main_Frame()
{
                         
}
