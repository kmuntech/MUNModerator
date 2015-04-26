#ifndef __CONTROL_H__
#define __CONTROL_H__
#include <wx/artprov.h>
#include <wx/wx.h>
#include <wx/string.h>
#include "Main_Frame.h"

extern int m_Combo_Box_Ch;
extern wxString DocPath;
extern bool Is_File_Open;
extern double Count_Of_Passed;
extern double Count_Of_For;
extern double Count_Of_Against;
extern double For_Percent;
extern double Total_Country;
extern wxString file_content;
extern wxString pass_country;

#endif
//next 3 lines of code is for testing.....
//     wxString msg;
//     msg.Printf( _T("Enter All fields!"));
//     wxMessageBox(msg, _T("ERROR!"), wxOK | wxICON_ERROR , this);
