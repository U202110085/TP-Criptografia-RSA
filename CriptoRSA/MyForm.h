#pragma once
#include "funcionesRSA.h"

namespace CriptoRSA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		int clavePriv1, clavePriv2, clavePub1, clavePub2, n, e1, d;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lbl_close_encriptar;
	private: System::Windows::Forms::Panel^ panel_desencriptar;
	private: System::Windows::Forms::Label^ lbl_close_desencriptar;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txt_resultado_desencriptado;

	private: System::Windows::Forms::TextBox^ txt_para_desencriptar;

	private: System::Windows::Forms::TextBox^ txt_claveprivada2;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txt_claveprivada1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ lbl_clavepriv;
	private: System::Windows::Forms::TextBox^ txt_name_desencriptar;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ lbl_text_reference_desencriptar;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txt_name_encriptar;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txt_name_para_encriptar;





	private:
		Filee* file;
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			panel_encriptar->Visible = false;
			panel_desencriptar->Visible = false;
			file = new Filee();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_desencriptar;
	protected:
	private: System::Windows::Forms::Button^ btn_encriptar;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel_encriptar;
	private: System::Windows::Forms::Button^ btn_generar_claves;
	private: System::Windows::Forms::Label^ lbl_clave_publica;
	private: System::Windows::Forms::Label^ lbl_clave_privada;
	private: System::Windows::Forms::Label^ lbl_const_clave_publica;
	private: System::Windows::Forms::Label^ lbl_const_clave_privada;
	private: System::Windows::Forms::TextBox^ txt_valor_q;
	private: System::Windows::Forms::Label^ lbl_valor_q;
	private: System::Windows::Forms::Label^ lbl_valor_p;
	private: System::Windows::Forms::Label^ lbl_titulo_encripcion;
	private: System::Windows::Forms::TextBox^ txt_valor_p;
	private: System::Windows::Forms::Button^ btn_encriptar_texto;
	private: System::Windows::Forms::TextBox^ txt_resultado_encriptado;
	private: System::Windows::Forms::TextBox^ txt_para_encriptar;

	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btn_desencriptar = (gcnew System::Windows::Forms::Button());
			this->btn_encriptar = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel_encriptar = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txt_name_para_encriptar = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txt_name_encriptar = (gcnew System::Windows::Forms::TextBox());
			this->lbl_close_encriptar = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_encriptar_texto = (gcnew System::Windows::Forms::Button());
			this->txt_resultado_encriptado = (gcnew System::Windows::Forms::TextBox());
			this->txt_para_encriptar = (gcnew System::Windows::Forms::TextBox());
			this->btn_generar_claves = (gcnew System::Windows::Forms::Button());
			this->lbl_clave_publica = (gcnew System::Windows::Forms::Label());
			this->lbl_clave_privada = (gcnew System::Windows::Forms::Label());
			this->lbl_const_clave_publica = (gcnew System::Windows::Forms::Label());
			this->lbl_const_clave_privada = (gcnew System::Windows::Forms::Label());
			this->txt_valor_q = (gcnew System::Windows::Forms::TextBox());
			this->lbl_valor_q = (gcnew System::Windows::Forms::Label());
			this->lbl_valor_p = (gcnew System::Windows::Forms::Label());
			this->lbl_titulo_encripcion = (gcnew System::Windows::Forms::Label());
			this->txt_valor_p = (gcnew System::Windows::Forms::TextBox());
			this->panel_desencriptar = (gcnew System::Windows::Forms::Panel());
			this->lbl_text_reference_desencriptar = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txt_name_desencriptar = (gcnew System::Windows::Forms::TextBox());
			this->lbl_clavepriv = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lbl_close_desencriptar = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_resultado_desencriptado = (gcnew System::Windows::Forms::TextBox());
			this->txt_para_desencriptar = (gcnew System::Windows::Forms::TextBox());
			this->txt_claveprivada2 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txt_claveprivada1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel_encriptar->SuspendLayout();
			this->panel_desencriptar->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_desencriptar
			// 
			this->btn_desencriptar->Location = System::Drawing::Point(330, 257);
			this->btn_desencriptar->Name = L"btn_desencriptar";
			this->btn_desencriptar->Size = System::Drawing::Size(124, 51);
			this->btn_desencriptar->TabIndex = 5;
			this->btn_desencriptar->Text = L"Desencriptar Mensaje";
			this->btn_desencriptar->UseVisualStyleBackColor = true;
			this->btn_desencriptar->Click += gcnew System::EventHandler(this, &MyForm::btn_desencriptar_Click);
			// 
			// btn_encriptar
			// 
			this->btn_encriptar->Location = System::Drawing::Point(219, 257);
			this->btn_encriptar->Name = L"btn_encriptar";
			this->btn_encriptar->Size = System::Drawing::Size(90, 51);
			this->btn_encriptar->TabIndex = 4;
			this->btn_encriptar->Text = L"Encriptar Mensaje";
			this->btn_encriptar->UseVisualStyleBackColor = true;
			this->btn_encriptar->Click += gcnew System::EventHandler(this, &MyForm::btn_encriptar_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(148, 140);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(363, 60);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// panel_encriptar
			// 
			this->panel_encriptar->Controls->Add(this->label9);
			this->panel_encriptar->Controls->Add(this->txt_name_para_encriptar);
			this->panel_encriptar->Controls->Add(this->label8);
			this->panel_encriptar->Controls->Add(this->txt_name_encriptar);
			this->panel_encriptar->Controls->Add(this->lbl_close_encriptar);
			this->panel_encriptar->Controls->Add(this->label2);
			this->panel_encriptar->Controls->Add(this->label1);
			this->panel_encriptar->Controls->Add(this->btn_encriptar_texto);
			this->panel_encriptar->Controls->Add(this->txt_resultado_encriptado);
			this->panel_encriptar->Controls->Add(this->txt_para_encriptar);
			this->panel_encriptar->Controls->Add(this->btn_generar_claves);
			this->panel_encriptar->Controls->Add(this->lbl_clave_publica);
			this->panel_encriptar->Controls->Add(this->lbl_clave_privada);
			this->panel_encriptar->Controls->Add(this->lbl_const_clave_publica);
			this->panel_encriptar->Controls->Add(this->lbl_const_clave_privada);
			this->panel_encriptar->Controls->Add(this->txt_valor_q);
			this->panel_encriptar->Controls->Add(this->lbl_valor_q);
			this->panel_encriptar->Controls->Add(this->lbl_valor_p);
			this->panel_encriptar->Controls->Add(this->lbl_titulo_encripcion);
			this->panel_encriptar->Controls->Add(this->txt_valor_p);
			this->panel_encriptar->Location = System::Drawing::Point(9, 9);
			this->panel_encriptar->Name = L"panel_encriptar";
			this->panel_encriptar->Size = System::Drawing::Size(629, 426);
			this->panel_encriptar->TabIndex = 6;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(178, 292);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(138, 64);
			this->label9->TabIndex = 24;
			this->label9->Text = L"Ingrese el nombre del\r\narchivo donde se\r\nleera el mensaje para\r\nencriptar";
			// 
			// txt_name_para_encriptar
			// 
			this->txt_name_para_encriptar->Location = System::Drawing::Point(181, 368);
			this->txt_name_para_encriptar->Name = L"txt_name_para_encriptar";
			this->txt_name_para_encriptar->Size = System::Drawing::Size(134, 22);
			this->txt_name_para_encriptar->TabIndex = 23;
			this->txt_name_para_encriptar->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_name_para_encriptar_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(15, 292);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(137, 48);
			this->label8->TabIndex = 22;
			this->label8->Text = L"Ingrese el nombre del\r\narchivo donde se\r\nguardara el mensaje";
			// 
			// txt_name_encriptar
			// 
			this->txt_name_encriptar->Location = System::Drawing::Point(18, 368);
			this->txt_name_encriptar->Name = L"txt_name_encriptar";
			this->txt_name_encriptar->Size = System::Drawing::Size(134, 22);
			this->txt_name_encriptar->TabIndex = 21;
			this->txt_name_encriptar->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// lbl_close_encriptar
			// 
			this->lbl_close_encriptar->AutoSize = true;
			this->lbl_close_encriptar->BackColor = System::Drawing::Color::Red;
			this->lbl_close_encriptar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lbl_close_encriptar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lbl_close_encriptar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_close_encriptar->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->lbl_close_encriptar->Location = System::Drawing::Point(573, 21);
			this->lbl_close_encriptar->Name = L"lbl_close_encriptar";
			this->lbl_close_encriptar->Size = System::Drawing::Size(34, 32);
			this->lbl_close_encriptar->TabIndex = 15;
			this->lbl_close_encriptar->Text = L"X";
			this->lbl_close_encriptar->Click += gcnew System::EventHandler(this, &MyForm::lbl_close_encriptar_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(365, 281);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 16);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Mensaje Encriptado";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(365, 91);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 16);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Ingrese un mensaje";
			// 
			// btn_encriptar_texto
			// 
			this->btn_encriptar_texto->Location = System::Drawing::Point(443, 245);
			this->btn_encriptar_texto->Name = L"btn_encriptar_texto";
			this->btn_encriptar_texto->Size = System::Drawing::Size(75, 23);
			this->btn_encriptar_texto->TabIndex = 12;
			this->btn_encriptar_texto->Text = L"Encriptar";
			this->btn_encriptar_texto->UseVisualStyleBackColor = true;
			this->btn_encriptar_texto->Click += gcnew System::EventHandler(this, &MyForm::btn_encriptar_texto_Click);
			// 
			// txt_resultado_encriptado
			// 
			this->txt_resultado_encriptado->Location = System::Drawing::Point(368, 303);
			this->txt_resultado_encriptado->Multiline = true;
			this->txt_resultado_encriptado->Name = L"txt_resultado_encriptado";
			this->txt_resultado_encriptado->Size = System::Drawing::Size(226, 112);
			this->txt_resultado_encriptado->TabIndex = 11;
			// 
			// txt_para_encriptar
			// 
			this->txt_para_encriptar->Location = System::Drawing::Point(368, 116);
			this->txt_para_encriptar->Multiline = true;
			this->txt_para_encriptar->Name = L"txt_para_encriptar";
			this->txt_para_encriptar->Size = System::Drawing::Size(226, 112);
			this->txt_para_encriptar->TabIndex = 10;
			// 
			// btn_generar_claves
			// 
			this->btn_generar_claves->Location = System::Drawing::Point(113, 179);
			this->btn_generar_claves->Name = L"btn_generar_claves";
			this->btn_generar_claves->Size = System::Drawing::Size(121, 23);
			this->btn_generar_claves->TabIndex = 9;
			this->btn_generar_claves->Text = L"Generar Claves";
			this->btn_generar_claves->UseVisualStyleBackColor = true;
			this->btn_generar_claves->Click += gcnew System::EventHandler(this, &MyForm::btn_generar_claves_Click);
			// 
			// lbl_clave_publica
			// 
			this->lbl_clave_publica->AutoSize = true;
			this->lbl_clave_publica->Location = System::Drawing::Point(172, 256);
			this->lbl_clave_publica->Name = L"lbl_clave_publica";
			this->lbl_clave_publica->Size = System::Drawing::Size(115, 16);
			this->lbl_clave_publica->TabIndex = 8;
			this->lbl_clave_publica->Text = L"*Aun no hay datos";
			// 
			// lbl_clave_privada
			// 
			this->lbl_clave_privada->AutoSize = true;
			this->lbl_clave_privada->Location = System::Drawing::Point(172, 225);
			this->lbl_clave_privada->Name = L"lbl_clave_privada";
			this->lbl_clave_privada->Size = System::Drawing::Size(115, 16);
			this->lbl_clave_privada->TabIndex = 7;
			this->lbl_clave_privada->Text = L"*Aun no hay datos";
			// 
			// lbl_const_clave_publica
			// 
			this->lbl_const_clave_publica->AutoSize = true;
			this->lbl_const_clave_publica->Location = System::Drawing::Point(67, 256);
			this->lbl_const_clave_publica->Name = L"lbl_const_clave_publica";
			this->lbl_const_clave_publica->Size = System::Drawing::Size(90, 16);
			this->lbl_const_clave_publica->TabIndex = 6;
			this->lbl_const_clave_publica->Text = L"Clave Pública";
			// 
			// lbl_const_clave_privada
			// 
			this->lbl_const_clave_privada->AutoSize = true;
			this->lbl_const_clave_privada->Location = System::Drawing::Point(67, 225);
			this->lbl_const_clave_privada->Name = L"lbl_const_clave_privada";
			this->lbl_const_clave_privada->Size = System::Drawing::Size(92, 16);
			this->lbl_const_clave_privada->TabIndex = 5;
			this->lbl_const_clave_privada->Text = L"Clave Privada";
			// 
			// txt_valor_q
			// 
			this->txt_valor_q->Location = System::Drawing::Point(216, 137);
			this->txt_valor_q->Name = L"txt_valor_q";
			this->txt_valor_q->Size = System::Drawing::Size(100, 22);
			this->txt_valor_q->TabIndex = 4;
			// 
			// lbl_valor_q
			// 
			this->lbl_valor_q->AutoSize = true;
			this->lbl_valor_q->Location = System::Drawing::Point(50, 140);
			this->lbl_valor_q->Name = L"lbl_valor_q";
			this->lbl_valor_q->Size = System::Drawing::Size(137, 16);
			this->lbl_valor_q->TabIndex = 3;
			this->lbl_valor_q->Text = L"Ingrese el valor de (q)";
			// 
			// lbl_valor_p
			// 
			this->lbl_valor_p->AutoSize = true;
			this->lbl_valor_p->Location = System::Drawing::Point(50, 105);
			this->lbl_valor_p->Name = L"lbl_valor_p";
			this->lbl_valor_p->Size = System::Drawing::Size(137, 16);
			this->lbl_valor_p->TabIndex = 2;
			this->lbl_valor_p->Text = L"Ingrese el valor de (p)";
			// 
			// lbl_titulo_encripcion
			// 
			this->lbl_titulo_encripcion->AutoSize = true;
			this->lbl_titulo_encripcion->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_titulo_encripcion->Location = System::Drawing::Point(168, 42);
			this->lbl_titulo_encripcion->Name = L"lbl_titulo_encripcion";
			this->lbl_titulo_encripcion->Size = System::Drawing::Size(269, 37);
			this->lbl_titulo_encripcion->TabIndex = 1;
			this->lbl_titulo_encripcion->Text = L"Encriptar Mensaje";
			this->lbl_titulo_encripcion->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_valor_p
			// 
			this->txt_valor_p->Location = System::Drawing::Point(216, 102);
			this->txt_valor_p->Name = L"txt_valor_p";
			this->txt_valor_p->Size = System::Drawing::Size(100, 22);
			this->txt_valor_p->TabIndex = 0;
			// 
			// panel_desencriptar
			// 
			this->panel_desencriptar->Controls->Add(this->lbl_text_reference_desencriptar);
			this->panel_desencriptar->Controls->Add(this->label7);
			this->panel_desencriptar->Controls->Add(this->txt_name_desencriptar);
			this->panel_desencriptar->Controls->Add(this->lbl_clavepriv);
			this->panel_desencriptar->Controls->Add(this->label6);
			this->panel_desencriptar->Controls->Add(this->label3);
			this->panel_desencriptar->Controls->Add(this->lbl_close_desencriptar);
			this->panel_desencriptar->Controls->Add(this->label4);
			this->panel_desencriptar->Controls->Add(this->label5);
			this->panel_desencriptar->Controls->Add(this->button1);
			this->panel_desencriptar->Controls->Add(this->txt_resultado_desencriptado);
			this->panel_desencriptar->Controls->Add(this->txt_para_desencriptar);
			this->panel_desencriptar->Controls->Add(this->txt_claveprivada2);
			this->panel_desencriptar->Controls->Add(this->label11);
			this->panel_desencriptar->Controls->Add(this->label12);
			this->panel_desencriptar->Controls->Add(this->txt_claveprivada1);
			this->panel_desencriptar->Location = System::Drawing::Point(12, 12);
			this->panel_desencriptar->Name = L"panel_desencriptar";
			this->panel_desencriptar->Size = System::Drawing::Size(629, 426);
			this->panel_desencriptar->TabIndex = 16;
			// 
			// lbl_text_reference_desencriptar
			// 
			this->lbl_text_reference_desencriptar->AutoSize = true;
			this->lbl_text_reference_desencriptar->Location = System::Drawing::Point(12, 341);
			this->lbl_text_reference_desencriptar->Name = L"lbl_text_reference_desencriptar";
			this->lbl_text_reference_desencriptar->Size = System::Drawing::Size(307, 64);
			this->lbl_text_reference_desencriptar->TabIndex = 21;
			this->lbl_text_reference_desencriptar->Text = resources->GetString(L"lbl_text_reference_desencriptar.Text");
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(67, 285);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(224, 16);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Ingrese el nombre de su archivo (.txt)";
			// 
			// txt_name_desencriptar
			// 
			this->txt_name_desencriptar->Location = System::Drawing::Point(70, 304);
			this->txt_name_desencriptar->Name = L"txt_name_desencriptar";
			this->txt_name_desencriptar->Size = System::Drawing::Size(217, 22);
			this->txt_name_desencriptar->TabIndex = 19;
			this->txt_name_desencriptar->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_name_desencriptar_TextChanged);
			// 
			// lbl_clavepriv
			// 
			this->lbl_clavepriv->AutoSize = true;
			this->lbl_clavepriv->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lbl_clavepriv->Location = System::Drawing::Point(103, 233);
			this->lbl_clavepriv->Name = L"lbl_clavepriv";
			this->lbl_clavepriv->Size = System::Drawing::Size(121, 16);
			this->lbl_clavepriv->TabIndex = 18;
			this->lbl_clavepriv->Text = L"Clave Privada: (  ;  )";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(103, 193);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(25, 16);
			this->label6->TabIndex = 17;
			this->label6->Text = L"d =";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(103, 154);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 16);
			this->label3->TabIndex = 16;
			this->label3->Text = L"n =";
			// 
			// lbl_close_desencriptar
			// 
			this->lbl_close_desencriptar->AutoSize = true;
			this->lbl_close_desencriptar->BackColor = System::Drawing::Color::Red;
			this->lbl_close_desencriptar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lbl_close_desencriptar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lbl_close_desencriptar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_close_desencriptar->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->lbl_close_desencriptar->Location = System::Drawing::Point(573, 21);
			this->lbl_close_desencriptar->Name = L"lbl_close_desencriptar";
			this->lbl_close_desencriptar->Size = System::Drawing::Size(34, 32);
			this->lbl_close_desencriptar->TabIndex = 15;
			this->lbl_close_desencriptar->Text = L"X";
			this->lbl_close_desencriptar->Click += gcnew System::EventHandler(this, &MyForm::lbl_close_desencriptar_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(365, 281);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(151, 16);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Mensaje Desencriptado";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(365, 91);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(188, 16);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Ingrese el mensaje descifrado";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(428, 245);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 23);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Desencriptar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// txt_resultado_desencriptado
			// 
			this->txt_resultado_desencriptado->Location = System::Drawing::Point(368, 303);
			this->txt_resultado_desencriptado->Multiline = true;
			this->txt_resultado_desencriptado->Name = L"txt_resultado_desencriptado";
			this->txt_resultado_desencriptado->Size = System::Drawing::Size(226, 112);
			this->txt_resultado_desencriptado->TabIndex = 11;
			// 
			// txt_para_desencriptar
			// 
			this->txt_para_desencriptar->Location = System::Drawing::Point(368, 116);
			this->txt_para_desencriptar->Multiline = true;
			this->txt_para_desencriptar->Name = L"txt_para_desencriptar";
			this->txt_para_desencriptar->Size = System::Drawing::Size(226, 112);
			this->txt_para_desencriptar->TabIndex = 10;
			// 
			// txt_claveprivada2
			// 
			this->txt_claveprivada2->Location = System::Drawing::Point(134, 189);
			this->txt_claveprivada2->Name = L"txt_claveprivada2";
			this->txt_claveprivada2->Size = System::Drawing::Size(100, 22);
			this->txt_claveprivada2->TabIndex = 4;
			this->txt_claveprivada2->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_claveprivada2_TextChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(103, 111);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(152, 16);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Ingrese la clave Privada";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(155, 32);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(321, 37);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Desencriptar Mensaje";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_claveprivada1
			// 
			this->txt_claveprivada1->Location = System::Drawing::Point(133, 151);
			this->txt_claveprivada1->Name = L"txt_claveprivada1";
			this->txt_claveprivada1->Size = System::Drawing::Size(100, 22);
			this->txt_claveprivada1->TabIndex = 0;
			this->txt_claveprivada1->TextChanged += gcnew System::EventHandler(this, &MyForm::txt_claveprivada1_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(658, 448);
			this->Controls->Add(this->panel_encriptar);
			this->Controls->Add(this->panel_desencriptar);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btn_desencriptar);
			this->Controls->Add(this->btn_encriptar);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel_encriptar->ResumeLayout(false);
			this->panel_encriptar->PerformLayout();
			this->panel_desencriptar->ResumeLayout(false);
			this->panel_desencriptar->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_encriptar_Click(System::Object^ sender, System::EventArgs^ e) {
		panel_encriptar->Visible = true;
	}
	private: System::Void btn_desencriptar_Click(System::Object^ sender, System::EventArgs^ e) {
		panel_desencriptar->Visible = true;
	}
	private: System::Void btn_generar_claves_Click(System::Object^ sender, System::EventArgs^ e) {
		int p, q, z;
		if (txt_valor_p->Text->Length == 0 && txt_valor_q->Text->Length == 0)
			MessageBox::Show("Le falta ingresar los valores de p & q", "WARNING", MessageBoxButtons::OK);
		else if (txt_valor_p->Text->Length == 0)
			MessageBox::Show("Le falta ingresar el valore de p", "WARNING", MessageBoxButtons::OK);
		else if (txt_valor_q->Text->Length == 0)
			MessageBox::Show("Le falta ingresar el valore de q", "WARNING", MessageBoxButtons::OK);
		else {
			p = Convert::ToInt32(txt_valor_p->Text);
			q = Convert::ToInt32(txt_valor_q->Text);
			if (p + q < 25)
			{
				MessageBox::Show("Ingrese valores mas altos", "WARNING", MessageBoxButtons::OK);
			}
			else {
				n = p * q;
				z = (p - 1) * (q - 1);
				d = encontrar_d(z);
				e1 = encontrar_e(d, z);
				clavePriv1 = clavePub1 = n;
				clavePriv2 = d;
				clavePub2 = e1;
				lbl_clave_privada->Text = "(" + n + ";" + d + ")";
				lbl_clave_publica->Text = "(" + n + ";" + e1 + ")";
			}
		}
	}
	private: System::Void btn_encriptar_texto_Click(System::Object^ sender, System::EventArgs^ e) {
		txt_resultado_encriptado->Text = "";
		if (txt_para_encriptar->Text->Length == 0 && txt_name_para_encriptar->TextLength == 0)
			MessageBox::Show("Le falta ingresar un mensaje", "WARNING", MessageBoxButtons::OK);
		else if (clavePriv1 == 0)
			MessageBox::Show("Aun no tiene generado un clave", "WARNING", MessageBoxButtons::OK);
		else {
			if (txt_name_para_encriptar->TextLength == 0) {
				txt_resultado_encriptado->Text = encriptar(txt_para_encriptar->Text, n, e1);
				if (txt_name_encriptar->TextLength != 0)
					file->writeData(txt_name_encriptar->Text, encriptar(txt_para_encriptar->Text, n, e1));
			}
			else if (txt_name_para_encriptar->TextLength != 0) {
				file->readData(txt_name_para_encriptar->Text);
				if (file->gettext().length() == 0)
					MessageBox::Show("No existe el archivo o no hay mensaje en el archivo", "WARNING", MessageBoxButtons::OK);
				else {
					txt_resultado_encriptado->Text = encriptar(gcnew String(file->gettext().c_str()), n, e1);
					if (txt_name_encriptar->TextLength != 0)
						file->writeData(txt_name_encriptar->Text, encriptar(gcnew String(file->gettext().c_str()), n, e1));
					file->resettext();
				}
			}
		}

	}
	private: System::Void lbl_close_encriptar_Click(System::Object^ sender, System::EventArgs^ e) {
		panel_encriptar->Visible = false;
	}
	private: System::Void lbl_close_desencriptar_Click(System::Object^ sender, System::EventArgs^ e) {
		panel_desencriptar->Visible = false;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		txt_resultado_desencriptado->Text = "";
		panel_desencriptar->Visible = true;
		if (txt_claveprivada1->Text->Length == 0 || txt_claveprivada2->Text->Length == 0)
			MessageBox::Show("Le falta ingresar la clave", "WARNING", MessageBoxButtons::OK);
		else if (txt_para_desencriptar->Text->Length == 0 && txt_name_desencriptar->TextLength == 0)
			MessageBox::Show("Le falta el mensaje para desencriptar", "WARNING", MessageBoxButtons::OK);
		else 
		{
			n = Convert::ToInt32(txt_claveprivada1->Text);
			d = Convert::ToInt32(txt_claveprivada2->Text);
			if (txt_para_desencriptar->Enabled) {
				txt_resultado_desencriptado->Text = desencriptar(txt_para_desencriptar->Text, n, d);
			}
			else {
				file->readData(txt_name_desencriptar->Text);
				if (file->gettext().length() == 0)
					MessageBox::Show("No existe el archivo o no hay mensaje en el archivo", "WARNING", MessageBoxButtons::OK);
				else {
					txt_resultado_desencriptado->Text = desencriptar(gcnew String(file->gettext().c_str()), n, d);
					file->resettext();
				}
			}
		}
	}
	private: System::Void txt_claveprivada1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ cp1 = txt_claveprivada1->Text->Length == 0 ? "  " : txt_claveprivada1->Text;
		String^ cp2 = txt_claveprivada2->Text->Length == 0 ? "  " : txt_claveprivada2->Text;
		
		lbl_clavepriv->Text = "Clave Privada: (" + cp1 +
			";" + cp2 + ")";
	}
	private: System::Void txt_claveprivada2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ cp1 = txt_claveprivada1->Text->Length == 0 ? "  " : txt_claveprivada1->Text;
		String^ cp2 = txt_claveprivada2->Text->Length == 0 ? "  " : txt_claveprivada2->Text;

		lbl_clavepriv->Text = "Clave Privada: (" + cp1 +
			";" + cp2 + ")";
	}
	private: System::Void txt_name_desencriptar_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (txt_name_desencriptar->TextLength > 0) {
			txt_para_desencriptar->Enabled = false;
		}
		else txt_para_desencriptar->Enabled = true;
	} System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (txt_name_encriptar->TextLength > 0) {
			txt_name_para_encriptar->Enabled = false;
		}
		else txt_name_para_encriptar->Enabled = true;
	}
	private: System::Void txt_name_para_encriptar_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (txt_name_para_encriptar->TextLength > 0) {
			txt_para_encriptar->Enabled = false;
		}
		else {
			txt_name_encriptar->Enabled = true;
			txt_para_encriptar->Enabled = true;
		}
	}
};
}
