#ifndef GTKMM_BOTOES_H
#define GTKMM_BOTOES_H

#include <gtkmm/button.h>
#include <gtkmm/box.h>
#include <gtkmm/window.h>
#include <gtkmm/image.h>
#include <glibmm/refptr.h>
#include <gdkmm/pixbuf.h>
#include <gtkmm/togglebutton.h>

class Botoes:public Gtk::Window{
    public:
        Botoes();
        virtual ~Botoes();
    private:
        //Sinais
        void on_btn1_action();
        void on_btn2_action();
        void on_btn3_action();
        void on_btn4_action();

        //Box
        Gtk::Box m_box_main;
            Gtk::Box m_box1;
                Gtk::Box m_box1_1;
                Gtk::Box m_box1_2;

        //Boteos
        Glib::RefPtr<Gdk::Pixbuf> ref1;
        Gtk::Image img1; 
        Gtk::Button m_btn1;
        Glib::RefPtr<Gdk::Pixbuf> ref2;
        Gtk::Image img2;
        Gtk::Button m_btn2;
        Glib::RefPtr<Gdk::Pixbuf> ref3;
        Gtk::Image img3;
        Gtk::Button m_btn3;
        Glib::RefPtr<Gdk::Pixbuf> ref4;
        Gtk::Image img4;
        Gtk::Button m_btn4;
        Glib::RefPtr<Gdk::Pixbuf> ref5;
        Gtk::Image img5;
        Gtk::Button m_btn5;

        Gtk::Button m_btn_img;
};

#endif //GTKMM_BOTOES_H