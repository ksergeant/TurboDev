
#ifndef MYAPP_HPP_INCLUDED
#define MYAPP_HPP_INCLUDED

#include <wx/wxprec.h>
#include "fonction.h"

#include <wx/wx.h>

class MyApp: public wxApp
{ 
    public:
        virtual bool OnInit();
};

// On n'oublie pas de déclarer cette classe comme étant la classe principale
DECLARE_APP(MyApp);

#endif