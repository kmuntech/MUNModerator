#include <wx/wx.h>
#include "Main_Frame.h"

class KMUN_App : public wxApp
{
	public:
    	virtual bool OnInit();
};

IMPLEMENT_APP(KMUN_App)

bool KMUN_App::OnInit()
{
    Main_Frame *frame = new Main_Frame(NULL);  
    frame->Open_File();
    frame->Show(TRUE);
    SetTopWindow(frame);
    return TRUE;
}
