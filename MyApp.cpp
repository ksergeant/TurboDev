#include "MyApp.hpp"
#include "MainFrame.hpp"

// La macro pour rediriger l'exécution vers notre classe
IMPLEMENT_APP(MyApp);

// L'implémentation de la méthode OnInit
bool MyApp::OnInit()
{
    MainFrame *frm= new MainFrame(_T("TurboDev 1.0"));
    frm->Show();
    return true;
}
