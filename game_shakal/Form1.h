#pragma once

namespace game_shakal 
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;
	int sizeOfPicture = 51;
	int countOfPictures = 17;
	int sizeOfPlayer = 30;
	field::Tfield gameField;
	player::Tplayer player1(0,12/2);
	player::Tplayer player2(11,12/2);
	int menuSize = 30;
	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  labelCharacter;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  справкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  разработчикиToolStripMenuItem;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  labelCoins2;
	private: System::Windows::Forms::Label^  labelCoins1;
	private: System::Windows::Forms::PictureBox^  pictureBoxShotgun;
	private: System::Windows::Forms::PictureBox^  pictureBoxField;
	private: System::Windows::Forms::PictureBox^  pictureBoxRope;
	private: System::Windows::Forms::Label^  labelPlayer;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::PictureBox^  pictureBoxPlayer;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBoxPlayer = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxField = (gcnew System::Windows::Forms::PictureBox());
			this->labelCoins2 = (gcnew System::Windows::Forms::Label());
			this->labelCoins1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBoxRope = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxShotgun = (gcnew System::Windows::Forms::PictureBox());
			this->labelCharacter = (gcnew System::Windows::Forms::Label());
			this->labelPlayer = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->разработчикиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxPlayer))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxField))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxRope))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxShotgun))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->pictureBoxPlayer);
			this->groupBox1->Controls->Add(this->pictureBoxField);
			this->groupBox1->Controls->Add(this->labelCoins2);
			this->groupBox1->Controls->Add(this->labelCoins1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->labelPlayer);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(732, 53);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(449, 597);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Игровое меню";
			// 
			// pictureBoxPlayer
			// 
			this->pictureBoxPlayer->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxPlayer.Image")));
			this->pictureBoxPlayer->Location = System::Drawing::Point(207, 19);
			this->pictureBoxPlayer->Name = L"pictureBoxPlayer";
			this->pictureBoxPlayer->Size = System::Drawing::Size(220, 220);
			this->pictureBoxPlayer->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxPlayer->TabIndex = 2;
			this->pictureBoxPlayer->TabStop = false;
			// 
			// pictureBoxField
			// 
			this->pictureBoxField->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxField.Image")));
			this->pictureBoxField->Location = System::Drawing::Point(207, 296);
			this->pictureBoxField->Name = L"pictureBoxField";
			this->pictureBoxField->Size = System::Drawing::Size(221, 219);
			this->pictureBoxField->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxField->TabIndex = 2;
			this->pictureBoxField->TabStop = false;
			// 
			// labelCoins2
			// 
			this->labelCoins2->AutoSize = true;
			this->labelCoins2->Location = System::Drawing::Point(169, 103);
			this->labelCoins2->Name = L"labelCoins2";
			this->labelCoins2->Size = System::Drawing::Size(13, 13);
			this->labelCoins2->TabIndex = 6;
			this->labelCoins2->Text = L"0";
			// 
			// labelCoins1
			// 
			this->labelCoins1->AutoSize = true;
			this->labelCoins1->Location = System::Drawing::Point(169, 74);
			this->labelCoins1->Name = L"labelCoins1";
			this->labelCoins1->Size = System::Drawing::Size(13, 13);
			this->labelCoins1->TabIndex = 2;
			this->labelCoins1->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 103);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(137, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Золото красной команды";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 74);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Золото синей команды";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->pictureBoxRope);
			this->groupBox2->Controls->Add(this->pictureBoxShotgun);
			this->groupBox2->Controls->Add(this->labelCharacter);
			this->groupBox2->Location = System::Drawing::Point(21, 135);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(161, 380);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Выбран персонаж";
			// 
			// pictureBoxRope
			// 
			this->pictureBoxRope->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxRope.Image")));
			this->pictureBoxRope->Location = System::Drawing::Point(27, 190);
			this->pictureBoxRope->Name = L"pictureBoxRope";
			this->pictureBoxRope->Size = System::Drawing::Size(100, 104);
			this->pictureBoxRope->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxRope->TabIndex = 4;
			this->pictureBoxRope->TabStop = false;
			this->pictureBoxRope->Visible = false;
			this->pictureBoxRope->Click += gcnew System::EventHandler(this, &Form1::pictureBoxRope_Click);
			// 
			// pictureBoxShotgun
			// 
			this->pictureBoxShotgun->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxShotgun.Image")));
			this->pictureBoxShotgun->Location = System::Drawing::Point(27, 71);
			this->pictureBoxShotgun->Name = L"pictureBoxShotgun";
			this->pictureBoxShotgun->Size = System::Drawing::Size(100, 100);
			this->pictureBoxShotgun->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxShotgun->TabIndex = 3;
			this->pictureBoxShotgun->TabStop = false;
			this->pictureBoxShotgun->Visible = false;
			this->pictureBoxShotgun->Click += gcnew System::EventHandler(this, &Form1::pictureBoxShotgun_Click);
			// 
			// labelCharacter
			// 
			this->labelCharacter->AutoSize = true;
			this->labelCharacter->Location = System::Drawing::Point(6, 27);
			this->labelCharacter->Name = L"labelCharacter";
			this->labelCharacter->Size = System::Drawing::Size(10, 13);
			this->labelCharacter->TabIndex = 2;
			this->labelCharacter->Text = L"-";
			this->labelCharacter->Click += gcnew System::EventHandler(this, &Form1::labelCharacter_Click);
			// 
			// labelPlayer
			// 
			this->labelPlayer->AutoSize = true;
			this->labelPlayer->Location = System::Drawing::Point(133, 41);
			this->labelPlayer->Name = L"labelPlayer";
			this->labelPlayer->Size = System::Drawing::Size(10, 13);
			this->labelPlayer->TabIndex = 1;
			this->labelPlayer->Text = L"-";
			this->labelPlayer->Click += gcnew System::EventHandler(this, &Form1::labelPlayer_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ходит команда:";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->файлToolStripMenuItem, 
			this->справкаToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1204, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// file ToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->выходToolStripMenuItem});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// exit ToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(108, 22);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::выходToolStripMenuItem_Click);
			// 
			// help ToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->разработчикиToolStripMenuItem});
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->справкаToolStripMenuItem->Text = L"Справка";
			// 
			// developers ToolStripMenuItem
			// 
			this->разработчикиToolStripMenuItem->Name = L"разработчикиToolStripMenuItem";
			this->разработчикиToolStripMenuItem->Size = System::Drawing::Size(151, 22);
			this->разработчикиToolStripMenuItem->Text = L"Разработчики";
			this->разработчикиToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::разработчикиToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1204, 658);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Остров сокровищ";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->Click += gcnew System::EventHandler(this, &Form1::Form1_Click);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::Form1_Paint);
			this->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseClick);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxPlayer))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxField))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxRope))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxShotgun))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		//Create element ImageList for storage textures
		System::Windows::Forms::ImageList^ texturesImageList;
		System::Windows::Forms::ImageList^ playersImageList;
#pragma endregion
		void paintField()
		{
			Graphics^ theGraphics = Graphics::FromHwnd( this->Handle );
			//int** matr = gameField.getFieldConst(); // output open field
			int** matr = gameField.getFieldVisible();
				 for (int i =0; i<12; i++)
					for (int j =0; j<12; j++)
					{
						texturesImageList->Draw( theGraphics, Point(sizeOfPicture*j+menuSize,sizeOfPicture*i+menuSize), matr[i][j] );
					}
				for (int i=0; i<3;i++)
				{
					if (player1.getCharacterLive(i))
					playersImageList->Draw( theGraphics, Point(sizeOfPicture*player1.getCharacterJ(i)+sizeOfPicture/2+menuSize,sizeOfPicture*player1.getCharacterI(i)+sizeOfPicture/2+menuSize), 0 );
					
					if (player2.getCharacterLive(i))
					playersImageList->Draw( theGraphics, Point(sizeOfPicture*player2.getCharacterJ(i)+sizeOfPicture/2+menuSize,sizeOfPicture*player2.getCharacterI(i)+sizeOfPicture/2+menuSize), 1 );
				}
		}
	private: System::Void Form1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) 
			 {
					paintField();
			 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
			 {				
				 this->labelPlayer->Text = "Синие";
				 texturesImageList = gcnew ImageList;
				texturesImageList->ImageSize = System::Drawing::Size( sizeOfPicture, sizeOfPicture );
				playersImageList = gcnew ImageList;
				playersImageList->ImageSize = System::Drawing::Size( sizeOfPlayer, sizeOfPlayer );
				playersImageList->Images->Add( Image::FromFile( "textures\\player1.png" ) );
				playersImageList->Images->Add( Image::FromFile( "textures\\player2.png" ) );
				for (int i=0; i<countOfPictures;i++)
				{
					System::String^ numberOfImage;
					numberOfImage = System::Convert::ToString(i);
					texturesImageList->Images->Add( Image::FromFile( "textures\\"+numberOfImage+".png" ) );
				}
			 }
	private: System::Void Form1_Click(System::Object^  sender, System::EventArgs^  e) {}
	private: System::Void Form1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
			 {
				 //defined coordinates on the field, where clicked
				 int x = (e->X-menuSize)/sizeOfPicture;
				 int y = (e->Y-menuSize)/sizeOfPicture;
				 //defined, which player takes a step
				 if (gameField.getTurnOfFirst())//step to the first player 
				 {	
					//if no choice any character (if he clicked on the field,but not activate any character)
					if (player1.getCharacActive()==-1)
					{
						 labelCharacter->Text = "-";
						 player1.doActive(y,x); //checking, click on character - do active this character
						 labelCharacter->Text = System::Convert::ToString(player1.getCharacActive()+1);
						 if (player1.characterHasShotgun(player1.getCharacActive()))
							 pictureBoxShotgun->Visible = true;
						 else
							 pictureBoxShotgun->Visible = false;
						 if (player1.characterHasRope(player1.getCharacActive()))
							 pictureBoxRope->Visible = true;
						 else
							 pictureBoxRope->Visible = false;
							 player1.setChangeField(-1);
					}
					else //if you have already selected character
					{					
						if (player1.moveCharacter(y,x,gameField.getFieldPlace(y,x)))//move character , if step is possible - return true
						{
							for (int i=0; i<3; i++)
							if (player1.killEnemy(player2.getCharacter(i)))
							{
								player2.killTcharacter(i);
							}
							pictureBoxField->Refresh();
							System::String^ text = System::Convert::ToString(gameField.getFieldPlace(y,x));
							pictureBoxField->Load("texturesHD\\" + text + ".png");
							player1.setCharacActive(-1);//remove activate the character after step
							gameField.doVisible(x,y);//open cell on field, where go the character
							if (player1.getChangeField()!=-1)
							{
								gameField.changeField(y,x,player1.getChangeField());
							}
							gameField.changeTurn();//change turn
							labelCharacter->Text = "-";
							pictureBoxShotgun->Visible = false;
							pictureBoxRope->Visible = false;
							if (gameField.getTurnOfFirst()) 
							{
							this->labelPlayer->Text = "Синие";
							pictureBoxPlayer->Image = Image::FromFile( "textures\\player1.png" );
							}
							else
							{
							this->labelPlayer->Text = "Красные";
							pictureBoxPlayer->Image = Image::FromFile( "textures\\player2.png" );
							}
						}
						else //if the character was active, but step not possible , remove activate
						{
							player1.setCharacActive(-1);//remove activate
							labelCharacter->Text = "-";
							pictureBoxShotgun->Visible = false;
							pictureBoxRope->Visible = false;
							player1.doActive(y,x);
								if (player1.getCharacActive()!=-1) labelCharacter->Text = System::Convert::ToString(player1.getCharacActive()+1);
						}			
					} 
				 }
				 else // step by second player
				 {
					if (player2.getCharacActive()==-1)
					{
						 labelCharacter->Text = "-";
						 player2.doActive(y,x); 
						 labelCharacter->Text = System::Convert::ToString(player2.getCharacActive()+1);
						 player2.setChangeField(-1);
						  if (player2.characterHasShotgun(player2.getCharacActive()))
							 pictureBoxShotgun->Visible = true;
						 else
							 pictureBoxShotgun->Visible = false;
						  if (player2.characterHasRope(player2.getCharacActive()))
							 pictureBoxRope->Visible = true;
						 else
							 pictureBoxRope->Visible = false;
					}
					else //if the character was active
					{
						if (player2.moveCharacter(y,x,gameField.getFieldPlace(y,x)))//move character , if step is possible - return true
						{	
							for (int i=0; i<3; i++)
							if (player2.killEnemy(player1.getCharacter(i)))
							{
								player1.killTcharacter(i);
							}
							System::String^ text = System::Convert::ToString(gameField.getFieldPlace(y,x));
							pictureBoxField->Load("texturesHD\\" + text + ".png");
							 pictureBoxField->Refresh();
							player2.setCharacActive(-1);
							gameField.doVisible(x,y);
							if (player2.getChangeField()!=-1)
							{
								gameField.changeField(y,x,player2.getChangeField());
							}
							gameField.changeTurn();
							labelCharacter->Text = "-";
							pictureBoxShotgun->Visible = false;
							pictureBoxRope->Visible = false;
							if (gameField.getTurnOfFirst()) 
							{
									this->labelPlayer->Text = "Синие";
									pictureBoxPlayer->Image = Image::FromFile( "textures\\player1.png" );
							}
							else 
							{
									this->labelPlayer->Text = "Красные";
									pictureBoxPlayer->Image = Image::FromFile( "textures\\player2.png" );
							}
						}
						else //if the character was active, but step not possible , remove activate
						{
							player2.setCharacActive(-1);//снимаем выделение
							labelCharacter->Text = "-";
							pictureBoxShotgun->Visible = false;
							pictureBoxRope->Visible = false;
							player2.doActive(y,x);
							if (player2.getCharacActive()!=-1) 
							labelCharacter->Text = System::Convert::ToString(player2.getCharacActive()+1);
						}
					}
				 }
				 paintField();
				 if (!player1.getCharacterLive(0)&&!player1.getCharacterLive(1) && !player1.getCharacterLive(2)&&!player2.getCharacterLive(0)&&!player2.getCharacterLive(1) && !player2.getCharacterLive(2))
				 {
					 System::Windows::Forms::MessageBox::Show("Все персонажи обоих игроков мертвы :(","Ничья!");
					 this->Close();
				 }
				 if (!player1.getCharacterLive(0)&&!player1.getCharacterLive(1) && !player1.getCharacterLive(2))
				 {
					 System::Windows::Forms::MessageBox::Show("Все персонажи синего игрока мертвы","Красный игрок выиграл!");
					 this->Close();
				 }
				 if (!player2.getCharacterLive(0)&&!player2.getCharacterLive(1) && !player2.getCharacterLive(2))
				 {
					 System::Windows::Forms::MessageBox::Show("Все персонажи красного игрока мертвы","Синий игрок выиграл!");
					 this->Close();
				 }
				 labelCoins1->Text = System::Convert::ToString(player1.getCoins());
				 labelCoins2->Text = System::Convert::ToString(player2.getCoins());
				 if (player1.getCoins()+player2.getCoins() == 36)
				//gameField.getCoins() == 0 
				 {
					 int player1Coins = player1.getCoins();
					 int player2Coins = player2.getCoins();
					 if (player1Coins>player2Coins)
					 System::Windows::Forms::MessageBox::Show("Синяя команда собрала " + System::Convert::ToString(player1Coins)+" золотых монет, а красная команда " + System::Convert::ToString(player2Coins)+ " монет","Синяя команда победила!");
					 else if (player1Coins<player2Coins)
					 System::Windows::Forms::MessageBox::Show("Синяя команда собрала " + System::Convert::ToString(player1Coins)+" золотых монет, а красная команда " + System::Convert::ToString(player2Coins)+ " монет","Красная команда победила!");
					 else System::Windows::Forms::MessageBox::Show("Обе команды собрали одинаковое количество золота","Ничья!");
					 this->Close();
				 }
			 }
private: System::Void загрузитьИгруToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void выходToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void разработчикиToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 System::Windows::Forms::MessageBox::Show("Developers: Zakutniy S.V., Stolyarenko K.S.");
		 }
private: System::Void labelPlayer_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void labelCharacter_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pictureBoxShotgun_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pictureBoxRope_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void правилаИгрыToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 openFileDialog1->FileName = "Rules.docx";
			 openFileDialog1->OpenFile();
		 }
private: System::Void toolStripTextBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void toolStripTextBox2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

