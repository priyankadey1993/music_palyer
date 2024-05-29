//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Imaging.GIFImg.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TShape *Shape1;
	TShape *Shape2;
	TImage *Default;
	TImage *Image3;
	TImage *Purple_music;
	TButton *Button1;
	TLabel *purple_music_lable;
	TLabel *song_lbl;
	TLabel *Label2;
	TLabel *artist;
	TLabel *artist_name_lable;
	TLabel *purple_artist_lable;
	TImage *Image2;
	TShape *Shape3;
	TImage *Image4;
	TImage *hanuman_movie_image;
	TLabel *lable4;
	TLabel *movie_name_lable;
	TLabel *hanuman_song_lable;
	TLabel *hanuman_artist_lable;
	TLabel *hanuman_movie;
	TButton *H_m_btn;
	TShape *Shape4;
	TImage *Image5;
	TImage *lapta_ladies_poster_image;
	TLabel *lapta_ladies_song_name;
	TLabel *lapta_ladeis_artist_name;
	TLabel *lapta_ladies_movie_lable;
	TButton *L_L_m_btn;
	TShape *Shape5;
	TImage *Image6;
	TImage *party_song_image;
	TLabel *party_song_lable;
	TLabel *party_song_artist;
	TLabel *party_song_album_name;
	TButton *party_button;
	TShape *Shape6;
	TShape *Shape7;
	TShape *Shape8;
	TShape *Shape9;
	TShape *Shape10;
	TShape *Shape11;
	TShape *Shape12;
	TLabel *Label3;
	TImage *Image7;
	TButton *rock_party_button;
	TImage *rock_prty_shape;
	TImage *Image8;
	TLabel *Label4;
	TButton *rock_party_2_button;
	TImage *Image9;
	TLabel *Label5;
	TButton *Rock_party_3_button;
	TImage *Image10;
	TLabel *Label6;
	TButton *Rock_party_4_button_click;
	TImage *money_heist_image;
	TImage *Image11;
	TLabel *Label1;
	TButton *rock_party_5_button;
	TImage *Image12;
	TShape *Shape14;
	TShape *Shape15;
	TImage *Image13;
	TImage *Image14;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall h_btn_click(TObject *Sender);
	void __fastcall LaptpaMoviebtn(TObject *Sender);
	void __fastcall party_btn_on_clk(TObject *Sender);
	void __fastcall rock_part_btn_click(TObject *Sender);
	void __fastcall rock_party_2_btn_click(TObject *Sender);
	void __fastcall rock_party_3_btn_click(TObject *Sender);
	void __fastcall rock_party_4_btn_click(TObject *Sender);
	void __fastcall rock_party_5_btn_click(TObject *Sender);














private:

	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);

};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
