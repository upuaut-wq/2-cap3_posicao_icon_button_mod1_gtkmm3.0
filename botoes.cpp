#include <iostream>
#include <iostream>
#include "botoes.h"


Botoes::Botoes(){
    //Window
    this->add(this->m_box_main);
    this->set_border_width(5);
    
    //Box
    this->m_box_main.set_orientation(Gtk::ORIENTATION_VERTICAL);
    this->m_box1.set_orientation(Gtk::ORIENTATION_HORIZONTAL);
    this->m_box1.set_spacing(5);
    this->m_box1_1.set_orientation(Gtk::ORIENTATION_HORIZONTAL);
    this->m_box1_1.set_valign(Gtk::ALIGN_CENTER);
    this->m_box1_2.set_orientation(Gtk::ORIENTATION_HORIZONTAL);
    this->m_box1_2.set_valign(Gtk::ALIGN_CENTER);


    //Botoes -> vox
    this->m_box1_2.pack_start(this->m_btn1);
    this->m_box1_2.pack_start(this->m_btn2);
    this->m_box1_2.pack_start(this->m_btn3);
    this->m_box1_2.pack_start(this->m_btn4);

    //Botoes
    this->ref1= Gdk::Pixbuf::create_from_file("img/d.svg",24,24,false);
    this->m_btn1.set_tooltip_text("Gtk::POS_RIGHT");
    this->img1.set(this->ref1);
    this->m_btn1.set_image(this->img1);
    this->m_btn1.set_relief(Gtk::RELIEF_NONE);
    this->m_btn1.set_state_flags(Gtk::STATE_FLAG_CHECKED);
    this->m_btn1.signal_clicked().connect(sigc::mem_fun(*this,&Botoes::on_btn1_action));

    this->ref2= Gdk::Pixbuf::create_from_file("img/e.svg",24,24,false);
    this->m_btn2.set_tooltip_text("Gtk::POS_LEFT");
    this->img2.set(this->ref2);
    this->m_btn2.set_image(img2);
    this->m_btn2.set_relief(Gtk::RELIEF_NONE);
    this->m_btn2.signal_clicked().connect(sigc::mem_fun(*this,&Botoes::on_btn2_action));

    this->ref3= Gdk::Pixbuf::create_from_file("img/t.svg",24,24,false);
    this->m_btn3.set_tooltip_text("Gtk::POS_TOP");
    this->img3.set(this->ref3);
    this->m_btn3.set_image(img3);
    this->m_btn3.set_relief(Gtk::RELIEF_NONE);
    this->m_btn3.signal_clicked().connect(sigc::mem_fun(*this,&Botoes::on_btn3_action));

    this->ref4= Gdk::Pixbuf::create_from_file("img/u.svg",24,24,false);
    this->m_btn4.set_tooltip_text("Gtk::POS_BOTTOM");
    this->img4.set(this->ref4);
    this->m_btn4.set_image(img4);
    this->m_btn4.set_relief(Gtk::RELIEF_NONE);
    this->m_btn4.signal_clicked().connect(sigc::mem_fun(*this,&Botoes::on_btn4_action));

    //BOtão com Imagem;
    this->m_box1_1.pack_start(this->m_btn_img);
    this->ref5 = Gdk::Pixbuf::create_from_file("img/img.svg",24,24,false);
    
    this->img5.set(this->ref5);
    this->m_btn_img.set_image(img5);
    this->m_btn_img.set_label("Label");
    this->m_btn_img.set_always_show_image(true);

    //boxs -> box_main
    this->m_box_main.pack_start(this->m_box1);
        this->m_box1.pack_start(this->m_box1_1);
        this->m_box1.pack_start(this->m_box1_2);

        this->show_all_children();
}



Botoes::~Botoes(){

}


void Botoes::on_btn1_action(){
     if((int)this->m_btn1.get_state_flags() == 163){
        std::cout << "Active" << std::endl;
        this->m_btn1.set_state_flags(Gtk::STATE_FLAG_CHECKED,true);
        this->m_btn2.set_state_flags(Gtk::STATE_FLAG_NORMAL,true);
        this->m_btn3.set_state_flags(Gtk::STATE_FLAG_NORMAL,true);
        this->m_btn4.set_state_flags(Gtk::STATE_FLAG_NORMAL,true);

        this->m_btn_img.set_image_position(Gtk::POS_LEFT);
    }

}
void Botoes::on_btn2_action(){

    if((int)this->m_btn2.get_state_flags() == 163){
        std::cout << "Active" << std::endl;
        this->m_btn1.set_state_flags(Gtk::STATE_FLAG_NORMAL,true);
        this->m_btn2.set_state_flags(Gtk::STATE_FLAG_CHECKED,true);
        this->m_btn3.set_state_flags(Gtk::STATE_FLAG_NORMAL,true);
        this->m_btn4.set_state_flags(Gtk::STATE_FLAG_NORMAL,true);

        this->m_btn_img.set_image_position(Gtk::POS_RIGHT);
    }
}
void Botoes::on_btn3_action(){
    if((int)this->m_btn3.get_state_flags() == 163){
        std::cout << "Active" << std::endl;
        this->m_btn1.set_state_flags(Gtk::STATE_FLAG_NORMAL,true);
        this->m_btn2.set_state_flags(Gtk::STATE_FLAG_NORMAL,true);
        this->m_btn3.set_state_flags(Gtk::STATE_FLAG_CHECKED,true);
        this->m_btn4.set_state_flags(Gtk::STATE_FLAG_NORMAL,true);

        this->m_btn_img.set_image_position(Gtk::POS_TOP);
    }
}


void Botoes::on_btn4_action(){
  if((int)this->m_btn4.get_state_flags() == 163){
        std::cout << "Active" << std::endl;
        this->m_btn1.set_state_flags(Gtk::STATE_FLAG_NORMAL,true);
        this->m_btn2.set_state_flags(Gtk::STATE_FLAG_NORMAL,true);
        this->m_btn3.set_state_flags(Gtk::STATE_FLAG_NORMAL,true);
        this->m_btn4.set_state_flags(Gtk::STATE_FLAG_CHECKED,true);

        this->m_btn_img.set_image_position(Gtk::POS_BOTTOM);
    }
}