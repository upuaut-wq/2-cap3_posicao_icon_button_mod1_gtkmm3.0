#include <gtkmm/application.h>
#include "botoes.h"


int main(int argc, char * argv[]){
    auto app = Gtk::Application::create(argc, argv,"botoes.teste");
    Botoes btn;
    return app->run(btn);
}