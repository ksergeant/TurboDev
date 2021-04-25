#ifndef MAINFRAME_HPP_INCLUDED
#define MAINFRAME_HPP_INCLUDED

#include <wx/wx.h>

// Identifiants des contrôles
enum
{
    ID_BTN_VALIDER = wxID_HIGHEST + 1,
    ID_BTN_ANNULER
};

class MainFrame: public wxFrame
{
    public: 
        MainFrame(const wxString& title);
        virtual ~MainFrame();
    private:
        void OnButtonTest(wxCommandEvent& evt);
        void OnNouveau(wxCommandEvent& evt);
        void OnOuvrir(wxCommandEvent& evt);

        // Déclaration d'une table statique d'évènements
        DECLARE_EVENT_TABLE()
};



#endif // MAINFRAME_HPP_INCLUDED