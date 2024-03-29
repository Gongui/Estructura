#pragma once

namespace PilasYColas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	struct nodo {
		char nombreyapellidos[100];
		int edad;
		char enfermedad[100];
		nodo *siguiente;
		//utilizando recursividad se declara un puntero de tipo nodo que servira para saber el nodo al que apunta  otro determinado nodo
		
	};
	nodo *current;
	nodo *temporary; 
	nodo *primero;
	nodo *ultimo;
	/// <summary>
	/// Resumen de Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
			contar_nodos();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n utilizando.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::GroupBox^  gBox_Agregar;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  tB_Entrante_Enfermedad;
	private: System::Windows::Forms::TextBox^  tB_Entrante_Edad;
	private: System::Windows::Forms::TextBox^  tB_Entrante_Nombre;
	private: System::Windows::Forms::GroupBox^  gBox_NPrincipales;
	private: System::Windows::Forms::GroupBox^  gBox_Nodo1;
	private: System::Windows::Forms::TextBox^  tB_Nodo1_Enfermedad;
	private: System::Windows::Forms::TextBox^  tB_Nodo1_Edad;
	private: System::Windows::Forms::TextBox^  tB_Nodo1_Nombre;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::GroupBox^  gBox_Nodo2;
	private: System::Windows::Forms::TextBox^  tB_Nodo2_Enfermedad;
	private: System::Windows::Forms::TextBox^  tB_Nodo2_Edad;
	private: System::Windows::Forms::TextBox^  tB_Nodo2_Nombre;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::GroupBox^  gBox_Nodo3;
	private: System::Windows::Forms::TextBox^  tB_Nodo3_Enfermedad;
	private: System::Windows::Forms::TextBox^  tB_Nodo3_Edad;
	private: System::Windows::Forms::TextBox^  tB_Nodo3_Nombre;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::GroupBox^  gBox_Eliminar;
	private: System::Windows::Forms::TextBox^  tB_Saliente_Enfermedad;
	private: System::Windows::Forms::TextBox^  tB_Saliente_Edad;
	private: System::Windows::Forms::TextBox^  tB_Saliente_Nombre;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  bt_Agregar;

	private: System::Windows::Forms::Button^  bt_Limpiar;
	private: System::Windows::Forms::Button^  bt_Extraer;
	private: System::Windows::Forms::Button^  bt_Crear_Cola;


	private:
		/// <summary>
		/// Variable del dise�ador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido del m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->gBox_Agregar = (gcnew System::Windows::Forms::GroupBox());
			this->tB_Entrante_Enfermedad = (gcnew System::Windows::Forms::TextBox());
			this->tB_Entrante_Edad = (gcnew System::Windows::Forms::TextBox());
			this->tB_Entrante_Nombre = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->gBox_NPrincipales = (gcnew System::Windows::Forms::GroupBox());
			this->gBox_Nodo1 = (gcnew System::Windows::Forms::GroupBox());
			this->tB_Nodo1_Enfermedad = (gcnew System::Windows::Forms::TextBox());
			this->tB_Nodo1_Edad = (gcnew System::Windows::Forms::TextBox());
			this->tB_Nodo1_Nombre = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->gBox_Nodo2 = (gcnew System::Windows::Forms::GroupBox());
			this->tB_Nodo2_Enfermedad = (gcnew System::Windows::Forms::TextBox());
			this->tB_Nodo2_Edad = (gcnew System::Windows::Forms::TextBox());
			this->tB_Nodo2_Nombre = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->gBox_Nodo3 = (gcnew System::Windows::Forms::GroupBox());
			this->tB_Nodo3_Enfermedad = (gcnew System::Windows::Forms::TextBox());
			this->tB_Nodo3_Edad = (gcnew System::Windows::Forms::TextBox());
			this->tB_Nodo3_Nombre = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->gBox_Eliminar = (gcnew System::Windows::Forms::GroupBox());
			this->tB_Saliente_Enfermedad = (gcnew System::Windows::Forms::TextBox());
			this->tB_Saliente_Edad = (gcnew System::Windows::Forms::TextBox());
			this->tB_Saliente_Nombre = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->bt_Agregar = (gcnew System::Windows::Forms::Button());
			this->bt_Limpiar = (gcnew System::Windows::Forms::Button());
			this->bt_Extraer = (gcnew System::Windows::Forms::Button());
			this->bt_Crear_Cola = (gcnew System::Windows::Forms::Button());
			this->gBox_Agregar->SuspendLayout();
			this->gBox_NPrincipales->SuspendLayout();
			this->gBox_Nodo1->SuspendLayout();
			this->gBox_Nodo2->SuspendLayout();
			this->gBox_Nodo3->SuspendLayout();
			this->gBox_Eliminar->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(236, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Total de nodos:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(328, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// gBox_Agregar
			// 
			this->gBox_Agregar->Controls->Add(this->tB_Entrante_Enfermedad);
			this->gBox_Agregar->Controls->Add(this->tB_Entrante_Edad);
			this->gBox_Agregar->Controls->Add(this->tB_Entrante_Nombre);
			this->gBox_Agregar->Controls->Add(this->label4);
			this->gBox_Agregar->Controls->Add(this->label3);
			this->gBox_Agregar->Controls->Add(this->label2);
			this->gBox_Agregar->Location = System::Drawing::Point(12, 41);
			this->gBox_Agregar->Name = L"gBox_Agregar";
			this->gBox_Agregar->Size = System::Drawing::Size(200, 100);
			this->gBox_Agregar->TabIndex = 2;
			this->gBox_Agregar->TabStop = false;
			this->gBox_Agregar->Text = L"Nodo Entrante";
			// 
			// tB_Entrante_Enfermedad
			// 
			this->tB_Entrante_Enfermedad->Location = System::Drawing::Point(89, 71);
			this->tB_Entrante_Enfermedad->Name = L"tB_Entrante_Enfermedad";
			this->tB_Entrante_Enfermedad->Size = System::Drawing::Size(100, 20);
			this->tB_Entrante_Enfermedad->TabIndex = 5;
			// 
			// tB_Entrante_Edad
			// 
			this->tB_Entrante_Edad->Location = System::Drawing::Point(89, 45);
			this->tB_Entrante_Edad->Name = L"tB_Entrante_Edad";
			this->tB_Entrante_Edad->Size = System::Drawing::Size(100, 20);
			this->tB_Entrante_Edad->TabIndex = 4;
			// 
			// tB_Entrante_Nombre
			// 
			this->tB_Entrante_Nombre->Location = System::Drawing::Point(89, 19);
			this->tB_Entrante_Nombre->Name = L"tB_Entrante_Nombre";
			this->tB_Entrante_Nombre->Size = System::Drawing::Size(100, 20);
			this->tB_Entrante_Nombre->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 74);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Enfermedad:";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 48);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Edad:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Nombre:";
			// 
			// gBox_NPrincipales
			// 
			this->gBox_NPrincipales->Controls->Add(this->gBox_Nodo1);
			this->gBox_NPrincipales->Controls->Add(this->gBox_Nodo2);
			this->gBox_NPrincipales->Controls->Add(this->gBox_Nodo3);
			this->gBox_NPrincipales->Location = System::Drawing::Point(12, 157);
			this->gBox_NPrincipales->Name = L"gBox_NPrincipales";
			this->gBox_NPrincipales->Size = System::Drawing::Size(650, 154);
			this->gBox_NPrincipales->TabIndex = 3;
			this->gBox_NPrincipales->TabStop = false;
			this->gBox_NPrincipales->Text = L"Nodos Principales";
			// 
			// gBox_Nodo1
			// 
			this->gBox_Nodo1->Controls->Add(this->tB_Nodo1_Enfermedad);
			this->gBox_Nodo1->Controls->Add(this->tB_Nodo1_Edad);
			this->gBox_Nodo1->Controls->Add(this->tB_Nodo1_Nombre);
			this->gBox_Nodo1->Controls->Add(this->label8);
			this->gBox_Nodo1->Controls->Add(this->label9);
			this->gBox_Nodo1->Controls->Add(this->label10);
			this->gBox_Nodo1->Location = System::Drawing::Point(444, 33);
			this->gBox_Nodo1->Name = L"gBox_Nodo1";
			this->gBox_Nodo1->Size = System::Drawing::Size(200, 100);
			this->gBox_Nodo1->TabIndex = 5;
			this->gBox_Nodo1->TabStop = false;
			// 
			// tB_Nodo1_Enfermedad
			// 
			this->tB_Nodo1_Enfermedad->Location = System::Drawing::Point(89, 71);
			this->tB_Nodo1_Enfermedad->Name = L"tB_Nodo1_Enfermedad";
			this->tB_Nodo1_Enfermedad->Size = System::Drawing::Size(100, 20);
			this->tB_Nodo1_Enfermedad->TabIndex = 5;
			// 
			// tB_Nodo1_Edad
			// 
			this->tB_Nodo1_Edad->Location = System::Drawing::Point(89, 45);
			this->tB_Nodo1_Edad->Name = L"tB_Nodo1_Edad";
			this->tB_Nodo1_Edad->Size = System::Drawing::Size(100, 20);
			this->tB_Nodo1_Edad->TabIndex = 4;
			// 
			// tB_Nodo1_Nombre
			// 
			this->tB_Nodo1_Nombre->Location = System::Drawing::Point(89, 19);
			this->tB_Nodo1_Nombre->Name = L"tB_Nodo1_Nombre";
			this->tB_Nodo1_Nombre->Size = System::Drawing::Size(100, 20);
			this->tB_Nodo1_Nombre->TabIndex = 3;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(17, 74);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(67, 13);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Enfermedad:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(17, 48);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 13);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Edad:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(17, 22);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(47, 13);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Nombre:";
			// 
			// gBox_Nodo2
			// 
			this->gBox_Nodo2->Controls->Add(this->tB_Nodo2_Enfermedad);
			this->gBox_Nodo2->Controls->Add(this->tB_Nodo2_Edad);
			this->gBox_Nodo2->Controls->Add(this->tB_Nodo2_Nombre);
			this->gBox_Nodo2->Controls->Add(this->label11);
			this->gBox_Nodo2->Controls->Add(this->label12);
			this->gBox_Nodo2->Controls->Add(this->label13);
			this->gBox_Nodo2->Location = System::Drawing::Point(226, 33);
			this->gBox_Nodo2->Name = L"gBox_Nodo2";
			this->gBox_Nodo2->Size = System::Drawing::Size(200, 100);
			this->gBox_Nodo2->TabIndex = 6;
			this->gBox_Nodo2->TabStop = false;
			// 
			// tB_Nodo2_Enfermedad
			// 
			this->tB_Nodo2_Enfermedad->Location = System::Drawing::Point(89, 71);
			this->tB_Nodo2_Enfermedad->Name = L"tB_Nodo2_Enfermedad";
			this->tB_Nodo2_Enfermedad->Size = System::Drawing::Size(100, 20);
			this->tB_Nodo2_Enfermedad->TabIndex = 5;
			// 
			// tB_Nodo2_Edad
			// 
			this->tB_Nodo2_Edad->Location = System::Drawing::Point(89, 45);
			this->tB_Nodo2_Edad->Name = L"tB_Nodo2_Edad";
			this->tB_Nodo2_Edad->Size = System::Drawing::Size(100, 20);
			this->tB_Nodo2_Edad->TabIndex = 4;
			// 
			// tB_Nodo2_Nombre
			// 
			this->tB_Nodo2_Nombre->Location = System::Drawing::Point(89, 19);
			this->tB_Nodo2_Nombre->Name = L"tB_Nodo2_Nombre";
			this->tB_Nodo2_Nombre->Size = System::Drawing::Size(100, 20);
			this->tB_Nodo2_Nombre->TabIndex = 3;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(17, 74);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(67, 13);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Enfermedad:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(17, 48);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(35, 13);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Edad:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(17, 22);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(47, 13);
			this->label13->TabIndex = 0;
			this->label13->Text = L"Nombre:";
			// 
			// gBox_Nodo3
			// 
			this->gBox_Nodo3->Controls->Add(this->tB_Nodo3_Enfermedad);
			this->gBox_Nodo3->Controls->Add(this->tB_Nodo3_Edad);
			this->gBox_Nodo3->Controls->Add(this->tB_Nodo3_Nombre);
			this->gBox_Nodo3->Controls->Add(this->label14);
			this->gBox_Nodo3->Controls->Add(this->label15);
			this->gBox_Nodo3->Controls->Add(this->label16);
			this->gBox_Nodo3->Location = System::Drawing::Point(6, 33);
			this->gBox_Nodo3->Name = L"gBox_Nodo3";
			this->gBox_Nodo3->Size = System::Drawing::Size(200, 100);
			this->gBox_Nodo3->TabIndex = 7;
			this->gBox_Nodo3->TabStop = false;
			// 
			// tB_Nodo3_Enfermedad
			// 
			this->tB_Nodo3_Enfermedad->Location = System::Drawing::Point(89, 71);
			this->tB_Nodo3_Enfermedad->Name = L"tB_Nodo3_Enfermedad";
			this->tB_Nodo3_Enfermedad->Size = System::Drawing::Size(100, 20);
			this->tB_Nodo3_Enfermedad->TabIndex = 5;
			// 
			// tB_Nodo3_Edad
			// 
			this->tB_Nodo3_Edad->Location = System::Drawing::Point(89, 45);
			this->tB_Nodo3_Edad->Name = L"tB_Nodo3_Edad";
			this->tB_Nodo3_Edad->Size = System::Drawing::Size(100, 20);
			this->tB_Nodo3_Edad->TabIndex = 4;
			// 
			// tB_Nodo3_Nombre
			// 
			this->tB_Nodo3_Nombre->Location = System::Drawing::Point(89, 19);
			this->tB_Nodo3_Nombre->Name = L"tB_Nodo3_Nombre";
			this->tB_Nodo3_Nombre->Size = System::Drawing::Size(100, 20);
			this->tB_Nodo3_Nombre->TabIndex = 3;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(17, 74);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(67, 13);
			this->label14->TabIndex = 2;
			this->label14->Text = L"Enfermedad:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(17, 48);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(35, 13);
			this->label15->TabIndex = 1;
			this->label15->Text = L"Edad:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(17, 22);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(47, 13);
			this->label16->TabIndex = 0;
			this->label16->Text = L"Nombre:";
			// 
			// gBox_Eliminar
			// 
			this->gBox_Eliminar->Controls->Add(this->tB_Saliente_Enfermedad);
			this->gBox_Eliminar->Controls->Add(this->tB_Saliente_Edad);
			this->gBox_Eliminar->Controls->Add(this->tB_Saliente_Nombre);
			this->gBox_Eliminar->Controls->Add(this->label5);
			this->gBox_Eliminar->Controls->Add(this->label6);
			this->gBox_Eliminar->Controls->Add(this->label7);
			this->gBox_Eliminar->Location = System::Drawing::Point(456, 41);
			this->gBox_Eliminar->Name = L"gBox_Eliminar";
			this->gBox_Eliminar->Size = System::Drawing::Size(200, 100);
			this->gBox_Eliminar->TabIndex = 4;
			this->gBox_Eliminar->TabStop = false;
			this->gBox_Eliminar->Text = L"Nodo Saliente";
			// 
			// tB_Saliente_Enfermedad
			// 
			this->tB_Saliente_Enfermedad->Location = System::Drawing::Point(89, 71);
			this->tB_Saliente_Enfermedad->Name = L"tB_Saliente_Enfermedad";
			this->tB_Saliente_Enfermedad->Size = System::Drawing::Size(100, 20);
			this->tB_Saliente_Enfermedad->TabIndex = 5;
			// 
			// tB_Saliente_Edad
			// 
			this->tB_Saliente_Edad->Location = System::Drawing::Point(89, 45);
			this->tB_Saliente_Edad->Name = L"tB_Saliente_Edad";
			this->tB_Saliente_Edad->Size = System::Drawing::Size(100, 20);
			this->tB_Saliente_Edad->TabIndex = 4;
			// 
			// tB_Saliente_Nombre
			// 
			this->tB_Saliente_Nombre->Location = System::Drawing::Point(89, 19);
			this->tB_Saliente_Nombre->Name = L"tB_Saliente_Nombre";
			this->tB_Saliente_Nombre->Size = System::Drawing::Size(100, 20);
			this->tB_Saliente_Nombre->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(17, 74);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Enfermedad:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(17, 48);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Edad:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(17, 22);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(47, 13);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Nombre:";
			// 
			// bt_Agregar
			// 
			this->bt_Agregar->Location = System::Drawing::Point(239, 105);
			this->bt_Agregar->Name = L"bt_Agregar";
			this->bt_Agregar->Size = System::Drawing::Size(75, 23);
			this->bt_Agregar->TabIndex = 5;
			this->bt_Agregar->Text = L"Agregar";
			this->bt_Agregar->UseVisualStyleBackColor = true;
			this->bt_Agregar->Click += gcnew System::EventHandler(this, &Form1::bt_Agregar_Click);
			// 
			// bt_Limpiar
			// 
			this->bt_Limpiar->Location = System::Drawing::Point(353, 105);
			this->bt_Limpiar->Name = L"bt_Limpiar";
			this->bt_Limpiar->Size = System::Drawing::Size(75, 23);
			this->bt_Limpiar->TabIndex = 6;
			this->bt_Limpiar->Text = L"Limpiar";
			this->bt_Limpiar->UseVisualStyleBackColor = true;
			this->bt_Limpiar->Click += gcnew System::EventHandler(this, &Form1::bt_Limpiar_Click);
			// 
			// bt_Extraer
			// 
			this->bt_Extraer->Location = System::Drawing::Point(353, 63);
			this->bt_Extraer->Name = L"bt_Extraer";
			this->bt_Extraer->Size = System::Drawing::Size(75, 23);
			this->bt_Extraer->TabIndex = 7;
			this->bt_Extraer->Text = L"Extraer";
			this->bt_Extraer->UseVisualStyleBackColor = true;
			this->bt_Extraer->Click += gcnew System::EventHandler(this, &Form1::bt_Extraer_Click);
			// 
			// bt_Crear_Cola
			// 
			this->bt_Crear_Cola->Location = System::Drawing::Point(239, 63);
			this->bt_Crear_Cola->Name = L"bt_Crear_Cola";
			this->bt_Crear_Cola->Size = System::Drawing::Size(75, 23);
			this->bt_Crear_Cola->TabIndex = 8;
			this->bt_Crear_Cola->Text = L"Crear Cola";
			this->bt_Crear_Cola->UseVisualStyleBackColor = true;
			this->bt_Crear_Cola->Click += gcnew System::EventHandler(this, &Form1::bt_Crear_Cola_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(674, 330);
			this->Controls->Add(this->bt_Crear_Cola);
			this->Controls->Add(this->bt_Extraer);
			this->Controls->Add(this->bt_Limpiar);
			this->Controls->Add(this->bt_Agregar);
			this->Controls->Add(this->gBox_Eliminar);
			this->Controls->Add(this->gBox_NPrincipales);
			this->Controls->Add(this->gBox_Agregar);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Torres Jonathan - Colas";
			this->gBox_Agregar->ResumeLayout(false);
			this->gBox_Agregar->PerformLayout();
			this->gBox_NPrincipales->ResumeLayout(false);
			this->gBox_Nodo1->ResumeLayout(false);
			this->gBox_Nodo1->PerformLayout();
			this->gBox_Nodo2->ResumeLayout(false);
			this->gBox_Nodo2->PerformLayout();
			this->gBox_Nodo3->ResumeLayout(false);
			this->gBox_Nodo3->PerformLayout();
			this->gBox_Eliminar->ResumeLayout(false);
			this->gBox_Eliminar->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

int mostrar_nodos_superiores(){
			//Se borran los textbox que muestra los 3 nodos superiores de la pila.
			tB_Nodo1_Nombre->Text = "";
			tB_Nodo1_Edad->Text = "";
			tB_Nodo1_Enfermedad->Text = "";
			tB_Nodo2_Nombre->Text = "";
			tB_Nodo2_Edad->Text = "";
			tB_Nodo2_Enfermedad->Text = "";
			tB_Nodo3_Nombre->Text = "";
			tB_Nodo3_Edad->Text = "";
			tB_Nodo3_Enfermedad->Text = "";
			if(primero != 0){
				//Si en la pila hay por lo menos un nodo muestra el nodo top.
				for(int i = 0; i < 100 ; i++)
					//Hace 100 iteraciones por ser el maximo programado
					//para el arreglo de tipo char donde se almacena el nombre y los apellidos.
					tB_Nodo1_Nombre->Text += Char::ToString(primero->nombreyapellidos[i]);
					//En cada iteracion va concatenando de modo que toma las posiciones tipo char y las va uniendo.
				tB_Nodo1_Edad->Text = Convert::ToString(primero->edad);
				//Imprime el valor almacenado en el campo edad del nodo top.
				for(int i = 0; i < 100 ; i++)
					//Hace 100 iteraciones por ser el maximo programado
					//para el arreglo de tipo char donde se almacena el nombre y los apellidos.
					tB_Nodo1_Enfermedad->Text += Char::ToString(primero->enfermedad[i]);
					//En cada iteracion va concatenando de modo que toma las posiciones tipo char y las va uniendo.
				//Imprime el valor almacenado en el campo salario del nodo top.
				if(primero->siguiente != 0){
					for(int i = 0; i < 100 ; i++)
						tB_Nodo2_Nombre->Text += Char::ToString(primero->siguiente->nombreyapellidos[i]);
					tB_Nodo2_Edad->Text = Convert::ToString(primero->siguiente->edad);
					for(int i = 0; i < 100 ; i++)
						tB_Nodo2_Enfermedad->Text += Char::ToString(primero->siguiente->enfermedad[i]);
					if(primero->siguiente->siguiente != 0){
						for(int i = 0; i < 100 ; i++)
							tB_Nodo3_Nombre->Text += Char::ToString(primero->siguiente->siguiente->nombreyapellidos[i]);
						tB_Nodo3_Edad->Text = Convert::ToString(primero->siguiente->siguiente->edad);
						for(int i = 0; i < 100 ; i++)
							tB_Nodo3_Enfermedad->Text += Char::ToString(primero->siguiente->siguiente->enfermedad[i]);
					}
				}
			}
			return 0;//Necesario porque la funcion tiene que retornar un valor.
		}
		//La funcion a crear a continuacion es para que cuando el usuario haga click en el boton crear pila
		//Push o Pop que el programa muestre el total de nodos en la pila.

		int contar_nodos(){
			int total_de_nodos = 0;
			if(primero != 0){
				//Para que el total de nodos llegue a ser mayor que 0, debe existir un nodo.
				current = primero;
				//Debido a que se quiere contar el numero de nodos debemos comenzar desde el nodo Top
				total_de_nodos += 1;
				while(current->siguiente != 0){
					//Mientras exista un nodo abajo del nodo actual seguiran las iteraciones
					total_de_nodos += 1;
					current = current->siguiente;
					//En cada iteracion el nodo actual pasa a ser el nodo que esta abajo del actual.
				}
			}
			textBox1->Text = Convert::ToString(total_de_nodos);
			return 0;
		}


		void limpiar(){
			 //se limpian los textbox de los campos desde lo q se agregan nodos
			 tB_Entrante_Nombre->Text="";
			 tB_Entrante_Edad->Text="";
			 tB_Entrante_Enfermedad->Text="";		
		}


		int esnumero(char *string, int n){
			int cont = 0;
			for(int i = 0; (i < n) && (*(string+i) >= 48 && *(string+i) >= 57) ; i++)
				cont++;
			if(cont == n)
				return 1;
			else
				return 0;
		}


#pragma endregion
	private: System::Void bt_Agregar_Click(System::Object^  sender, System::EventArgs^  e) {
			if(primero != 0){
				//Si no existe ningun nodo que el programa no haga nada.
				current = new nodo;
				//Con las proximas 6 lineas se llena de informacion los espacios de memoria de top.
				for(int i = 0; i < 100 ; i++){
					current->nombreyapellidos[i] = ' ';
					current->enfermedad[i] = ' ';//En cada iteracion se llena una posicion de espacio en blanco.
					//Con las proximas 2 lineas se llena cada posicion con datos del textBox.
				}
				for(int i = 0; i < tB_Entrante_Nombre->Text->Length; i++)
					//Si la longitud del texto introducido tiene 20 caracteres el for hara 20 iteraciones.
					current->nombreyapellidos[i] = tB_Entrante_Nombre->Text[i];
				current->edad = Convert::ToInt64(tB_Entrante_Edad->Text);
				//Con las proximas 2 lineas se llena cada posicion con datos del textBox.
				for(int i=0; i< tB_Entrante_Enfermedad->Text->Length; i++)
					current->enfermedad[i] = tB_Entrante_Enfermedad->Text[i];
				current->siguiente = 0;
				ultimo->siguiente = current;//Para que el apuntador del nodo apunte hacia el nodo que era top.
				ultimo = current;//El nodo recien creado se convierte en top.
				mostrar_nodos_superiores();
				contar_nodos();
				limpiar();
			 }
			 }
private: System::Void bt_Extraer_Click(System::Object^  sender, System::EventArgs^  e) {
			 //codigo para que se elimine el nodo que esta encima es decir el top
			 tB_Saliente_Nombre->Text=tB_Nodo1_Nombre->Text;
			 tB_Saliente_Edad->Text=tB_Nodo1_Edad->Text;
			 tB_Saliente_Enfermedad->Text=tB_Nodo1_Enfermedad->Text;
			 if (primero!=0){
				 //cuando el top sea 0 significa que no hay ningun nodo entonces para evitar hacer referencia a algo q no
				 //existe preguntamos primero
				 temporary = primero;//debido a que el nodo top es el q se va a eliminar se almacena en la variable temporary
				 //para luego asignarle el top al q queda como nuevo top
				 primero = primero->siguiente;//debido a q se eliminara el nodo top se asigna quien sera el nuevo top
				 delete(temporary);//se elmina el primer nodo de la pila el q anteriormente era el nodo top
				 mostrar_nodos_superiores();
				 contar_nodos();
			 }
		 }
private: System::Void bt_Crear_Cola_Click(System::Object^  sender, System::EventArgs^  e) {
		 //se determina hacia donde va apuntar la variable top
			 primero = new nodo;//se crea un nuevo nodo utilizando la estructura nodo
			 //con las proximas 6 lineas se llena con datos los espacios de memoria apuntados por top
			 for(int i=0; i<100; i++){
				 primero->nombreyapellidos[i]=' ';
				 primero->enfermedad[i]=' ';
			 }
			 for(int i=0; i< tB_Entrante_Nombre->Text->Length; i++)
				 primero->nombreyapellidos[i]=tB_Entrante_Nombre->Text[i];
			 primero->edad=Convert::ToInt64(tB_Entrante_Edad->Text);
			 for(int i=0; i< tB_Entrante_Enfermedad->Text->Length; i++)
				 primero->enfermedad[i] = tB_Entrante_Enfermedad->Text[i];
	   		 primero->siguiente = 0;//por ser nodo que esta hasta abajo en la pila apunta hacia 0
			 ultimo = primero;
			 mostrar_nodos_superiores();
			 contar_nodos();
			 limpiar();
		 }
private: System::Void bt_Limpiar_Click(System::Object^  sender, System::EventArgs^  e) {	
			limpiar();
		 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

