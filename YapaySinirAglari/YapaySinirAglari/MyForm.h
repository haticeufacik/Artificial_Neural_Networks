#pragma once

#define sbt 1
#define d1 -1
#define d2 1
#define c 1
#define m 0.1

namespace YapaySinirAglari {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	int size = 4;  // Bir veride 4 de�er tuttu�umuz i�in min 4 bellek alan�na ihtiyac�m�z var.
	int X = 0, Y = 0;
	double W[3];
	int counter = 0;
	int *data = new int[size];
	float *normalize = new float[size];

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:

		Graphics ^ g ;
	private: System::Windows::Forms::CheckBox^  checkBox1;

	public:
		Pen ^ myPen;
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  processToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private:
		/// <summary>
		/// Required designer variable.

	private: System::Windows::Forms::ToolStripMenuItem^  initializeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  trainingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  binaryToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;


	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ToolStripMenuItem^  continousToolStripMenuItem;



			 /// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->processToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->initializeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->trainingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->binaryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->continousToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->processToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(744, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// processToolStripMenuItem
			// 
			this->processToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->initializeToolStripMenuItem,
					this->trainingToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->processToolStripMenuItem->Name = L"processToolStripMenuItem";
			this->processToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->processToolStripMenuItem->Text = L"Process";
			// 
			// initializeToolStripMenuItem
			// 
			this->initializeToolStripMenuItem->Name = L"initializeToolStripMenuItem";
			this->initializeToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->initializeToolStripMenuItem->Text = L"�nitialize";
			this->initializeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::initializeToolStripMenuItem_Click);
			// 
			// trainingToolStripMenuItem
			// 
			this->trainingToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->binaryToolStripMenuItem,
					this->continousToolStripMenuItem
			});
			this->trainingToolStripMenuItem->Name = L"trainingToolStripMenuItem";
			this->trainingToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->trainingToolStripMenuItem->Text = L"Training";
			// 
			// binaryToolStripMenuItem
			// 
			this->binaryToolStripMenuItem->Name = L"binaryToolStripMenuItem";
			this->binaryToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->binaryToolStripMenuItem->Text = L"Binary";
			this->binaryToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::binaryToolStripMenuItem_Click);
			// 
			// continousToolStripMenuItem
			// 
			this->continousToolStripMenuItem->Name = L"continousToolStripMenuItem";
			this->continousToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->continousToolStripMenuItem->Text = L"Continous";
			this->continousToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::continousToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->pictureBox1->Location = System::Drawing::Point(13, 49);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(300, 300);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			//this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseClick);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(553, 68);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(56, 17);
			this->radioButton1->TabIndex = 4;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Class1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(553, 116);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(56, 17);
			this->radioButton2->TabIndex = 5;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Class2";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::BottomRight;
			this->label1->Location = System::Drawing::Point(163, 49);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(3, 288, 0, 0);
			this->label1->Size = System::Drawing::Size(3, 301);
			this->label1->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(13, 199);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(300, 3);
			this->label2->TabIndex = 5;
			this->label2->Text = L"label2";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(553, 169);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(72, 17);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->Text = L"Normalize";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(744, 408);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {}

	private: System::Void initializeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		//Ba�lang��ta do�ru �izme durumu

		Graphics^ object;
		object = pictureBox1->CreateGraphics();
		Pen^ myPen = gcnew Pen(Color::DarkGreen, 2);

		W[0] = 1;
		W[1] = 1;
		W[2] = 0;


		// Ba�lang�� do�rusunu x=-y olarak (yani W=[1,1,0]^t) olarak belirledik.
		object->DrawLine(myPen,0, 0, pictureBox1->Width, pictureBox1->Height);

	}
    
	// Classlar�n belirlenmesi ve nokta g�sterimi
	private: System::Void pictureBox1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		counter++;
		X = e->X;
		Y = e->Y;
		Graphics^ object;
		object = pictureBox1->CreateGraphics();
		Pen^ bluePen = gcnew Pen(Color::Blue, 2);
		Pen^ redPen = gcnew Pen(Color::Red, 2);

		if(radioButton1->Checked) {

			int translated_X = X - (pictureBox1->Width / 2);
			int translated_Y = (pictureBox1->Height / 2) - Y;

			data[size - 4] = translated_X;  // X
			data[size - 3] = translated_Y;  // Y
			data[size - 2] = sbt;           // belirlenen sabit de�er
			data[size - 1] = d1;            // Class1 i ifade eder
			size += 4;

			//MessageBox::Show("  " + data[size - 4] + "  " + data[size - 3], "Uyar�");
			object->DrawLine(bluePen, (X - 5), Y, (X + 5), Y);
			object->DrawLine(bluePen, X, (Y - 5), X, (Y + 5));

		}
		else if (radioButton2->Checked) {

			int translated_X = X - (pictureBox1->Width / 2);
			int translated_Y = (pictureBox1->Height / 2) - Y;

			data[size - 4] = translated_X;  // X
			data[size - 3] = translated_Y;  // Y
			data[size - 2] = sbt;           // belirlenen sabit de�er
			data[size - 1] = d2;            // Class2 yi ifade eder
			size += 4;
			//MessageBox::Show("  " + data[size - 4] + "  " + data[size - 3] , "Uyar�");
			object->DrawLine(redPen, (X - 5), Y, (X + 5), Y);
			object->DrawLine(redPen, X, (Y - 5), X, (Y + 5));
		}
		else {
			MessageBox::Show("Class se�mediniz!", "Uyar�!");
		}


	}
    
	// Koordinat d�zleminin �izilmesi
	private: System::Void MyForm::pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

		// Kartezyen koordinat d�zlemini DrawLine fonksiyonunu kullanarak form ekran�na �izdirir :
		//Graphics^ g = e->Graphics;
		//Pen^ myPen = gcnew Pen(Color::Black, 2);

		//g->DrawLine(myPen, picture_box_half_size, 0, picture_box_half_size, picture_box_size);
		//g->DrawLine(myPen, 0, picture_box_half_size, picture_box_size, picture_box_half_size);
	}

// PERCEPTRON LEARN�NG RULE
private: System::Void binaryToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	
	int k = 0; // W nin indislerini kontrol etmek i�in
	int Error = 1;
	int i = 0;
	float net = 0;
	int sgnNet = 0;
	float omegaKatsayi = 0;
	float ciz_y1, ciz_y2, ciz_x1, ciz_x2;

	while (Error > 0)
	{
		//MessageBox::Show("  " + counter, "Uyar�");
		Error = 0;
		i = 0;
		while (i < (counter * 4)) {
			k = 0;

			// net=w^t*x1 
			net = (W[k] * data[i]) + (W[k + 1] * data[i + 1]) + (W[k + 2] * data[i + 2]);

			// Kurala g�re sgnNet atamalar�
			if (net > 0) {   
				sgnNet = 1;
			}
			else {
				sgnNet = -1;
			}
			// W^k+1= Wk+c*sgnNet*Xi
			omegaKatsayi = c * (data[i + 3] - sgnNet);   // omegaKatsayi=c*[d-o]

			// W^k+1=W+omegaKatsayi*Xi  ile yeni W de�erlerini buluyoruz.
			W[k] += (omegaKatsayi * data[i]); 
			W[k+1] += (omegaKatsayi * data[i+1]);
			W[k+2] += ( omegaKatsayi * data[i+2]);

			// Error+=|(d-o)|/2
			Error += Math::Abs(data[i + 3] - sgnNet) / 2;

			// Do�runun ekranda g�sterilmesi 
			g = pictureBox1->CreateGraphics();
			Pen^ myPen = gcnew Pen(Color::Red, 2);

		    //do�runun pictureBoxta en geni� �ekilde �izilebilmesi i�in max x noktalar� se�ilerek yler hesaplan�r;
			ciz_x1 = -(pictureBox1->Width / 2);
			ciz_y1 = -(ciz_x1 * W[0] + W[2]) / W[1];
			ciz_x2 = (pictureBox1->Width / 2);
			ciz_y2 = -(ciz_x2 * W[0] + W[2]) / W[1];

			pictureBox1->Refresh();   // �izilen do�rular�n �st �ste gelmemesi i�in

			// Her refreshte noktalar�  g�rebilmek i�in noktalar� tekrardan �izdirmemiz gerek
			for (int n = 0; n < counter * 4; n += 4) {
				if (data[n + 3] == d1) {          // class1 elemanlar�
					myPen = gcnew Pen(Color::Blue, 2);
				}
				else if (data[n + 3] == d2) {     // class2 elemanlar�
					myPen = gcnew Pen(Color::Red, 2);
				}
				X = data[n] + (pictureBox1->Width / 2);
				Y = (pictureBox1->Height / 2) - data[n + 1];

				g->DrawLine(myPen, (X - 5), Y, (X + 5), Y);
				g->DrawLine(myPen, X, (Y - 5), X, (Y + 5));
			}
			myPen = gcnew Pen(Color::DarkGreen, 2);
			g->DrawLine(myPen, (float)0, (pictureBox1->Height / 2) - ciz_y1, (float)(pictureBox1->Width), (pictureBox1->Height / 2) - ciz_y2);
			i += 4;
		
		} 

	} 
}

// Delta Learning 
private: System::Void continousToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	float Mx = 0, My = 0, t1=0, t2=0;
	float  a = 0, b = 0, kareX=0, kareY=0;
	float varyansX=0, varyansY = 0, net = 0, omegaKatsayi = 0;
	float Error = 1;
	int k = 0, i=0;
	int lamda = 1;
	float net1 = 0, fnet = 0, fnet_turev = 0;
	float ciz_y1, ciz_y2, ciz_x1, ciz_x2;


	// ***************** NORMAL�ZASYON *****************

	if (checkBox1->Checked) {   // Noktalar i�in normalizasyon butonu
		
		for (int i = 0; i < (counter * 4); i += 4) {
			t1 += data[i];   // X'erin toplam�
			t2 += data[i + 1];  // Y'erin toplam�
		}
		Mx = t1 / counter;  // Ortalama X
		My = t2 / counter;  // Ortalama X

		for (int i = 0; i < (counter * 4); i += 4) {

			a = data[i] - Mx;   // x-m
			b = data[i + 1] - My; // y-m
			kareX += Math::Pow(a, 2); // (x-m)^2 toplamlar�
			kareY += Math::Pow(b, 2); // (y-m)^2 toplamlar�
		}
		varyansX = Math::Sqrt(kareX / counter); //  k�k [((X1-Mx)^2 + (X2-Mx)^2 + (X3-Mx)^2 +... )/ n]
		varyansY = Math::Sqrt(kareY / counter); //  k�k [((Y1-My)^2 + (Y2-My)^2 + (Y3-My)^2 +... )/ n]


		for (int j = 0; j < (counter * 4); j += 4) {
			normalize[j] = (data[j] - Mx) / varyansX;  // x-m/varyans ile yeni x de�eri
			normalize[j + 1] = (data[j + 1] - My) / varyansY; // y-m/varyans ile yeni y de�eri
			normalize[j + 2] = data[j + 2];
			normalize[j + 3] = data[j + 3];
		}
	}

	// ******************* DELTA LEARN�NG RULE**********************

	while (Error > 0.1) {  // Tolerans i�in 0 yerine 0.1 verildi
		Error = 0; // Her nokta i�in yeni hesaplama yap�lmas� gerekmekte 
		i = 0;

		while (i < (counter * 4)) {
			k = 0;

			// net=w^t*x 
			net1 = (W[k] * normalize[i]) + (W[k + 1] * normalize[i + 1]) + (W[k + 2] * normalize[i + 2]);   

			// fnet = (2/(1+e^-lamda*net))-1;
			double e_us = -(lamda*net1);
			fnet = ((2 / (1 + Math::Exp(e_us))) - 1); 

			// fnet_turev = 1/2*(1-(fnet^2));
			fnet_turev = 0.5 * (1 - Math::Pow(fnet, 2));

			// W^k+1 = wk + m (di-fneti) * fnet_turev * x;
			omegaKatsayi = (float) ( m * (normalize[i + 3] - fnet)) * fnet_turev;   // omegaKatsayi= m (di-fneti) * fnet_turev ;

			// W^k+1=W+omegaKatsayi*Xi  ile yeni W de�erlerini buluyoruz.
			W[k] += (omegaKatsayi * normalize[i]);
			W[k + 1] += (omegaKatsayi * normalize[i + 1]);
			W[k + 2] += (omegaKatsayi * normalize[i + 2]);


			// Error+=1/2*((d-o)^2);
			int h = (data[i + 3] - fnet);
			Error += (Math::Pow(h, 2))/ 2.0;

			g = pictureBox1->CreateGraphics();
			Pen^ myPen = gcnew Pen(Color::Red, 2);
	
			// Do�ruyu ekranda �izdirmek i�in kullanaca��m�z x ve y ler :
			// noktalar� ekranda g�rebilmek i�in *15 b�y�tm��t�k bunun i�in do�ru �iziminde de W3*15 yapmam�z gerek.
			ciz_x1 = -(pictureBox1->Width / 2);
			ciz_y1 = -(ciz_x1 * W[0] + (W[2])*15)/ W[1]; 
			ciz_x2 = (pictureBox1->Width / 2);
			ciz_y2 = -(ciz_x2 * W[0] + (W[2]) * 15) / W[1];

			pictureBox1->Refresh();   // �izilen do�rular�n �st �ste gelmemesi i�in

		// Her refreshte noktalar�  g�rebilmek i�in noktalar� tekrardan �izdirmemiz gerek

		Pen^ pen = gcnew Pen(Color::Red, 2);
			for (int n = 0; n < counter * 4; n += 4) {
				if (normalize[n + 3] == d1) {    // class1  elemanlar�
					pen = gcnew Pen(Color::Blue, 2);
				}
				else if (normalize[n + 3] == d2) { // class2  elemanlar�
					pen = gcnew Pen(Color::Red, 2);
				}
				X = (normalize[n] * 15) + (pictureBox1->Width / 2);  // ekranda g�rebilmek i�in *15 kadar b�y�tt�k noktalar�
				Y = (pictureBox1->Height / 2) - (normalize[n + 1] * 15);

				g->DrawLine(pen, (X - 5), Y, (X + 5), Y);
				g->DrawLine(pen, X, (Y - 5), X, (Y + 5));
			}

			myPen = gcnew Pen(Color::DarkGreen, 2);
			g->DrawLine(myPen, (float)0, (pictureBox1->Height / 2) - ciz_y1, (float)(pictureBox1->Width), (pictureBox1->Height / 2) - ciz_y2);
			i += 4;  
		}
	}

}
};
}
