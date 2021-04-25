#include "MainFrame.hpp"

// Définition de la table d'évènements
BEGIN_EVENT_TABLE(MainFrame, wxFrame)
    EVT_BUTTON(wxID_OK, MainFrame::OnButtonTest)
    EVT_MENU(wxID_NEW, MainFrame::OnNouveau)
    EVT_MENU(wxID_OPEN, MainFrame::OnOuvrir)
END_EVENT_TABLE()

MainFrame::MainFrame(const wxString& title) : wxFrame(NULL, wxID_ANY, title, wxPoint(0,25), wxSize(1440,825))
{
    // Constructeur

    // Crétion du wxBoxSizer horizontal
    wxBoxSizer *sizer_horizontal = new wxBoxSizer(wxHORIZONTAL);
    // Affectation du wxBoxSizer horizontal à la fenêtre
    SetSizer(sizer_horizontal);

    // Création du  wxPanel de base
    wxPanel* panel = new wxPanel(this);
    // On l'ajoute au wxSizer principal
    sizer_horizontal->Add(panel, 1, wxALL | wxEXPAND, 5);

    // Création d'un bouton sur ce panel
    wxButton *btn = new wxButton(panel, wxID_OK, _T("Cliquez-moi"));

    wxMenuBar* menubar = new wxMenuBar(); // Menu Principal tout en haut
    wxMenu* menuFichier = new wxMenu(); // Menu Fichier
	wxMenu* nouveauFichier = new wxMenu(); // Menu Nouveau

    menubar->Append(menuFichier, _("Fichier"));
    nouveauFichier->Append(wxID_NEW, wxT("Projet"));
    nouveauFichier->Append(wxID_NEW, wxT("Fichier"));
    menuFichier->AppendSubMenu(nouveauFichier, wxT("Nouveau"));

    menuFichier->Append(wxID_OPEN, _("Ouvrir"));
    menuFichier->Append(wxID_EXIT, _("Quitter"));
    
    this->SetMenuBar(menubar);
   
}

MainFrame::~MainFrame()
{
    // Destructeur
}

void MainFrame::OnButtonTest(wxCommandEvent& evt)
{
    wxMessageBox(_("Nouveau"));
}

void MainFrame::OnNouveau(wxCommandEvent& evt)
{
    wxMessageBox(_("Nouveau"));
}

void MainFrame::OnOuvrir(wxCommandEvent& evt)
{
    wxMessageBox(_("Veuillez choisir un fichier)"));
}
