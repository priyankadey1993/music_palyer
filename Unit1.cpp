//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"

#include <iostream>
#include <windows.h>
#include <mmsystem.h>
#include<vector>
#pragma comment(lib, "winmm.lib")

using namespace std;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

class music
{
	 String music_name;
	 String artist_name;
	 String movie_name;
	 public:
	 music()
	 {
		  music_name = "default song";
		  artist_name = "no artist";
		  movie_name = "no movie" ;
	 }
	 void set_music(String music,String artist,String movie)
	 {
		 music_name =music;
		 artist_name =  artist;
		 movie_name = movie;
	 }
	 String get_musicname()
	 {
		  return music_name;
	 }
	 String get_artistname()
	 {
		  return artist_name;
	 }
	 String get_moviename()
	 {
		 return movie_name;
     }
};
	music *m= new music();
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	  song_lbl->Caption =m->get_musicname();

}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	  Default->Visible = false;
	  lapta_ladies_poster_image->Visible = false;
	  hanuman_movie_image->Visible = false;
	  Purple_music->Visible= true;
	  party_song_image ->Visible= false;
	  money_heist_image-> Visible = false;
	  m->set_music(purple_music_lable->Caption,purple_artist_lable->Caption,"album_song");
	  song_lbl->Caption =m->get_musicname();
	  artist_name_lable->Caption = m->get_artistname();
	  const String url= "https://www.youtube.com/watch?v=PonUS87Yeqw";
	  ShellExecute(0, 0, url.c_str(), 0, 0, SW_SHOW);
}
//---------------------------------------------------------------------------
 void __fastcall TForm1::h_btn_click(TObject *Sender)
{
	  Default->Visible = false;
	  Purple_music->Visible= false;
	  lapta_ladies_poster_image->Visible = false;
	  hanuman_movie_image->Visible = true;
	  party_song_image ->Visible= false;
	  rock_prty_shape->Visible = false;
	  money_heist_image-> Visible = false;
	  m->set_music(hanuman_song_lable->Caption,hanuman_artist_lable->Caption,hanuman_movie->Caption);
	  song_lbl->Caption =m->get_musicname();
	  artist_name_lable->Caption = m->get_artistname();
	  movie_name_lable->Caption = m->get_moviename();
	  const String url= "https://www.youtube.com/watch?v=v64T8Mk5_Tc";
	  ShellExecute(0, 0, url.c_str(), 0, 0, SW_SHOW);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::LaptpaMoviebtn(TObject *Sender)
{
	  Default->Visible = false;
	  Purple_music->Visible= false;
	  lapta_ladies_poster_image->Visible = true;
	  hanuman_movie_image->Visible = false;
	  party_song_image ->Visible= false;
	  rock_prty_shape->Visible = false;
	  money_heist_image-> Visible = false;
	  m->set_music(lapta_ladies_song_name->Caption,lapta_ladeis_artist_name->Caption,lapta_ladies_movie_lable->Caption);
	  song_lbl->Caption =m->get_musicname();
	  artist_name_lable->Caption = m->get_artistname();
	  movie_name_lable->Caption = m->get_moviename();
	  const String url= "https://www.youtube.com/watch?v=BNgG0LjlQ8k";
	  ShellExecute(0, 0, url.c_str(), 0, 0, SW_SHOW);
}
//---------------------------------------------------------------------------
 void __fastcall TForm1::party_btn_on_clk(TObject *Sender)
{

	  Default->Visible = false;
	  Purple_music->Visible= false;
	  lapta_ladies_poster_image->Visible = false;
	  hanuman_movie_image->Visible = false;
	  party_song_image ->Visible= true;
	  rock_prty_shape->Visible = false;
	  money_heist_image-> Visible = false;
	  m->set_music(party_song_lable->Caption,party_song_artist->Caption,party_song_album_name->Caption);
	  song_lbl->Caption =m->get_musicname();
	  artist_name_lable->Caption = m->get_artistname();
	  movie_name_lable->Caption = m->get_moviename();
	  const String url= "https://www.youtube.com/watch?v=MIWf3h-0m38&list=PLFwnfesfYZuzY6BIl3nGI2LANRUl9EMFY";
	  ShellExecute(0, 0, url.c_str(), 0, 0, SW_SHOW);
}
//---------------------------------------------------------------------------
 void __fastcall TForm1::rock_part_btn_click(TObject *Sender)
{
	  Default->Visible = false;
	  Purple_music->Visible= false;
	  lapta_ladies_poster_image->Visible = false;
	  hanuman_movie_image->Visible = false;
	  party_song_image ->Visible= false;
	  money_heist_image-> Visible = false;
	  rock_prty_shape->Visible = true;
	  m->set_music("unkonwn song","unkkonown rock artist","unknown name");
	  song_lbl->Caption =m->get_musicname();
	  artist_name_lable->Caption = m->get_artistname();
	  movie_name_lable->Caption = m->get_moviename();
	  const String url= "https://www.youtube.com/watch?v=t4Dbf3lWogY";
	  ShellExecute(0, 0, url.c_str(), 0, 0, SW_SHOW);
}

//---------------------------------------------------------------------------
void __fastcall TForm1::rock_party_2_btn_click(TObject *Sender)
{
	  Default->Visible = false;
	  Purple_music->Visible= false;
	  lapta_ladies_poster_image->Visible = false;
	  hanuman_movie_image->Visible = false;
	  party_song_image ->Visible= false;
	  money_heist_image-> Visible = false;
	  rock_prty_shape->Visible = true;
	   m->set_music("unkonwn song","unkkonown rock artist","unknown name");
	  song_lbl->Caption =m->get_musicname();
	  artist_name_lable->Caption = m->get_artistname();
	  movie_name_lable->Caption = m->get_moviename();
	  const String url= "https://www.youtube.com/watch?v=W50sgQV1pl0";
	  ShellExecute(0, 0, url.c_str(), 0, 0, SW_SHOW);
}
//---------------------------------------------------------------------------
 void __fastcall TForm1::rock_party_3_btn_click(TObject *Sender)
{
	  Default->Visible = false;
	  Purple_music->Visible= false;
	  lapta_ladies_poster_image->Visible = false;
	  hanuman_movie_image->Visible = false;
	  party_song_image ->Visible= false;
	  rock_prty_shape->Visible = true;
	  money_heist_image-> Visible = false;
	  m->set_music("unkonwn song","unkkonown rock artist","unknown name");
	  song_lbl->Caption =m->get_musicname();
	  artist_name_lable->Caption = m->get_artistname();
	  movie_name_lable->Caption = m->get_moviename();
	  const String url= "https://www.youtube.com/watch?v=ZNsPYmkSPeI";
	  ShellExecute(0, 0, url.c_str(), 0, 0, SW_SHOW);
}

//---------------------------------------------------------------------------
 void __fastcall TForm1::rock_party_4_btn_click(TObject *Sender)
{
		Default->Visible = false;
	  Purple_music->Visible= false;
	  lapta_ladies_poster_image->Visible = false;
	  hanuman_movie_image->Visible = false;
	  party_song_image ->Visible= false;
	  rock_prty_shape->Visible = false;
	  money_heist_image-> Visible = true;
	  m->set_music("unkonwn song","unkkonown rock artist","unknown name");
	  song_lbl->Caption =m->get_musicname();
	  artist_name_lable->Caption = m->get_artistname();
	  movie_name_lable->Caption = m->get_moviename();
	  const String url= "https://www.youtube.com/watch?v=0aUav1lx3rA";
	  ShellExecute(0, 0, url.c_str(), 0, 0, SW_SHOW);
}

//---------------------------------------------------------------------------
void __fastcall TForm1::rock_party_5_btn_click(TObject *Sender)
{
	  Default->Visible = false;
	  Purple_music->Visible= false;
	  lapta_ladies_poster_image->Visible = false;
	  hanuman_movie_image->Visible = false;
	  party_song_image ->Visible= false;
	  rock_prty_shape->Visible = true;
	  money_heist_image-> Visible = false;
	  m->set_music("unkonwn song","unkkonown rock artist","unknown name");
	  song_lbl->Caption =m->get_musicname();
	  artist_name_lable->Caption = m->get_artistname();
	  movie_name_lable->Caption = m->get_moviename();
	  const String url= "https://www.youtube.com/watch?v=fRD_3vJagxk";
	  ShellExecute(0, 0, url.c_str(), 0, 0, SW_SHOW);
}

//---------------------------------------------------------------------------


//---------------------------------------------------------------------------


//---------------------------------------------------------------------------


//---------------------------------------------------------------------------


//---------------------------------------------------------------------------


//---------------------------------------------------------------------------


//---------------------------------------------------------------------------


//---------------------------------------------------------------------------


//---------------------------------------------------------------------------


//---------------------------------------------------------------------------


//---------------------------------------------------------------------------


//---------------------------------------------------------------------------

