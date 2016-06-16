#ifndef UI_FILMS_H
#define UI_FILMS_H

#include <Wt/WFileResource>
#include <Wt/WContainerWidget>
#include <Wt/WImage>
#include <Wt/WText>
#include <Wt/WNavigationBar>
#include <Wt/WMenu>
#include <Wt/WStackedWidget>
#include <Wt/WMenuItem>
#include <Wt/WPushButton>
#include <Wt/WBootstrapTheme>
#include <fstream>
#include <iostream>
#include <string>
#include "Users.h"

using std::ofstream;
using std::endl;

using std::cout;

using namespace std;

class Ui_Films : protected Users
{

public:

	Wt::WContainerWidget *wt_root;
	Wt::WContainerWidget *container_image;
	Wt::WImage *start_image;
	Wt::WContainerWidget *container_text;
	Wt::WText *info;
	Wt::WNavigationBar *navbar;
	Wt::WMenu *select_user;
	Wt::WContainerWidget * nv_menu_user_1;
	Wt::WMenuItem * nv_menu_user_1_mi;
	Wt::WContainerWidget *container_films_1;
	Wt::WMenu *menu_user_1;
	Wt::WContainerWidget * comedy_user_1;
	Wt::WMenuItem * comedy_user_1_mi;
	Wt::WContainerWidget *container_comedy_user_1;
	Wt::WContainerWidget *comedy_1_user_1;
	Wt::WImage *comedy_image_1_user_1;
	Wt::WPushButton *watch_comedy_1_user_1;
	Wt::WPushButton *rating_comedy_1_user_1;
	Wt::WContainerWidget *mark_comedy_1_user_1;
	Wt::WContainerWidget *mark_1_comedy_1_user_1;
	Wt::WPushButton *button_comedy_1_mark_1_user_1;
	Wt::WContainerWidget *mark_2_comedy_1_user_1;
	Wt::WPushButton *button_comedy_1_mark_2_user_1;
	Wt::WContainerWidget *mark_3_comedy_1_user_1;
	Wt::WPushButton *button_comedy_1_mark_3_user_1;
	Wt::WContainerWidget *mark_4_comedy_1_user_1;
	Wt::WPushButton *button_comedy_1_mark_4_user_1;
	Wt::WContainerWidget *mark_5_comedy_1_user_1;
	Wt::WPushButton *button_comedy_1_mark_5_user_1;
	Wt::WContainerWidget *comedy_2_user_1;
	Wt::WImage *comedy_image_2_user_1;
	Wt::WPushButton *watch_comedy_2_user_1;
	Wt::WPushButton *rating_comedy_2_user_1;
	Wt::WContainerWidget *mark_comedy_2_user_1;
	Wt::WContainerWidget *mark_1_comedy_2_user_1;
	Wt::WPushButton *button_comedy_2_mark_1_user_1;
	Wt::WContainerWidget *mark_2_comedy_2_user_1;
	Wt::WPushButton *button_comedy_2_mark_2_user_1;
	Wt::WContainerWidget *mark_3_comedy_2_user_1;
	Wt::WPushButton *button_comedy_2_mark_3_user_1;
	Wt::WContainerWidget *mark_4_comedy_2_user_1;
	Wt::WPushButton *button_comedy_2_mark_4_user_1;
	Wt::WContainerWidget *mark_5_comedy_2_user_1;
	Wt::WPushButton *button_comedy_2_mark_5_user_1;
	Wt::WContainerWidget *comedy_3_user_1;
	Wt::WImage *comedy_image_3_user_1;
	Wt::WPushButton *watch_comedy_3_user_1;
	Wt::WPushButton *rating_comedy_3_user_1;
	Wt::WContainerWidget *mark_comedy_3_user_1;
	Wt::WContainerWidget *mark_1_comedy_3_user_1;
	Wt::WPushButton *button_comedy_3_mark_1_user_1;
	Wt::WContainerWidget *mark_2_comedy_3_user_1;
	Wt::WPushButton *button_comedy_3_mark_2_user_1;
	Wt::WContainerWidget *mark_3_comedy_3_user_1;
	Wt::WPushButton *button_comedy_3_mark_3_user_1;
	Wt::WContainerWidget *mark_4_comedy_3_user_1;
	Wt::WPushButton *button_comedy_3_mark_4_user_1;
	Wt::WContainerWidget *mark_5_comedy_3_user_1;
	Wt::WPushButton *button_comedy_3_mark_5_user_1;
	Wt::WContainerWidget * drama_user_1;
	Wt::WMenuItem * drama_user_1_mi;
	Wt::WContainerWidget *container_drama_user_1;
	Wt::WContainerWidget *drama_1_user_1;
	Wt::WImage *drama_image_1_user_1;
	Wt::WPushButton *watch_drama_1_user_1;
	Wt::WPushButton *rating_drama_1_user_1;
	Wt::WContainerWidget *mark_drama_1_user_1;
	Wt::WContainerWidget *mark_1_drama_1_user_1;
	Wt::WPushButton *button_drama_1_mark_1_user_1;
	Wt::WContainerWidget *mark_2_drama_1_user_1;
	Wt::WPushButton *button_drama_1_mark_2_user_1;
	Wt::WContainerWidget *mark_3_drama_1_user_1;
	Wt::WPushButton *button_drama_1_mark_3_user_1;
	Wt::WContainerWidget *mark_4_drama_1_user_1;
	Wt::WPushButton *button_drama_1_mark_4_user_1;
	Wt::WContainerWidget *mark_5_drama_1_user_1;
	Wt::WPushButton *button_drama_1_mark_5_user_1;
	Wt::WContainerWidget *drama_2_user_1;
	Wt::WImage *drama_image_2_user_1;
	Wt::WPushButton *watch_drama_2_user_1;
	Wt::WPushButton *rating_drama_2_user_1;
	Wt::WContainerWidget *mark_drama_2_user_1;
	Wt::WContainerWidget *mark_1_drama_2_user_1;
	Wt::WPushButton *button_drama_2_mark_1_user_1;
	Wt::WContainerWidget *mark_2_drama_2_user_1;
	Wt::WPushButton *button_drama_2_mark_2_user_1;
	Wt::WContainerWidget *mark_3_drama_2_user_1;
	Wt::WPushButton *button_drama_2_mark_3_user_1;
	Wt::WContainerWidget *mark_4_drama_2_user_1;
	Wt::WPushButton *button_drama_2_mark_4_user_1;
	Wt::WContainerWidget *mark_5_drama_2_user_1;
	Wt::WPushButton *button_drama_2_mark_5_user_1;
	Wt::WContainerWidget *drama_3_user_1;
	Wt::WImage *drama_image_3_user_1;
	Wt::WPushButton *watch_drama_3_user_1;
	Wt::WPushButton *rating_drama_3_user_1;
	Wt::WContainerWidget *mark_drama_3_user_1;
	Wt::WContainerWidget *mark_1_drama_3_user_1;
	Wt::WPushButton *button_drama_3_mark_1_user_1;
	Wt::WContainerWidget *mark_2_drama_3_user_1;
	Wt::WPushButton *button_drama_3_mark_2_user_1;
	Wt::WContainerWidget *mark_3_drama_3_user_1;
	Wt::WPushButton *button_drama_3_mark_3_user_1;
	Wt::WContainerWidget *mark_4_drama_3_user_1;
	Wt::WPushButton *button_drama_3_mark_4_user_1;
	Wt::WContainerWidget *mark_5_drama_3_user_1;
	Wt::WPushButton *button_drama_3_mark_5_user_1;
	Wt::WContainerWidget * horror_user_1;
	Wt::WMenuItem * horror_user_1_mi;
	Wt::WContainerWidget *container_horror_user_1;
	Wt::WContainerWidget *horror_1_user_1;
	Wt::WImage *horror_image_1_user_1;
	Wt::WPushButton *watch_horror_1_user_1;
	Wt::WPushButton *rating_horror_1_user_1;
	Wt::WContainerWidget *mark_horror_1_user_1;
	Wt::WContainerWidget *mark_1_horror_1_user_1;
	Wt::WPushButton *button_horror_1_mark_1_user_1;
	Wt::WContainerWidget *mark_2_horror_1_user_1;
	Wt::WPushButton *button_horror_1_mark_2_user_1;
	Wt::WContainerWidget *mark_3_horror_1_user_1;
	Wt::WPushButton *button_horror_1_mark_3_user_1;
	Wt::WContainerWidget *mark_4_horror_1_user_1;
	Wt::WPushButton *button_horror_1_mark_4_user_1;
	Wt::WContainerWidget *mark_5_horror_1_user_1;
	Wt::WPushButton *button_horror_1_mark_5_user_1;
	Wt::WContainerWidget *horror_2_user_1;
	Wt::WImage *horror_image_2_user_1;
	Wt::WPushButton *watch_horror_2_user_1;
	Wt::WPushButton *rating_horror_2_user_1;
	Wt::WContainerWidget *mark_horror_2_user_1;
	Wt::WContainerWidget *mark_1_horror_2_user_1;
	Wt::WPushButton *button_horror_2_mark_1_user_1;
	Wt::WContainerWidget *mark_2_horror_2_user_1;
	Wt::WPushButton *button_horror_2_mark_2_user_1;
	Wt::WContainerWidget *mark_3_horror_2_user_1;
	Wt::WPushButton *button_horror_2_mark_3_user_1;
	Wt::WContainerWidget *mark_4_horror_2_user_1;
	Wt::WPushButton *button_horror_2_mark_4_user_1;
	Wt::WContainerWidget *mark_5_horror_2_user_1;
	Wt::WPushButton *button_horror_2_mark_5_user_1;
	Wt::WContainerWidget *horror_3_user_1;
	Wt::WImage *horror_image_3_user_1;
	Wt::WPushButton *watch_horror_3_user_1;
	Wt::WPushButton *rating_horror_3_user_1;
	Wt::WContainerWidget *mark_horror_3_user_1;
	Wt::WContainerWidget *mark_1_horror_3_user_1;
	Wt::WPushButton *button_horror_3_mark_1_user_1;
	Wt::WContainerWidget *mark_2_horror_3_user_1;
	Wt::WPushButton *button_horror_3_mark_2_user_1;
	Wt::WContainerWidget *mark_3_horror_3_user_1;
	Wt::WPushButton *button_horror_3_mark_3_user_1;
	Wt::WContainerWidget *mark_4_horror_3_user_1;
	Wt::WPushButton *button_horror_3_mark_4_user_1;
	Wt::WContainerWidget *mark_5_horror_3_user_1;
	Wt::WPushButton *button_horror_3_mark_5_user_1;
	Wt::WContainerWidget * nv_menu_user_2;
	Wt::WMenuItem * nv_menu_user_2_mi;
	Wt::WContainerWidget *container_films_2;
	Wt::WMenu *menu_user_2;
	Wt::WContainerWidget * comedy_user_2;
	Wt::WMenuItem * comedy_user_2_mi;
	Wt::WContainerWidget *container_comedy_user_2;
	Wt::WContainerWidget *comedy_1_user_2;
	Wt::WImage *comedy_image_1_user_2;
	Wt::WPushButton *watch_comedy_1_user_2;
	Wt::WPushButton *rating_comedy_1_user_2;
	Wt::WContainerWidget *mark_comedy_1_user_2;
	Wt::WContainerWidget *mark_1_comedy_1_user_2;
	Wt::WPushButton *button_comedy_1_mark_1_user_2;
	Wt::WContainerWidget *mark_2_comedy_1_user_2;
	Wt::WPushButton *button_comedy_1_mark_2_user_2;
	Wt::WContainerWidget *mark_3_comedy_1_user_2;
	Wt::WPushButton *button_comedy_1_mark_3_user_2;
	Wt::WContainerWidget *mark_4_comedy_1_user_2;
	Wt::WPushButton *button_comedy_1_mark_4_user_2;
	Wt::WContainerWidget *mark_5_comedy_1_user_2;
	Wt::WPushButton *button_comedy_1_mark_5_user_2;
	Wt::WContainerWidget *comedy_2_user_2;
	Wt::WImage *comedy_image_2_user_2;
	Wt::WPushButton *watch_comedy_2_user_2;
	Wt::WPushButton *rating_comedy_2_user_2;
	Wt::WContainerWidget *mark_comedy_2_user_2;
	Wt::WContainerWidget *mark_1_comedy_2_user_2;
	Wt::WPushButton *button_comedy_2_mark_1_user_2;
	Wt::WContainerWidget *mark_2_comedy_2_user_2;
	Wt::WPushButton *button_comedy_2_mark_2_user_2;
	Wt::WContainerWidget *mark_3_comedy_2_user_2;
	Wt::WPushButton *button_comedy_2_mark_3_user_2;
	Wt::WContainerWidget *mark_4_comedy_2_user_2;
	Wt::WPushButton *button_comedy_2_mark_4_user_2;
	Wt::WContainerWidget *mark_5_comedy_2_user_2;
	Wt::WPushButton *button_comedy_2_mark_5_user_2;
	Wt::WContainerWidget *comedy_3_user_2;
	Wt::WImage *comedy_image_3_user_2;
	Wt::WPushButton *watch_comedy_3_user_2;
	Wt::WPushButton *rating_comedy_3_user_2;
	Wt::WContainerWidget *mark_comedy_3_user_2;
	Wt::WContainerWidget *mark_1_comedy_3_user_2;
	Wt::WPushButton *button_comedy_3_mark_1_user_2;
	Wt::WContainerWidget *mark_2_comedy_3_user_2;
	Wt::WPushButton *button_comedy_3_mark_2_user_2;
	Wt::WContainerWidget *mark_3_comedy_3_user_2;
	Wt::WPushButton *button_comedy_3_mark_3_user_2;
	Wt::WContainerWidget *mark_4_comedy_3_user_2;
	Wt::WPushButton *button_comedy_3_mark_4_user_2;
	Wt::WContainerWidget *mark_5_comedy_3_user_2;
	Wt::WPushButton *button_comedy_3_mark_5_user_2;
	Wt::WContainerWidget * drama_user_2;
	Wt::WMenuItem * drama_user_2_mi;
	Wt::WContainerWidget *container_drama_user_2;
	Wt::WContainerWidget *drama_1_user_2;
	Wt::WImage *drama_image_1_user_2;
	Wt::WPushButton *watch_drama_1_user_2;
	Wt::WPushButton *rating_drama_1_user_2;
	Wt::WContainerWidget *mark_drama_1_user_2;
	Wt::WContainerWidget *mark_1_drama_1_user_2;
	Wt::WPushButton *button_drama_1_mark_1_user_2;
	Wt::WContainerWidget *mark_2_drama_1_user_2;
	Wt::WPushButton *button_drama_1_mark_2_user_2;
	Wt::WContainerWidget *mark_3_drama_1_user_2;
	Wt::WPushButton *button_drama_1_mark_3_user_2;
	Wt::WContainerWidget *mark_4_drama_1_user_2;
	Wt::WPushButton *button_drama_1_mark_4_user_2;
	Wt::WContainerWidget *mark_5_drama_1_user_2;
	Wt::WPushButton *button_drama_1_mark_5_user_2;
	Wt::WContainerWidget *drama_2_user_2;
	Wt::WImage *drama_image_2_user_2;
	Wt::WPushButton *watch_drama_2_user_2;
	Wt::WPushButton *rating_drama_2_user_2;
	Wt::WContainerWidget *mark_drama_2_user_2;
	Wt::WContainerWidget *mark_1_drama_2_user_2;
	Wt::WPushButton *button_drama_2_mark_1_user_2;
	Wt::WContainerWidget *mark_2_drama_2_user_2;
	Wt::WPushButton *button_drama_2_mark_2_user_2;
	Wt::WContainerWidget *mark_3_drama_2_user_2;
	Wt::WPushButton *button_drama_2_mark_3_user_2;
	Wt::WContainerWidget *mark_4_drama_2_user_2;
	Wt::WPushButton *button_drama_2_mark_4_user_2;
	Wt::WContainerWidget *mark_5_drama_2_user_2;
	Wt::WPushButton *button_drama_2_mark_5_user_2;
	Wt::WContainerWidget *drama_3_user_2;
	Wt::WImage *drama_image_3_user_2;
	Wt::WPushButton *watch_drama_3_user_2;
	Wt::WPushButton *rating_drama_3_user_2;
	Wt::WContainerWidget *mark_drama_3_user_2;
	Wt::WContainerWidget *mark_1_drama_3_user_2;
	Wt::WPushButton *button_drama_3_mark_1_user_2;
	Wt::WContainerWidget *mark_2_drama_3_user_2;
	Wt::WPushButton *button_drama_3_mark_2_user_2;
	Wt::WContainerWidget *mark_3_drama_3_user_2;
	Wt::WPushButton *button_drama_3_mark_3_user_2;
	Wt::WContainerWidget *mark_4_drama_3_user_2;
	Wt::WPushButton *button_drama_3_mark_4_user_2;
	Wt::WContainerWidget *mark_5_drama_3_user_2;
	Wt::WPushButton *button_drama_3_mark_5_user_2;
	Wt::WContainerWidget * horror_user_2;
	Wt::WMenuItem * horror_user_2_mi;
	Wt::WContainerWidget *container_horror_user_2;
	Wt::WContainerWidget *horror_1_user_2;
	Wt::WImage *horror_image_1_user_2;
	Wt::WPushButton *watch_horror_1_user_2;
	Wt::WPushButton *rating_horror_1_user_2;
	Wt::WContainerWidget *mark_horror_1_user_2;
	Wt::WContainerWidget *mark_1_horror_1_user_2;
	Wt::WPushButton *button_horror_1_mark_1_user_2;
	Wt::WContainerWidget *mark_2_horror_1_user_2;
	Wt::WPushButton *button_horror_1_mark_2_user_2;
	Wt::WContainerWidget *mark_3_horror_1_user_2;
	Wt::WPushButton *button_horror_1_mark_3_user_2;
	Wt::WContainerWidget *mark_4_horror_1_user_2;
	Wt::WPushButton *button_horror_1_mark_4_user_2;
	Wt::WContainerWidget *mark_5_horror_1_user_2;
	Wt::WPushButton *button_horror_1_mark_5_user_2;
	Wt::WContainerWidget *horror_2_user_2;
	Wt::WImage *horror_image_2_user_2;
	Wt::WPushButton *watch_horror_2_user_2;
	Wt::WPushButton *rating_horror_2_user_2;
	Wt::WContainerWidget *mark_horror_2_user_2;
	Wt::WContainerWidget *mark_1_horror_2_user_2;
	Wt::WPushButton *button_horror_2_mark_1_user_2;
	Wt::WContainerWidget *mark_2_horror_2_user_2;
	Wt::WPushButton *button_horror_2_mark_2_user_2;
	Wt::WContainerWidget *mark_3_horror_2_user_2;
	Wt::WPushButton *button_horror_2_mark_3_user_2;
	Wt::WContainerWidget *mark_4_horror_2_user_2;
	Wt::WPushButton *button_horror_2_mark_4_user_2;
	Wt::WContainerWidget *mark_5_horror_2_user_1_cp;
	Wt::WPushButton *button_horror_2_mark_5_user_2;
	Wt::WContainerWidget *horror_3_user_2;
	Wt::WImage *horror_image_3_user_2;
	Wt::WPushButton *watch_horror_3_user_2;
	Wt::WPushButton *rating_horror_3_user_2;
	Wt::WContainerWidget *mark_horror_3_user_2;
	Wt::WContainerWidget *mark_1_horror_3_user_2;
	Wt::WPushButton *button_horror_3_mark_1_user_2;
	Wt::WContainerWidget *mark_2_horror_3_user_2;
	Wt::WPushButton *button_horror_3_mark_2_user_2;
	Wt::WContainerWidget *mark_3_horror_3_user_2;
	Wt::WPushButton *button_horror_3_mark_3_user_2;
	Wt::WContainerWidget *mark_4_horror_3_user_2;
	Wt::WPushButton *button_horror_3_mark_4_user_2;
	Wt::WContainerWidget *mark_5_horror_3_user_2;
	Wt::WPushButton *button_horror_3_mark_5_user_2;
	Wt::WContainerWidget * nv_menu_user_3;
	Wt::WMenuItem * nv_menu_user_3_mi;
	Wt::WContainerWidget *container_films_3;
	Wt::WMenu *menu_user_3;
	Wt::WContainerWidget * comedy_user_3;
	Wt::WMenuItem * comedy_user_3_mi;
	Wt::WContainerWidget *container_comedy_user_3;
	Wt::WContainerWidget *comedy_1_user_3;
	Wt::WImage *comedy_image_1_user_3;
	Wt::WPushButton *watch_comedy_1_user_3;
	Wt::WPushButton *rating_comedy_1_user_3;
	Wt::WContainerWidget *mark_comedy_1_user_3;
	Wt::WContainerWidget *mark_1_comedy_1_user_3;
	Wt::WPushButton *button_comedy_1_mark_1_user_3;
	Wt::WContainerWidget *mark_2_comedy_1_user_3;
	Wt::WPushButton *button_comedy_1_mark_2_user_3;
	Wt::WContainerWidget *mark_3_comedy_1_user_3;
	Wt::WPushButton *button_comedy_1_mark_3_user_3;
	Wt::WContainerWidget *mark_4_comedy_1_user_3;
	Wt::WPushButton *button_comedy_1_mark_4_user_3;
	Wt::WContainerWidget *mark_5_comedy_1_user_3;
	Wt::WPushButton *button_comedy_1_mark_5_user_3;
	Wt::WContainerWidget *comedy_2_user_3;
	Wt::WImage *comedy_image_2_user_3;
	Wt::WPushButton *watch_comedy_2_user_3;
	Wt::WPushButton *rating_comedy_2_user_3;
	Wt::WContainerWidget *mark_comedy_2_user_3;
	Wt::WContainerWidget *mark_1_comedy_2_user_3;
	Wt::WPushButton *button_comedy_2_mark_1_user_3;
	Wt::WContainerWidget *mark_2_comedy_2_user_3;
	Wt::WPushButton *button_comedy_2_mark_2_user_3;
	Wt::WContainerWidget *mark_3_comedy_2_user_3;
	Wt::WPushButton *button_comedy_2_mark_3_user_3;
	Wt::WContainerWidget *mark_4_comedy_2_user_3;
	Wt::WPushButton *button_comedy_2_mark_4_user_3;
	Wt::WContainerWidget *mark_5_comedy_2_user_3;
	Wt::WPushButton *button_comedy_2_mark_5_user_3;
	Wt::WContainerWidget *comedy_3_user_3;
	Wt::WImage *comedy_image_3_user_3;
	Wt::WPushButton *watch_comedy_3_user_3;
	Wt::WPushButton *rating_comedy_3_user_3;
	Wt::WContainerWidget *mark_comedy_3_user_3;
	Wt::WContainerWidget *mark_1_comedy_3_user_3;
	Wt::WPushButton *button_comedy_3_mark_1_user_3;
	Wt::WContainerWidget *mark_2_comedy_3_user_3;
	Wt::WPushButton *button_comedy_3_mark_2_user_3;
	Wt::WContainerWidget *mark_3_comedy_3_user_3;
	Wt::WPushButton *button_comedy_3_mark_3_user_3;
	Wt::WContainerWidget *mark_4_comedy_3_user_3;
	Wt::WPushButton *button_comedy_3_mark_4_user_3;
	Wt::WContainerWidget *mark_5_comedy_3_user_3;
	Wt::WPushButton *button_comedy_3_mark_5_user_3;
	Wt::WContainerWidget * drama_user_3;
	Wt::WMenuItem * drama_user_3_mi;
	Wt::WContainerWidget *container_drama_user_3;
	Wt::WContainerWidget *drama_1_user_3;
	Wt::WImage *drama_image_1_user_3;
	Wt::WPushButton *watch_drama_1_user_3;
	Wt::WPushButton *rating_drama_1_user_3;
	Wt::WContainerWidget *mark_drama_1_user_3;
	Wt::WContainerWidget *mark_1_drama_1_user_3;
	Wt::WPushButton *button_drama_1_mark_1_user_3;
	Wt::WContainerWidget *mark_2_drama_1_user_3;
	Wt::WPushButton *button_drama_1_mark_2_user_3;
	Wt::WContainerWidget *mark_3_drama_1_user_3;
	Wt::WPushButton *button_drama_1_mark_3_user_3;
	Wt::WContainerWidget *mark_4_drama_1_user_3;
	Wt::WPushButton *button_drama_1_mark_4_user_3;
	Wt::WContainerWidget *mark_5_drama_1_user_3;
	Wt::WPushButton *button_drama_1_mark_5_user_3;
	Wt::WContainerWidget *drama_2_user_3;
	Wt::WImage *drama_image_2_user_3;
	Wt::WPushButton *watch_drama_2_user_3;
	Wt::WPushButton *rating_drama_2_user_3;
	Wt::WContainerWidget *mark_drama_2_user_3;
	Wt::WContainerWidget *mark_1_drama_2_user_3;
	Wt::WPushButton *button_drama_2_mark_1_user_3;
	Wt::WContainerWidget *mark_2_drama_2_user_3;
	Wt::WPushButton *button_drama_2_mark_2_user_3;
	Wt::WContainerWidget *mark_3_drama_2_user_3;
	Wt::WPushButton *button_drama_2_mark_3_user_3;
	Wt::WContainerWidget *mark_4_drama_2_user_3;
	Wt::WPushButton *button_drama_2_mark_4_user_3;
	Wt::WContainerWidget *mark_5_drama_2_user_3;
	Wt::WPushButton *button_drama_2_mark_5_user_3;
	Wt::WContainerWidget *drama_3_user_3;
	Wt::WImage *drama_image_3_user_3;
	Wt::WPushButton *watch_drama_3_user_3;
	Wt::WPushButton *rating_drama_3_user_3;
	Wt::WContainerWidget *mark_drama_3_user_3;
	Wt::WContainerWidget *mark_1_drama_3_user_3;
	Wt::WPushButton *button_drama_3_mark_1_user_3;
	Wt::WContainerWidget *mark_2_drama_3_user_3;
	Wt::WPushButton *button_drama_3_mark_2_user_3;
	Wt::WContainerWidget *mark_3_drama_3_user_3;
	Wt::WPushButton *button_drama_3_mark_3_user_3;
	Wt::WContainerWidget *mark_4_drama_3_user_3;
	Wt::WPushButton *button_drama_3_mark_4_user_3;
	Wt::WContainerWidget *mark_5_drama_3_user_3;
	Wt::WPushButton *button_drama_3_mark_5_user_3;
	Wt::WContainerWidget * horror_user_3;
	Wt::WMenuItem * horror_user_3_mi;
	Wt::WContainerWidget *container_horror_user_3;
	Wt::WContainerWidget *horror_1_user_3;
	Wt::WImage *horror_image_1_user_3;
	Wt::WPushButton *watch_horror_1_user_3;
	Wt::WPushButton *rating_horror_1_user_3;
	Wt::WContainerWidget *mark_horror_1_user_3;
	Wt::WContainerWidget *mark_1_horror_1_user_3;
	Wt::WPushButton *button_horror_1_mark_1_user_3;
	Wt::WContainerWidget *mark_2_horror_1_user_3;
	Wt::WPushButton *button_horror_1_mark_2_user_3;
	Wt::WContainerWidget *mark_3_horror_1_user_3;
	Wt::WPushButton *button_horror_1_mark_3_user_3;
	Wt::WContainerWidget *mark_4_horror_1_user_3;
	Wt::WPushButton *button_horror_1_mark_4_user_3;
	Wt::WContainerWidget *mark_5_horror_1_user_3;
	Wt::WPushButton *button_horror_1_mark_5_user_3;
	Wt::WContainerWidget *horror_2_user_3;
	Wt::WImage *horror_image_2_user_3;
	Wt::WPushButton *watch_horror_2_user_3;
	Wt::WPushButton *rating_horror_2_user_3;
	Wt::WContainerWidget *mark_horror_2_user_3;
	Wt::WContainerWidget *mark_1_horror_2_user_3;
	Wt::WPushButton *button_horror_2_mark_1_user_3;
	Wt::WContainerWidget *mark_2_horror_2_user_3;
	Wt::WPushButton *button_horror_2_mark_2_user_3;
	Wt::WContainerWidget *mark_3_horror_2_user_3;
	Wt::WPushButton *button_horror_2_mark_3_user_3;
	Wt::WContainerWidget *mark_4_horror_2_user_3;
	Wt::WPushButton *button_horror_2_mark_4_user_3;
	Wt::WContainerWidget *mark_5_horror_2_user_3;
	Wt::WPushButton *button_horror_2_mark_5_user_3;
	Wt::WContainerWidget *horror_3_user_3;
	Wt::WImage *horror_image_3_user_3;
	Wt::WPushButton *watch_horror_3_user_3;
	Wt::WPushButton *rating_horror_3_user_3;
	Wt::WContainerWidget *mark_horror_3_user_3;
	Wt::WContainerWidget *mark_1_horror_3_user_3;
	Wt::WPushButton *button_horror_3_mark_1_user_3;
	Wt::WContainerWidget *mark_2_horror_3_user_3;
	Wt::WPushButton *button_horror_3_mark_2_user_3;
	Wt::WContainerWidget *mark_3_horror_3_user_3;
	Wt::WPushButton *button_horror_3_mark_3_user_3;
	Wt::WContainerWidget *mark_4_horror_3_user_3;
	Wt::WPushButton *button_horror_3_mark_4_user_3;
	Wt::WContainerWidget *mark_5_horror_3_user_3;
	Wt::WPushButton *button_horror_3_mark_5_user_3;
	Wt::WContainerWidget * nv_menu_user_4;
	Wt::WMenuItem * nv_menu_user_4_mi;
	Wt::WContainerWidget *container_films_4;
	Wt::WMenu *menu_user_4;
	Wt::WContainerWidget * comedy_user_4;
	Wt::WMenuItem * comedy_user_4_mi;
	Wt::WContainerWidget *container_comedy_user_4;
	Wt::WContainerWidget *comedy_1_user_4;
	Wt::WImage *comedy_image_1_user_4;
	Wt::WPushButton *watch_comedy_1_user_4;
	Wt::WPushButton *rating_comedy_1_user_4;
	Wt::WContainerWidget *mark_comedy_1_user_4;
	Wt::WContainerWidget *mark_1_comedy_1_user_4;
	Wt::WPushButton *button_comedy_1_mark_1_user_4;
	Wt::WContainerWidget *mark_2_comedy_1_user_4;
	Wt::WPushButton *button_comedy_1_mark_2_user_4;
	Wt::WContainerWidget *mark_3_comedy_1_user_4;
	Wt::WPushButton *button_comedy_1_mark_3_user_4;
	Wt::WContainerWidget *mark_4_comedy_1_user_4;
	Wt::WPushButton *button_comedy_1_mark_4_user_4;
	Wt::WContainerWidget *mark_5_comedy_1_user_4;
	Wt::WPushButton *button_comedy_1_mark_5_user_4;
	Wt::WContainerWidget *comedy_2_user_4;
	Wt::WImage *comedy_image_2_user_4;
	Wt::WPushButton *watch_comedy_2_user_4;
	Wt::WPushButton *rating_comedy_2_user_4;
	Wt::WContainerWidget *mark_comedy_2_user_4;
	Wt::WContainerWidget *mark_1_comedy_2_user_4;
	Wt::WPushButton *button_comedy_2_mark_1_user_4;
	Wt::WContainerWidget *mark_2_comedy_2_user_4;
	Wt::WPushButton *button_comedy_2_mark_2_user_4;
	Wt::WContainerWidget *mark_3_comedy_2_user_4;
	Wt::WPushButton *button_comedy_2_mark_3_user_4;
	Wt::WContainerWidget *mark_4_comedy_2_user_4;
	Wt::WPushButton *button_comedy_2_mark_4_user_4;
	Wt::WContainerWidget *mark_5_comedy_2_user_4;
	Wt::WPushButton *button_comedy_2_mark_5_user_4;
	Wt::WContainerWidget *comedy_3_user_4;
	Wt::WImage *comedy_image_3_user_4;
	Wt::WPushButton *watch_comedy_3_user_4;
	Wt::WPushButton *rating_comedy_3_user_4;
	Wt::WContainerWidget *mark_comedy_3_user_4;
	Wt::WContainerWidget *mark_1_comedy_3_user_4;
	Wt::WPushButton *button_comedy_3_mark_1_user_4;
	Wt::WContainerWidget *mark_2_comedy_3_user_4;
	Wt::WPushButton *button_comedy_3_mark_2_user_4;
	Wt::WContainerWidget *mark_3_comedy_3_user_4;
	Wt::WPushButton *button_comedy_3_mark_3_user_4;
	Wt::WContainerWidget *mark_4_comedy_3_user_4;
	Wt::WPushButton *button_comedy_3_mark_4_user_4;
	Wt::WContainerWidget *mark_5_comedy_3_user_4;
	Wt::WPushButton *button_comedy_3_mark_5_user_4;
	Wt::WContainerWidget * drama_user_4;
	Wt::WMenuItem * drama_user_4_mi;
	Wt::WContainerWidget *container_drama_user_4;
	Wt::WContainerWidget *drama_1_user_4;
	Wt::WImage *drama_image_1_user_4;
	Wt::WPushButton *watch_drama_1_user_4;
	Wt::WPushButton *rating_drama_1_user_4;
	Wt::WContainerWidget *mark_drama_1_user_4;
	Wt::WContainerWidget *mark_1_drama_1_user_4;
	Wt::WPushButton *button_drama_1_mark_1_user_4;
	Wt::WContainerWidget *mark_2_drama_1_user_4;
	Wt::WPushButton *button_drama_1_mark_2_user_4;
	Wt::WContainerWidget *mark_3_drama_1_user_4;
	Wt::WPushButton *button_drama_1_mark_3_user_4;
	Wt::WContainerWidget *mark_4_drama_1_user_4;
	Wt::WPushButton *button_drama_1_mark_4_user_4;
	Wt::WContainerWidget *mark_5_drama_1_user_4;
	Wt::WPushButton *button_drama_1_mark_5_user_4;
	Wt::WContainerWidget *drama_2_user_4;
	Wt::WImage *drama_image_2_user_4;
	Wt::WPushButton *watch_drama_2_user_4;
	Wt::WPushButton *rating_drama_2_user_4;
	Wt::WContainerWidget *mark_drama_2_user_4;
	Wt::WContainerWidget *mark_1_drama_2_user_4;
	Wt::WPushButton *button_drama_2_mark_1_user_4;
	Wt::WContainerWidget *mark_2_drama_2_user_4;
	Wt::WPushButton *button_drama_2_mark_2_user_4;
	Wt::WContainerWidget *mark_3_drama_2_user_4;
	Wt::WPushButton *button_drama_2_mark_3_user_4;
	Wt::WContainerWidget *mark_4_drama_2_user_4;
	Wt::WPushButton *button_drama_2_mark_4_user_4;
	Wt::WContainerWidget *mark_5_drama_2_user_4;
	Wt::WPushButton *button_drama_2_mark_5_user_4;
	Wt::WContainerWidget *drama_3_user_4;
	Wt::WImage *drama_image_3_user_4;
	Wt::WPushButton *watch_drama_3_user_4;
	Wt::WPushButton *rating_drama_3_user_4;
	Wt::WContainerWidget *mark_drama_3_user_4;
	Wt::WContainerWidget *mark_1_drama_3_user_4;
	Wt::WPushButton *button_drama_3_mark_1_user_4;
	Wt::WContainerWidget *mark_2_drama_3_user_4;
	Wt::WPushButton *button_drama_3_mark_2_user_4;
	Wt::WContainerWidget *mark_3_drama_3_user_4;
	Wt::WPushButton *button_drama_3_mark_3_user_4;
	Wt::WContainerWidget *mark_4_drama_3_user_4;
	Wt::WPushButton *button_drama_3_mark_4_user_4;
	Wt::WContainerWidget *mark_5_drama_3_user_4;
	Wt::WPushButton *button_drama_3_mark_5_user_4;
	Wt::WContainerWidget * horror_user_4;
	Wt::WMenuItem * horror_user_4_mi;
	Wt::WContainerWidget *container_horror_user_4;
	Wt::WContainerWidget *horror_1_user_4;
	Wt::WImage *horror_image_1_user_4;
	Wt::WPushButton *watch_horror_1_user_4;
	Wt::WPushButton *rating_horror_1_user_4;
	Wt::WContainerWidget *mark_horror_1_user_4;
	Wt::WContainerWidget *mark_1_horror_1_user_4;
	Wt::WPushButton *button_horror_1_mark_1_user_4;
	Wt::WContainerWidget *mark_2_horror_1_user_4;
	Wt::WPushButton *button_horror_1_mark_2_user_4;
	Wt::WContainerWidget *mark_3_horror_1_user_4;
	Wt::WPushButton *button_horror_1_mark_3_user_4;
	Wt::WContainerWidget *mark_4_horror_1_user_4;
	Wt::WPushButton *button_horror_1_mark_4_user_4;
	Wt::WContainerWidget *mark_5_horror_1_user_4;
	Wt::WPushButton *button_horror_1_mark_5_user_4;
	Wt::WContainerWidget *horror_2_user_4;
	Wt::WImage *horror_image_2_user_4;
	Wt::WPushButton *watch_horror_2_user_4;
	Wt::WPushButton *rating_horror_2_user_4;
	Wt::WContainerWidget *mark_horror_2_user_4;
	Wt::WContainerWidget *mark_1_horror_2_user_4;
	Wt::WPushButton *button_horror_2_mark_1_user_4;
	Wt::WContainerWidget *mark_2_horror_2_user_4;
	Wt::WPushButton *button_horror_2_mark_2_user_4;
	Wt::WContainerWidget *mark_3_horror_2_user_4;
	Wt::WPushButton *button_horror_2_mark_3_user_4;
	Wt::WContainerWidget *mark_4_horror_2_user_4;
	Wt::WPushButton *button_horror_2_mark_4_user_4;
	Wt::WContainerWidget *mark_5_horror_2_user_4;
	Wt::WPushButton *button_horror_2_mark_5_user_4;
	Wt::WContainerWidget *horror_3_user_4;
	Wt::WImage *horror_image_3_user_4;
	Wt::WPushButton *watch_horror_3_user_4;
	Wt::WPushButton *rating_horror_3_user_4;
	Wt::WContainerWidget *mark_horror_3_user_2_cp;
	Wt::WContainerWidget *mark_1_horror_3_user_4;
	Wt::WPushButton *button_horror_3_mark_1_user_4;
	Wt::WContainerWidget *mark_2_horror_3_user_4;
	Wt::WPushButton *button_horror_3_mark_2_user_4;
	Wt::WContainerWidget *mark_3_horror_3_user_4;
	Wt::WPushButton *button_horror_3_mark_3_user_4;
	Wt::WContainerWidget *mark_4_horror_3_user_4;
	Wt::WPushButton *button_horror_3_mark_4_user_4;
	Wt::WContainerWidget *mark_5_horror_3_user_4;
	Wt::WPushButton *button_horror_3_mark_5_user_4;
	Wt::WContainerWidget *Recommends;
	Wt::WContainerWidget *container;
	Wt::WText *text;
	Wt::WContainerWidget *container_cp;
	Wt::WText *text_cp;
	int userNumber;


	void setupUi(Wt::WContainerWidget *PageRoot)
	{

		Wt::WBootstrapTheme * p_wtTheme = new Wt::WBootstrapTheme();
		p_wtTheme->setVersion(Wt::WBootstrapTheme::Version3);
		Wt::WApplication::instance()->setTheme(p_wtTheme);
		Wt::WApplication::instance()->setTitle("Netflix//Films");

		addAllStyleSheets();

		wt_root = (PageRoot);
		wt_root->setId("wt_root");
		wt_root->setStyleClass(Wt::WString::fromUTF8(""));
		wt_root->setInline(0);
		{
			container_image = new Wt::WContainerWidget(wt_root);
			container_image->setId("container_image");
			container_image->setStyleClass(Wt::WString::fromUTF8(""));
			container_image->setInline(0);
			container_image->setHtmlTagName("div");
			{
				start_image = new Wt::WImage(container_image);
				start_image->setId("start_image");
				start_image->setStyleClass(Wt::WString::fromUTF8(""));
				start_image->setInline(0);
				start_image->setImageLink(Wt::WLink("https://i.kinja-img.com/gawker-media/image/upload/s--FtB7MerA--/c_fit,fl_progressive,q_80,w_636/1409900137065068359.jpg"));
			}
			container_text = new Wt::WContainerWidget(wt_root);
			container_text->setId("container_text");
			container_text->setStyleClass(Wt::WString::fromUTF8(""));
			container_text->setInline(0);
			container_text->setHtmlTagName("div");
			{
				info = new Wt::WText(container_text);
				info->setId("info");
				info->setStyleClass(Wt::WString::fromUTF8(""));
				info->setInline(0);
				info->setTextFormat((Wt::TextFormat)0);
				info->setText(Wt::WString::fromUTF8("Welcome to Netflix 2.0 !"));
				navbar = new Wt::WNavigationBar(container_text);
				navbar->setId("navbar");
				navbar->setStyleClass(Wt::WString::fromUTF8(" navbar-default navbar navbar navbar-default"));
				navbar->setInline(0);
				navbar->setTitle("Select the user: ");
				navbar->setResponsive("1");
				{
					select_user = new Wt::WMenu(new Wt::WStackedWidget(), container_text);
					container_text->addWidget(select_user->contentsStack());
					select_user->contentsStack()->setId("select_user_stackedwidget");
					navbar->addMenu(select_user, Wt::AlignLeft);
					select_user->setId("select_user");
					select_user->setStyleClass(Wt::WString::fromUTF8("nav-pills nav nav"));
					select_user->setInline(1);
					{
						nv_menu_user_1 = new Wt::WContainerWidget(container_text);
						nv_menu_user_1_mi = select_user->addItem(Wt::WString("User 1"), nv_menu_user_1);
						nv_menu_user_1->setId("nv_menu_user_1");
						nv_menu_user_1->setStyleClass(Wt::WString::fromUTF8(""));
						nv_menu_user_1->setInline(0);
						select_user->setItemDisabled(0, 0);
						select_user->setItemHidden(0, 0);
						
						{
							container_films_1 = new Wt::WContainerWidget(nv_menu_user_1);
							container_films_1->setId("container_films_1");
							container_films_1->setStyleClass(Wt::WString::fromUTF8(""));
							container_films_1->setInline(0);
							container_films_1->setHtmlTagName("div");
							{
								menu_user_1 = new Wt::WMenu(new Wt::WStackedWidget(), container_films_1);
								container_films_1->addWidget(menu_user_1->contentsStack());
								menu_user_1->contentsStack()->setId("menu_user_1_stackedwidget");
								menu_user_1->setId("menu_user_1");
								menu_user_1->setStyleClass(Wt::WString::fromUTF8("nav-pills nav-stacked nav nav"));
								menu_user_1->setInline(1);
								userNumber = 1;
								{
									comedy_user_1 = new Wt::WContainerWidget(container_films_1);
									comedy_user_1_mi = menu_user_1->addItem(Wt::WString("Comedy"), comedy_user_1);
									comedy_user_1->setId("comedy_user_1");
									comedy_user_1->setStyleClass(Wt::WString::fromUTF8(""));
									comedy_user_1->setInline(0);
									menu_user_1->setItemDisabled(0, 0);
									menu_user_1->setItemHidden(0, 0);
									{
										container_comedy_user_1 = new Wt::WContainerWidget(comedy_user_1);
										container_comedy_user_1->setId("container_comedy_user_1");
										container_comedy_user_1->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
										container_comedy_user_1->setInline(0);
										container_comedy_user_1->setHtmlTagName("div");
										{
											comedy_1_user_1 = new Wt::WContainerWidget(container_comedy_user_1);
											comedy_1_user_1->setId("comedy_1_user_1");
											comedy_1_user_1->setStyleClass(Wt::WString::fromUTF8(" btn-group"));
											comedy_1_user_1->setInline(0);
											comedy_1_user_1->setHtmlTagName("div");
											{
												comedy_image_1_user_1 = new Wt::WImage(comedy_1_user_1);
												comedy_image_1_user_1->setId("comedy_image_1_user_1");
												comedy_image_1_user_1->setStyleClass(Wt::WString::fromUTF8("center-block"));
												comedy_image_1_user_1->setInline(0);
												comedy_image_1_user_1->setImageLink(Wt::WLink("http://img.dotua.org/fsua_items/cover/00/42/37/10/00423720.jpg"));
												watch_comedy_1_user_1 = new Wt::WPushButton(comedy_1_user_1);
												watch_comedy_1_user_1->setId("watch_comedy_1_user_1");
												watch_comedy_1_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default with-label btn-success center-block btn btn-default"));
												watch_comedy_1_user_1->setInline(1);
												watch_comedy_1_user_1->setEmptyText(Wt::WString::fromUTF8(""));
												watch_comedy_1_user_1->setText(Wt::WString::fromUTF8("Watch"));
												watch_comedy_1_user_1->setLink(Wt::WLink("http://www.ex.ua/show/207854449/5e2b0e298067ac5505e943070d9ee633.mp4"));
												rating_comedy_1_user_1 = new Wt::WPushButton(comedy_1_user_1);
												rating_comedy_1_user_1->setId("rating_comedy_1_user_1");
												rating_comedy_1_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-warning with-label center-block btn btn-default"));
												rating_comedy_1_user_1->setInline(1);
												rating_comedy_1_user_1->setEmptyText(Wt::WString::fromUTF8(""));
												rating_comedy_1_user_1->setText(Wt::WString::fromUTF8("Rating"));
												rating_comedy_1_user_1->setLink(Wt::WLink("http://www.kinopoisk.ru/film/817481/"));
												mark_comedy_1_user_1 = new Wt::WContainerWidget(comedy_1_user_1);
												mark_comedy_1_user_1->setId("mark_comedy_1_user_1");
												mark_comedy_1_user_1->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
												mark_comedy_1_user_1->setInline(0);
												mark_comedy_1_user_1->setHtmlTagName("div");
												{
													mark_1_comedy_1_user_1 = new Wt::WContainerWidget(mark_comedy_1_user_1);
													mark_1_comedy_1_user_1->setId("mark_1_comedy_1_user_1");
													mark_1_comedy_1_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_1_comedy_1_user_1->setInline(0);
													mark_1_comedy_1_user_1->setHtmlTagName("div");
													{
														button_comedy_1_mark_1_user_1 = new Wt::WPushButton(mark_1_comedy_1_user_1);
														button_comedy_1_mark_1_user_1->setId("button_comedy_1_mark_1_user_1");
														button_comedy_1_mark_1_user_1->setStyleClass(Wt::WString::fromUTF8(" btn btn-danger btn-default btn-group with-label btn btn-default with-label"));
														button_comedy_1_mark_1_user_1->setInline(1);
														button_comedy_1_mark_1_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_1_mark_1_user_1->setText(Wt::WString::fromUTF8("1"));
														button_comedy_1_mark_1_user_1->setLink(Wt::WLink(""));
														button_comedy_1_mark_1_user_1->clicked().connect(button_comedy_1_mark_1_user_1, &Wt::WPushButton::disable);
														button_comedy_1_mark_1_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_1_mark_1_user_1->valueText();
															writeFile("1", "1", "1");
														}));
													}
													mark_2_comedy_1_user_1 = new Wt::WContainerWidget(mark_comedy_1_user_1);
													mark_2_comedy_1_user_1->setId("mark_2_comedy_1_user_1");
													mark_2_comedy_1_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_2_comedy_1_user_1->setInline(0);
													mark_2_comedy_1_user_1->setHtmlTagName("div");
													{
														button_comedy_1_mark_2_user_1 = new Wt::WPushButton(mark_2_comedy_1_user_1);
														button_comedy_1_mark_2_user_1->setId("button_comedy_1_mark_2_user_1");
														button_comedy_1_mark_2_user_1->setStyleClass(Wt::WString::fromUTF8(" btn btn-default btn-warning btn-group with-label btn btn-default with-label"));
														button_comedy_1_mark_2_user_1->setInline(1);
														button_comedy_1_mark_2_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_1_mark_2_user_1->setText(Wt::WString::fromUTF8("2"));
														button_comedy_1_mark_2_user_1->setLink(Wt::WLink(""));
														button_comedy_1_mark_2_user_1->clicked().connect(button_comedy_1_mark_2_user_1, &Wt::WPushButton::disable);
														button_comedy_1_mark_2_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_1_mark_2_user_1->valueText();
															writeFile("1", "1", "2");
														}));
													}
													mark_3_comedy_1_user_1 = new Wt::WContainerWidget(mark_comedy_1_user_1);
													mark_3_comedy_1_user_1->setId("mark_3_comedy_1_user_1");
													mark_3_comedy_1_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_3_comedy_1_user_1->setInline(0);
													mark_3_comedy_1_user_1->setHtmlTagName("div");
													{
														button_comedy_1_mark_3_user_1 = new Wt::WPushButton(mark_3_comedy_1_user_1);
														button_comedy_1_mark_3_user_1->setId("button_comedy_1_mark_3_user_1");
														button_comedy_1_mark_3_user_1->setStyleClass(Wt::WString::fromUTF8("btn-primary  btn btn-default btn-group with-label btn btn-default with-label"));
														button_comedy_1_mark_3_user_1->setInline(1);
														button_comedy_1_mark_3_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_1_mark_3_user_1->setText(Wt::WString::fromUTF8("3"));
														button_comedy_1_mark_3_user_1->setLink(Wt::WLink(""));
														button_comedy_1_mark_3_user_1->clicked().connect(button_comedy_1_mark_3_user_1, &Wt::WPushButton::disable);
														button_comedy_1_mark_3_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_1_mark_3_user_1->valueText();
															writeFile("1", "1", "3");
														}));
													}
													mark_4_comedy_1_user_1 = new Wt::WContainerWidget(mark_comedy_1_user_1);
													mark_4_comedy_1_user_1->setId("mark_4_comedy_1_user_1");
													mark_4_comedy_1_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_4_comedy_1_user_1->setInline(0);
													mark_4_comedy_1_user_1->setHtmlTagName("div");
													{
														button_comedy_1_mark_4_user_1 = new Wt::WPushButton(mark_4_comedy_1_user_1);
														button_comedy_1_mark_4_user_1->setId("button_comedy_1_mark_4_user_1");
														button_comedy_1_mark_4_user_1->setStyleClass(Wt::WString::fromUTF8(" btn-info btn btn-default btn-group with-label btn btn-default with-label"));
														button_comedy_1_mark_4_user_1->setInline(1);
														button_comedy_1_mark_4_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_1_mark_4_user_1->setText(Wt::WString::fromUTF8("4"));
														button_comedy_1_mark_4_user_1->setLink(Wt::WLink(""));
														button_comedy_1_mark_4_user_1->clicked().connect(button_comedy_1_mark_4_user_1, &Wt::WPushButton::disable);
														button_comedy_1_mark_4_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_1_mark_4_user_1->valueText();
															writeFile("1", "1", "4");
														}));


													}
													mark_5_comedy_1_user_1 = new Wt::WContainerWidget(mark_comedy_1_user_1);
													mark_5_comedy_1_user_1->setId("mark_5_comedy_1_user_1");
													mark_5_comedy_1_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_5_comedy_1_user_1->setInline(0);
													mark_5_comedy_1_user_1->setHtmlTagName("div");
													{
														button_comedy_1_mark_5_user_1 = new Wt::WPushButton(mark_5_comedy_1_user_1);
														button_comedy_1_mark_5_user_1->setId("button_comedy_1_mark_5_user_1");
														button_comedy_1_mark_5_user_1->setStyleClass(Wt::WString::fromUTF8(" btn btn-default btn-group with-label btn-success btn btn-default with-label"));
														button_comedy_1_mark_5_user_1->setInline(1);
														button_comedy_1_mark_5_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_1_mark_5_user_1->setText(Wt::WString::fromUTF8("5"));
														button_comedy_1_mark_5_user_1->setLink(Wt::WLink(""));
														button_comedy_1_mark_5_user_1->clicked().connect(button_comedy_1_mark_5_user_1, &Wt::WPushButton::disable);
														button_comedy_1_mark_5_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_1_mark_5_user_1->valueText();
															writeFile("1", "1", "5");
														}));
													}
												}
											}
											comedy_2_user_1 = new Wt::WContainerWidget(container_comedy_user_1);
											comedy_2_user_1->setId("comedy_2_user_1");
											comedy_2_user_1->setStyleClass(Wt::WString::fromUTF8(" btn-group"));
											comedy_2_user_1->setInline(0);
											comedy_2_user_1->setHtmlTagName("div");
											{
												comedy_image_2_user_1 = new Wt::WImage(comedy_2_user_1);
												comedy_image_2_user_1->setId("comedy_image_2_user_1");
												comedy_image_2_user_1->setStyleClass(Wt::WString::fromUTF8("center-block"));
												comedy_image_2_user_1->setInline(0);
												comedy_image_2_user_1->setImageLink(Wt::WLink("http://img.dotua.org/fsua_items/cover/00/42/35/10/00423542.jpg"));
												watch_comedy_2_user_1 = new Wt::WPushButton(comedy_2_user_1);
												watch_comedy_2_user_1->setId("watch_comedy_2_user_1");
												watch_comedy_2_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default with-label btn-success center-block btn btn-default"));
												watch_comedy_2_user_1->setInline(1);
												watch_comedy_2_user_1->setEmptyText(Wt::WString::fromUTF8(""));
												watch_comedy_2_user_1->setText(Wt::WString::fromUTF8("Watch"));
												watch_comedy_2_user_1->setLink(Wt::WLink("http://www.ex.ua/show/221305334/44721d879c4a9fdb9416347c45e6f5d2.mp4"));
												rating_comedy_2_user_1 = new Wt::WPushButton(comedy_2_user_1);
												rating_comedy_2_user_1->setId("rating_comedy_2_user_1");
												rating_comedy_2_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-warning with-label center-block btn btn-default"));
												rating_comedy_2_user_1->setInline(1);
												rating_comedy_2_user_1->setEmptyText(Wt::WString::fromUTF8(""));
												rating_comedy_2_user_1->setText(Wt::WString::fromUTF8("Rating"));
												rating_comedy_2_user_1->setLink(Wt::WLink("http://www.kinopoisk.ru/film/891509/"));
												mark_comedy_2_user_1 = new Wt::WContainerWidget(comedy_2_user_1);
												mark_comedy_2_user_1->setId("mark_comedy_2_user_1");
												mark_comedy_2_user_1->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
												mark_comedy_2_user_1->setInline(0);
												mark_comedy_2_user_1->setHtmlTagName("div");
												{
													mark_1_comedy_2_user_1 = new Wt::WContainerWidget(mark_comedy_2_user_1);
													mark_1_comedy_2_user_1->setId("mark_1_comedy_2_user_1");
													mark_1_comedy_2_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_1_comedy_2_user_1->setInline(0);
													mark_1_comedy_2_user_1->setHtmlTagName("div");
													{
														button_comedy_2_mark_1_user_1 = new Wt::WPushButton(mark_1_comedy_2_user_1);
														button_comedy_2_mark_1_user_1->setId("button_comedy_2_mark_1_user_1");
														button_comedy_2_mark_1_user_1->setStyleClass(Wt::WString::fromUTF8(" btn btn-danger btn-default btn-group with-label btn btn-default with-label"));
														button_comedy_2_mark_1_user_1->setInline(1);
														button_comedy_2_mark_1_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_2_mark_1_user_1->setText(Wt::WString::fromUTF8("1"));
														button_comedy_2_mark_1_user_1->setLink(Wt::WLink(""));
														button_comedy_2_mark_1_user_1->clicked().connect(button_comedy_2_mark_1_user_1, &Wt::WPushButton::disable);
														button_comedy_2_mark_1_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_2_mark_1_user_1->valueText();
															writeFile("1", "2", "1");
														}));
													}
													mark_2_comedy_2_user_1 = new Wt::WContainerWidget(mark_comedy_2_user_1);
													mark_2_comedy_2_user_1->setId("mark_2_comedy_2_user_1");
													mark_2_comedy_2_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_2_comedy_2_user_1->setInline(0);
													mark_2_comedy_2_user_1->setHtmlTagName("div");
													{
														button_comedy_2_mark_2_user_1 = new Wt::WPushButton(mark_2_comedy_2_user_1);
														button_comedy_2_mark_2_user_1->setId("button_comedy_2_mark_2_user_1");
														button_comedy_2_mark_2_user_1->setStyleClass(Wt::WString::fromUTF8(" btn btn-default btn-warning btn-group with-label btn btn-default with-label"));
														button_comedy_2_mark_2_user_1->setInline(1);
														button_comedy_2_mark_2_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_2_mark_2_user_1->setText(Wt::WString::fromUTF8("2"));
														button_comedy_2_mark_2_user_1->setLink(Wt::WLink(""));
														button_comedy_2_mark_2_user_1->clicked().connect(button_comedy_2_mark_2_user_1, &Wt::WPushButton::disable);
														button_comedy_2_mark_2_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_2_mark_2_user_1->valueText();
															writeFile("1", "2", "2");
														}));
													}
													mark_3_comedy_2_user_1 = new Wt::WContainerWidget(mark_comedy_2_user_1);
													mark_3_comedy_2_user_1->setId("mark_3_comedy_2_user_1");
													mark_3_comedy_2_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_3_comedy_2_user_1->setInline(0);
													mark_3_comedy_2_user_1->setHtmlTagName("div");
													{
														button_comedy_2_mark_3_user_1 = new Wt::WPushButton(mark_3_comedy_2_user_1);
														button_comedy_2_mark_3_user_1->setId("button_comedy_2_mark_3_user_1");
														button_comedy_2_mark_3_user_1->setStyleClass(Wt::WString::fromUTF8("btn-primary  btn btn-default btn-group with-label btn btn-default with-label"));
														button_comedy_2_mark_3_user_1->setInline(1);
														button_comedy_2_mark_3_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_2_mark_3_user_1->setText(Wt::WString::fromUTF8("3"));
														button_comedy_2_mark_3_user_1->setLink(Wt::WLink(""));
														button_comedy_2_mark_3_user_1->clicked().connect(button_comedy_2_mark_3_user_1, &Wt::WPushButton::disable);
														button_comedy_2_mark_3_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_2_mark_3_user_1->valueText();
															writeFile("1", "2", "3");
														}));
													}
													mark_4_comedy_2_user_1 = new Wt::WContainerWidget(mark_comedy_2_user_1);
													mark_4_comedy_2_user_1->setId("mark_4_comedy_2_user_1");
													mark_4_comedy_2_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_4_comedy_2_user_1->setInline(0);
													mark_4_comedy_2_user_1->setHtmlTagName("div");
													{
														button_comedy_2_mark_4_user_1 = new Wt::WPushButton(mark_4_comedy_2_user_1);
														button_comedy_2_mark_4_user_1->setId("button_comedy_2_mark_4_user_1");
														button_comedy_2_mark_4_user_1->setStyleClass(Wt::WString::fromUTF8(" btn-info btn btn-default btn-group with-label btn btn-default with-label"));
														button_comedy_2_mark_4_user_1->setInline(1);
														button_comedy_2_mark_4_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_2_mark_4_user_1->setText(Wt::WString::fromUTF8("4"));
														button_comedy_2_mark_4_user_1->setLink(Wt::WLink(""));
														button_comedy_2_mark_4_user_1->clicked().connect(button_comedy_2_mark_4_user_1, &Wt::WPushButton::disable);
														button_comedy_2_mark_4_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_2_mark_4_user_1->valueText();
															writeFile("1", "2", "4");
														}));
													}
													mark_5_comedy_2_user_1 = new Wt::WContainerWidget(mark_comedy_2_user_1);
													mark_5_comedy_2_user_1->setId("mark_5_comedy_2_user_1");
													mark_5_comedy_2_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_5_comedy_2_user_1->setInline(0);
													mark_5_comedy_2_user_1->setHtmlTagName("div");
													{
														button_comedy_2_mark_5_user_1 = new Wt::WPushButton(mark_5_comedy_2_user_1);
														button_comedy_2_mark_5_user_1->setId("button_comedy_2_mark_5_user_1");
														button_comedy_2_mark_5_user_1->setStyleClass(Wt::WString::fromUTF8(" btn btn-default btn-group with-label btn-success btn btn-default with-label"));
														button_comedy_2_mark_5_user_1->setInline(1);
														button_comedy_2_mark_5_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_2_mark_5_user_1->setText(Wt::WString::fromUTF8("5"));
														button_comedy_2_mark_5_user_1->setLink(Wt::WLink(""));
														button_comedy_2_mark_5_user_1->clicked().connect(button_comedy_2_mark_5_user_1, &Wt::WPushButton::disable);
														button_comedy_2_mark_5_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_2_mark_5_user_1->valueText();
															writeFile("1", "2", "5");
														}));
													}
												}
											}
											comedy_3_user_1 = new Wt::WContainerWidget(container_comedy_user_1);
											comedy_3_user_1->setId("comedy_3_user_1");
											comedy_3_user_1->setStyleClass(Wt::WString::fromUTF8(" btn-group"));
											comedy_3_user_1->setInline(0);
											comedy_3_user_1->setHtmlTagName("div");
											{
												comedy_image_3_user_1 = new Wt::WImage(comedy_3_user_1);
												comedy_image_3_user_1->setId("comedy_image_3_user_1");
												comedy_image_3_user_1->setStyleClass(Wt::WString::fromUTF8("center-block"));
												comedy_image_3_user_1->setInline(0);
												comedy_image_3_user_1->setImageLink(Wt::WLink("http://img.dotua.org/fsua_items/cover/00/41/63/10/00416346.jpg"));
												watch_comedy_3_user_1 = new Wt::WPushButton(comedy_3_user_1);
												watch_comedy_3_user_1->setId("watch_comedy_3_user_1");
												watch_comedy_3_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default with-label btn-success center-block btn btn-default"));
												watch_comedy_3_user_1->setInline(1);
												watch_comedy_3_user_1->setEmptyText(Wt::WString::fromUTF8(""));
												watch_comedy_3_user_1->setText(Wt::WString::fromUTF8("Watch"));
												watch_comedy_3_user_1->setLink(Wt::WLink("http://fs183.www.ex.ua/show/1db3efc80e81aee31128052d5e04addf/216383529/1db3efc80e81aee31128052d5e04addf.mp4"));
												rating_comedy_3_user_1 = new Wt::WPushButton(comedy_3_user_1);
												rating_comedy_3_user_1->setId("rating_comedy_3_user_1");
												rating_comedy_3_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-warning with-label center-block btn btn-default"));
												rating_comedy_3_user_1->setInline(1);
												rating_comedy_3_user_1->setEmptyText(Wt::WString::fromUTF8(""));
												rating_comedy_3_user_1->setText(Wt::WString::fromUTF8("Rating"));
												rating_comedy_3_user_1->setLink(Wt::WLink("http://www.kinopoisk.ru/film/714187/"));
												mark_comedy_3_user_1 = new Wt::WContainerWidget(comedy_3_user_1);
												mark_comedy_3_user_1->setId("mark_comedy_3_user_1");
												mark_comedy_3_user_1->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
												mark_comedy_3_user_1->setInline(0);
												mark_comedy_3_user_1->setHtmlTagName("div");
												{
													mark_1_comedy_3_user_1 = new Wt::WContainerWidget(mark_comedy_3_user_1);
													mark_1_comedy_3_user_1->setId("mark_1_comedy_3_user_1");
													mark_1_comedy_3_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_1_comedy_3_user_1->setInline(0);
													mark_1_comedy_3_user_1->setHtmlTagName("div");
													{
														button_comedy_3_mark_1_user_1 = new Wt::WPushButton(mark_1_comedy_3_user_1);
														button_comedy_3_mark_1_user_1->setId("button_comedy_3_mark_1_user_1");
														button_comedy_3_mark_1_user_1->setStyleClass(Wt::WString::fromUTF8(" btn btn-danger btn-default btn-group with-label btn btn-default with-label"));
														button_comedy_3_mark_1_user_1->setInline(1);
														button_comedy_3_mark_1_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_3_mark_1_user_1->setText(Wt::WString::fromUTF8("1"));
														button_comedy_3_mark_1_user_1->setLink(Wt::WLink(""));
														button_comedy_3_mark_1_user_1->clicked().connect(button_comedy_3_mark_1_user_1, &Wt::WPushButton::disable);
														button_comedy_3_mark_1_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_3_mark_1_user_1->valueText();
															writeFile("1", "3", "1");
														}));
													}
													mark_2_comedy_3_user_1 = new Wt::WContainerWidget(mark_comedy_3_user_1);
													mark_2_comedy_3_user_1->setId("mark_2_comedy_3_user_1");
													mark_2_comedy_3_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_2_comedy_3_user_1->setInline(0);
													mark_2_comedy_3_user_1->setHtmlTagName("div");
													{
														button_comedy_3_mark_2_user_1 = new Wt::WPushButton(mark_2_comedy_3_user_1);
														button_comedy_3_mark_2_user_1->setId("button_comedy_3_mark_2_user_1");
														button_comedy_3_mark_2_user_1->setStyleClass(Wt::WString::fromUTF8(" btn btn-default btn-warning btn-group with-label btn btn-default with-label"));
														button_comedy_3_mark_2_user_1->setInline(1);
														button_comedy_3_mark_2_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_3_mark_2_user_1->setText(Wt::WString::fromUTF8("2"));
														button_comedy_3_mark_2_user_1->setLink(Wt::WLink(""));
														button_comedy_3_mark_2_user_1->clicked().connect(button_comedy_3_mark_2_user_1, &Wt::WPushButton::disable);
														button_comedy_3_mark_2_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_3_mark_2_user_1->valueText();
															writeFile("1", "3", "2");
														}));

													}
													mark_3_comedy_3_user_1 = new Wt::WContainerWidget(mark_comedy_3_user_1);
													mark_3_comedy_3_user_1->setId("mark_3_comedy_3_user_1");
													mark_3_comedy_3_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_3_comedy_3_user_1->setInline(0);
													mark_3_comedy_3_user_1->setHtmlTagName("div");
													{
														button_comedy_3_mark_3_user_1 = new Wt::WPushButton(mark_3_comedy_3_user_1);
														button_comedy_3_mark_3_user_1->setId("button_comedy_3_mark_3_user_1");
														button_comedy_3_mark_3_user_1->setStyleClass(Wt::WString::fromUTF8("btn-primary  btn btn-default btn-group with-label btn btn-default with-label"));
														button_comedy_3_mark_3_user_1->setInline(1);
														button_comedy_3_mark_3_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_3_mark_3_user_1->setText(Wt::WString::fromUTF8("3"));
														button_comedy_3_mark_3_user_1->setLink(Wt::WLink(""));
														button_comedy_3_mark_3_user_1->clicked().connect(button_comedy_3_mark_3_user_1, &Wt::WPushButton::disable);
														button_comedy_3_mark_3_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_3_mark_3_user_1->valueText();
															writeFile("1", "3", "3");
														}));
													}
													mark_4_comedy_3_user_1 = new Wt::WContainerWidget(mark_comedy_3_user_1);
													mark_4_comedy_3_user_1->setId("mark_4_comedy_3_user_1");
													mark_4_comedy_3_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_4_comedy_3_user_1->setInline(0);
													mark_4_comedy_3_user_1->setHtmlTagName("div");
													{
														button_comedy_3_mark_4_user_1 = new Wt::WPushButton(mark_4_comedy_3_user_1);
														button_comedy_3_mark_4_user_1->setId("button_comedy_3_mark_4_user_1");
														button_comedy_3_mark_4_user_1->setStyleClass(Wt::WString::fromUTF8(" btn-info btn btn-default btn-group with-label btn btn-default with-label"));
														button_comedy_3_mark_4_user_1->setInline(1);
														button_comedy_3_mark_4_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_3_mark_4_user_1->setText(Wt::WString::fromUTF8("4"));
														button_comedy_3_mark_4_user_1->setLink(Wt::WLink(""));
														button_comedy_3_mark_4_user_1->clicked().connect(button_comedy_3_mark_4_user_1, &Wt::WPushButton::disable);
														button_comedy_3_mark_4_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_3_mark_4_user_1->valueText();
															writeFile("1", "3", "4");
														}));
													}
													mark_5_comedy_3_user_1 = new Wt::WContainerWidget(mark_comedy_3_user_1);
													mark_5_comedy_3_user_1->setId("mark_5_comedy_3_user_1");
													mark_5_comedy_3_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_5_comedy_3_user_1->setInline(0);
													mark_5_comedy_3_user_1->setHtmlTagName("div");
													{
														button_comedy_3_mark_5_user_1 = new Wt::WPushButton(mark_5_comedy_3_user_1);
														button_comedy_3_mark_5_user_1->setId("button_comedy_3_mark_5_user_1");
														button_comedy_3_mark_5_user_1->setStyleClass(Wt::WString::fromUTF8(" btn btn-default btn-group with-label btn-success btn btn-default with-label"));
														button_comedy_3_mark_5_user_1->setInline(1);
														button_comedy_3_mark_5_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_3_mark_5_user_1->setText(Wt::WString::fromUTF8("5"));
														button_comedy_3_mark_5_user_1->setLink(Wt::WLink(""));
														button_comedy_3_mark_5_user_1->clicked().connect(button_comedy_3_mark_5_user_1, &Wt::WPushButton::disable);
														button_comedy_3_mark_5_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_3_mark_5_user_1->valueText();
															writeFile("1", "3", "5");
														}));
													}
												}
											}
										}
									}
									drama_user_1 = new Wt::WContainerWidget(container_films_1);
									drama_user_1_mi = menu_user_1->addItem(Wt::WString("Drama"), drama_user_1);
									drama_user_1->setId("drama_user_1");
									drama_user_1->setStyleClass(Wt::WString::fromUTF8(""));
									drama_user_1->setInline(0);
									menu_user_1->setItemDisabled(1, 0);
									menu_user_1->setItemHidden(1, 0);
									{
										container_drama_user_1 = new Wt::WContainerWidget(drama_user_1);
										container_drama_user_1->setId("container_drama_user_1");
										container_drama_user_1->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
										container_drama_user_1->setInline(0);
										container_drama_user_1->setHtmlTagName("div");
										{
											drama_1_user_1 = new Wt::WContainerWidget(container_drama_user_1);
											drama_1_user_1->setId("drama_1_user_1");
											drama_1_user_1->setStyleClass(Wt::WString::fromUTF8(" btn-group"));
											drama_1_user_1->setInline(0);
											drama_1_user_1->setHtmlTagName("div");
											{
												drama_image_1_user_1 = new Wt::WImage(drama_1_user_1);
												drama_image_1_user_1->setId("drama_image_1_user_1");
												drama_image_1_user_1->setStyleClass(Wt::WString::fromUTF8("center-block"));
												drama_image_1_user_1->setInline(0);
												drama_image_1_user_1->setImageLink(Wt::WLink("http://img.dotua.org/fsua_items/cover/00/20/75/10/00207558.jpg"));
												watch_drama_1_user_1 = new Wt::WPushButton(drama_1_user_1);
												watch_drama_1_user_1->setId("watch_drama_1_user_1");
												watch_drama_1_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default with-label btn-success center-block"));
												watch_drama_1_user_1->setInline(1);
												watch_drama_1_user_1->setEmptyText(Wt::WString::fromUTF8(""));
												watch_drama_1_user_1->setText(Wt::WString::fromUTF8("Watch"));
												watch_drama_1_user_1->setLink(Wt::WLink("http://fs136.www.ex.ua/show/e86bb1854d95b249f3ee8d557e7224bd/12141246/e86bb1854d95b249f3ee8d557e7224bd.mp4"));
												rating_drama_1_user_1 = new Wt::WPushButton(drama_1_user_1);
												rating_drama_1_user_1->setId("rating_drama_1_user_1");
												rating_drama_1_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-warning with-label center-block"));
												rating_drama_1_user_1->setInline(1);
												rating_drama_1_user_1->setEmptyText(Wt::WString::fromUTF8(""));
												rating_drama_1_user_1->setText(Wt::WString::fromUTF8("Rating"));
												rating_drama_1_user_1->setLink(Wt::WLink("/"));
												mark_drama_1_user_1 = new Wt::WContainerWidget(drama_1_user_1);
												mark_drama_1_user_1->setId("mark_drama_1_user_1");
												mark_drama_1_user_1->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
												mark_drama_1_user_1->setInline(0);
												mark_drama_1_user_1->setHtmlTagName("div");
												{
													mark_1_drama_1_user_1 = new Wt::WContainerWidget(mark_drama_1_user_1);
													mark_1_drama_1_user_1->setId("mark_1_drama_1_user_1");
													mark_1_drama_1_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_1_drama_1_user_1->setInline(0);
													mark_1_drama_1_user_1->setHtmlTagName("div");
													{
														button_drama_1_mark_1_user_1 = new Wt::WPushButton(mark_1_drama_1_user_1);
														button_drama_1_mark_1_user_1->setId("button_drama_1_mark_1_user_1");
														button_drama_1_mark_1_user_1->setStyleClass(Wt::WString::fromUTF8(" btn btn-danger btn-group with-label"));
														button_drama_1_mark_1_user_1->setInline(1);
														button_drama_1_mark_1_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_1_mark_1_user_1->setText(Wt::WString::fromUTF8("1"));
														button_drama_1_mark_1_user_1->setLink(Wt::WLink(""));
														button_drama_1_mark_1_user_1->clicked().connect(button_drama_1_mark_1_user_1, &Wt::WPushButton::disable);
														button_drama_1_mark_1_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_drama_1_mark_1_user_1->valueText();
															writeFile("1", "4", "1");
														}));
													}
													mark_2_drama_1_user_1 = new Wt::WContainerWidget(mark_drama_1_user_1);
													mark_2_drama_1_user_1->setId("mark_2_drama_1_user_1");
													mark_2_drama_1_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_2_drama_1_user_1->setInline(0);
													mark_2_drama_1_user_1->setHtmlTagName("div");
													{
														button_drama_1_mark_2_user_1 = new Wt::WPushButton(mark_2_drama_1_user_1);
														button_drama_1_mark_2_user_1->setId("button_drama_1_mark_2_user_1");
														button_drama_1_mark_2_user_1->setStyleClass(Wt::WString::fromUTF8(" btn btn-warning btn-group with-label"));
														button_drama_1_mark_2_user_1->setInline(1);
														button_drama_1_mark_2_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_1_mark_2_user_1->setText(Wt::WString::fromUTF8("2"));
														button_drama_1_mark_2_user_1->setLink(Wt::WLink(""));
														button_drama_1_mark_2_user_1->clicked().connect(button_drama_1_mark_2_user_1, &Wt::WPushButton::disable);
														button_drama_1_mark_2_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_drama_1_mark_2_user_1->valueText();
															writeFile("1", "4", "2");
														}));
													}
													mark_3_drama_1_user_1 = new Wt::WContainerWidget(mark_drama_1_user_1);
													mark_3_drama_1_user_1->setId("mark_3_drama_1_user_1");
													mark_3_drama_1_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_3_drama_1_user_1->setInline(0);
													mark_3_drama_1_user_1->setHtmlTagName("div");
													{
														button_drama_1_mark_3_user_1 = new Wt::WPushButton(mark_3_drama_1_user_1);
														button_drama_1_mark_3_user_1->setId("button_drama_1_mark_3_user_1");
														button_drama_1_mark_3_user_1->setStyleClass(Wt::WString::fromUTF8("btn-primary  btn btn-group with-label"));
														button_drama_1_mark_3_user_1->setInline(1);
														button_drama_1_mark_3_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_1_mark_3_user_1->setText(Wt::WString::fromUTF8("3"));
														button_drama_1_mark_3_user_1->setLink(Wt::WLink(""));
														button_drama_1_mark_3_user_1->clicked().connect(button_drama_1_mark_3_user_1, &Wt::WPushButton::disable);
														button_drama_1_mark_3_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_drama_1_mark_3_user_1->valueText();
															writeFile("1", "4", "3");
														}));
													}
													mark_4_drama_1_user_1 = new Wt::WContainerWidget(mark_drama_1_user_1);
													mark_4_drama_1_user_1->setId("mark_4_drama_1_user_1");
													mark_4_drama_1_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_4_drama_1_user_1->setInline(0);
													mark_4_drama_1_user_1->setHtmlTagName("div");
													{
														button_drama_1_mark_4_user_1 = new Wt::WPushButton(mark_4_drama_1_user_1);
														button_drama_1_mark_4_user_1->setId("button_drama_1_mark_4_user_1");
														button_drama_1_mark_4_user_1->setStyleClass(Wt::WString::fromUTF8(" btn-info btn btn-group with-label"));
														button_drama_1_mark_4_user_1->setInline(1);
														button_drama_1_mark_4_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_1_mark_4_user_1->setText(Wt::WString::fromUTF8("4"));
														button_drama_1_mark_4_user_1->setLink(Wt::WLink(""));
														button_drama_1_mark_4_user_1->clicked().connect(button_drama_1_mark_4_user_1, &Wt::WPushButton::disable);
														button_drama_1_mark_4_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_drama_1_mark_4_user_1->valueText();
															writeFile("1", "4", "4");
														}));
													}
													mark_5_drama_1_user_1 = new Wt::WContainerWidget(mark_drama_1_user_1);
													mark_5_drama_1_user_1->setId("mark_5_drama_1_user_1");
													mark_5_drama_1_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_5_drama_1_user_1->setInline(0);
													mark_5_drama_1_user_1->setHtmlTagName("div");
													{
														button_drama_1_mark_5_user_1 = new Wt::WPushButton(mark_5_drama_1_user_1);
														button_drama_1_mark_5_user_1->setId("button_drama_1_mark_5_user_1");
														button_drama_1_mark_5_user_1->setStyleClass(Wt::WString::fromUTF8(" btn btn-group with-label btn-success"));
														button_drama_1_mark_5_user_1->setInline(1);
														button_drama_1_mark_5_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_1_mark_5_user_1->setText(Wt::WString::fromUTF8("5"));
														button_drama_1_mark_5_user_1->setLink(Wt::WLink(""));
														button_drama_1_mark_5_user_1->clicked().connect(button_drama_1_mark_5_user_1, &Wt::WPushButton::disable);
														button_drama_1_mark_5_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_drama_1_mark_5_user_1->valueText();
															writeFile("1", "4", "5");
														}));
													}
												}
											}
											drama_2_user_1 = new Wt::WContainerWidget(container_drama_user_1);
											drama_2_user_1->setId("drama_2_user_1");
											drama_2_user_1->setStyleClass(Wt::WString::fromUTF8(" btn-group"));
											drama_2_user_1->setInline(0);
											drama_2_user_1->setHtmlTagName("div");
											{
												drama_image_2_user_1 = new Wt::WImage(drama_2_user_1);
												drama_image_2_user_1->setId("drama_image_2_user_1");
												drama_image_2_user_1->setStyleClass(Wt::WString::fromUTF8("center-block"));
												drama_image_2_user_1->setInline(0);
												drama_image_2_user_1->setImageLink(Wt::WLink("http://img.dotua.org/fsua_items/cover/00/40/52/10/00405214.jpg"));
												watch_drama_2_user_1 = new Wt::WPushButton(drama_2_user_1);
												watch_drama_2_user_1->setId("watch_drama_2_user_1");
												watch_drama_2_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default with-label btn-success center-block"));
												watch_drama_2_user_1->setInline(1);
												watch_drama_2_user_1->setEmptyText(Wt::WString::fromUTF8(""));
												watch_drama_2_user_1->setText(Wt::WString::fromUTF8("Watch"));
												watch_drama_2_user_1->setLink(Wt::WLink("http://www.ex.ua/show/133560114/7f126915aca218eaa77915d19759d185.mp4"));
												rating_drama_2_user_1 = new Wt::WPushButton(drama_2_user_1);
												rating_drama_2_user_1->setId("rating_drama_2_user_1");
												rating_drama_2_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-warning with-label center-block"));
												rating_drama_2_user_1->setInline(1);
												rating_drama_2_user_1->setEmptyText(Wt::WString::fromUTF8(""));
												rating_drama_2_user_1->setText(Wt::WString::fromUTF8("Rating"));
												rating_drama_2_user_1->setLink(Wt::WLink("http://www.kinopoisk.ru/film/448/"));
												mark_drama_2_user_1 = new Wt::WContainerWidget(drama_2_user_1);
												mark_drama_2_user_1->setId("mark_drama_2_user_1");
												mark_drama_2_user_1->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
												mark_drama_2_user_1->setInline(0);
												mark_drama_2_user_1->setHtmlTagName("div");
												{
													mark_1_drama_2_user_1 = new Wt::WContainerWidget(mark_drama_2_user_1);
													mark_1_drama_2_user_1->setId("mark_1_drama_2_user_1");
													mark_1_drama_2_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_1_drama_2_user_1->setInline(0);
													mark_1_drama_2_user_1->setHtmlTagName("div");
													{
														button_drama_2_mark_1_user_1 = new Wt::WPushButton(mark_1_drama_2_user_1);
														button_drama_2_mark_1_user_1->setId("button_drama_2_mark_1_user_1");
														button_drama_2_mark_1_user_1->setStyleClass(Wt::WString::fromUTF8(" btn btn-danger btn-group with-label"));
														button_drama_2_mark_1_user_1->setInline(1);
														button_drama_2_mark_1_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_2_mark_1_user_1->setText(Wt::WString::fromUTF8("1"));
														button_drama_2_mark_1_user_1->setLink(Wt::WLink(""));
														button_drama_2_mark_1_user_1->clicked().connect(button_drama_2_mark_1_user_1, &Wt::WPushButton::disable);
														button_drama_2_mark_1_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_drama_2_mark_1_user_1->valueText();
															writeFile("1", "5", "1");
														}));
													}
													mark_2_drama_2_user_1 = new Wt::WContainerWidget(mark_drama_2_user_1);
													mark_2_drama_2_user_1->setId("mark_2_drama_2_user_1");
													mark_2_drama_2_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_2_drama_2_user_1->setInline(0);
													mark_2_drama_2_user_1->setHtmlTagName("div");
													{
														button_drama_2_mark_2_user_1 = new Wt::WPushButton(mark_2_drama_2_user_1);
														button_drama_2_mark_2_user_1->setId("button_drama_2_mark_2_user_1");
														button_drama_2_mark_2_user_1->setStyleClass(Wt::WString::fromUTF8(" btn btn-warning btn-group with-label"));
														button_drama_2_mark_2_user_1->setInline(1);
														button_drama_2_mark_2_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_2_mark_2_user_1->setText(Wt::WString::fromUTF8("2"));
														button_drama_2_mark_2_user_1->setLink(Wt::WLink(""));
														button_drama_2_mark_2_user_1->clicked().connect(button_drama_2_mark_2_user_1, &Wt::WPushButton::disable);
														button_drama_2_mark_2_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_drama_2_mark_2_user_1->valueText();
															writeFile("1", "5", "2");
														}));
													}
													mark_3_drama_2_user_1 = new Wt::WContainerWidget(mark_drama_2_user_1);
													mark_3_drama_2_user_1->setId("mark_3_drama_2_user_1");
													mark_3_drama_2_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_3_drama_2_user_1->setInline(0);
													mark_3_drama_2_user_1->setHtmlTagName("div");
													{
														button_drama_2_mark_3_user_1 = new Wt::WPushButton(mark_3_drama_2_user_1);
														button_drama_2_mark_3_user_1->setId("button_drama_2_mark_3_user_1");
														button_drama_2_mark_3_user_1->setStyleClass(Wt::WString::fromUTF8("btn-primary  btn btn-group with-label"));
														button_drama_2_mark_3_user_1->setInline(1);
														button_drama_2_mark_3_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_2_mark_3_user_1->setText(Wt::WString::fromUTF8("3"));
														button_drama_2_mark_3_user_1->setLink(Wt::WLink(""));
														button_drama_2_mark_3_user_1->clicked().connect(button_drama_2_mark_3_user_1, &Wt::WPushButton::disable);
														button_drama_2_mark_3_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_drama_2_mark_3_user_1->valueText();
															writeFile("1", "5", "3");
														}));
													}
													mark_4_drama_2_user_1 = new Wt::WContainerWidget(mark_drama_2_user_1);
													mark_4_drama_2_user_1->setId("mark_4_drama_2_user_1");
													mark_4_drama_2_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_4_drama_2_user_1->setInline(0);
													mark_4_drama_2_user_1->setHtmlTagName("div");
													{
														button_drama_2_mark_4_user_1 = new Wt::WPushButton(mark_4_drama_2_user_1);
														button_drama_2_mark_4_user_1->setId("button_drama_2_mark_4_user_1");
														button_drama_2_mark_4_user_1->setStyleClass(Wt::WString::fromUTF8(" btn-info btn btn-group with-label"));
														button_drama_2_mark_4_user_1->setInline(1);
														button_drama_2_mark_4_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_2_mark_4_user_1->setText(Wt::WString::fromUTF8("4"));
														button_drama_2_mark_4_user_1->setLink(Wt::WLink(""));
														button_drama_2_mark_4_user_1->clicked().connect(button_drama_2_mark_4_user_1, &Wt::WPushButton::disable);
														button_drama_2_mark_4_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_drama_2_mark_4_user_1->valueText();
															writeFile("1", "5", "4");
														}));
													}
													mark_5_drama_2_user_1 = new Wt::WContainerWidget(mark_drama_2_user_1);
													mark_5_drama_2_user_1->setId("mark_5_drama_2_user_1");
													mark_5_drama_2_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_5_drama_2_user_1->setInline(0);
													mark_5_drama_2_user_1->setHtmlTagName("div");
													{
														button_drama_2_mark_5_user_1 = new Wt::WPushButton(mark_5_drama_2_user_1);
														button_drama_2_mark_5_user_1->setId("button_drama_2_mark_5_user_1");
														button_drama_2_mark_5_user_1->setStyleClass(Wt::WString::fromUTF8(" btn btn-group with-label btn-success"));
														button_drama_2_mark_5_user_1->setInline(1);
														button_drama_2_mark_5_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_2_mark_5_user_1->setText(Wt::WString::fromUTF8("5"));
														button_drama_2_mark_5_user_1->setLink(Wt::WLink(""));
														button_drama_2_mark_5_user_1->clicked().connect(button_drama_2_mark_5_user_1, &Wt::WPushButton::disable);
														button_drama_2_mark_5_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_drama_2_mark_5_user_1->valueText();
															writeFile("1", "5", "5");
														}));
													}
												}
											}
											drama_3_user_1 = new Wt::WContainerWidget(container_drama_user_1);
											drama_3_user_1->setId("drama_3_user_1");
											drama_3_user_1->setStyleClass(Wt::WString::fromUTF8(" btn-group"));
											drama_3_user_1->setInline(0);
											drama_3_user_1->setHtmlTagName("div");
											{
												drama_image_3_user_1 = new Wt::WImage(drama_3_user_1);
												drama_image_3_user_1->setId("drama_image_3_user_1");
												drama_image_3_user_1->setStyleClass(Wt::WString::fromUTF8("center-block"));
												drama_image_3_user_1->setInline(0);
												drama_image_3_user_1->setImageLink(Wt::WLink("http://img.dotua.org/fsua_items/cover/00/20/75/10/00207568.jpg"));
												watch_drama_3_user_1 = new Wt::WPushButton(drama_3_user_1);
												watch_drama_3_user_1->setId("watch_drama_3_user_1");
												watch_drama_3_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default with-label btn-success center-block"));
												watch_drama_3_user_1->setInline(1);
												watch_drama_3_user_1->setEmptyText(Wt::WString::fromUTF8(""));
												watch_drama_3_user_1->setText(Wt::WString::fromUTF8("Watch"));
												watch_drama_3_user_1->setLink(Wt::WLink("http://fs66.www.ex.ua/show/2f54492f0a828f0f260ab55aa660cc85/62023/2f54492f0a828f0f260ab55aa660cc85.mp4"));
												rating_drama_3_user_1 = new Wt::WPushButton(drama_3_user_1);
												rating_drama_3_user_1->setId("rating_drama_3_user_1");
												rating_drama_3_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-warning with-label center-block"));
												rating_drama_3_user_1->setInline(1);
												rating_drama_3_user_1->setEmptyText(Wt::WString::fromUTF8(""));
												rating_drama_3_user_1->setText(Wt::WString::fromUTF8("Rating"));
												rating_drama_3_user_1->setLink(Wt::WLink("http://www.kinopoisk.ru/film/519/"));
												mark_drama_3_user_1 = new Wt::WContainerWidget(drama_3_user_1);
												mark_drama_3_user_1->setId("mark_drama_3_user_1");
												mark_drama_3_user_1->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
												mark_drama_3_user_1->setInline(0);
												mark_drama_3_user_1->setHtmlTagName("div");
												{
													mark_1_drama_3_user_1 = new Wt::WContainerWidget(mark_drama_3_user_1);
													mark_1_drama_3_user_1->setId("mark_1_drama_3_user_1");
													mark_1_drama_3_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_1_drama_3_user_1->setInline(0);
													mark_1_drama_3_user_1->setHtmlTagName("div");
													{
														button_drama_3_mark_1_user_1 = new Wt::WPushButton(mark_1_drama_3_user_1);
														button_drama_3_mark_1_user_1->setId("button_drama_3_mark_1_user_1");
														button_drama_3_mark_1_user_1->setStyleClass(Wt::WString::fromUTF8(" btn btn-danger btn-group with-label"));
														button_drama_3_mark_1_user_1->setInline(1);
														button_drama_3_mark_1_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_3_mark_1_user_1->setText(Wt::WString::fromUTF8("1"));
														button_drama_3_mark_1_user_1->setLink(Wt::WLink(""));
														button_drama_3_mark_1_user_1->clicked().connect(button_drama_3_mark_1_user_1, &Wt::WPushButton::disable);
														button_drama_3_mark_1_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_drama_3_mark_1_user_1->valueText();
															writeFile("1", "6", "1");
														}));
													}
													mark_2_drama_3_user_1 = new Wt::WContainerWidget(mark_drama_3_user_1);
													mark_2_drama_3_user_1->setId("mark_2_drama_3_user_1");
													mark_2_drama_3_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_2_drama_3_user_1->setInline(0);
													mark_2_drama_3_user_1->setHtmlTagName("div");
													{
														button_drama_3_mark_2_user_1 = new Wt::WPushButton(mark_2_drama_3_user_1);
														button_drama_3_mark_2_user_1->setId("button_drama_3_mark_2_user_1");
														button_drama_3_mark_2_user_1->setStyleClass(Wt::WString::fromUTF8(" btn btn-warning btn-group with-label"));
														button_drama_3_mark_2_user_1->setInline(1);
														button_drama_3_mark_2_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_3_mark_2_user_1->setText(Wt::WString::fromUTF8("2"));
														button_drama_3_mark_2_user_1->setLink(Wt::WLink(""));
														button_drama_3_mark_2_user_1->clicked().connect(button_drama_3_mark_2_user_1, &Wt::WPushButton::disable);
														button_drama_3_mark_2_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_drama_3_mark_2_user_1->valueText();
															writeFile("1", "6", "2");
														}));
													}
													mark_3_drama_3_user_1 = new Wt::WContainerWidget(mark_drama_3_user_1);
													mark_3_drama_3_user_1->setId("mark_3_drama_3_user_1");
													mark_3_drama_3_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_3_drama_3_user_1->setInline(0);
													mark_3_drama_3_user_1->setHtmlTagName("div");
													{
														button_drama_3_mark_3_user_1 = new Wt::WPushButton(mark_3_drama_3_user_1);
														button_drama_3_mark_3_user_1->setId("button_drama_3_mark_3_user_1");
														button_drama_3_mark_3_user_1->setStyleClass(Wt::WString::fromUTF8("btn-primary  btn btn-group with-label"));
														button_drama_3_mark_3_user_1->setInline(1);
														button_drama_3_mark_3_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_3_mark_3_user_1->setText(Wt::WString::fromUTF8("3"));
														button_drama_3_mark_3_user_1->setLink(Wt::WLink(""));
														button_drama_3_mark_3_user_1->clicked().connect(button_drama_3_mark_3_user_1, &Wt::WPushButton::disable);
														button_drama_3_mark_3_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_drama_3_mark_3_user_1->valueText();
															writeFile("1", "6", "3");
														}));
													}
													mark_4_drama_3_user_1 = new Wt::WContainerWidget(mark_drama_3_user_1);
													mark_4_drama_3_user_1->setId("mark_4_drama_3_user_1");
													mark_4_drama_3_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_4_drama_3_user_1->setInline(0);
													mark_4_drama_3_user_1->setHtmlTagName("div");
													{
														button_drama_3_mark_4_user_1 = new Wt::WPushButton(mark_4_drama_3_user_1);
														button_drama_3_mark_4_user_1->setId("button_drama_3_mark_4_user_1");
														button_drama_3_mark_4_user_1->setStyleClass(Wt::WString::fromUTF8(" btn-info btn btn-group with-label"));
														button_drama_3_mark_4_user_1->setInline(1);
														button_drama_3_mark_4_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_3_mark_4_user_1->setText(Wt::WString::fromUTF8("4"));
														button_drama_3_mark_4_user_1->setLink(Wt::WLink(""));
														button_drama_3_mark_4_user_1->clicked().connect(button_drama_3_mark_4_user_1, &Wt::WPushButton::disable);
														button_drama_3_mark_4_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_drama_3_mark_4_user_1->valueText();
															writeFile("1", "6", "4");
														}));
													}
													mark_5_drama_3_user_1 = new Wt::WContainerWidget(mark_drama_3_user_1);
													mark_5_drama_3_user_1->setId("mark_5_drama_3_user_1");
													mark_5_drama_3_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_5_drama_3_user_1->setInline(0);
													mark_5_drama_3_user_1->setHtmlTagName("div");
													{
														button_drama_3_mark_5_user_1 = new Wt::WPushButton(mark_5_drama_3_user_1);
														button_drama_3_mark_5_user_1->setId("button_drama_3_mark_5_user_1");
														button_drama_3_mark_5_user_1->setStyleClass(Wt::WString::fromUTF8(" btn btn-group with-label btn-success"));
														button_drama_3_mark_5_user_1->setInline(1);
														button_drama_3_mark_5_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_3_mark_5_user_1->setText(Wt::WString::fromUTF8("5"));
														button_drama_3_mark_5_user_1->setLink(Wt::WLink(""));
														button_drama_3_mark_5_user_1->clicked().connect(button_drama_3_mark_5_user_1, &Wt::WPushButton::disable);
														button_drama_3_mark_5_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_drama_3_mark_5_user_1->valueText();
															writeFile("1", "6", "5");
														}));
													}
												}
											}
										}
									}
									horror_user_1 = new Wt::WContainerWidget(container_films_1);
									horror_user_1_mi = menu_user_1->addItem(Wt::WString("Horror"), horror_user_1);
									horror_user_1->setId("horror_user_1");
									horror_user_1->setStyleClass(Wt::WString::fromUTF8(""));
									horror_user_1->setInline(0);
									menu_user_1->setItemDisabled(2, 0);
									menu_user_1->setItemHidden(2, 0);
									{
										container_horror_user_1 = new Wt::WContainerWidget(horror_user_1);
										container_horror_user_1->setId("container_horror_user_1");
										container_horror_user_1->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
										container_horror_user_1->setInline(0);
										container_horror_user_1->setHtmlTagName("div");
										{
											horror_1_user_1 = new Wt::WContainerWidget(container_horror_user_1);
											horror_1_user_1->setId("horror_1_user_1");
											horror_1_user_1->setStyleClass(Wt::WString::fromUTF8(" btn-group"));
											horror_1_user_1->setInline(0);
											horror_1_user_1->setHtmlTagName("div");
											{
												horror_image_1_user_1 = new Wt::WImage(horror_1_user_1);
												horror_image_1_user_1->setId("horror_image_1_user_1");
												horror_image_1_user_1->setStyleClass(Wt::WString::fromUTF8("center-block"));
												horror_image_1_user_1->setInline(0);
												horror_image_1_user_1->setImageLink(Wt::WLink("http://img.dotua.org/fsua_items/cover/00/42/35/10/00423560.jpg"));
												watch_horror_1_user_1 = new Wt::WPushButton(horror_1_user_1);
												watch_horror_1_user_1->setId("watch_horror_1_user_1");
												watch_horror_1_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default with-label btn-success center-block"));
												watch_horror_1_user_1->setInline(1);
												watch_horror_1_user_1->setEmptyText(Wt::WString::fromUTF8(""));
												watch_horror_1_user_1->setText(Wt::WString::fromUTF8("Watch"));
												watch_horror_1_user_1->setLink(Wt::WLink("http://fs213.www.ex.ua/show/79fe30f4355edf31282fce0cb5b44115/4266267/79fe30f4355edf31282fce0cb5b44115.mp4"));
												rating_horror_1_user_1 = new Wt::WPushButton(horror_1_user_1);
												rating_horror_1_user_1->setId("rating_horror_1_user_1");
												rating_horror_1_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-warning with-label center-block"));
												rating_horror_1_user_1->setInline(1);
												rating_horror_1_user_1->setEmptyText(Wt::WString::fromUTF8(""));
												rating_horror_1_user_1->setText(Wt::WString::fromUTF8("Rating"));
												rating_horror_1_user_1->setLink(Wt::WLink("http://www.kinopoisk.ru/film/87179/"));
												mark_horror_1_user_1 = new Wt::WContainerWidget(horror_1_user_1);
												mark_horror_1_user_1->setId("mark_horror_1_user_1");
												mark_horror_1_user_1->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
												mark_horror_1_user_1->setInline(0);
												mark_horror_1_user_1->setHtmlTagName("div");
												{
													mark_1_horror_1_user_1 = new Wt::WContainerWidget(mark_horror_1_user_1);
													mark_1_horror_1_user_1->setId("mark_1_horror_1_user_1");
													mark_1_horror_1_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_1_horror_1_user_1->setInline(0);
													mark_1_horror_1_user_1->setHtmlTagName("div");
													{
														button_horror_1_mark_1_user_1 = new Wt::WPushButton(mark_1_horror_1_user_1);
														button_horror_1_mark_1_user_1->setId("button_horror_1_mark_1_user_1");
														button_horror_1_mark_1_user_1->setStyleClass(Wt::WString::fromUTF8(" btn btn-danger btn-group with-label"));
														button_horror_1_mark_1_user_1->setInline(1);
														button_horror_1_mark_1_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_1_mark_1_user_1->setText(Wt::WString::fromUTF8("1"));
														button_horror_1_mark_1_user_1->setLink(Wt::WLink(""));
														button_horror_1_mark_1_user_1->clicked().connect(button_horror_1_mark_1_user_1, &Wt::WPushButton::disable);
														button_horror_1_mark_1_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_horror_1_mark_1_user_1->valueText();
															writeFile("1", "7", "1");
														}));
													}
													mark_2_horror_1_user_1 = new Wt::WContainerWidget(mark_horror_1_user_1);
													mark_2_horror_1_user_1->setId("mark_2_horror_1_user_1");
													mark_2_horror_1_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_2_horror_1_user_1->setInline(0);
													mark_2_horror_1_user_1->setHtmlTagName("div");
													{
														button_horror_1_mark_2_user_1 = new Wt::WPushButton(mark_2_horror_1_user_1);
														button_horror_1_mark_2_user_1->setId("button_horror_1_mark_2_user_1");
														button_horror_1_mark_2_user_1->setStyleClass(Wt::WString::fromUTF8(" btn btn-warning btn-group with-label"));
														button_horror_1_mark_2_user_1->setInline(1);
														button_horror_1_mark_2_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_1_mark_2_user_1->setText(Wt::WString::fromUTF8("2"));
														button_horror_1_mark_2_user_1->setLink(Wt::WLink(""));
														button_horror_1_mark_2_user_1->clicked().connect(button_horror_1_mark_2_user_1, &Wt::WPushButton::disable);
														button_horror_1_mark_2_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_horror_1_mark_2_user_1->valueText();
															writeFile("1", "7", "2");
														}));
													}
													mark_3_horror_1_user_1 = new Wt::WContainerWidget(mark_horror_1_user_1);
													mark_3_horror_1_user_1->setId("mark_3_horror_1_user_1");
													mark_3_horror_1_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_3_horror_1_user_1->setInline(0);
													mark_3_horror_1_user_1->setHtmlTagName("div");
													{
														button_horror_1_mark_3_user_1 = new Wt::WPushButton(mark_3_horror_1_user_1);
														button_horror_1_mark_3_user_1->setId("button_horror_1_mark_3_user_1");
														button_horror_1_mark_3_user_1->setStyleClass(Wt::WString::fromUTF8("btn-primary  btn btn-group with-label"));
														button_horror_1_mark_3_user_1->setInline(1);
														button_horror_1_mark_3_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_1_mark_3_user_1->setText(Wt::WString::fromUTF8("3"));
														button_horror_1_mark_3_user_1->setLink(Wt::WLink(""));
														button_horror_1_mark_3_user_1->clicked().connect(button_horror_1_mark_3_user_1, &Wt::WPushButton::disable);
														button_horror_1_mark_3_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_horror_1_mark_3_user_1->valueText();
															writeFile("1", "1", "3");
														}));
													}
													mark_4_horror_1_user_1 = new Wt::WContainerWidget(mark_horror_1_user_1);
													mark_4_horror_1_user_1->setId("mark_4_horror_1_user_1");
													mark_4_horror_1_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_4_horror_1_user_1->setInline(0);
													mark_4_horror_1_user_1->setHtmlTagName("div");
													{
														button_horror_1_mark_4_user_1 = new Wt::WPushButton(mark_4_horror_1_user_1);
														button_horror_1_mark_4_user_1->setId("button_horror_1_mark_4_user_1");
														button_horror_1_mark_4_user_1->setStyleClass(Wt::WString::fromUTF8(" btn-info btn btn-group with-label"));
														button_horror_1_mark_4_user_1->setInline(1);
														button_horror_1_mark_4_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_1_mark_4_user_1->setText(Wt::WString::fromUTF8("4"));
														button_horror_1_mark_4_user_1->setLink(Wt::WLink(""));
														button_horror_1_mark_4_user_1->clicked().connect(button_horror_1_mark_4_user_1, &Wt::WPushButton::disable);
														button_horror_1_mark_4_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_horror_1_mark_4_user_1->valueText();
															writeFile("1", "7", "4");
														}));
													}
													mark_5_horror_1_user_1 = new Wt::WContainerWidget(mark_horror_1_user_1);
													mark_5_horror_1_user_1->setId("mark_5_horror_1_user_1");
													mark_5_horror_1_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_5_horror_1_user_1->setInline(0);
													mark_5_horror_1_user_1->setHtmlTagName("div");
													{
														button_horror_1_mark_5_user_1 = new Wt::WPushButton(mark_5_horror_1_user_1);
														button_horror_1_mark_5_user_1->setId("button_horror_1_mark_5_user_1");
														button_horror_1_mark_5_user_1->setStyleClass(Wt::WString::fromUTF8(" btn btn-group with-label btn-success"));
														button_horror_1_mark_5_user_1->setInline(1);
														button_horror_1_mark_5_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_1_mark_5_user_1->setText(Wt::WString::fromUTF8("5"));
														button_horror_1_mark_5_user_1->setLink(Wt::WLink(""));
														button_horror_1_mark_5_user_1->clicked().connect(button_horror_1_mark_5_user_1, &Wt::WPushButton::disable);
														button_horror_1_mark_5_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_horror_1_mark_5_user_1->valueText();
															writeFile("1", "7", "5");
														}));
													}
												}
											}
											horror_2_user_1 = new Wt::WContainerWidget(container_horror_user_1);
											horror_2_user_1->setId("horror_2_user_1");
											horror_2_user_1->setStyleClass(Wt::WString::fromUTF8(" btn-group"));
											horror_2_user_1->setInline(0);
											horror_2_user_1->setHtmlTagName("div");
											{
												horror_image_2_user_1 = new Wt::WImage(horror_2_user_1);
												horror_image_2_user_1->setId("horror_image_2_user_1");
												horror_image_2_user_1->setStyleClass(Wt::WString::fromUTF8("center-block"));
												horror_image_2_user_1->setInline(0);
												horror_image_2_user_1->setImageLink(Wt::WLink("http://img.dotua.org/fsua_items/cover/00/14/58/10/00145883.jpg"));
												watch_horror_2_user_1 = new Wt::WPushButton(horror_2_user_1);
												watch_horror_2_user_1->setId("watch_horror_2_user_1");
												watch_horror_2_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default with-label btn-success center-block"));
												watch_horror_2_user_1->setInline(1);
												watch_horror_2_user_1->setEmptyText(Wt::WString::fromUTF8(""));
												watch_horror_2_user_1->setText(Wt::WString::fromUTF8("Watch"));
												watch_horror_2_user_1->setLink(Wt::WLink("http://fs145.www.ex.ua/show/4450bba7e9c69222a3f02b6752483fe6/152133418/4450bba7e9c69222a3f02b6752483fe6.mp4"));
												rating_horror_2_user_1 = new Wt::WPushButton(horror_2_user_1);
												rating_horror_2_user_1->setId("rating_horror_2_user_1");
												rating_horror_2_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-warning with-label center-block"));
												rating_horror_2_user_1->setInline(1);
												rating_horror_2_user_1->setEmptyText(Wt::WString::fromUTF8(""));
												rating_horror_2_user_1->setText(Wt::WString::fromUTF8("Rating"));
												rating_horror_2_user_1->setLink(Wt::WLink("http://www.kinopoisk.ru/film/345/"));
												mark_horror_2_user_1 = new Wt::WContainerWidget(horror_2_user_1);
												mark_horror_2_user_1->setId("mark_horror_2_user_1");
												mark_horror_2_user_1->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
												mark_horror_2_user_1->setInline(0);
												mark_horror_2_user_1->setHtmlTagName("div");
												{
													mark_1_horror_2_user_1 = new Wt::WContainerWidget(mark_horror_2_user_1);
													mark_1_horror_2_user_1->setId("mark_1_horror_2_user_1");
													mark_1_horror_2_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_1_horror_2_user_1->setInline(0);
													mark_1_horror_2_user_1->setHtmlTagName("div");
													{
														button_horror_2_mark_1_user_1 = new Wt::WPushButton(mark_1_horror_2_user_1);
														button_horror_2_mark_1_user_1->setId("button_horror_2_mark_1_user_1");
														button_horror_2_mark_1_user_1->setStyleClass(Wt::WString::fromUTF8(" btn btn-danger btn-group with-label"));
														button_horror_2_mark_1_user_1->setInline(1);
														button_horror_2_mark_1_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_2_mark_1_user_1->setText(Wt::WString::fromUTF8("1"));
														button_horror_2_mark_1_user_1->setLink(Wt::WLink(""));
														button_horror_2_mark_1_user_1->clicked().connect(button_horror_2_mark_1_user_1, &Wt::WPushButton::disable);
														button_horror_2_mark_1_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_horror_2_mark_1_user_1->valueText();
															writeFile("1", "8", "1");
														}));
													}
													mark_2_horror_2_user_1 = new Wt::WContainerWidget(mark_horror_2_user_1);
													mark_2_horror_2_user_1->setId("mark_2_horror_2_user_1");
													mark_2_horror_2_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_2_horror_2_user_1->setInline(0);
													mark_2_horror_2_user_1->setHtmlTagName("div");
													{
														button_horror_2_mark_2_user_1 = new Wt::WPushButton(mark_2_horror_2_user_1);
														button_horror_2_mark_2_user_1->setId("button_horror_2_mark_2_user_1");
														button_horror_2_mark_2_user_1->setStyleClass(Wt::WString::fromUTF8(" btn btn-warning btn-group with-label"));
														button_horror_2_mark_2_user_1->setInline(1);
														button_horror_2_mark_2_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_2_mark_2_user_1->setText(Wt::WString::fromUTF8("2"));
														button_horror_2_mark_2_user_1->setLink(Wt::WLink(""));
														button_horror_2_mark_2_user_1->clicked().connect(button_horror_2_mark_2_user_1, &Wt::WPushButton::disable);
														button_horror_2_mark_2_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_horror_2_mark_2_user_1->valueText();
															writeFile("1", "8", "2");
														}));
													}
													mark_3_horror_2_user_1 = new Wt::WContainerWidget(mark_horror_2_user_1);
													mark_3_horror_2_user_1->setId("mark_3_horror_2_user_1");
													mark_3_horror_2_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_3_horror_2_user_1->setInline(0);
													mark_3_horror_2_user_1->setHtmlTagName("div");
													{
														button_horror_2_mark_3_user_1 = new Wt::WPushButton(mark_3_horror_2_user_1);
														button_horror_2_mark_3_user_1->setId("button_horror_2_mark_3_user_1");
														button_horror_2_mark_3_user_1->setStyleClass(Wt::WString::fromUTF8("btn-primary  btn btn-group with-label"));
														button_horror_2_mark_3_user_1->setInline(1);
														button_horror_2_mark_3_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_2_mark_3_user_1->setText(Wt::WString::fromUTF8("3"));
														button_horror_2_mark_3_user_1->setLink(Wt::WLink(""));
														button_horror_2_mark_3_user_1->clicked().connect(button_horror_2_mark_3_user_1, &Wt::WPushButton::disable);
														button_horror_2_mark_3_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_horror_2_mark_3_user_1->valueText();
															writeFile("1", "8", "3");
														}));
													}
													mark_4_horror_2_user_1 = new Wt::WContainerWidget(mark_horror_2_user_1);
													mark_4_horror_2_user_1->setId("mark_4_horror_2_user_1");
													mark_4_horror_2_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_4_horror_2_user_1->setInline(0);
													mark_4_horror_2_user_1->setHtmlTagName("div");
													{
														button_horror_2_mark_4_user_1 = new Wt::WPushButton(mark_4_horror_2_user_1);
														button_horror_2_mark_4_user_1->setId("button_horror_2_mark_4_user_1");
														button_horror_2_mark_4_user_1->setStyleClass(Wt::WString::fromUTF8(" btn-info btn btn-group with-label"));
														button_horror_2_mark_4_user_1->setInline(1);
														button_horror_2_mark_4_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_2_mark_4_user_1->setText(Wt::WString::fromUTF8("4"));
														button_horror_2_mark_4_user_1->setLink(Wt::WLink(""));
														button_horror_2_mark_4_user_1->clicked().connect(button_horror_2_mark_4_user_1, &Wt::WPushButton::disable);
														button_horror_2_mark_4_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_horror_2_mark_4_user_1->valueText();
															writeFile("1", "8", "4");
														}));
													}
													mark_5_horror_2_user_1 = new Wt::WContainerWidget(mark_horror_2_user_1);
													mark_5_horror_2_user_1->setId("mark_5_horror_2_user_1");
													mark_5_horror_2_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_5_horror_2_user_1->setInline(0);
													mark_5_horror_2_user_1->setHtmlTagName("div");
													{
														button_horror_2_mark_5_user_1 = new Wt::WPushButton(mark_5_horror_2_user_1);
														button_horror_2_mark_5_user_1->setId("button_horror_2_mark_5_user_1");
														button_horror_2_mark_5_user_1->setStyleClass(Wt::WString::fromUTF8(" btn btn-group with-label btn-success"));
														button_horror_2_mark_5_user_1->setInline(1);
														button_horror_2_mark_5_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_2_mark_5_user_1->setText(Wt::WString::fromUTF8("5"));
														button_horror_2_mark_5_user_1->setLink(Wt::WLink(""));
														button_horror_2_mark_5_user_1->clicked().connect(button_horror_2_mark_5_user_1, &Wt::WPushButton::disable);
														button_horror_2_mark_5_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_horror_2_mark_5_user_1->valueText();
															writeFile("1", "8", "5");
														}));
													}
												}
											}
											horror_3_user_1 = new Wt::WContainerWidget(container_horror_user_1);
											horror_3_user_1->setId("horror_3_user_1");
											horror_3_user_1->setStyleClass(Wt::WString::fromUTF8(" btn-group"));
											horror_3_user_1->setInline(0);
											horror_3_user_1->setHtmlTagName("div");
											{
												horror_image_3_user_1 = new Wt::WImage(horror_3_user_1);
												horror_image_3_user_1->setId("horror_image_3_user_1");
												horror_image_3_user_1->setStyleClass(Wt::WString::fromUTF8("center-block"));
												horror_image_3_user_1->setInline(0);
												horror_image_3_user_1->setImageLink(Wt::WLink("http://img.dotua.org/fsua_items/cover/00/14/01/10/00140147.jpg"));
												watch_horror_3_user_1 = new Wt::WPushButton(horror_3_user_1);
												watch_horror_3_user_1->setId("watch_horror_3_user_1");
												watch_horror_3_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default with-label btn-success center-block"));
												watch_horror_3_user_1->setInline(1);
												watch_horror_3_user_1->setEmptyText(Wt::WString::fromUTF8(""));
												watch_horror_3_user_1->setText(Wt::WString::fromUTF8("Watch"));
												watch_horror_3_user_1->setLink(Wt::WLink("http://fs9.www.ex.ua/show/c6f2d7015bdad96fefa71b6d1f37eadc/87754719/c6f2d7015bdad96fefa71b6d1f37eadc.mp4"));
												rating_horror_3_user_1 = new Wt::WPushButton(horror_3_user_1);
												rating_horror_3_user_1->setId("rating_horror_3_user_1");
												rating_horror_3_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-warning with-label center-block"));
												rating_horror_3_user_1->setInline(1);
												rating_horror_3_user_1->setEmptyText(Wt::WString::fromUTF8(""));
												rating_horror_3_user_1->setText(Wt::WString::fromUTF8("Rating"));
												rating_horror_3_user_1->setLink(Wt::WLink("http://www.kinopoisk.ru/film/64187/"));
												mark_horror_3_user_1 = new Wt::WContainerWidget(horror_3_user_1);
												mark_horror_3_user_1->setId("mark_horror_3_user_1");
												mark_horror_3_user_1->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
												mark_horror_3_user_1->setInline(0);
												mark_horror_3_user_1->setHtmlTagName("div");
												{
													mark_1_horror_3_user_1 = new Wt::WContainerWidget(mark_horror_3_user_1);
													mark_1_horror_3_user_1->setId("mark_1_horror_3_user_1");
													mark_1_horror_3_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_1_horror_3_user_1->setInline(0);
													mark_1_horror_3_user_1->setHtmlTagName("div");
													{
														button_horror_3_mark_1_user_1 = new Wt::WPushButton(mark_1_horror_3_user_1);
														button_horror_3_mark_1_user_1->setId("button_horror_3_mark_1_user_1");
														button_horror_3_mark_1_user_1->setStyleClass(Wt::WString::fromUTF8(" btn btn-danger btn-group with-label"));
														button_horror_3_mark_1_user_1->setInline(1);
														button_horror_3_mark_1_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_3_mark_1_user_1->setText(Wt::WString::fromUTF8("1"));
														button_horror_3_mark_1_user_1->setLink(Wt::WLink(""));
														button_horror_3_mark_1_user_1->clicked().connect(button_horror_3_mark_1_user_1, &Wt::WPushButton::disable);
														button_horror_3_mark_1_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_horror_3_mark_1_user_1->valueText();
															writeFile("1", "9", "1");
														}));
													}
													mark_2_horror_3_user_1 = new Wt::WContainerWidget(mark_horror_3_user_1);
													mark_2_horror_3_user_1->setId("mark_2_horror_3_user_1");
													mark_2_horror_3_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_2_horror_3_user_1->setInline(0);
													mark_2_horror_3_user_1->setHtmlTagName("div");
													{
														button_horror_3_mark_2_user_1 = new Wt::WPushButton(mark_2_horror_3_user_1);
														button_horror_3_mark_2_user_1->setId("button_horror_3_mark_2_user_1");
														button_horror_3_mark_2_user_1->setStyleClass(Wt::WString::fromUTF8(" btn btn-warning btn-group with-label"));
														button_horror_3_mark_2_user_1->setInline(1);
														button_horror_3_mark_2_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_3_mark_2_user_1->setText(Wt::WString::fromUTF8("2"));
														button_horror_3_mark_2_user_1->setLink(Wt::WLink(""));
														button_horror_3_mark_2_user_1->clicked().connect(button_horror_3_mark_2_user_1, &Wt::WPushButton::disable);
														button_horror_3_mark_2_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_horror_3_mark_2_user_1->valueText();
															writeFile("1", "9", "2");
														}));
													}
													mark_3_horror_3_user_1 = new Wt::WContainerWidget(mark_horror_3_user_1);
													mark_3_horror_3_user_1->setId("mark_3_horror_3_user_1");
													mark_3_horror_3_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_3_horror_3_user_1->setInline(0);
													mark_3_horror_3_user_1->setHtmlTagName("div");
													{
														button_horror_3_mark_3_user_1 = new Wt::WPushButton(mark_3_horror_3_user_1);
														button_horror_3_mark_3_user_1->setId("button_horror_3_mark_3_user_1");
														button_horror_3_mark_3_user_1->setStyleClass(Wt::WString::fromUTF8("btn-primary  btn btn-group with-label"));
														button_horror_3_mark_3_user_1->setInline(1);
														button_horror_3_mark_3_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_3_mark_3_user_1->setText(Wt::WString::fromUTF8("3"));
														button_horror_3_mark_3_user_1->setLink(Wt::WLink(""));
														button_horror_3_mark_3_user_1->clicked().connect(button_horror_3_mark_3_user_1, &Wt::WPushButton::disable);
														button_horror_3_mark_3_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_horror_3_mark_3_user_1->valueText();
															writeFile("1", "9", "3");
														}));
													}
													mark_4_horror_3_user_1 = new Wt::WContainerWidget(mark_horror_3_user_1);
													mark_4_horror_3_user_1->setId("mark_4_horror_3_user_1");
													mark_4_horror_3_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_4_horror_3_user_1->setInline(0);
													mark_4_horror_3_user_1->setHtmlTagName("div");
													{
														button_horror_3_mark_4_user_1 = new Wt::WPushButton(mark_4_horror_3_user_1);
														button_horror_3_mark_4_user_1->setId("button_horror_3_mark_4_user_1");
														button_horror_3_mark_4_user_1->setStyleClass(Wt::WString::fromUTF8(" btn-info btn btn-group with-label"));
														button_horror_3_mark_4_user_1->setInline(1);
														button_horror_3_mark_4_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_3_mark_4_user_1->setText(Wt::WString::fromUTF8("4"));
														button_horror_3_mark_4_user_1->setLink(Wt::WLink(""));
														button_horror_3_mark_4_user_1->clicked().connect(button_horror_3_mark_4_user_1, &Wt::WPushButton::disable);
														button_horror_3_mark_4_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_horror_3_mark_4_user_1->valueText();
															writeFile("1", "9", "4");
														}));
													}
													mark_5_horror_3_user_1 = new Wt::WContainerWidget(mark_horror_3_user_1);
													mark_5_horror_3_user_1->setId("mark_5_horror_3_user_1");
													mark_5_horror_3_user_1->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_5_horror_3_user_1->setInline(0);
													mark_5_horror_3_user_1->setHtmlTagName("div");
													{
														button_horror_3_mark_5_user_1 = new Wt::WPushButton(mark_5_horror_3_user_1);
														button_horror_3_mark_5_user_1->setId("button_horror_3_mark_5_user_1");
														button_horror_3_mark_5_user_1->setStyleClass(Wt::WString::fromUTF8(" btn btn-group with-label btn-success"));
														button_horror_3_mark_5_user_1->setInline(1);
														button_horror_3_mark_5_user_1->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_3_mark_5_user_1->setText(Wt::WString::fromUTF8("5"));
														button_horror_3_mark_5_user_1->setLink(Wt::WLink(""));
														button_horror_3_mark_5_user_1->clicked().connect(button_horror_3_mark_5_user_1, &Wt::WPushButton::disable);
														button_horror_3_mark_5_user_1->clicked().connect(std::bind([=]() {
															std::cout << button_horror_3_mark_5_user_1->valueText();
															writeFile("1", "9", "5");
														}));
													}
												}
											}
										}
									}
								}
							}
						}
						nv_menu_user_2 = new Wt::WContainerWidget(container_text);
						nv_menu_user_2_mi = select_user->addItem(Wt::WString("User 2"), nv_menu_user_2);
						nv_menu_user_2->setId("nv_menu_user_2");
						nv_menu_user_2->setStyleClass(Wt::WString::fromUTF8(""));
						nv_menu_user_2->setInline(0);
						select_user->setItemDisabled(1, 0);
						select_user->setItemHidden(1, 0);
						
						{
							container_films_2 = new Wt::WContainerWidget(nv_menu_user_2);
							container_films_2->setId("container_films_2");
							container_films_2->setStyleClass(Wt::WString::fromUTF8(""));
							container_films_2->setInline(0);
							container_films_2->setHtmlTagName("div");
							{
								menu_user_2 = new Wt::WMenu(new Wt::WStackedWidget(), container_films_2);
								container_films_2->addWidget(menu_user_2->contentsStack());
								menu_user_2->contentsStack()->setId("menu_user_2_stackedwidget");
								menu_user_2->setId("menu_user_2");
								menu_user_2->setStyleClass(Wt::WString::fromUTF8("nav-pills nav-stacked nav"));
								menu_user_2->setInline(1);
								userNumber = 2;
								{
									comedy_user_2 = new Wt::WContainerWidget(container_films_2);
									comedy_user_2_mi = menu_user_2->addItem(Wt::WString("Comedy"), comedy_user_2);
									comedy_user_2->setId("comedy_user_2");
									comedy_user_2->setStyleClass(Wt::WString::fromUTF8(""));
									comedy_user_2->setInline(0);
									menu_user_2->setItemDisabled(0, 0);
									menu_user_2->setItemHidden(0, 0);
									{
										container_comedy_user_2 = new Wt::WContainerWidget(comedy_user_2);
										container_comedy_user_2->setId("container_comedy_user_2");
										container_comedy_user_2->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
										container_comedy_user_2->setInline(0);
										container_comedy_user_2->setHtmlTagName("div");
										{
											comedy_1_user_2 = new Wt::WContainerWidget(container_comedy_user_2);
											comedy_1_user_2->setId("comedy_1_user_2");
											comedy_1_user_2->setStyleClass(Wt::WString::fromUTF8(" btn-group"));
											comedy_1_user_2->setInline(0);
											comedy_1_user_2->setHtmlTagName("div");
											{
												comedy_image_1_user_2 = new Wt::WImage(comedy_1_user_2);
												comedy_image_1_user_2->setId("comedy_image_1_user_2");
												comedy_image_1_user_2->setStyleClass(Wt::WString::fromUTF8("center-block"));
												comedy_image_1_user_2->setInline(0);
												comedy_image_1_user_2->setImageLink(Wt::WLink("http://img.dotua.org/fsua_items/cover/00/42/37/10/00423720.jpg"));
												watch_comedy_1_user_2 = new Wt::WPushButton(comedy_1_user_2);
												watch_comedy_1_user_2->setId("watch_comedy_1_user_2");
												watch_comedy_1_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default with-label btn-success center-block"));
												watch_comedy_1_user_2->setInline(1);
												watch_comedy_1_user_2->setEmptyText(Wt::WString::fromUTF8(""));
												watch_comedy_1_user_2->setText(Wt::WString::fromUTF8("Watch"));
												watch_comedy_1_user_2->setLink(Wt::WLink("http://www.ex.ua/show/207854449/5e2b0e298067ac5505e943070d9ee633.mp4"));
												rating_comedy_1_user_2 = new Wt::WPushButton(comedy_1_user_2);
												rating_comedy_1_user_2->setId("rating_comedy_1_user_2");
												rating_comedy_1_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-warning with-label center-block"));
												rating_comedy_1_user_2->setInline(1);
												rating_comedy_1_user_2->setEmptyText(Wt::WString::fromUTF8(""));
												rating_comedy_1_user_2->setText(Wt::WString::fromUTF8("Rating"));
												rating_comedy_1_user_2->setLink(Wt::WLink("http://www.kinopoisk.ru/film/817481/"));
												mark_comedy_1_user_2 = new Wt::WContainerWidget(comedy_1_user_2);
												mark_comedy_1_user_2->setId("mark_comedy_1_user_2");
												mark_comedy_1_user_2->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
												mark_comedy_1_user_2->setInline(0);
												mark_comedy_1_user_2->setHtmlTagName("div");
												{
													mark_1_comedy_1_user_2 = new Wt::WContainerWidget(mark_comedy_1_user_2);
													mark_1_comedy_1_user_2->setId("mark_1_comedy_1_user_2");
													mark_1_comedy_1_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_1_comedy_1_user_2->setInline(0);
													mark_1_comedy_1_user_2->setHtmlTagName("div");
													{
														button_comedy_1_mark_1_user_2 = new Wt::WPushButton(mark_1_comedy_1_user_2);
														button_comedy_1_mark_1_user_2->setId("button_comedy_1_mark_1_user_2");
														button_comedy_1_mark_1_user_2->setStyleClass(Wt::WString::fromUTF8(" btn btn-danger btn-group with-label"));
														button_comedy_1_mark_1_user_2->setInline(1);
														button_comedy_1_mark_1_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_1_mark_1_user_2->setText(Wt::WString::fromUTF8("1"));
														button_comedy_1_mark_1_user_2->setLink(Wt::WLink(""));
														button_comedy_1_mark_1_user_2->clicked().connect(button_comedy_1_mark_1_user_2, &Wt::WPushButton::disable);
														button_comedy_1_mark_1_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_1_mark_1_user_2->valueText();
															writeFile("2", "1", "1");
														}));
													}
													mark_2_comedy_1_user_2 = new Wt::WContainerWidget(mark_comedy_1_user_2);
													mark_2_comedy_1_user_2->setId("mark_2_comedy_1_user_2");
													mark_2_comedy_1_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_2_comedy_1_user_2->setInline(0);
													mark_2_comedy_1_user_2->setHtmlTagName("div");
													{
														button_comedy_1_mark_2_user_2 = new Wt::WPushButton(mark_2_comedy_1_user_2);
														button_comedy_1_mark_2_user_2->setId("button_comedy_1_mark_2_user_2");
														button_comedy_1_mark_2_user_2->setStyleClass(Wt::WString::fromUTF8(" btn btn-warning btn-group with-label"));
														button_comedy_1_mark_2_user_2->setInline(1);
														button_comedy_1_mark_2_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_1_mark_2_user_2->setText(Wt::WString::fromUTF8("2"));
														button_comedy_1_mark_2_user_2->setLink(Wt::WLink(""));
														button_comedy_1_mark_2_user_2->clicked().connect(button_comedy_1_mark_2_user_2, &Wt::WPushButton::disable);
														button_comedy_1_mark_2_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_1_mark_2_user_2->valueText();
															writeFile("2", "1", "2");
														}));
													}
													mark_3_comedy_1_user_2 = new Wt::WContainerWidget(mark_comedy_1_user_2);
													mark_3_comedy_1_user_2->setId("mark_3_comedy_1_user_2");
													mark_3_comedy_1_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_3_comedy_1_user_2->setInline(0);
													mark_3_comedy_1_user_2->setHtmlTagName("div");
													{
														button_comedy_1_mark_3_user_2 = new Wt::WPushButton(mark_3_comedy_1_user_2);
														button_comedy_1_mark_3_user_2->setId("button_comedy_1_mark_3_user_2");
														button_comedy_1_mark_3_user_2->setStyleClass(Wt::WString::fromUTF8("btn-primary  btn btn-group with-label"));
														button_comedy_1_mark_3_user_2->setInline(1);
														button_comedy_1_mark_3_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_1_mark_3_user_2->setText(Wt::WString::fromUTF8("3"));
														button_comedy_1_mark_3_user_2->setLink(Wt::WLink(""));
														button_comedy_1_mark_3_user_2->clicked().connect(button_comedy_1_mark_3_user_2, &Wt::WPushButton::disable);
														button_comedy_1_mark_3_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_1_mark_3_user_2->valueText();
															writeFile("2", "1", "3");
														}));
													}
													mark_4_comedy_1_user_2 = new Wt::WContainerWidget(mark_comedy_1_user_2);
													mark_4_comedy_1_user_2->setId("mark_4_comedy_1_user_2");
													mark_4_comedy_1_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_4_comedy_1_user_2->setInline(0);
													mark_4_comedy_1_user_2->setHtmlTagName("div");
													{
														button_comedy_1_mark_4_user_2 = new Wt::WPushButton(mark_4_comedy_1_user_2);
														button_comedy_1_mark_4_user_2->setId("button_comedy_1_mark_4_user_2");
														button_comedy_1_mark_4_user_2->setStyleClass(Wt::WString::fromUTF8(" btn-info btn btn-group with-label"));
														button_comedy_1_mark_4_user_2->setInline(1);
														button_comedy_1_mark_4_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_1_mark_4_user_2->setText(Wt::WString::fromUTF8("4"));
														button_comedy_1_mark_4_user_2->setLink(Wt::WLink(""));
														button_comedy_1_mark_4_user_2->clicked().connect(button_comedy_1_mark_4_user_2, &Wt::WPushButton::disable);
														button_comedy_1_mark_4_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_1_mark_4_user_2->valueText();
															writeFile("2", "1", "4");
														}));
													}
													mark_5_comedy_1_user_2 = new Wt::WContainerWidget(mark_comedy_1_user_2);
													mark_5_comedy_1_user_2->setId("mark_5_comedy_1_user_2");
													mark_5_comedy_1_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_5_comedy_1_user_2->setInline(0);
													mark_5_comedy_1_user_2->setHtmlTagName("div");
													{
														button_comedy_1_mark_5_user_2 = new Wt::WPushButton(mark_5_comedy_1_user_2);
														button_comedy_1_mark_5_user_2->setId("button_comedy_1_mark_5_user_2");
														button_comedy_1_mark_5_user_2->setStyleClass(Wt::WString::fromUTF8(" btn btn-group with-label btn-success"));
														button_comedy_1_mark_5_user_2->setInline(1);
														button_comedy_1_mark_5_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_1_mark_5_user_2->setText(Wt::WString::fromUTF8("5"));
														button_comedy_1_mark_5_user_2->setLink(Wt::WLink(""));
														button_comedy_1_mark_5_user_2->clicked().connect(button_comedy_1_mark_5_user_2, &Wt::WPushButton::disable);
														button_comedy_1_mark_5_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_1_mark_5_user_2->valueText();
															writeFile("2", "1", "5");
														}));
													}
												}
											}
											comedy_2_user_2 = new Wt::WContainerWidget(container_comedy_user_2);
											comedy_2_user_2->setId("comedy_2_user_2");
											comedy_2_user_2->setStyleClass(Wt::WString::fromUTF8(" btn-group"));
											comedy_2_user_2->setInline(0);
											comedy_2_user_2->setHtmlTagName("div");
											{
												comedy_image_2_user_2 = new Wt::WImage(comedy_2_user_2);
												comedy_image_2_user_2->setId("comedy_image_2_user_2");
												comedy_image_2_user_2->setStyleClass(Wt::WString::fromUTF8("center-block"));
												comedy_image_2_user_2->setInline(0);
												comedy_image_2_user_2->setImageLink(Wt::WLink("http://img.dotua.org/fsua_items/cover/00/42/35/10/00423542.jpg"));
												watch_comedy_2_user_2 = new Wt::WPushButton(comedy_2_user_2);
												watch_comedy_2_user_2->setId("watch_comedy_2_user_2");
												watch_comedy_2_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default with-label btn-success center-block"));
												watch_comedy_2_user_2->setInline(1);
												watch_comedy_2_user_2->setEmptyText(Wt::WString::fromUTF8(""));
												watch_comedy_2_user_2->setText(Wt::WString::fromUTF8("Watch"));
												watch_comedy_2_user_2->setLink(Wt::WLink("http://www.ex.ua/show/221305334/44721d879c4a9fdb9416347c45e6f5d2.mp4"));
												rating_comedy_2_user_2 = new Wt::WPushButton(comedy_2_user_2);
												rating_comedy_2_user_2->setId("rating_comedy_2_user_2");
												rating_comedy_2_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-warning with-label center-block"));
												rating_comedy_2_user_2->setInline(1);
												rating_comedy_2_user_2->setEmptyText(Wt::WString::fromUTF8(""));
												rating_comedy_2_user_2->setText(Wt::WString::fromUTF8("Rating"));
												rating_comedy_2_user_2->setLink(Wt::WLink("http://www.kinopoisk.ru/film/891509/"));
												mark_comedy_2_user_2 = new Wt::WContainerWidget(comedy_2_user_2);
												mark_comedy_2_user_2->setId("mark_comedy_2_user_2");
												mark_comedy_2_user_2->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
												mark_comedy_2_user_2->setInline(0);
												mark_comedy_2_user_2->setHtmlTagName("div");
												{
													mark_1_comedy_2_user_2 = new Wt::WContainerWidget(mark_comedy_2_user_2);
													mark_1_comedy_2_user_2->setId("mark_1_comedy_2_user_2");
													mark_1_comedy_2_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_1_comedy_2_user_2->setInline(0);
													mark_1_comedy_2_user_2->setHtmlTagName("div");
													{
														button_comedy_2_mark_1_user_2 = new Wt::WPushButton(mark_1_comedy_2_user_2);
														button_comedy_2_mark_1_user_2->setId("button_comedy_2_mark_1_user_2");
														button_comedy_2_mark_1_user_2->setStyleClass(Wt::WString::fromUTF8(" btn btn-danger btn-group with-label"));
														button_comedy_2_mark_1_user_2->setInline(1);
														button_comedy_2_mark_1_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_2_mark_1_user_2->setText(Wt::WString::fromUTF8("1"));
														button_comedy_2_mark_1_user_2->setLink(Wt::WLink(""));
														button_comedy_2_mark_1_user_2->clicked().connect(button_comedy_2_mark_1_user_2, &Wt::WPushButton::disable);
														button_comedy_2_mark_1_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_2_mark_1_user_2->valueText();
															writeFile("2", "2", "1");
														}));
													}
													mark_2_comedy_2_user_2 = new Wt::WContainerWidget(mark_comedy_2_user_2);
													mark_2_comedy_2_user_2->setId("mark_2_comedy_2_user_2");
													mark_2_comedy_2_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_2_comedy_2_user_2->setInline(0);
													mark_2_comedy_2_user_2->setHtmlTagName("div");
													{
														button_comedy_2_mark_2_user_2 = new Wt::WPushButton(mark_2_comedy_2_user_2);
														button_comedy_2_mark_2_user_2->setId("button_comedy_2_mark_2_user_2");
														button_comedy_2_mark_2_user_2->setStyleClass(Wt::WString::fromUTF8(" btn btn-warning btn-group with-label"));
														button_comedy_2_mark_2_user_2->setInline(1);
														button_comedy_2_mark_2_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_2_mark_2_user_2->setText(Wt::WString::fromUTF8("2"));
														button_comedy_2_mark_2_user_2->setLink(Wt::WLink(""));
														button_comedy_2_mark_2_user_2->clicked().connect(button_comedy_2_mark_2_user_2, &Wt::WPushButton::disable);
														button_comedy_2_mark_2_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_2_mark_2_user_2->valueText();
															writeFile("2", "2", "2");
														}));
													}
													mark_3_comedy_2_user_2 = new Wt::WContainerWidget(mark_comedy_2_user_2);
													mark_3_comedy_2_user_2->setId("mark_3_comedy_2_user_2");
													mark_3_comedy_2_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_3_comedy_2_user_2->setInline(0);
													mark_3_comedy_2_user_2->setHtmlTagName("div");
													{
														button_comedy_2_mark_3_user_2 = new Wt::WPushButton(mark_3_comedy_2_user_2);
														button_comedy_2_mark_3_user_2->setId("button_comedy_2_mark_3_user_2");
														button_comedy_2_mark_3_user_2->setStyleClass(Wt::WString::fromUTF8("btn-primary  btn btn-group with-label"));
														button_comedy_2_mark_3_user_2->setInline(1);
														button_comedy_2_mark_3_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_2_mark_3_user_2->setText(Wt::WString::fromUTF8("3"));
														button_comedy_2_mark_3_user_2->setLink(Wt::WLink(""));
														button_comedy_2_mark_3_user_2->clicked().connect(button_comedy_2_mark_3_user_2, &Wt::WPushButton::disable);
														button_comedy_2_mark_3_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_2_mark_3_user_2->valueText();
															writeFile("2", "2", "3");
														}));
													}
													mark_4_comedy_2_user_2 = new Wt::WContainerWidget(mark_comedy_2_user_2);
													mark_4_comedy_2_user_2->setId("mark_4_comedy_2_user_2");
													mark_4_comedy_2_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_4_comedy_2_user_2->setInline(0);
													mark_4_comedy_2_user_2->setHtmlTagName("div");
													{
														button_comedy_2_mark_4_user_2 = new Wt::WPushButton(mark_4_comedy_2_user_2);
														button_comedy_2_mark_4_user_2->setId("button_comedy_2_mark_4_user_2");
														button_comedy_2_mark_4_user_2->setStyleClass(Wt::WString::fromUTF8(" btn-info btn btn-group with-label"));
														button_comedy_2_mark_4_user_2->setInline(1);
														button_comedy_2_mark_4_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_2_mark_4_user_2->setText(Wt::WString::fromUTF8("4"));
														button_comedy_2_mark_4_user_2->setLink(Wt::WLink(""));
														button_comedy_2_mark_4_user_2->clicked().connect(button_comedy_2_mark_4_user_2, &Wt::WPushButton::disable);
														button_comedy_2_mark_4_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_2_mark_1_user_2->valueText();
															writeFile("2", "2", "4");
														}));
													}
													mark_5_comedy_2_user_2 = new Wt::WContainerWidget(mark_comedy_2_user_2);
													mark_5_comedy_2_user_2->setId("mark_5_comedy_2_user_2");
													mark_5_comedy_2_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_5_comedy_2_user_2->setInline(0);
													mark_5_comedy_2_user_2->setHtmlTagName("div");
													{
														button_comedy_2_mark_5_user_2 = new Wt::WPushButton(mark_5_comedy_2_user_2);
														button_comedy_2_mark_5_user_2->setId("button_comedy_2_mark_5_user_2");
														button_comedy_2_mark_5_user_2->setStyleClass(Wt::WString::fromUTF8(" btn btn-group with-label btn-success"));
														button_comedy_2_mark_5_user_2->setInline(1);
														button_comedy_2_mark_5_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_2_mark_5_user_2->setText(Wt::WString::fromUTF8("5"));
														button_comedy_2_mark_5_user_2->setLink(Wt::WLink(""));
														button_comedy_2_mark_5_user_2->clicked().connect(button_comedy_2_mark_5_user_2, &Wt::WPushButton::disable);
														button_comedy_2_mark_5_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_2_mark_1_user_2->valueText();
															writeFile("2", "2", "5");
														}));
													}
												}
											}
											comedy_3_user_2 = new Wt::WContainerWidget(container_comedy_user_2);
											comedy_3_user_2->setId("comedy_3_user_2");
											comedy_3_user_2->setStyleClass(Wt::WString::fromUTF8(" btn-group"));
											comedy_3_user_2->setInline(0);
											comedy_3_user_2->setHtmlTagName("div");
											{
												comedy_image_3_user_2 = new Wt::WImage(comedy_3_user_2);
												comedy_image_3_user_2->setId("comedy_image_3_user_2");
												comedy_image_3_user_2->setStyleClass(Wt::WString::fromUTF8("center-block"));
												comedy_image_3_user_2->setInline(0);
												comedy_image_3_user_2->setImageLink(Wt::WLink("http://img.dotua.org/fsua_items/cover/00/41/63/10/00416346.jpg"));
												watch_comedy_3_user_2 = new Wt::WPushButton(comedy_3_user_2);
												watch_comedy_3_user_2->setId("watch_comedy_3_user_2");
												watch_comedy_3_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default with-label btn-success center-block"));
												watch_comedy_3_user_2->setInline(1);
												watch_comedy_3_user_2->setEmptyText(Wt::WString::fromUTF8(""));
												watch_comedy_3_user_2->setText(Wt::WString::fromUTF8("Watch"));
												watch_comedy_3_user_2->setLink(Wt::WLink("http://fs183.www.ex.ua/show/1db3efc80e81aee31128052d5e04addf/216383529/1db3efc80e81aee31128052d5e04addf.mp4"));
												rating_comedy_3_user_2 = new Wt::WPushButton(comedy_3_user_2);
												rating_comedy_3_user_2->setId("rating_comedy_3_user_2");
												rating_comedy_3_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-warning with-label center-block"));
												rating_comedy_3_user_2->setInline(1);
												rating_comedy_3_user_2->setEmptyText(Wt::WString::fromUTF8(""));
												rating_comedy_3_user_2->setText(Wt::WString::fromUTF8("Rating"));
												rating_comedy_3_user_2->setLink(Wt::WLink("http://www.kinopoisk.ru/film/714187/"));
												mark_comedy_3_user_2 = new Wt::WContainerWidget(comedy_3_user_2);
												mark_comedy_3_user_2->setId("mark_comedy_3_user_2");
												mark_comedy_3_user_2->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
												mark_comedy_3_user_2->setInline(0);
												mark_comedy_3_user_2->setHtmlTagName("div");
												{
													mark_1_comedy_3_user_2 = new Wt::WContainerWidget(mark_comedy_3_user_2);
													mark_1_comedy_3_user_2->setId("mark_1_comedy_3_user_2");
													mark_1_comedy_3_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_1_comedy_3_user_2->setInline(0);
													mark_1_comedy_3_user_2->setHtmlTagName("div");
													{
														button_comedy_3_mark_1_user_2 = new Wt::WPushButton(mark_1_comedy_3_user_2);
														button_comedy_3_mark_1_user_2->setId("button_comedy_3_mark_1_user_2");
														button_comedy_3_mark_1_user_2->setStyleClass(Wt::WString::fromUTF8(" btn btn-danger btn-group with-label"));
														button_comedy_3_mark_1_user_2->setInline(1);
														button_comedy_3_mark_1_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_3_mark_1_user_2->setText(Wt::WString::fromUTF8("1"));
														button_comedy_3_mark_1_user_2->setLink(Wt::WLink(""));
														button_comedy_3_mark_1_user_2->clicked().connect(button_comedy_3_mark_1_user_2, &Wt::WPushButton::disable);
														button_comedy_3_mark_1_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_3_mark_1_user_2->valueText();
															writeFile("2", "3", "1");
														}));
													}
													mark_2_comedy_3_user_2 = new Wt::WContainerWidget(mark_comedy_3_user_2);
													mark_2_comedy_3_user_2->setId("mark_2_comedy_3_user_2");
													mark_2_comedy_3_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_2_comedy_3_user_2->setInline(0);
													mark_2_comedy_3_user_2->setHtmlTagName("div");
													{
														button_comedy_3_mark_2_user_2 = new Wt::WPushButton(mark_2_comedy_3_user_2);
														button_comedy_3_mark_2_user_2->setId("button_comedy_3_mark_2_user_2");
														button_comedy_3_mark_2_user_2->setStyleClass(Wt::WString::fromUTF8(" btn btn-warning btn-group with-label"));
														button_comedy_3_mark_2_user_2->setInline(1);
														button_comedy_3_mark_2_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_3_mark_2_user_2->setText(Wt::WString::fromUTF8("2"));
														button_comedy_3_mark_2_user_2->setLink(Wt::WLink(""));
														button_comedy_3_mark_2_user_2->clicked().connect(button_comedy_3_mark_2_user_2, &Wt::WPushButton::disable);
														button_comedy_3_mark_2_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_3_mark_2_user_2->valueText();
															writeFile("2", "3", "2");
														}));
													}
													mark_3_comedy_3_user_2 = new Wt::WContainerWidget(mark_comedy_3_user_2);
													mark_3_comedy_3_user_2->setId("mark_3_comedy_3_user_2");
													mark_3_comedy_3_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_3_comedy_3_user_2->setInline(0);
													mark_3_comedy_3_user_2->setHtmlTagName("div");
													{
														button_comedy_3_mark_3_user_2 = new Wt::WPushButton(mark_3_comedy_3_user_2);
														button_comedy_3_mark_3_user_2->setId("button_comedy_3_mark_3_user_2");
														button_comedy_3_mark_3_user_2->setStyleClass(Wt::WString::fromUTF8("btn-primary  btn btn-group with-label"));
														button_comedy_3_mark_3_user_2->setInline(1);
														button_comedy_3_mark_3_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_3_mark_3_user_2->setText(Wt::WString::fromUTF8("3"));
														button_comedy_3_mark_3_user_2->setLink(Wt::WLink(""));
														button_comedy_3_mark_3_user_2->clicked().connect(button_comedy_3_mark_3_user_2, &Wt::WPushButton::disable);
														button_comedy_3_mark_3_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_3_mark_3_user_2->valueText();
															writeFile("2", "3", "3");
														}));
													}
													mark_4_comedy_3_user_2 = new Wt::WContainerWidget(mark_comedy_3_user_2);
													mark_4_comedy_3_user_2->setId("mark_4_comedy_3_user_2");
													mark_4_comedy_3_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_4_comedy_3_user_2->setInline(0);
													mark_4_comedy_3_user_2->setHtmlTagName("div");
													{
														button_comedy_3_mark_4_user_2 = new Wt::WPushButton(mark_4_comedy_3_user_2);
														button_comedy_3_mark_4_user_2->setId("button_comedy_3_mark_4_user_2");
														button_comedy_3_mark_4_user_2->setStyleClass(Wt::WString::fromUTF8(" btn-info btn btn-group with-label"));
														button_comedy_3_mark_4_user_2->setInline(1);
														button_comedy_3_mark_4_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_3_mark_4_user_2->setText(Wt::WString::fromUTF8("4"));
														button_comedy_3_mark_4_user_2->setLink(Wt::WLink(""));
														button_comedy_3_mark_4_user_2->clicked().connect(button_comedy_3_mark_4_user_2, &Wt::WPushButton::disable);
														button_comedy_3_mark_4_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_3_mark_4_user_2->valueText();
															writeFile("2", "3", "4");
														}));
													}
													mark_5_comedy_3_user_2 = new Wt::WContainerWidget(mark_comedy_3_user_2);
													mark_5_comedy_3_user_2->setId("mark_5_comedy_3_user_2");
													mark_5_comedy_3_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_5_comedy_3_user_2->setInline(0);
													mark_5_comedy_3_user_2->setHtmlTagName("div");
													{
														button_comedy_3_mark_5_user_2 = new Wt::WPushButton(mark_5_comedy_3_user_2);
														button_comedy_3_mark_5_user_2->setId("button_comedy_3_mark_5_user_2");
														button_comedy_3_mark_5_user_2->setStyleClass(Wt::WString::fromUTF8(" btn btn-group with-label btn-success"));
														button_comedy_3_mark_5_user_2->setInline(1);
														button_comedy_3_mark_5_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_3_mark_5_user_2->setText(Wt::WString::fromUTF8("5"));
														button_comedy_3_mark_5_user_2->setLink(Wt::WLink(""));
														button_comedy_3_mark_5_user_2->clicked().connect(button_comedy_3_mark_5_user_2, &Wt::WPushButton::disable);
														button_comedy_3_mark_5_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_3_mark_5_user_2->valueText();
															writeFile("2", "3", "5");
														}));
													}
												}
											}
										}
									}
									drama_user_2 = new Wt::WContainerWidget(container_films_2);
									drama_user_2_mi = menu_user_2->addItem(Wt::WString("Drama"), drama_user_2);
									drama_user_2->setId("drama_user_2");
									drama_user_2->setStyleClass(Wt::WString::fromUTF8(""));
									drama_user_2->setInline(0);
									menu_user_2->setItemDisabled(1, 0);
									menu_user_2->setItemHidden(1, 0);
									{
										container_drama_user_2 = new Wt::WContainerWidget(drama_user_2);
										container_drama_user_2->setId("container_drama_user_2");
										container_drama_user_2->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
										container_drama_user_2->setInline(0);
										container_drama_user_2->setHtmlTagName("div");
										{
											drama_1_user_2 = new Wt::WContainerWidget(container_drama_user_2);
											drama_1_user_2->setId("drama_1_user_2");
											drama_1_user_2->setStyleClass(Wt::WString::fromUTF8(" btn-group"));
											drama_1_user_2->setInline(0);
											drama_1_user_2->setHtmlTagName("div");
											{
												drama_image_1_user_2 = new Wt::WImage(drama_1_user_2);
												drama_image_1_user_2->setId("drama_image_1_user_2");
												drama_image_1_user_2->setStyleClass(Wt::WString::fromUTF8("center-block"));
												drama_image_1_user_2->setInline(0);
												drama_image_1_user_2->setImageLink(Wt::WLink("http://img.dotua.org/fsua_items/cover/00/20/75/10/00207558.jpg"));
												watch_drama_1_user_2 = new Wt::WPushButton(drama_1_user_2);
												watch_drama_1_user_2->setId("watch_drama_1_user_2");
												watch_drama_1_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default with-label btn-success center-block"));
												watch_drama_1_user_2->setInline(1);
												watch_drama_1_user_2->setEmptyText(Wt::WString::fromUTF8(""));
												watch_drama_1_user_2->setText(Wt::WString::fromUTF8("Watch"));
												watch_drama_1_user_2->setLink(Wt::WLink("http://fs136.www.ex.ua/show/e86bb1854d95b249f3ee8d557e7224bd/12141246/e86bb1854d95b249f3ee8d557e7224bd.mp4"));
												rating_drama_1_user_2 = new Wt::WPushButton(drama_1_user_2);
												rating_drama_1_user_2->setId("rating_drama_1_user_2");
												rating_drama_1_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-warning with-label center-block"));
												rating_drama_1_user_2->setInline(1);
												rating_drama_1_user_2->setEmptyText(Wt::WString::fromUTF8(""));
												rating_drama_1_user_2->setText(Wt::WString::fromUTF8("Rating"));
												rating_drama_1_user_2->setLink(Wt::WLink("/"));
												mark_drama_1_user_2 = new Wt::WContainerWidget(drama_1_user_2);
												mark_drama_1_user_2->setId("mark_drama_1_user_2");
												mark_drama_1_user_2->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
												mark_drama_1_user_2->setInline(0);
												mark_drama_1_user_2->setHtmlTagName("div");
												{
													mark_1_drama_1_user_2 = new Wt::WContainerWidget(mark_drama_1_user_2);
													mark_1_drama_1_user_2->setId("mark_1_drama_1_user_2");
													mark_1_drama_1_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_1_drama_1_user_2->setInline(0);
													mark_1_drama_1_user_2->setHtmlTagName("div");
													{
														button_drama_1_mark_1_user_2 = new Wt::WPushButton(mark_1_drama_1_user_2);
														button_drama_1_mark_1_user_2->setId("button_drama_1_mark_1_user_2");
														button_drama_1_mark_1_user_2->setStyleClass(Wt::WString::fromUTF8(" btn btn-danger btn-group with-label"));
														button_drama_1_mark_1_user_2->setInline(1);
														button_drama_1_mark_1_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_1_mark_1_user_2->setText(Wt::WString::fromUTF8("1"));
														button_drama_1_mark_1_user_2->setLink(Wt::WLink(""));
														button_drama_1_mark_1_user_2->clicked().connect(button_drama_1_mark_1_user_2, &Wt::WPushButton::disable);
														button_drama_1_mark_1_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_drama_1_mark_1_user_2->valueText();
															writeFile("2", "4", "1");
														}));
													}
													mark_2_drama_1_user_2 = new Wt::WContainerWidget(mark_drama_1_user_2);
													mark_2_drama_1_user_2->setId("mark_2_drama_1_user_2");
													mark_2_drama_1_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_2_drama_1_user_2->setInline(0);
													mark_2_drama_1_user_2->setHtmlTagName("div");
													{
														button_drama_1_mark_2_user_2 = new Wt::WPushButton(mark_2_drama_1_user_2);
														button_drama_1_mark_2_user_2->setId("button_drama_1_mark_2_user_2");
														button_drama_1_mark_2_user_2->setStyleClass(Wt::WString::fromUTF8(" btn btn-warning btn-group with-label"));
														button_drama_1_mark_2_user_2->setInline(1);
														button_drama_1_mark_2_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_1_mark_2_user_2->setText(Wt::WString::fromUTF8("2"));
														button_drama_1_mark_2_user_2->setLink(Wt::WLink(""));
														button_drama_1_mark_2_user_2->clicked().connect(button_drama_1_mark_2_user_2, &Wt::WPushButton::disable);
														button_drama_1_mark_2_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_drama_1_mark_1_user_2->valueText();
															writeFile("2", "4", "2");
														}));
													}
													mark_3_drama_1_user_2 = new Wt::WContainerWidget(mark_drama_1_user_2);
													mark_3_drama_1_user_2->setId("mark_3_drama_1_user_2");
													mark_3_drama_1_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_3_drama_1_user_2->setInline(0);
													mark_3_drama_1_user_2->setHtmlTagName("div");
													{
														button_drama_1_mark_3_user_2 = new Wt::WPushButton(mark_3_drama_1_user_2);
														button_drama_1_mark_3_user_2->setId("button_drama_1_mark_3_user_2");
														button_drama_1_mark_3_user_2->setStyleClass(Wt::WString::fromUTF8("btn-primary  btn btn-group with-label"));
														button_drama_1_mark_3_user_2->setInline(1);
														button_drama_1_mark_3_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_1_mark_3_user_2->setText(Wt::WString::fromUTF8("3"));
														button_drama_1_mark_3_user_2->setLink(Wt::WLink(""));
														button_drama_1_mark_3_user_2->clicked().connect(button_drama_1_mark_3_user_2, &Wt::WPushButton::disable);
														button_drama_1_mark_3_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_drama_1_mark_3_user_2->valueText();
															writeFile("2", "4", "3");
														}));
													}
													mark_4_drama_1_user_2 = new Wt::WContainerWidget(mark_drama_1_user_2);
													mark_4_drama_1_user_2->setId("mark_4_drama_1_user_2");
													mark_4_drama_1_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_4_drama_1_user_2->setInline(0);
													mark_4_drama_1_user_2->setHtmlTagName("div");
													{
														button_drama_1_mark_4_user_2 = new Wt::WPushButton(mark_4_drama_1_user_2);
														button_drama_1_mark_4_user_2->setId("button_drama_1_mark_4_user_2");
														button_drama_1_mark_4_user_2->setStyleClass(Wt::WString::fromUTF8(" btn-info btn btn-group with-label"));
														button_drama_1_mark_4_user_2->setInline(1);
														button_drama_1_mark_4_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_1_mark_4_user_2->setText(Wt::WString::fromUTF8("4"));
														button_drama_1_mark_4_user_2->setLink(Wt::WLink(""));
														button_drama_1_mark_4_user_2->clicked().connect(button_drama_1_mark_4_user_2, &Wt::WPushButton::disable);
														button_drama_1_mark_4_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_drama_1_mark_4_user_2->valueText();
															writeFile("2", "4", "4");
														}));
													}
													mark_5_drama_1_user_2 = new Wt::WContainerWidget(mark_drama_1_user_2);
													mark_5_drama_1_user_2->setId("mark_5_drama_1_user_2");
													mark_5_drama_1_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_5_drama_1_user_2->setInline(0);
													mark_5_drama_1_user_2->setHtmlTagName("div");
													{
														button_drama_1_mark_5_user_2 = new Wt::WPushButton(mark_5_drama_1_user_2);
														button_drama_1_mark_5_user_2->setId("button_drama_1_mark_5_user_2");
														button_drama_1_mark_5_user_2->setStyleClass(Wt::WString::fromUTF8(" btn btn-group with-label btn-success"));
														button_drama_1_mark_5_user_2->setInline(1);
														button_drama_1_mark_5_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_1_mark_5_user_2->setText(Wt::WString::fromUTF8("5"));
														button_drama_1_mark_5_user_2->setLink(Wt::WLink(""));
														button_drama_1_mark_5_user_2->clicked().connect(button_drama_1_mark_5_user_2, &Wt::WPushButton::disable);
														button_drama_1_mark_5_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_drama_1_mark_5_user_2->valueText();
															writeFile("2", "4", "5");
														}));
													}
												}
											}
											drama_2_user_2 = new Wt::WContainerWidget(container_drama_user_2);
											drama_2_user_2->setId("drama_2_user_2");
											drama_2_user_2->setStyleClass(Wt::WString::fromUTF8(" btn-group"));
											drama_2_user_2->setInline(0);
											drama_2_user_2->setHtmlTagName("div");
											{
												drama_image_2_user_2 = new Wt::WImage(drama_2_user_2);
												drama_image_2_user_2->setId("drama_image_2_user_2");
												drama_image_2_user_2->setStyleClass(Wt::WString::fromUTF8("center-block"));
												drama_image_2_user_2->setInline(0);
												drama_image_2_user_2->setImageLink(Wt::WLink("http://img.dotua.org/fsua_items/cover/00/40/52/10/00405214.jpg"));
												watch_drama_2_user_2 = new Wt::WPushButton(drama_2_user_2);
												watch_drama_2_user_2->setId("watch_drama_2_user_2");
												watch_drama_2_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default with-label btn-success center-block"));
												watch_drama_2_user_2->setInline(1);
												watch_drama_2_user_2->setEmptyText(Wt::WString::fromUTF8(""));
												watch_drama_2_user_2->setText(Wt::WString::fromUTF8("Watch"));
												watch_drama_2_user_2->setLink(Wt::WLink("http://www.ex.ua/show/133560114/7f126915aca218eaa77915d19759d185.mp4"));
												rating_drama_2_user_2 = new Wt::WPushButton(drama_2_user_2);
												rating_drama_2_user_2->setId("rating_drama_2_user_2");
												rating_drama_2_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-warning with-label center-block"));
												rating_drama_2_user_2->setInline(1);
												rating_drama_2_user_2->setEmptyText(Wt::WString::fromUTF8(""));
												rating_drama_2_user_2->setText(Wt::WString::fromUTF8("Rating"));
												rating_drama_2_user_2->setLink(Wt::WLink("http://www.kinopoisk.ru/film/448/"));
												mark_drama_2_user_2 = new Wt::WContainerWidget(drama_2_user_2);
												mark_drama_2_user_2->setId("mark_drama_2_user_2");
												mark_drama_2_user_2->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
												mark_drama_2_user_2->setInline(0);
												mark_drama_2_user_2->setHtmlTagName("div");
												{
													mark_1_drama_2_user_2 = new Wt::WContainerWidget(mark_drama_2_user_2);
													mark_1_drama_2_user_2->setId("mark_1_drama_2_user_2");
													mark_1_drama_2_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_1_drama_2_user_2->setInline(0);
													mark_1_drama_2_user_2->setHtmlTagName("div");
													{
														button_drama_2_mark_1_user_2 = new Wt::WPushButton(mark_1_drama_2_user_2);
														button_drama_2_mark_1_user_2->setId("button_drama_2_mark_1_user_2");
														button_drama_2_mark_1_user_2->setStyleClass(Wt::WString::fromUTF8(" btn btn-danger btn-group with-label"));
														button_drama_2_mark_1_user_2->setInline(1);
														button_drama_2_mark_1_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_2_mark_1_user_2->setText(Wt::WString::fromUTF8("1"));
														button_drama_2_mark_1_user_2->setLink(Wt::WLink(""));
														button_drama_2_mark_1_user_2->clicked().connect(button_drama_2_mark_1_user_2, &Wt::WPushButton::disable);
														button_drama_2_mark_1_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_drama_2_mark_1_user_2->valueText();
															writeFile("2", "5", "1");
														}));
													}
													mark_2_drama_2_user_2 = new Wt::WContainerWidget(mark_drama_2_user_2);
													mark_2_drama_2_user_2->setId("mark_2_drama_2_user_2");
													mark_2_drama_2_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_2_drama_2_user_2->setInline(0);
													mark_2_drama_2_user_2->setHtmlTagName("div");
													{
														button_drama_2_mark_2_user_2 = new Wt::WPushButton(mark_2_drama_2_user_2);
														button_drama_2_mark_2_user_2->setId("button_drama_2_mark_2_user_2");
														button_drama_2_mark_2_user_2->setStyleClass(Wt::WString::fromUTF8(" btn btn-warning btn-group with-label"));
														button_drama_2_mark_2_user_2->setInline(1);
														button_drama_2_mark_2_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_2_mark_2_user_2->setText(Wt::WString::fromUTF8("2"));
														button_drama_2_mark_2_user_2->setLink(Wt::WLink(""));
														button_drama_2_mark_2_user_2->clicked().connect(button_drama_2_mark_2_user_2, &Wt::WPushButton::disable);
														button_drama_2_mark_2_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_drama_2_mark_2_user_2->valueText();
															writeFile("2", "5", "2");
														}));
													}
													mark_3_drama_2_user_2 = new Wt::WContainerWidget(mark_drama_2_user_2);
													mark_3_drama_2_user_2->setId("mark_3_drama_2_user_2");
													mark_3_drama_2_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_3_drama_2_user_2->setInline(0);
													mark_3_drama_2_user_2->setHtmlTagName("div");
													{
														button_drama_2_mark_3_user_2 = new Wt::WPushButton(mark_3_drama_2_user_2);
														button_drama_2_mark_3_user_2->setId("button_drama_2_mark_3_user_2");
														button_drama_2_mark_3_user_2->setStyleClass(Wt::WString::fromUTF8("btn-primary  btn btn-group with-label"));
														button_drama_2_mark_3_user_2->setInline(1);
														button_drama_2_mark_3_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_2_mark_3_user_2->setText(Wt::WString::fromUTF8("3"));
														button_drama_2_mark_3_user_2->setLink(Wt::WLink(""));
														button_drama_2_mark_3_user_2->clicked().connect(button_drama_2_mark_3_user_2, &Wt::WPushButton::disable);
														button_drama_2_mark_3_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_drama_2_mark_3_user_2->valueText();
															writeFile("2", "5", "3");
														}));
													}
													mark_4_drama_2_user_2 = new Wt::WContainerWidget(mark_drama_2_user_2);
													mark_4_drama_2_user_2->setId("mark_4_drama_2_user_2");
													mark_4_drama_2_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_4_drama_2_user_2->setInline(0);
													mark_4_drama_2_user_2->setHtmlTagName("div");
													{
														button_drama_2_mark_4_user_2 = new Wt::WPushButton(mark_4_drama_2_user_2);
														button_drama_2_mark_4_user_2->setId("button_drama_2_mark_4_user_2");
														button_drama_2_mark_4_user_2->setStyleClass(Wt::WString::fromUTF8(" btn-info btn btn-group with-label"));
														button_drama_2_mark_4_user_2->setInline(1);
														button_drama_2_mark_4_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_2_mark_4_user_2->setText(Wt::WString::fromUTF8("4"));
														button_drama_2_mark_4_user_2->setLink(Wt::WLink(""));
														button_drama_2_mark_4_user_2->clicked().connect(button_drama_2_mark_4_user_2, &Wt::WPushButton::disable);
														button_drama_2_mark_4_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_drama_2_mark_4_user_2->valueText();
															writeFile("2", "5", "4");
														}));
													}
													mark_5_drama_2_user_2 = new Wt::WContainerWidget(mark_drama_2_user_2);
													mark_5_drama_2_user_2->setId("mark_5_drama_2_user_2");
													mark_5_drama_2_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_5_drama_2_user_2->setInline(0);
													mark_5_drama_2_user_2->setHtmlTagName("div");
													{
														button_drama_2_mark_5_user_2 = new Wt::WPushButton(mark_5_drama_2_user_2);
														button_drama_2_mark_5_user_2->setId("button_drama_2_mark_5_user_2");
														button_drama_2_mark_5_user_2->setStyleClass(Wt::WString::fromUTF8(" btn btn-group with-label btn-success"));
														button_drama_2_mark_5_user_2->setInline(1);
														button_drama_2_mark_5_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_2_mark_5_user_2->setText(Wt::WString::fromUTF8("5"));
														button_drama_2_mark_5_user_2->setLink(Wt::WLink(""));
														button_drama_2_mark_5_user_2->clicked().connect(button_drama_2_mark_5_user_2, &Wt::WPushButton::disable);
														button_drama_2_mark_5_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_drama_2_mark_5_user_2->valueText();
															writeFile("2", "5", "5");
														}));
													}
												}
											}
											drama_3_user_2 = new Wt::WContainerWidget(container_drama_user_2);
											drama_3_user_2->setId("drama_3_user_2");
											drama_3_user_2->setStyleClass(Wt::WString::fromUTF8(" btn-group"));
											drama_3_user_2->setInline(0);
											drama_3_user_2->setHtmlTagName("div");
											{
												drama_image_3_user_2 = new Wt::WImage(drama_3_user_2);
												drama_image_3_user_2->setId("drama_image_3_user_2");
												drama_image_3_user_2->setStyleClass(Wt::WString::fromUTF8("center-block"));
												drama_image_3_user_2->setInline(0);
												drama_image_3_user_2->setImageLink(Wt::WLink("http://img.dotua.org/fsua_items/cover/00/20/75/10/00207568.jpg"));
												watch_drama_3_user_2 = new Wt::WPushButton(drama_3_user_2);
												watch_drama_3_user_2->setId("watch_drama_3_user_2");
												watch_drama_3_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default with-label btn-success center-block"));
												watch_drama_3_user_2->setInline(1);
												watch_drama_3_user_2->setEmptyText(Wt::WString::fromUTF8(""));
												watch_drama_3_user_2->setText(Wt::WString::fromUTF8("Watch"));
												watch_drama_3_user_2->setLink(Wt::WLink("http://fs66.www.ex.ua/show/2f54492f0a828f0f260ab55aa660cc85/62023/2f54492f0a828f0f260ab55aa660cc85.mp4"));
												rating_drama_3_user_2 = new Wt::WPushButton(drama_3_user_2);
												rating_drama_3_user_2->setId("rating_drama_3_user_2");
												rating_drama_3_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-warning with-label center-block"));
												rating_drama_3_user_2->setInline(1);
												rating_drama_3_user_2->setEmptyText(Wt::WString::fromUTF8(""));
												rating_drama_3_user_2->setText(Wt::WString::fromUTF8("Rating"));
												rating_drama_3_user_2->setLink(Wt::WLink("http://www.kinopoisk.ru/film/519/"));
												mark_drama_3_user_2 = new Wt::WContainerWidget(drama_3_user_2);
												mark_drama_3_user_2->setId("mark_drama_3_user_2");
												mark_drama_3_user_2->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
												mark_drama_3_user_2->setInline(0);
												mark_drama_3_user_2->setHtmlTagName("div");
												{
													mark_1_drama_3_user_2 = new Wt::WContainerWidget(mark_drama_3_user_2);
													mark_1_drama_3_user_2->setId("mark_1_drama_3_user_2");
													mark_1_drama_3_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_1_drama_3_user_2->setInline(0);
													mark_1_drama_3_user_2->setHtmlTagName("div");
													{
														button_drama_3_mark_1_user_2 = new Wt::WPushButton(mark_1_drama_3_user_2);
														button_drama_3_mark_1_user_2->setId("button_drama_3_mark_1_user_2");
														button_drama_3_mark_1_user_2->setStyleClass(Wt::WString::fromUTF8(" btn btn-danger btn-group with-label"));
														button_drama_3_mark_1_user_2->setInline(1);
														button_drama_3_mark_1_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_3_mark_1_user_2->setText(Wt::WString::fromUTF8("1"));
														button_drama_3_mark_1_user_2->setLink(Wt::WLink(""));
														button_drama_3_mark_1_user_2->clicked().connect(button_drama_3_mark_1_user_2, &Wt::WPushButton::disable);
														button_drama_3_mark_1_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_drama_3_mark_1_user_2->valueText();
															writeFile("2", "6", "1");
														}));
													}
													mark_2_drama_3_user_2 = new Wt::WContainerWidget(mark_drama_3_user_2);
													mark_2_drama_3_user_2->setId("mark_2_drama_3_user_2");
													mark_2_drama_3_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_2_drama_3_user_2->setInline(0);
													mark_2_drama_3_user_2->setHtmlTagName("div");
													{
														button_drama_3_mark_2_user_2 = new Wt::WPushButton(mark_2_drama_3_user_2);
														button_drama_3_mark_2_user_2->setId("button_drama_3_mark_2_user_2");
														button_drama_3_mark_2_user_2->setStyleClass(Wt::WString::fromUTF8(" btn btn-warning btn-group with-label"));
														button_drama_3_mark_2_user_2->setInline(1);
														button_drama_3_mark_2_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_3_mark_2_user_2->setText(Wt::WString::fromUTF8("2"));
														button_drama_3_mark_2_user_2->setLink(Wt::WLink(""));
														button_drama_3_mark_2_user_2->clicked().connect(button_drama_3_mark_2_user_2, &Wt::WPushButton::disable);
														button_drama_3_mark_2_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_drama_3_mark_2_user_2->valueText();
															writeFile("2", "6", "2");
														}));
													}
													mark_3_drama_3_user_2 = new Wt::WContainerWidget(mark_drama_3_user_2);
													mark_3_drama_3_user_2->setId("mark_3_drama_3_user_2");
													mark_3_drama_3_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_3_drama_3_user_2->setInline(0);
													mark_3_drama_3_user_2->setHtmlTagName("div");
													{
														button_drama_3_mark_3_user_2 = new Wt::WPushButton(mark_3_drama_3_user_2);
														button_drama_3_mark_3_user_2->setId("button_drama_3_mark_3_user_2");
														button_drama_3_mark_3_user_2->setStyleClass(Wt::WString::fromUTF8("btn-primary  btn btn-group with-label"));
														button_drama_3_mark_3_user_2->setInline(1);
														button_drama_3_mark_3_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_3_mark_3_user_2->setText(Wt::WString::fromUTF8("3"));
														button_drama_3_mark_3_user_2->setLink(Wt::WLink(""));
														button_drama_3_mark_3_user_2->clicked().connect(button_drama_3_mark_3_user_2, &Wt::WPushButton::disable);
														button_drama_3_mark_3_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_drama_3_mark_3_user_2->valueText();
															writeFile("2", "6", "3");
														}));
													}
													mark_4_drama_3_user_2 = new Wt::WContainerWidget(mark_drama_3_user_2);
													mark_4_drama_3_user_2->setId("mark_4_drama_3_user_2");
													mark_4_drama_3_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_4_drama_3_user_2->setInline(0);
													mark_4_drama_3_user_2->setHtmlTagName("div");
													{
														button_drama_3_mark_4_user_2 = new Wt::WPushButton(mark_4_drama_3_user_2);
														button_drama_3_mark_4_user_2->setId("button_drama_3_mark_4_user_2");
														button_drama_3_mark_4_user_2->setStyleClass(Wt::WString::fromUTF8(" btn-info btn btn-group with-label"));
														button_drama_3_mark_4_user_2->setInline(1);
														button_drama_3_mark_4_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_3_mark_4_user_2->setText(Wt::WString::fromUTF8("4"));
														button_drama_3_mark_4_user_2->setLink(Wt::WLink(""));
														button_drama_3_mark_4_user_2->clicked().connect(button_drama_3_mark_4_user_2, &Wt::WPushButton::disable);
														button_drama_3_mark_4_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_drama_3_mark_4_user_2->valueText();
															writeFile("2", "6", "4");
														}));
													}
													mark_5_drama_3_user_2 = new Wt::WContainerWidget(mark_drama_3_user_2);
													mark_5_drama_3_user_2->setId("mark_5_drama_3_user_2");
													mark_5_drama_3_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_5_drama_3_user_2->setInline(0);
													mark_5_drama_3_user_2->setHtmlTagName("div");
													{
														button_drama_3_mark_5_user_2 = new Wt::WPushButton(mark_5_drama_3_user_2);
														button_drama_3_mark_5_user_2->setId("button_drama_3_mark_5_user_2");
														button_drama_3_mark_5_user_2->setStyleClass(Wt::WString::fromUTF8(" btn btn-group with-label btn-success"));
														button_drama_3_mark_5_user_2->setInline(1);
														button_drama_3_mark_5_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_3_mark_5_user_2->setText(Wt::WString::fromUTF8("5"));
														button_drama_3_mark_5_user_2->setLink(Wt::WLink(""));
														button_drama_3_mark_5_user_2->clicked().connect(button_drama_3_mark_5_user_2, &Wt::WPushButton::disable);
														button_drama_3_mark_5_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_drama_3_mark_5_user_2->valueText();
															writeFile("2", "6", "5");
														}));
													}
												}
											}
										}
									}
									horror_user_2 = new Wt::WContainerWidget(container_films_2);
									horror_user_2_mi = menu_user_2->addItem(Wt::WString("Horror"), horror_user_2);
									horror_user_2->setId("horror_user_2");
									horror_user_2->setStyleClass(Wt::WString::fromUTF8(""));
									horror_user_2->setInline(0);
									menu_user_2->setItemDisabled(2, 0);
									menu_user_2->setItemHidden(2, 0);
									{
										container_horror_user_2 = new Wt::WContainerWidget(horror_user_2);
										container_horror_user_2->setId("container_horror_user_2");
										container_horror_user_2->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
										container_horror_user_2->setInline(0);
										container_horror_user_2->setHtmlTagName("div");
										{
											horror_1_user_2 = new Wt::WContainerWidget(container_horror_user_2);
											horror_1_user_2->setId("horror_1_user_2");
											horror_1_user_2->setStyleClass(Wt::WString::fromUTF8(" btn-group"));
											horror_1_user_2->setInline(0);
											horror_1_user_2->setHtmlTagName("div");
											{
												horror_image_1_user_2 = new Wt::WImage(horror_1_user_2);
												horror_image_1_user_2->setId("horror_image_1_user_2");
												horror_image_1_user_2->setStyleClass(Wt::WString::fromUTF8("center-block"));
												horror_image_1_user_2->setInline(0);
												horror_image_1_user_2->setImageLink(Wt::WLink("http://img.dotua.org/fsua_items/cover/00/42/35/10/00423560.jpg"));
												watch_horror_1_user_2 = new Wt::WPushButton(horror_1_user_2);
												watch_horror_1_user_2->setId("watch_horror_1_user_2");
												watch_horror_1_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default with-label btn-success center-block"));
												watch_horror_1_user_2->setInline(1);
												watch_horror_1_user_2->setEmptyText(Wt::WString::fromUTF8(""));
												watch_horror_1_user_2->setText(Wt::WString::fromUTF8("Watch"));
												watch_horror_1_user_2->setLink(Wt::WLink("http://fs213.www.ex.ua/show/79fe30f4355edf31282fce0cb5b44115/4266267/79fe30f4355edf31282fce0cb5b44115.mp4"));
												rating_horror_1_user_2 = new Wt::WPushButton(horror_1_user_2);
												rating_horror_1_user_2->setId("rating_horror_1_user_2");
												rating_horror_1_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-warning with-label center-block"));
												rating_horror_1_user_2->setInline(1);
												rating_horror_1_user_2->setEmptyText(Wt::WString::fromUTF8(""));
												rating_horror_1_user_2->setText(Wt::WString::fromUTF8("Rating"));
												rating_horror_1_user_2->setLink(Wt::WLink("http://www.kinopoisk.ru/film/87179/"));
												mark_horror_1_user_2 = new Wt::WContainerWidget(horror_1_user_2);
												mark_horror_1_user_2->setId("mark_horror_1_user_2");
												mark_horror_1_user_2->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
												mark_horror_1_user_2->setInline(0);
												mark_horror_1_user_2->setHtmlTagName("div");
												{
													mark_1_horror_1_user_2 = new Wt::WContainerWidget(mark_horror_1_user_2);
													mark_1_horror_1_user_2->setId("mark_1_horror_1_user_2");
													mark_1_horror_1_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_1_horror_1_user_2->setInline(0);
													mark_1_horror_1_user_2->setHtmlTagName("div");
													{
														button_horror_1_mark_1_user_2 = new Wt::WPushButton(mark_1_horror_1_user_2);
														button_horror_1_mark_1_user_2->setId("button_horror_1_mark_1_user_2");
														button_horror_1_mark_1_user_2->setStyleClass(Wt::WString::fromUTF8(" btn btn-danger btn-group with-label"));
														button_horror_1_mark_1_user_2->setInline(1);
														button_horror_1_mark_1_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_1_mark_1_user_2->setText(Wt::WString::fromUTF8("1"));
														button_horror_1_mark_1_user_2->setLink(Wt::WLink(""));
														button_horror_1_mark_1_user_2->clicked().connect(button_horror_1_mark_1_user_2, &Wt::WPushButton::disable);
														button_horror_1_mark_1_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_horror_1_mark_1_user_2->valueText();
															writeFile("2", "7", "1");
														}));
													}
													mark_2_horror_1_user_2 = new Wt::WContainerWidget(mark_horror_1_user_2);
													mark_2_horror_1_user_2->setId("mark_2_horror_1_user_2");
													mark_2_horror_1_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_2_horror_1_user_2->setInline(0);
													mark_2_horror_1_user_2->setHtmlTagName("div");
													{
														button_horror_1_mark_2_user_2 = new Wt::WPushButton(mark_2_horror_1_user_2);
														button_horror_1_mark_2_user_2->setId("button_horror_1_mark_2_user_2");
														button_horror_1_mark_2_user_2->setStyleClass(Wt::WString::fromUTF8(" btn btn-warning btn-group with-label"));
														button_horror_1_mark_2_user_2->setInline(1);
														button_horror_1_mark_2_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_1_mark_2_user_2->setText(Wt::WString::fromUTF8("2"));
														button_horror_1_mark_2_user_2->setLink(Wt::WLink(""));
														button_horror_1_mark_2_user_2->clicked().connect(button_horror_1_mark_2_user_2, &Wt::WPushButton::disable);
														button_horror_1_mark_2_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_horror_1_mark_2_user_2->valueText();
															writeFile("2", "7", "2");
														}));
													}
													mark_3_horror_1_user_2 = new Wt::WContainerWidget(mark_horror_1_user_2);
													mark_3_horror_1_user_2->setId("mark_3_horror_1_user_2");
													mark_3_horror_1_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_3_horror_1_user_2->setInline(0);
													mark_3_horror_1_user_2->setHtmlTagName("div");
													{
														button_horror_1_mark_3_user_2 = new Wt::WPushButton(mark_3_horror_1_user_2);
														button_horror_1_mark_3_user_2->setId("button_horror_1_mark_3_user_2");
														button_horror_1_mark_3_user_2->setStyleClass(Wt::WString::fromUTF8("btn-primary  btn btn-group with-label"));
														button_horror_1_mark_3_user_2->setInline(1);
														button_horror_1_mark_3_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_1_mark_3_user_2->setText(Wt::WString::fromUTF8("3"));
														button_horror_1_mark_3_user_2->setLink(Wt::WLink(""));
														button_horror_1_mark_3_user_2->clicked().connect(button_horror_1_mark_3_user_2, &Wt::WPushButton::disable);
														button_horror_1_mark_3_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_horror_1_mark_1_user_2->valueText();
															writeFile("2", "7", "3");
														}));
													}
													mark_4_horror_1_user_2 = new Wt::WContainerWidget(mark_horror_1_user_2);
													mark_4_horror_1_user_2->setId("mark_4_horror_1_user_2");
													mark_4_horror_1_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_4_horror_1_user_2->setInline(0);
													mark_4_horror_1_user_2->setHtmlTagName("div");
													{
														button_horror_1_mark_4_user_2 = new Wt::WPushButton(mark_4_horror_1_user_2);
														button_horror_1_mark_4_user_2->setId("button_horror_1_mark_4_user_2");
														button_horror_1_mark_4_user_2->setStyleClass(Wt::WString::fromUTF8(" btn-info btn btn-group with-label"));
														button_horror_1_mark_4_user_2->setInline(1);
														button_horror_1_mark_4_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_1_mark_4_user_2->setText(Wt::WString::fromUTF8("4"));
														button_horror_1_mark_4_user_2->setLink(Wt::WLink(""));
														button_horror_1_mark_4_user_2->clicked().connect(button_horror_1_mark_4_user_2, &Wt::WPushButton::disable);
														button_horror_1_mark_4_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_horror_1_mark_4_user_2->valueText();
															writeFile("2", "7", "4");
														}));
													}
													mark_5_horror_1_user_2 = new Wt::WContainerWidget(mark_horror_1_user_2);
													mark_5_horror_1_user_2->setId("mark_5_horror_1_user_2");
													mark_5_horror_1_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_5_horror_1_user_2->setInline(0);
													mark_5_horror_1_user_2->setHtmlTagName("div");
													{
														button_horror_1_mark_5_user_2 = new Wt::WPushButton(mark_5_horror_1_user_2);
														button_horror_1_mark_5_user_2->setId("button_horror_1_mark_5_user_2");
														button_horror_1_mark_5_user_2->setStyleClass(Wt::WString::fromUTF8(" btn btn-group with-label btn-success"));
														button_horror_1_mark_5_user_2->setInline(1);
														button_horror_1_mark_5_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_1_mark_5_user_2->setText(Wt::WString::fromUTF8("5"));
														button_horror_1_mark_5_user_2->setLink(Wt::WLink(""));
														button_horror_1_mark_5_user_2->clicked().connect(button_horror_1_mark_5_user_2, &Wt::WPushButton::disable);
														button_horror_1_mark_5_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_horror_1_mark_5_user_2->valueText();
															writeFile("2", "7", "5");
														}));
													}
												}
											}
											horror_2_user_2 = new Wt::WContainerWidget(container_horror_user_2);
											horror_2_user_2->setId("horror_2_user_2");
											horror_2_user_2->setStyleClass(Wt::WString::fromUTF8(" btn-group"));
											horror_2_user_2->setInline(0);
											horror_2_user_2->setHtmlTagName("div");
											{
												horror_image_2_user_2 = new Wt::WImage(horror_2_user_2);
												horror_image_2_user_2->setId("horror_image_2_user_2");
												horror_image_2_user_2->setStyleClass(Wt::WString::fromUTF8("center-block"));
												horror_image_2_user_2->setInline(0);
												horror_image_2_user_2->setImageLink(Wt::WLink("http://img.dotua.org/fsua_items/cover/00/14/58/10/00145883.jpg"));
												watch_horror_2_user_2 = new Wt::WPushButton(horror_2_user_2);
												watch_horror_2_user_2->setId("watch_horror_2_user_2");
												watch_horror_2_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default with-label btn-success center-block"));
												watch_horror_2_user_2->setInline(1);
												watch_horror_2_user_2->setEmptyText(Wt::WString::fromUTF8(""));
												watch_horror_2_user_2->setText(Wt::WString::fromUTF8("Watch"));
												watch_horror_2_user_2->setLink(Wt::WLink("http://fs145.www.ex.ua/show/4450bba7e9c69222a3f02b6752483fe6/152133418/4450bba7e9c69222a3f02b6752483fe6.mp4"));
												rating_horror_2_user_2 = new Wt::WPushButton(horror_2_user_2);
												rating_horror_2_user_2->setId("rating_horror_2_user_2");
												rating_horror_2_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-warning with-label center-block"));
												rating_horror_2_user_2->setInline(1);
												rating_horror_2_user_2->setEmptyText(Wt::WString::fromUTF8(""));
												rating_horror_2_user_2->setText(Wt::WString::fromUTF8("Rating"));
												rating_horror_2_user_2->setLink(Wt::WLink("http://www.kinopoisk.ru/film/345/"));
												mark_horror_2_user_2 = new Wt::WContainerWidget(horror_2_user_2);
												mark_horror_2_user_2->setId("mark_horror_2_user_2");
												mark_horror_2_user_2->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
												mark_horror_2_user_2->setInline(0);
												mark_horror_2_user_2->setHtmlTagName("div");
												{
													mark_1_horror_2_user_2 = new Wt::WContainerWidget(mark_horror_2_user_2);
													mark_1_horror_2_user_2->setId("mark_1_horror_2_user_2");
													mark_1_horror_2_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_1_horror_2_user_2->setInline(0);
													mark_1_horror_2_user_2->setHtmlTagName("div");
													{
														button_horror_2_mark_1_user_2 = new Wt::WPushButton(mark_1_horror_2_user_2);
														button_horror_2_mark_1_user_2->setId("button_horror_2_mark_1_user_2");
														button_horror_2_mark_1_user_2->setStyleClass(Wt::WString::fromUTF8(" btn btn-danger btn-group with-label"));
														button_horror_2_mark_1_user_2->setInline(1);
														button_horror_2_mark_1_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_2_mark_1_user_2->setText(Wt::WString::fromUTF8("1"));
														button_horror_2_mark_1_user_2->setLink(Wt::WLink(""));
														button_horror_2_mark_1_user_2->clicked().connect(button_horror_2_mark_1_user_2, &Wt::WPushButton::disable);
														button_horror_2_mark_1_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_horror_2_mark_1_user_2->valueText();
															writeFile("2", "8", "1");
														}));
													}
													mark_2_horror_2_user_2 = new Wt::WContainerWidget(mark_horror_2_user_2);
													mark_2_horror_2_user_2->setId("mark_2_horror_2_user_2");
													mark_2_horror_2_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_2_horror_2_user_2->setInline(0);
													mark_2_horror_2_user_2->setHtmlTagName("div");
													{
														button_horror_2_mark_2_user_2 = new Wt::WPushButton(mark_2_horror_2_user_2);
														button_horror_2_mark_2_user_2->setId("button_horror_2_mark_2_user_2");
														button_horror_2_mark_2_user_2->setStyleClass(Wt::WString::fromUTF8(" btn btn-warning btn-group with-label"));
														button_horror_2_mark_2_user_2->setInline(1);
														button_horror_2_mark_2_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_2_mark_2_user_2->setText(Wt::WString::fromUTF8("2"));
														button_horror_2_mark_2_user_2->setLink(Wt::WLink(""));
														button_horror_2_mark_2_user_2->clicked().connect(button_horror_2_mark_2_user_2, &Wt::WPushButton::disable);
														button_horror_2_mark_2_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_horror_2_mark_2_user_2->valueText();
															writeFile("2", "8", "2");
														}));
													}
													mark_3_horror_2_user_2 = new Wt::WContainerWidget(mark_horror_2_user_2);
													mark_3_horror_2_user_2->setId("mark_3_horror_2_user_2");
													mark_3_horror_2_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_3_horror_2_user_2->setInline(0);
													mark_3_horror_2_user_2->setHtmlTagName("div");
													{
														button_horror_2_mark_3_user_2 = new Wt::WPushButton(mark_3_horror_2_user_2);
														button_horror_2_mark_3_user_2->setId("button_horror_2_mark_3_user_2");
														button_horror_2_mark_3_user_2->setStyleClass(Wt::WString::fromUTF8("btn-primary  btn btn-group with-label"));
														button_horror_2_mark_3_user_2->setInline(1);
														button_horror_2_mark_3_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_2_mark_3_user_2->setText(Wt::WString::fromUTF8("3"));
														button_horror_2_mark_3_user_2->setLink(Wt::WLink(""));
														button_horror_2_mark_3_user_2->clicked().connect(button_horror_2_mark_3_user_2, &Wt::WPushButton::disable);
														button_horror_2_mark_3_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_horror_2_mark_3_user_2->valueText();
															writeFile("2", "8", "3");
														}));
													}
													mark_4_horror_2_user_2 = new Wt::WContainerWidget(mark_horror_2_user_2);
													mark_4_horror_2_user_2->setId("mark_4_horror_2_user_2");
													mark_4_horror_2_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_4_horror_2_user_2->setInline(0);
													mark_4_horror_2_user_2->setHtmlTagName("div");
													{
														button_horror_2_mark_4_user_2 = new Wt::WPushButton(mark_4_horror_2_user_2);
														button_horror_2_mark_4_user_2->setId("button_horror_2_mark_4_user_2");
														button_horror_2_mark_4_user_2->setStyleClass(Wt::WString::fromUTF8(" btn-info btn btn-group with-label"));
														button_horror_2_mark_4_user_2->setInline(1);
														button_horror_2_mark_4_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_2_mark_4_user_2->setText(Wt::WString::fromUTF8("4"));
														button_horror_2_mark_4_user_2->setLink(Wt::WLink(""));
														button_horror_2_mark_4_user_2->clicked().connect(button_horror_2_mark_4_user_2, &Wt::WPushButton::disable);
														button_horror_2_mark_4_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_horror_2_mark_4_user_2->valueText();
															writeFile("2", "8", "4");
														}));
													}
													mark_5_horror_2_user_1_cp = new Wt::WContainerWidget(mark_horror_2_user_2);
													mark_5_horror_2_user_1_cp->setId("mark_5_horror_2_user_1_cp");
													mark_5_horror_2_user_1_cp->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_5_horror_2_user_1_cp->setInline(0);
													mark_5_horror_2_user_1_cp->setHtmlTagName("div");
													{
														button_horror_2_mark_5_user_2 = new Wt::WPushButton(mark_5_horror_2_user_1_cp);
														button_horror_2_mark_5_user_2->setId("button_horror_2_mark_5_user_2");
														button_horror_2_mark_5_user_2->setStyleClass(Wt::WString::fromUTF8(" btn btn-group with-label btn-success"));
														button_horror_2_mark_5_user_2->setInline(1);
														button_horror_2_mark_5_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_2_mark_5_user_2->setText(Wt::WString::fromUTF8("5"));
														button_horror_2_mark_5_user_2->setLink(Wt::WLink(""));
														button_horror_2_mark_5_user_2->clicked().connect(button_horror_2_mark_5_user_2, &Wt::WPushButton::disable);
														button_horror_2_mark_5_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_horror_2_mark_5_user_2->valueText();
															writeFile("2", "8", "5");
														}));
													}
												}
											}
											horror_3_user_2 = new Wt::WContainerWidget(container_horror_user_2);
											horror_3_user_2->setId("horror_3_user_2");
											horror_3_user_2->setStyleClass(Wt::WString::fromUTF8(" btn-group"));
											horror_3_user_2->setInline(0);
											horror_3_user_2->setHtmlTagName("div");
											{
												horror_image_3_user_2 = new Wt::WImage(horror_3_user_2);
												horror_image_3_user_2->setId("horror_image_3_user_2");
												horror_image_3_user_2->setStyleClass(Wt::WString::fromUTF8("center-block"));
												horror_image_3_user_2->setInline(0);
												horror_image_3_user_2->setImageLink(Wt::WLink("http://img.dotua.org/fsua_items/cover/00/14/01/10/00140147.jpg"));
												watch_horror_3_user_2 = new Wt::WPushButton(horror_3_user_2);
												watch_horror_3_user_2->setId("watch_horror_3_user_2");
												watch_horror_3_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default with-label btn-success center-block"));
												watch_horror_3_user_2->setInline(1);
												watch_horror_3_user_2->setEmptyText(Wt::WString::fromUTF8(""));
												watch_horror_3_user_2->setText(Wt::WString::fromUTF8("Watch"));
												watch_horror_3_user_2->setLink(Wt::WLink("http://fs9.www.ex.ua/show/c6f2d7015bdad96fefa71b6d1f37eadc/87754719/c6f2d7015bdad96fefa71b6d1f37eadc.mp4"));
												rating_horror_3_user_2 = new Wt::WPushButton(horror_3_user_2);
												rating_horror_3_user_2->setId("rating_horror_3_user_2");
												rating_horror_3_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-warning with-label center-block"));
												rating_horror_3_user_2->setInline(1);
												rating_horror_3_user_2->setEmptyText(Wt::WString::fromUTF8(""));
												rating_horror_3_user_2->setText(Wt::WString::fromUTF8("Rating"));
												rating_horror_3_user_2->setLink(Wt::WLink("http://www.kinopoisk.ru/film/64187/"));
												mark_horror_3_user_2 = new Wt::WContainerWidget(horror_3_user_2);
												mark_horror_3_user_2->setId("mark_horror_3_user_2");
												mark_horror_3_user_2->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
												mark_horror_3_user_2->setInline(0);
												mark_horror_3_user_2->setHtmlTagName("div");
												{
													mark_1_horror_3_user_2 = new Wt::WContainerWidget(mark_horror_3_user_2);
													mark_1_horror_3_user_2->setId("mark_1_horror_3_user_2");
													mark_1_horror_3_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_1_horror_3_user_2->setInline(0);
													mark_1_horror_3_user_2->setHtmlTagName("div");
													{
														button_horror_3_mark_1_user_2 = new Wt::WPushButton(mark_1_horror_3_user_2);
														button_horror_3_mark_1_user_2->setId("button_horror_3_mark_1_user_2");
														button_horror_3_mark_1_user_2->setStyleClass(Wt::WString::fromUTF8(" btn btn-danger btn-group with-label"));
														button_horror_3_mark_1_user_2->setInline(1);
														button_horror_3_mark_1_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_3_mark_1_user_2->setText(Wt::WString::fromUTF8("1"));
														button_horror_3_mark_1_user_2->setLink(Wt::WLink(""));
														button_horror_3_mark_1_user_2->clicked().connect(button_horror_3_mark_1_user_2, &Wt::WPushButton::disable);
														button_horror_3_mark_1_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_horror_3_mark_1_user_2->valueText();
															writeFile("2", "9", "1");
														}));
													}
													mark_2_horror_3_user_2 = new Wt::WContainerWidget(mark_horror_3_user_2);
													mark_2_horror_3_user_2->setId("mark_2_horror_3_user_2");
													mark_2_horror_3_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_2_horror_3_user_2->setInline(0);
													mark_2_horror_3_user_2->setHtmlTagName("div");
													{
														button_horror_3_mark_2_user_2 = new Wt::WPushButton(mark_2_horror_3_user_2);
														button_horror_3_mark_2_user_2->setId("button_horror_3_mark_2_user_2");
														button_horror_3_mark_2_user_2->setStyleClass(Wt::WString::fromUTF8(" btn btn-warning btn-group with-label"));
														button_horror_3_mark_2_user_2->setInline(1);
														button_horror_3_mark_2_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_3_mark_2_user_2->setText(Wt::WString::fromUTF8("2"));
														button_horror_3_mark_2_user_2->setLink(Wt::WLink(""));
														button_horror_3_mark_2_user_2->clicked().connect(button_horror_3_mark_2_user_2, &Wt::WPushButton::disable);
														button_horror_3_mark_2_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_horror_3_mark_2_user_2->valueText();
															writeFile("2", "9", "2");
														}));
													}
													mark_3_horror_3_user_2 = new Wt::WContainerWidget(mark_horror_3_user_2);
													mark_3_horror_3_user_2->setId("mark_3_horror_3_user_2");
													mark_3_horror_3_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_3_horror_3_user_2->setInline(0);
													mark_3_horror_3_user_2->setHtmlTagName("div");
													{
														button_horror_3_mark_3_user_2 = new Wt::WPushButton(mark_3_horror_3_user_2);
														button_horror_3_mark_3_user_2->setId("button_horror_3_mark_3_user_2");
														button_horror_3_mark_3_user_2->setStyleClass(Wt::WString::fromUTF8("btn-primary  btn btn-group with-label"));
														button_horror_3_mark_3_user_2->setInline(1);
														button_horror_3_mark_3_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_3_mark_3_user_2->setText(Wt::WString::fromUTF8("3"));
														button_horror_3_mark_3_user_2->setLink(Wt::WLink(""));
														button_horror_3_mark_3_user_2->clicked().connect(button_horror_3_mark_3_user_2, &Wt::WPushButton::disable);
														button_horror_3_mark_3_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_horror_3_mark_3_user_2->valueText();
															writeFile("2", "9", "3");
														}));
													}
													mark_4_horror_3_user_2 = new Wt::WContainerWidget(mark_horror_3_user_2);
													mark_4_horror_3_user_2->setId("mark_4_horror_3_user_2");
													mark_4_horror_3_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_4_horror_3_user_2->setInline(0);
													mark_4_horror_3_user_2->setHtmlTagName("div");
													{
														button_horror_3_mark_4_user_2 = new Wt::WPushButton(mark_4_horror_3_user_2);
														button_horror_3_mark_4_user_2->setId("button_horror_3_mark_4_user_2");
														button_horror_3_mark_4_user_2->setStyleClass(Wt::WString::fromUTF8(" btn-info btn btn-group with-label"));
														button_horror_3_mark_4_user_2->setInline(1);
														button_horror_3_mark_4_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_3_mark_4_user_2->setText(Wt::WString::fromUTF8("4"));
														button_horror_3_mark_4_user_2->setLink(Wt::WLink(""));
														button_horror_3_mark_4_user_2->clicked().connect(button_horror_3_mark_4_user_2, &Wt::WPushButton::disable);
														button_horror_3_mark_4_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_horror_3_mark_4_user_2->valueText();
															writeFile("2", "9", "4");
														}));
													}
													mark_5_horror_3_user_2 = new Wt::WContainerWidget(mark_horror_3_user_2);
													mark_5_horror_3_user_2->setId("mark_5_horror_3_user_2");
													mark_5_horror_3_user_2->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_5_horror_3_user_2->setInline(0);
													mark_5_horror_3_user_2->setHtmlTagName("div");
													{
														button_horror_3_mark_5_user_2 = new Wt::WPushButton(mark_5_horror_3_user_2);
														button_horror_3_mark_5_user_2->setId("button_horror_3_mark_5_user_2");
														button_horror_3_mark_5_user_2->setStyleClass(Wt::WString::fromUTF8(" btn btn-group with-label btn-success"));
														button_horror_3_mark_5_user_2->setInline(1);
														button_horror_3_mark_5_user_2->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_3_mark_5_user_2->setText(Wt::WString::fromUTF8("5"));
														button_horror_3_mark_5_user_2->setLink(Wt::WLink(""));
														button_horror_3_mark_5_user_2->clicked().connect(button_horror_3_mark_5_user_2, &Wt::WPushButton::disable);
														button_horror_3_mark_5_user_2->clicked().connect(std::bind([=]() {
															std::cout << button_horror_3_mark_5_user_2->valueText();
															writeFile("2", "9", "5");
														}));
													}
												}
											}
										}
									}
								}
							}
						}
						nv_menu_user_3 = new Wt::WContainerWidget(container_text);
						nv_menu_user_3_mi = select_user->addItem(Wt::WString("User 3"), nv_menu_user_3);
						nv_menu_user_3->setId("nv_menu_user_3");
						nv_menu_user_3->setStyleClass(Wt::WString::fromUTF8(""));
						nv_menu_user_3->setInline(0);
						select_user->setItemDisabled(2, 0);
						select_user->setItemHidden(2, 0);
						
						{
							container_films_3 = new Wt::WContainerWidget(nv_menu_user_3);
							container_films_3->setId("container_films_3");
							container_films_3->setStyleClass(Wt::WString::fromUTF8(""));
							container_films_3->setInline(0);
							container_films_3->setHtmlTagName("div");
							{
								menu_user_3 = new Wt::WMenu(new Wt::WStackedWidget(), container_films_3);
								container_films_3->addWidget(menu_user_3->contentsStack());
								menu_user_3->contentsStack()->setId("menu_user_3_stackedwidget");
								menu_user_3->setId("menu_user_3");
								menu_user_3->setStyleClass(Wt::WString::fromUTF8("nav-pills nav-stacked nav"));
								menu_user_3->setInline(1);
								userNumber = 3;
								{
									comedy_user_3 = new Wt::WContainerWidget(container_films_3);
									comedy_user_3_mi = menu_user_3->addItem(Wt::WString("Comedy"), comedy_user_3);
									comedy_user_3->setId("comedy_user_3");
									comedy_user_3->setStyleClass(Wt::WString::fromUTF8(""));
									comedy_user_3->setInline(0);
									menu_user_3->setItemDisabled(0, 0);
									menu_user_3->setItemHidden(0, 0);
									{
										container_comedy_user_3 = new Wt::WContainerWidget(comedy_user_3);
										container_comedy_user_3->setId("container_comedy_user_3");
										container_comedy_user_3->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
										container_comedy_user_3->setInline(0);
										container_comedy_user_3->setHtmlTagName("div");
										{
											comedy_1_user_3 = new Wt::WContainerWidget(container_comedy_user_3);
											comedy_1_user_3->setId("comedy_1_user_3");
											comedy_1_user_3->setStyleClass(Wt::WString::fromUTF8(" btn-group"));
											comedy_1_user_3->setInline(0);
											comedy_1_user_3->setHtmlTagName("div");
											{
												comedy_image_1_user_3 = new Wt::WImage(comedy_1_user_3);
												comedy_image_1_user_3->setId("comedy_image_1_user_3");
												comedy_image_1_user_3->setStyleClass(Wt::WString::fromUTF8("center-block"));
												comedy_image_1_user_3->setInline(0);
												comedy_image_1_user_3->setImageLink(Wt::WLink("http://img.dotua.org/fsua_items/cover/00/42/37/10/00423720.jpg"));
												watch_comedy_1_user_3 = new Wt::WPushButton(comedy_1_user_3);
												watch_comedy_1_user_3->setId("watch_comedy_1_user_3");
												watch_comedy_1_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default with-label btn-success center-block"));
												watch_comedy_1_user_3->setInline(1);
												watch_comedy_1_user_3->setEmptyText(Wt::WString::fromUTF8(""));
												watch_comedy_1_user_3->setText(Wt::WString::fromUTF8("Watch"));
												watch_comedy_1_user_3->setLink(Wt::WLink("http://www.ex.ua/show/207854449/5e2b0e298067ac5505e943070d9ee633.mp4"));
												rating_comedy_1_user_3 = new Wt::WPushButton(comedy_1_user_3);
												rating_comedy_1_user_3->setId("rating_comedy_1_user_3");
												rating_comedy_1_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-warning with-label center-block"));
												rating_comedy_1_user_3->setInline(1);
												rating_comedy_1_user_3->setEmptyText(Wt::WString::fromUTF8(""));
												rating_comedy_1_user_3->setText(Wt::WString::fromUTF8("Rating"));
												rating_comedy_1_user_3->setLink(Wt::WLink("http://www.kinopoisk.ru/film/817481/"));
												mark_comedy_1_user_3 = new Wt::WContainerWidget(comedy_1_user_3);
												mark_comedy_1_user_3->setId("mark_comedy_1_user_3");
												mark_comedy_1_user_3->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
												mark_comedy_1_user_3->setInline(0);
												mark_comedy_1_user_3->setHtmlTagName("div");
												{
													mark_1_comedy_1_user_3 = new Wt::WContainerWidget(mark_comedy_1_user_3);
													mark_1_comedy_1_user_3->setId("mark_1_comedy_1_user_3");
													mark_1_comedy_1_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_1_comedy_1_user_3->setInline(0);
													mark_1_comedy_1_user_3->setHtmlTagName("div");
													{
														button_comedy_1_mark_1_user_3 = new Wt::WPushButton(mark_1_comedy_1_user_3);
														button_comedy_1_mark_1_user_3->setId("button_comedy_1_mark_1_user_3");
														button_comedy_1_mark_1_user_3->setStyleClass(Wt::WString::fromUTF8(" btn btn-danger btn-group with-label"));
														button_comedy_1_mark_1_user_3->setInline(1);
														button_comedy_1_mark_1_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_1_mark_1_user_3->setText(Wt::WString::fromUTF8("1"));
														button_comedy_1_mark_1_user_3->setLink(Wt::WLink(""));
														button_comedy_1_mark_1_user_3->clicked().connect(button_comedy_1_mark_1_user_3, &Wt::WPushButton::disable);
														button_comedy_1_mark_1_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_1_mark_1_user_3->valueText();
															writeFile("3", "1", "1");
														}));
													}
													mark_2_comedy_1_user_3 = new Wt::WContainerWidget(mark_comedy_1_user_3);
													mark_2_comedy_1_user_3->setId("mark_2_comedy_1_user_3");
													mark_2_comedy_1_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_2_comedy_1_user_3->setInline(0);
													mark_2_comedy_1_user_3->setHtmlTagName("div");
													{
														button_comedy_1_mark_2_user_3 = new Wt::WPushButton(mark_2_comedy_1_user_3);
														button_comedy_1_mark_2_user_3->setId("button_comedy_1_mark_2_user_3");
														button_comedy_1_mark_2_user_3->setStyleClass(Wt::WString::fromUTF8(" btn btn-warning btn-group with-label"));
														button_comedy_1_mark_2_user_3->setInline(1);
														button_comedy_1_mark_2_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_1_mark_2_user_3->setText(Wt::WString::fromUTF8("2"));
														button_comedy_1_mark_2_user_3->setLink(Wt::WLink(""));
														button_comedy_1_mark_2_user_3->clicked().connect(button_comedy_1_mark_2_user_3, &Wt::WPushButton::disable);
														button_comedy_1_mark_2_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_1_mark_2_user_3->valueText();
															writeFile("3", "1", "2");
														}));
													}
													mark_3_comedy_1_user_3 = new Wt::WContainerWidget(mark_comedy_1_user_3);
													mark_3_comedy_1_user_3->setId("mark_3_comedy_1_user_3");
													mark_3_comedy_1_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_3_comedy_1_user_3->setInline(0);
													mark_3_comedy_1_user_3->setHtmlTagName("div");
													{
														button_comedy_1_mark_3_user_3 = new Wt::WPushButton(mark_3_comedy_1_user_3);
														button_comedy_1_mark_3_user_3->setId("button_comedy_1_mark_3_user_3");
														button_comedy_1_mark_3_user_3->setStyleClass(Wt::WString::fromUTF8("btn-primary  btn btn-group with-label"));
														button_comedy_1_mark_3_user_3->setInline(1);
														button_comedy_1_mark_3_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_1_mark_3_user_3->setText(Wt::WString::fromUTF8("3"));
														button_comedy_1_mark_3_user_3->setLink(Wt::WLink(""));
														button_comedy_1_mark_3_user_3->clicked().connect(button_comedy_1_mark_3_user_3, &Wt::WPushButton::disable);
														button_comedy_1_mark_3_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_1_mark_3_user_3->valueText();
															writeFile("3", "1", "3");
														}));
													}
													mark_4_comedy_1_user_3 = new Wt::WContainerWidget(mark_comedy_1_user_3);
													mark_4_comedy_1_user_3->setId("mark_4_comedy_1_user_3");
													mark_4_comedy_1_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_4_comedy_1_user_3->setInline(0);
													mark_4_comedy_1_user_3->setHtmlTagName("div");
													{
														button_comedy_1_mark_4_user_3 = new Wt::WPushButton(mark_4_comedy_1_user_3);
														button_comedy_1_mark_4_user_3->setId("button_comedy_1_mark_4_user_3");
														button_comedy_1_mark_4_user_3->setStyleClass(Wt::WString::fromUTF8(" btn-info btn btn-group with-label"));
														button_comedy_1_mark_4_user_3->setInline(1);
														button_comedy_1_mark_4_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_1_mark_4_user_3->setText(Wt::WString::fromUTF8("4"));
														button_comedy_1_mark_4_user_3->setLink(Wt::WLink(""));
														button_comedy_1_mark_4_user_3->clicked().connect(button_comedy_1_mark_4_user_3, &Wt::WPushButton::disable);
														button_comedy_1_mark_4_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_1_mark_4_user_3->valueText();
															writeFile("3", "1", "4");
														}));
													}
													mark_5_comedy_1_user_3 = new Wt::WContainerWidget(mark_comedy_1_user_3);
													mark_5_comedy_1_user_3->setId("mark_5_comedy_1_user_3");
													mark_5_comedy_1_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_5_comedy_1_user_3->setInline(0);
													mark_5_comedy_1_user_3->setHtmlTagName("div");
													{
														button_comedy_1_mark_5_user_3 = new Wt::WPushButton(mark_5_comedy_1_user_3);
														button_comedy_1_mark_5_user_3->setId("button_comedy_1_mark_5_user_3");
														button_comedy_1_mark_5_user_3->setStyleClass(Wt::WString::fromUTF8(" btn btn-group with-label btn-success"));
														button_comedy_1_mark_5_user_3->setInline(1);
														button_comedy_1_mark_5_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_1_mark_5_user_3->setText(Wt::WString::fromUTF8("5"));
														button_comedy_1_mark_5_user_3->setLink(Wt::WLink(""));
														button_comedy_1_mark_5_user_3->clicked().connect(button_comedy_1_mark_5_user_3, &Wt::WPushButton::disable);
														button_comedy_1_mark_5_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_1_mark_5_user_3->valueText();
															writeFile("3", "1", "5");
														}));
													}
												}
											}
											comedy_2_user_3 = new Wt::WContainerWidget(container_comedy_user_3);
											comedy_2_user_3->setId("comedy_2_user_3");
											comedy_2_user_3->setStyleClass(Wt::WString::fromUTF8(" btn-group"));
											comedy_2_user_3->setInline(0);
											comedy_2_user_3->setHtmlTagName("div");
											{
												comedy_image_2_user_3 = new Wt::WImage(comedy_2_user_3);
												comedy_image_2_user_3->setId("comedy_image_2_user_3");
												comedy_image_2_user_3->setStyleClass(Wt::WString::fromUTF8("center-block"));
												comedy_image_2_user_3->setInline(0);
												comedy_image_2_user_3->setImageLink(Wt::WLink("http://img.dotua.org/fsua_items/cover/00/42/35/10/00423542.jpg"));
												watch_comedy_2_user_3 = new Wt::WPushButton(comedy_2_user_3);
												watch_comedy_2_user_3->setId("watch_comedy_2_user_3");
												watch_comedy_2_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default with-label btn-success center-block"));
												watch_comedy_2_user_3->setInline(1);
												watch_comedy_2_user_3->setEmptyText(Wt::WString::fromUTF8(""));
												watch_comedy_2_user_3->setText(Wt::WString::fromUTF8("Watch"));
												watch_comedy_2_user_3->setLink(Wt::WLink("http://www.ex.ua/show/221305334/44721d879c4a9fdb9416347c45e6f5d2.mp4"));
												rating_comedy_2_user_3 = new Wt::WPushButton(comedy_2_user_3);
												rating_comedy_2_user_3->setId("rating_comedy_2_user_3");
												rating_comedy_2_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-warning with-label center-block"));
												rating_comedy_2_user_3->setInline(1);
												rating_comedy_2_user_3->setEmptyText(Wt::WString::fromUTF8(""));
												rating_comedy_2_user_3->setText(Wt::WString::fromUTF8("Rating"));
												rating_comedy_2_user_3->setLink(Wt::WLink("http://www.kinopoisk.ru/film/891509/"));
												mark_comedy_2_user_3 = new Wt::WContainerWidget(comedy_2_user_3);
												mark_comedy_2_user_3->setId("mark_comedy_2_user_3");
												mark_comedy_2_user_3->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
												mark_comedy_2_user_3->setInline(0);
												mark_comedy_2_user_3->setHtmlTagName("div");
												{
													mark_1_comedy_2_user_3 = new Wt::WContainerWidget(mark_comedy_2_user_3);
													mark_1_comedy_2_user_3->setId("mark_1_comedy_2_user_3");
													mark_1_comedy_2_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_1_comedy_2_user_3->setInline(0);
													mark_1_comedy_2_user_3->setHtmlTagName("div");
													{
														button_comedy_2_mark_1_user_3 = new Wt::WPushButton(mark_1_comedy_2_user_3);
														button_comedy_2_mark_1_user_3->setId("button_comedy_2_mark_1_user_3");
														button_comedy_2_mark_1_user_3->setStyleClass(Wt::WString::fromUTF8(" btn btn-danger btn-group with-label"));
														button_comedy_2_mark_1_user_3->setInline(1);
														button_comedy_2_mark_1_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_2_mark_1_user_3->setText(Wt::WString::fromUTF8("1"));
														button_comedy_2_mark_1_user_3->setLink(Wt::WLink(""));
														button_comedy_2_mark_1_user_3->clicked().connect(button_comedy_2_mark_1_user_3, &Wt::WPushButton::disable);
														button_comedy_2_mark_1_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_2_mark_1_user_3->valueText();
															writeFile("3", "2", "1");
														}));
													}
													mark_2_comedy_2_user_3 = new Wt::WContainerWidget(mark_comedy_2_user_3);
													mark_2_comedy_2_user_3->setId("mark_2_comedy_2_user_3");
													mark_2_comedy_2_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_2_comedy_2_user_3->setInline(0);
													mark_2_comedy_2_user_3->setHtmlTagName("div");
													{
														button_comedy_2_mark_2_user_3 = new Wt::WPushButton(mark_2_comedy_2_user_3);
														button_comedy_2_mark_2_user_3->setId("button_comedy_2_mark_2_user_3");
														button_comedy_2_mark_2_user_3->setStyleClass(Wt::WString::fromUTF8(" btn btn-warning btn-group with-label"));
														button_comedy_2_mark_2_user_3->setInline(1);
														button_comedy_2_mark_2_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_2_mark_2_user_3->setText(Wt::WString::fromUTF8("2"));
														button_comedy_2_mark_2_user_3->setLink(Wt::WLink(""));
														button_comedy_2_mark_2_user_3->clicked().connect(button_comedy_2_mark_2_user_3, &Wt::WPushButton::disable);
														button_comedy_2_mark_2_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_2_mark_2_user_3->valueText();
															writeFile("3", "2", "2");
														}));
													}
													mark_3_comedy_2_user_3 = new Wt::WContainerWidget(mark_comedy_2_user_3);
													mark_3_comedy_2_user_3->setId("mark_3_comedy_2_user_3");
													mark_3_comedy_2_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_3_comedy_2_user_3->setInline(0);
													mark_3_comedy_2_user_3->setHtmlTagName("div");
													{
														button_comedy_2_mark_3_user_3 = new Wt::WPushButton(mark_3_comedy_2_user_3);
														button_comedy_2_mark_3_user_3->setId("button_comedy_2_mark_3_user_3");
														button_comedy_2_mark_3_user_3->setStyleClass(Wt::WString::fromUTF8("btn-primary  btn btn-group with-label"));
														button_comedy_2_mark_3_user_3->setInline(1);
														button_comedy_2_mark_3_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_2_mark_3_user_3->setText(Wt::WString::fromUTF8("3"));
														button_comedy_2_mark_3_user_3->setLink(Wt::WLink(""));
														button_comedy_2_mark_3_user_3->clicked().connect(button_comedy_2_mark_3_user_3, &Wt::WPushButton::disable);
														button_comedy_2_mark_3_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_2_mark_3_user_3->valueText();
															writeFile("3", "2", "3");
														}));
													}
													mark_4_comedy_2_user_3 = new Wt::WContainerWidget(mark_comedy_2_user_3);
													mark_4_comedy_2_user_3->setId("mark_4_comedy_2_user_3");
													mark_4_comedy_2_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_4_comedy_2_user_3->setInline(0);
													mark_4_comedy_2_user_3->setHtmlTagName("div");
													{
														button_comedy_2_mark_4_user_3 = new Wt::WPushButton(mark_4_comedy_2_user_3);
														button_comedy_2_mark_4_user_3->setId("button_comedy_2_mark_4_user_3");
														button_comedy_2_mark_4_user_3->setStyleClass(Wt::WString::fromUTF8(" btn-info btn btn-group with-label"));
														button_comedy_2_mark_4_user_3->setInline(1);
														button_comedy_2_mark_4_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_2_mark_4_user_3->setText(Wt::WString::fromUTF8("4"));
														button_comedy_2_mark_4_user_3->setLink(Wt::WLink(""));
														button_comedy_2_mark_4_user_3->clicked().connect(button_comedy_2_mark_4_user_3, &Wt::WPushButton::disable);
														button_comedy_2_mark_4_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_2_mark_4_user_3->valueText();
															writeFile("3", "2", "4");
														}));
													}
													mark_5_comedy_2_user_3 = new Wt::WContainerWidget(mark_comedy_2_user_3);
													mark_5_comedy_2_user_3->setId("mark_5_comedy_2_user_3");
													mark_5_comedy_2_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_5_comedy_2_user_3->setInline(0);
													mark_5_comedy_2_user_3->setHtmlTagName("div");
													{
														button_comedy_2_mark_5_user_3 = new Wt::WPushButton(mark_5_comedy_2_user_3);
														button_comedy_2_mark_5_user_3->setId("button_comedy_2_mark_5_user_3");
														button_comedy_2_mark_5_user_3->setStyleClass(Wt::WString::fromUTF8(" btn btn-group with-label btn-success"));
														button_comedy_2_mark_5_user_3->setInline(1);
														button_comedy_2_mark_5_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_2_mark_5_user_3->setText(Wt::WString::fromUTF8("5"));
														button_comedy_2_mark_5_user_3->setLink(Wt::WLink(""));
														button_comedy_2_mark_5_user_3->clicked().connect(button_comedy_2_mark_5_user_3, &Wt::WPushButton::disable);
														button_comedy_2_mark_5_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_2_mark_5_user_3->valueText();
															writeFile("3", "2", "5");
														}));
													}
												}
											}
											comedy_3_user_3 = new Wt::WContainerWidget(container_comedy_user_3);
											comedy_3_user_3->setId("comedy_3_user_3");
											comedy_3_user_3->setStyleClass(Wt::WString::fromUTF8(" btn-group"));
											comedy_3_user_3->setInline(0);
											comedy_3_user_3->setHtmlTagName("div");
											{
												comedy_image_3_user_3 = new Wt::WImage(comedy_3_user_3);
												comedy_image_3_user_3->setId("comedy_image_3_user_3");
												comedy_image_3_user_3->setStyleClass(Wt::WString::fromUTF8("center-block"));
												comedy_image_3_user_3->setInline(0);
												comedy_image_3_user_3->setImageLink(Wt::WLink("http://img.dotua.org/fsua_items/cover/00/41/63/10/00416346.jpg"));
												watch_comedy_3_user_3 = new Wt::WPushButton(comedy_3_user_3);
												watch_comedy_3_user_3->setId("watch_comedy_3_user_3");
												watch_comedy_3_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default with-label btn-success center-block"));
												watch_comedy_3_user_3->setInline(1);
												watch_comedy_3_user_3->setEmptyText(Wt::WString::fromUTF8(""));
												watch_comedy_3_user_3->setText(Wt::WString::fromUTF8("Watch"));
												watch_comedy_3_user_3->setLink(Wt::WLink("http://fs183.www.ex.ua/show/1db3efc80e81aee31128052d5e04addf/216383529/1db3efc80e81aee31128052d5e04addf.mp4"));
												rating_comedy_3_user_3 = new Wt::WPushButton(comedy_3_user_3);
												rating_comedy_3_user_3->setId("rating_comedy_3_user_3");
												rating_comedy_3_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-warning with-label center-block"));
												rating_comedy_3_user_3->setInline(1);
												rating_comedy_3_user_3->setEmptyText(Wt::WString::fromUTF8(""));
												rating_comedy_3_user_3->setText(Wt::WString::fromUTF8("Rating"));
												rating_comedy_3_user_3->setLink(Wt::WLink("http://www.kinopoisk.ru/film/714187/"));
												mark_comedy_3_user_3 = new Wt::WContainerWidget(comedy_3_user_3);
												mark_comedy_3_user_3->setId("mark_comedy_3_user_3");
												mark_comedy_3_user_3->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
												mark_comedy_3_user_3->setInline(0);
												mark_comedy_3_user_3->setHtmlTagName("div");
												{
													mark_1_comedy_3_user_3 = new Wt::WContainerWidget(mark_comedy_3_user_3);
													mark_1_comedy_3_user_3->setId("mark_1_comedy_3_user_3");
													mark_1_comedy_3_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_1_comedy_3_user_3->setInline(0);
													mark_1_comedy_3_user_3->setHtmlTagName("div");
													{
														button_comedy_3_mark_1_user_3 = new Wt::WPushButton(mark_1_comedy_3_user_3);
														button_comedy_3_mark_1_user_3->setId("button_comedy_3_mark_1_user_3");
														button_comedy_3_mark_1_user_3->setStyleClass(Wt::WString::fromUTF8(" btn btn-danger btn-group with-label"));
														button_comedy_3_mark_1_user_3->setInline(1);
														button_comedy_3_mark_1_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_3_mark_1_user_3->setText(Wt::WString::fromUTF8("1"));
														button_comedy_3_mark_1_user_3->setLink(Wt::WLink(""));
														button_comedy_3_mark_1_user_3->clicked().connect(button_comedy_3_mark_1_user_3, &Wt::WPushButton::disable);
														button_comedy_3_mark_1_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_3_mark_1_user_3->valueText();
															writeFile("3", "3", "1");
														}));
													}
													mark_2_comedy_3_user_3 = new Wt::WContainerWidget(mark_comedy_3_user_3);
													mark_2_comedy_3_user_3->setId("mark_2_comedy_3_user_3");
													mark_2_comedy_3_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_2_comedy_3_user_3->setInline(0);
													mark_2_comedy_3_user_3->setHtmlTagName("div");
													{
														button_comedy_3_mark_2_user_3 = new Wt::WPushButton(mark_2_comedy_3_user_3);
														button_comedy_3_mark_2_user_3->setId("button_comedy_3_mark_2_user_3");
														button_comedy_3_mark_2_user_3->setStyleClass(Wt::WString::fromUTF8(" btn btn-warning btn-group with-label"));
														button_comedy_3_mark_2_user_3->setInline(1);
														button_comedy_3_mark_2_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_3_mark_2_user_3->setText(Wt::WString::fromUTF8("2"));
														button_comedy_3_mark_2_user_3->setLink(Wt::WLink(""));
														button_comedy_3_mark_2_user_3->clicked().connect(button_comedy_3_mark_2_user_3, &Wt::WPushButton::disable);
														button_comedy_3_mark_2_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_3_mark_2_user_3->valueText();
															writeFile("3", "3", "2");
														}));
													}
													mark_3_comedy_3_user_3 = new Wt::WContainerWidget(mark_comedy_3_user_3);
													mark_3_comedy_3_user_3->setId("mark_3_comedy_3_user_3");
													mark_3_comedy_3_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_3_comedy_3_user_3->setInline(0);
													mark_3_comedy_3_user_3->setHtmlTagName("div");
													{
														button_comedy_3_mark_3_user_3 = new Wt::WPushButton(mark_3_comedy_3_user_3);
														button_comedy_3_mark_3_user_3->setId("button_comedy_3_mark_3_user_3");
														button_comedy_3_mark_3_user_3->setStyleClass(Wt::WString::fromUTF8("btn-primary  btn btn-group with-label"));
														button_comedy_3_mark_3_user_3->setInline(1);
														button_comedy_3_mark_3_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_3_mark_3_user_3->setText(Wt::WString::fromUTF8("3"));
														button_comedy_3_mark_3_user_3->setLink(Wt::WLink(""));
														button_comedy_3_mark_3_user_3->clicked().connect(button_comedy_3_mark_3_user_3, &Wt::WPushButton::disable);
														button_comedy_3_mark_3_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_3_mark_3_user_3->valueText();
															writeFile("3", "3", "3");
														}));
													}
													mark_4_comedy_3_user_3 = new Wt::WContainerWidget(mark_comedy_3_user_3);
													mark_4_comedy_3_user_3->setId("mark_4_comedy_3_user_3");
													mark_4_comedy_3_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_4_comedy_3_user_3->setInline(0);
													mark_4_comedy_3_user_3->setHtmlTagName("div");
													{
														button_comedy_3_mark_4_user_3 = new Wt::WPushButton(mark_4_comedy_3_user_3);
														button_comedy_3_mark_4_user_3->setId("button_comedy_3_mark_4_user_3");
														button_comedy_3_mark_4_user_3->setStyleClass(Wt::WString::fromUTF8(" btn-info btn btn-group with-label"));
														button_comedy_3_mark_4_user_3->setInline(1);
														button_comedy_3_mark_4_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_3_mark_4_user_3->setText(Wt::WString::fromUTF8("4"));
														button_comedy_3_mark_4_user_3->setLink(Wt::WLink(""));
														button_comedy_3_mark_4_user_3->clicked().connect(button_comedy_3_mark_4_user_3, &Wt::WPushButton::disable);
														button_comedy_3_mark_4_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_3_mark_4_user_3->valueText();
															writeFile("3", "3", "4");
														}));
													}
													mark_5_comedy_3_user_3 = new Wt::WContainerWidget(mark_comedy_3_user_3);
													mark_5_comedy_3_user_3->setId("mark_5_comedy_3_user_3");
													mark_5_comedy_3_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_5_comedy_3_user_3->setInline(0);
													mark_5_comedy_3_user_3->setHtmlTagName("div");
													{
														button_comedy_3_mark_5_user_3 = new Wt::WPushButton(mark_5_comedy_3_user_3);
														button_comedy_3_mark_5_user_3->setId("button_comedy_3_mark_5_user_3");
														button_comedy_3_mark_5_user_3->setStyleClass(Wt::WString::fromUTF8(" btn btn-group with-label btn-success"));
														button_comedy_3_mark_5_user_3->setInline(1);
														button_comedy_3_mark_5_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_3_mark_5_user_3->setText(Wt::WString::fromUTF8("5"));
														button_comedy_3_mark_5_user_3->setLink(Wt::WLink(""));
														button_comedy_3_mark_5_user_3->clicked().connect(button_comedy_3_mark_5_user_3, &Wt::WPushButton::disable);
														button_comedy_3_mark_5_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_3_mark_5_user_3->valueText();
															writeFile("3", "3", "5");
														}));
													}
												}
											}
										}
									}
									drama_user_3 = new Wt::WContainerWidget(container_films_3);
									drama_user_3_mi = menu_user_3->addItem(Wt::WString("Drama"), drama_user_3);
									drama_user_3->setId("drama_user_3");
									drama_user_3->setStyleClass(Wt::WString::fromUTF8(""));
									drama_user_3->setInline(0);
									menu_user_3->setItemDisabled(1, 0);
									menu_user_3->setItemHidden(1, 0);
									{
										container_drama_user_3 = new Wt::WContainerWidget(drama_user_3);
										container_drama_user_3->setId("container_drama_user_3");
										container_drama_user_3->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
										container_drama_user_3->setInline(0);
										container_drama_user_3->setHtmlTagName("div");
										{
											drama_1_user_3 = new Wt::WContainerWidget(container_drama_user_3);
											drama_1_user_3->setId("drama_1_user_3");
											drama_1_user_3->setStyleClass(Wt::WString::fromUTF8(" btn-group"));
											drama_1_user_3->setInline(0);
											drama_1_user_3->setHtmlTagName("div");
											{
												drama_image_1_user_3 = new Wt::WImage(drama_1_user_3);
												drama_image_1_user_3->setId("drama_image_1_user_3");
												drama_image_1_user_3->setStyleClass(Wt::WString::fromUTF8("center-block"));
												drama_image_1_user_3->setInline(0);
												drama_image_1_user_3->setImageLink(Wt::WLink("http://img.dotua.org/fsua_items/cover/00/20/75/10/00207558.jpg"));
												watch_drama_1_user_3 = new Wt::WPushButton(drama_1_user_3);
												watch_drama_1_user_3->setId("watch_drama_1_user_3");
												watch_drama_1_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default with-label btn-success center-block"));
												watch_drama_1_user_3->setInline(1);
												watch_drama_1_user_3->setEmptyText(Wt::WString::fromUTF8(""));
												watch_drama_1_user_3->setText(Wt::WString::fromUTF8("Watch"));
												watch_drama_1_user_3->setLink(Wt::WLink("http://fs136.www.ex.ua/show/e86bb1854d95b249f3ee8d557e7224bd/12141246/e86bb1854d95b249f3ee8d557e7224bd.mp4"));
												rating_drama_1_user_3 = new Wt::WPushButton(drama_1_user_3);
												rating_drama_1_user_3->setId("rating_drama_1_user_3");
												rating_drama_1_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-warning with-label center-block"));
												rating_drama_1_user_3->setInline(1);
												rating_drama_1_user_3->setEmptyText(Wt::WString::fromUTF8(""));
												rating_drama_1_user_3->setText(Wt::WString::fromUTF8("Rating"));
												rating_drama_1_user_3->setLink(Wt::WLink("/"));
												mark_drama_1_user_3 = new Wt::WContainerWidget(drama_1_user_3);
												mark_drama_1_user_3->setId("mark_drama_1_user_3");
												mark_drama_1_user_3->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
												mark_drama_1_user_3->setInline(0);
												mark_drama_1_user_3->setHtmlTagName("div");
												{
													mark_1_drama_1_user_3 = new Wt::WContainerWidget(mark_drama_1_user_3);
													mark_1_drama_1_user_3->setId("mark_1_drama_1_user_3");
													mark_1_drama_1_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_1_drama_1_user_3->setInline(0);
													mark_1_drama_1_user_3->setHtmlTagName("div");
													{
														button_drama_1_mark_1_user_3 = new Wt::WPushButton(mark_1_drama_1_user_3);
														button_drama_1_mark_1_user_3->setId("button_drama_1_mark_1_user_3");
														button_drama_1_mark_1_user_3->setStyleClass(Wt::WString::fromUTF8(" btn btn-danger btn-group with-label"));
														button_drama_1_mark_1_user_3->setInline(1);
														button_drama_1_mark_1_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_1_mark_1_user_3->setText(Wt::WString::fromUTF8("1"));
														button_drama_1_mark_1_user_3->setLink(Wt::WLink(""));
														button_drama_1_mark_1_user_3->clicked().connect(button_drama_1_mark_1_user_3, &Wt::WPushButton::disable);
														button_drama_1_mark_1_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_drama_1_mark_1_user_3->valueText();
															writeFile("3", "4", "1");
														}));
													}
													mark_2_drama_1_user_3 = new Wt::WContainerWidget(mark_drama_1_user_3);
													mark_2_drama_1_user_3->setId("mark_2_drama_1_user_3");
													mark_2_drama_1_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_2_drama_1_user_3->setInline(0);
													mark_2_drama_1_user_3->setHtmlTagName("div");
													{
														button_drama_1_mark_2_user_3 = new Wt::WPushButton(mark_2_drama_1_user_3);
														button_drama_1_mark_2_user_3->setId("button_drama_1_mark_2_user_3");
														button_drama_1_mark_2_user_3->setStyleClass(Wt::WString::fromUTF8(" btn btn-warning btn-group with-label"));
														button_drama_1_mark_2_user_3->setInline(1);
														button_drama_1_mark_2_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_1_mark_2_user_3->setText(Wt::WString::fromUTF8("2"));
														button_drama_1_mark_2_user_3->setLink(Wt::WLink(""));
														button_drama_1_mark_2_user_3->clicked().connect(button_drama_1_mark_2_user_3, &Wt::WPushButton::disable);
														button_drama_1_mark_2_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_drama_1_mark_2_user_3->valueText();
															writeFile("3", "4", "2");
														}));
													}
													mark_3_drama_1_user_3 = new Wt::WContainerWidget(mark_drama_1_user_3);
													mark_3_drama_1_user_3->setId("mark_3_drama_1_user_3");
													mark_3_drama_1_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_3_drama_1_user_3->setInline(0);
													mark_3_drama_1_user_3->setHtmlTagName("div");
													{
														button_drama_1_mark_3_user_3 = new Wt::WPushButton(mark_3_drama_1_user_3);
														button_drama_1_mark_3_user_3->setId("button_drama_1_mark_3_user_3");
														button_drama_1_mark_3_user_3->setStyleClass(Wt::WString::fromUTF8("btn-primary  btn btn-group with-label"));
														button_drama_1_mark_3_user_3->setInline(1);
														button_drama_1_mark_3_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_1_mark_3_user_3->setText(Wt::WString::fromUTF8("3"));
														button_drama_1_mark_3_user_3->setLink(Wt::WLink(""));
														button_drama_1_mark_3_user_3->clicked().connect(button_drama_1_mark_3_user_3, &Wt::WPushButton::disable);
														button_drama_1_mark_3_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_drama_1_mark_3_user_3->valueText();
															writeFile("3", "4", "3");
														}));
													}
													mark_4_drama_1_user_3 = new Wt::WContainerWidget(mark_drama_1_user_3);
													mark_4_drama_1_user_3->setId("mark_4_drama_1_user_3");
													mark_4_drama_1_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_4_drama_1_user_3->setInline(0);
													mark_4_drama_1_user_3->setHtmlTagName("div");
													{
														button_drama_1_mark_4_user_3 = new Wt::WPushButton(mark_4_drama_1_user_3);
														button_drama_1_mark_4_user_3->setId("button_drama_1_mark_4_user_3");
														button_drama_1_mark_4_user_3->setStyleClass(Wt::WString::fromUTF8(" btn-info btn btn-group with-label"));
														button_drama_1_mark_4_user_3->setInline(1);
														button_drama_1_mark_4_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_1_mark_4_user_3->setText(Wt::WString::fromUTF8("4"));
														button_drama_1_mark_4_user_3->setLink(Wt::WLink(""));
														button_drama_1_mark_4_user_3->clicked().connect(button_drama_1_mark_4_user_3, &Wt::WPushButton::disable);
														button_drama_1_mark_4_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_drama_1_mark_4_user_3->valueText();
															writeFile("3", "4", "4");
														}));
													}
													mark_5_drama_1_user_3 = new Wt::WContainerWidget(mark_drama_1_user_3);
													mark_5_drama_1_user_3->setId("mark_5_drama_1_user_3");
													mark_5_drama_1_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_5_drama_1_user_3->setInline(0);
													mark_5_drama_1_user_3->setHtmlTagName("div");
													{
														button_drama_1_mark_5_user_3 = new Wt::WPushButton(mark_5_drama_1_user_3);
														button_drama_1_mark_5_user_3->setId("button_drama_1_mark_5_user_3");
														button_drama_1_mark_5_user_3->setStyleClass(Wt::WString::fromUTF8(" btn btn-group with-label btn-success"));
														button_drama_1_mark_5_user_3->setInline(1);
														button_drama_1_mark_5_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_1_mark_5_user_3->setText(Wt::WString::fromUTF8("5"));
														button_drama_1_mark_5_user_3->setLink(Wt::WLink(""));
														button_drama_1_mark_5_user_3->clicked().connect(button_drama_1_mark_5_user_3, &Wt::WPushButton::disable);
														button_drama_1_mark_5_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_drama_1_mark_5_user_3->valueText();
															writeFile("3", "4", "5");
														}));
													}
												}
											}
											drama_2_user_3 = new Wt::WContainerWidget(container_drama_user_3);
											drama_2_user_3->setId("drama_2_user_3");
											drama_2_user_3->setStyleClass(Wt::WString::fromUTF8(" btn-group"));
											drama_2_user_3->setInline(0);
											drama_2_user_3->setHtmlTagName("div");
											{
												drama_image_2_user_3 = new Wt::WImage(drama_2_user_3);
												drama_image_2_user_3->setId("drama_image_2_user_3");
												drama_image_2_user_3->setStyleClass(Wt::WString::fromUTF8("center-block"));
												drama_image_2_user_3->setInline(0);
												drama_image_2_user_3->setImageLink(Wt::WLink("http://img.dotua.org/fsua_items/cover/00/40/52/10/00405214.jpg"));
												watch_drama_2_user_3 = new Wt::WPushButton(drama_2_user_3);
												watch_drama_2_user_3->setId("watch_drama_2_user_3");
												watch_drama_2_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default with-label btn-success center-block"));
												watch_drama_2_user_3->setInline(1);
												watch_drama_2_user_3->setEmptyText(Wt::WString::fromUTF8(""));
												watch_drama_2_user_3->setText(Wt::WString::fromUTF8("Watch"));
												watch_drama_2_user_3->setLink(Wt::WLink("http://www.ex.ua/show/133560114/7f126915aca218eaa77915d19759d185.mp4"));
												rating_drama_2_user_3 = new Wt::WPushButton(drama_2_user_3);
												rating_drama_2_user_3->setId("rating_drama_2_user_3");
												rating_drama_2_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-warning with-label center-block"));
												rating_drama_2_user_3->setInline(1);
												rating_drama_2_user_3->setEmptyText(Wt::WString::fromUTF8(""));
												rating_drama_2_user_3->setText(Wt::WString::fromUTF8("Rating"));
												rating_drama_2_user_3->setLink(Wt::WLink("http://www.kinopoisk.ru/film/448/"));
												mark_drama_2_user_3 = new Wt::WContainerWidget(drama_2_user_3);
												mark_drama_2_user_3->setId("mark_drama_2_user_3");
												mark_drama_2_user_3->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
												mark_drama_2_user_3->setInline(0);
												mark_drama_2_user_3->setHtmlTagName("div");
												{
													mark_1_drama_2_user_3 = new Wt::WContainerWidget(mark_drama_2_user_3);
													mark_1_drama_2_user_3->setId("mark_1_drama_2_user_3");
													mark_1_drama_2_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_1_drama_2_user_3->setInline(0);
													mark_1_drama_2_user_3->setHtmlTagName("div");
													{
														button_drama_2_mark_1_user_3 = new Wt::WPushButton(mark_1_drama_2_user_3);
														button_drama_2_mark_1_user_3->setId("button_drama_2_mark_1_user_3");
														button_drama_2_mark_1_user_3->setStyleClass(Wt::WString::fromUTF8(" btn btn-danger btn-group with-label"));
														button_drama_2_mark_1_user_3->setInline(1);
														button_drama_2_mark_1_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_2_mark_1_user_3->setText(Wt::WString::fromUTF8("1"));
														button_drama_2_mark_1_user_3->setLink(Wt::WLink(""));
														button_drama_2_mark_1_user_3->clicked().connect(button_drama_2_mark_1_user_3, &Wt::WPushButton::disable);
														button_drama_2_mark_1_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_drama_2_mark_1_user_3->valueText();
															writeFile("3", "5", "1");
														}));
													}
													mark_2_drama_2_user_3 = new Wt::WContainerWidget(mark_drama_2_user_3);
													mark_2_drama_2_user_3->setId("mark_2_drama_2_user_3");
													mark_2_drama_2_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_2_drama_2_user_3->setInline(0);
													mark_2_drama_2_user_3->setHtmlTagName("div");
													{
														button_drama_2_mark_2_user_3 = new Wt::WPushButton(mark_2_drama_2_user_3);
														button_drama_2_mark_2_user_3->setId("button_drama_2_mark_2_user_3");
														button_drama_2_mark_2_user_3->setStyleClass(Wt::WString::fromUTF8(" btn btn-warning btn-group with-label"));
														button_drama_2_mark_2_user_3->setInline(1);
														button_drama_2_mark_2_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_2_mark_2_user_3->setText(Wt::WString::fromUTF8("2"));
														button_drama_2_mark_2_user_3->setLink(Wt::WLink(""));
														button_drama_2_mark_2_user_3->clicked().connect(button_drama_2_mark_2_user_3, &Wt::WPushButton::disable);
														button_drama_2_mark_2_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_drama_2_mark_2_user_3->valueText();
															writeFile("3", "5", "2");
														}));
													}
													mark_3_drama_2_user_3 = new Wt::WContainerWidget(mark_drama_2_user_3);
													mark_3_drama_2_user_3->setId("mark_3_drama_2_user_3");
													mark_3_drama_2_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_3_drama_2_user_3->setInline(0);
													mark_3_drama_2_user_3->setHtmlTagName("div");
													{
														button_drama_2_mark_3_user_3 = new Wt::WPushButton(mark_3_drama_2_user_3);
														button_drama_2_mark_3_user_3->setId("button_drama_2_mark_3_user_3");
														button_drama_2_mark_3_user_3->setStyleClass(Wt::WString::fromUTF8("btn-primary  btn btn-group with-label"));
														button_drama_2_mark_3_user_3->setInline(1);
														button_drama_2_mark_3_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_2_mark_3_user_3->setText(Wt::WString::fromUTF8("3"));
														button_drama_2_mark_3_user_3->setLink(Wt::WLink(""));
														button_drama_2_mark_3_user_3->clicked().connect(button_drama_2_mark_3_user_3, &Wt::WPushButton::disable);
														button_drama_2_mark_3_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_drama_2_mark_3_user_3->valueText();
															writeFile("3", "5", "3");
														}));
													}
													mark_4_drama_2_user_3 = new Wt::WContainerWidget(mark_drama_2_user_3);
													mark_4_drama_2_user_3->setId("mark_4_drama_2_user_3");
													mark_4_drama_2_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_4_drama_2_user_3->setInline(0);
													mark_4_drama_2_user_3->setHtmlTagName("div");
													{
														button_drama_2_mark_4_user_3 = new Wt::WPushButton(mark_4_drama_2_user_3);
														button_drama_2_mark_4_user_3->setId("button_drama_2_mark_4_user_3");
														button_drama_2_mark_4_user_3->setStyleClass(Wt::WString::fromUTF8(" btn-info btn btn-group with-label"));
														button_drama_2_mark_4_user_3->setInline(1);
														button_drama_2_mark_4_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_2_mark_4_user_3->setText(Wt::WString::fromUTF8("4"));
														button_drama_2_mark_4_user_3->setLink(Wt::WLink(""));
														button_drama_2_mark_4_user_3->clicked().connect(button_drama_2_mark_4_user_3, &Wt::WPushButton::disable);
														button_drama_2_mark_4_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_drama_2_mark_4_user_3->valueText();
															writeFile("3", "5", "4");
														}));
													}
													mark_5_drama_2_user_3 = new Wt::WContainerWidget(mark_drama_2_user_3);
													mark_5_drama_2_user_3->setId("mark_5_drama_2_user_3");
													mark_5_drama_2_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_5_drama_2_user_3->setInline(0);
													mark_5_drama_2_user_3->setHtmlTagName("div");
													{
														button_drama_2_mark_5_user_3 = new Wt::WPushButton(mark_5_drama_2_user_3);
														button_drama_2_mark_5_user_3->setId("button_drama_2_mark_5_user_3");
														button_drama_2_mark_5_user_3->setStyleClass(Wt::WString::fromUTF8(" btn btn-group with-label btn-success"));
														button_drama_2_mark_5_user_3->setInline(1);
														button_drama_2_mark_5_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_2_mark_5_user_3->setText(Wt::WString::fromUTF8("5"));
														button_drama_2_mark_5_user_3->setLink(Wt::WLink(""));
														button_drama_2_mark_5_user_3->clicked().connect(button_drama_2_mark_5_user_3, &Wt::WPushButton::disable);
														button_drama_2_mark_5_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_drama_2_mark_5_user_3->valueText();
															writeFile("3", "5", "5");
														}));
													}
												}
											}
											drama_3_user_3 = new Wt::WContainerWidget(container_drama_user_3);
											drama_3_user_3->setId("drama_3_user_3");
											drama_3_user_3->setStyleClass(Wt::WString::fromUTF8(" btn-group"));
											drama_3_user_3->setInline(0);
											drama_3_user_3->setHtmlTagName("div");
											{
												drama_image_3_user_3 = new Wt::WImage(drama_3_user_3);
												drama_image_3_user_3->setId("drama_image_3_user_3");
												drama_image_3_user_3->setStyleClass(Wt::WString::fromUTF8("center-block"));
												drama_image_3_user_3->setInline(0);
												drama_image_3_user_3->setImageLink(Wt::WLink("http://img.dotua.org/fsua_items/cover/00/20/75/10/00207568.jpg"));
												watch_drama_3_user_3 = new Wt::WPushButton(drama_3_user_3);
												watch_drama_3_user_3->setId("watch_drama_3_user_3");
												watch_drama_3_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default with-label btn-success center-block"));
												watch_drama_3_user_3->setInline(1);
												watch_drama_3_user_3->setEmptyText(Wt::WString::fromUTF8(""));
												watch_drama_3_user_3->setText(Wt::WString::fromUTF8("Watch"));
												watch_drama_3_user_3->setLink(Wt::WLink("http://fs66.www.ex.ua/show/2f54492f0a828f0f260ab55aa660cc85/62023/2f54492f0a828f0f260ab55aa660cc85.mp4"));
												rating_drama_3_user_3 = new Wt::WPushButton(drama_3_user_3);
												rating_drama_3_user_3->setId("rating_drama_3_user_3");
												rating_drama_3_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-warning with-label center-block"));
												rating_drama_3_user_3->setInline(1);
												rating_drama_3_user_3->setEmptyText(Wt::WString::fromUTF8(""));
												rating_drama_3_user_3->setText(Wt::WString::fromUTF8("Rating"));
												rating_drama_3_user_3->setLink(Wt::WLink("http://www.kinopoisk.ru/film/519/"));
												mark_drama_3_user_3 = new Wt::WContainerWidget(drama_3_user_3);
												mark_drama_3_user_3->setId("mark_drama_3_user_3");
												mark_drama_3_user_3->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
												mark_drama_3_user_3->setInline(0);
												mark_drama_3_user_3->setHtmlTagName("div");
												{
													mark_1_drama_3_user_3 = new Wt::WContainerWidget(mark_drama_3_user_3);
													mark_1_drama_3_user_3->setId("mark_1_drama_3_user_3");
													mark_1_drama_3_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_1_drama_3_user_3->setInline(0);
													mark_1_drama_3_user_3->setHtmlTagName("div");
													{
														button_drama_3_mark_1_user_3 = new Wt::WPushButton(mark_1_drama_3_user_3);
														button_drama_3_mark_1_user_3->setId("button_drama_3_mark_1_user_3");
														button_drama_3_mark_1_user_3->setStyleClass(Wt::WString::fromUTF8(" btn btn-danger btn-group with-label"));
														button_drama_3_mark_1_user_3->setInline(1);
														button_drama_3_mark_1_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_3_mark_1_user_3->setText(Wt::WString::fromUTF8("1"));
														button_drama_3_mark_1_user_3->setLink(Wt::WLink(""));
														button_drama_3_mark_1_user_3->clicked().connect(button_drama_3_mark_1_user_3, &Wt::WPushButton::disable);
														button_drama_3_mark_1_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_drama_3_mark_1_user_3->valueText();
															writeFile("3", "6", "1");
														}));
													}
													mark_2_drama_3_user_3 = new Wt::WContainerWidget(mark_drama_3_user_3);
													mark_2_drama_3_user_3->setId("mark_2_drama_3_user_3");
													mark_2_drama_3_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_2_drama_3_user_3->setInline(0);
													mark_2_drama_3_user_3->setHtmlTagName("div");
													{
														button_drama_3_mark_2_user_3 = new Wt::WPushButton(mark_2_drama_3_user_3);
														button_drama_3_mark_2_user_3->setId("button_drama_3_mark_2_user_3");
														button_drama_3_mark_2_user_3->setStyleClass(Wt::WString::fromUTF8(" btn btn-warning btn-group with-label"));
														button_drama_3_mark_2_user_3->setInline(1);
														button_drama_3_mark_2_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_3_mark_2_user_3->setText(Wt::WString::fromUTF8("2"));
														button_drama_3_mark_2_user_3->setLink(Wt::WLink(""));
														button_drama_3_mark_2_user_3->clicked().connect(button_drama_3_mark_2_user_3, &Wt::WPushButton::disable);
														button_drama_3_mark_2_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_drama_3_mark_2_user_3->valueText();
															writeFile("3", "6", "2");
														}));
													}
													mark_3_drama_3_user_3 = new Wt::WContainerWidget(mark_drama_3_user_3);
													mark_3_drama_3_user_3->setId("mark_3_drama_3_user_3");
													mark_3_drama_3_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_3_drama_3_user_3->setInline(0);
													mark_3_drama_3_user_3->setHtmlTagName("div");
													{
														button_drama_3_mark_3_user_3 = new Wt::WPushButton(mark_3_drama_3_user_3);
														button_drama_3_mark_3_user_3->setId("button_drama_3_mark_3_user_3");
														button_drama_3_mark_3_user_3->setStyleClass(Wt::WString::fromUTF8("btn-primary  btn btn-group with-label"));
														button_drama_3_mark_3_user_3->setInline(1);
														button_drama_3_mark_3_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_3_mark_3_user_3->setText(Wt::WString::fromUTF8("3"));
														button_drama_3_mark_3_user_3->setLink(Wt::WLink(""));
														button_drama_3_mark_3_user_3->clicked().connect(button_drama_3_mark_3_user_3, &Wt::WPushButton::disable);
														button_drama_3_mark_3_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_drama_3_mark_3_user_3->valueText();
															writeFile("3", "6", "3");
														}));
													}
													mark_4_drama_3_user_3 = new Wt::WContainerWidget(mark_drama_3_user_3);
													mark_4_drama_3_user_3->setId("mark_4_drama_3_user_3");
													mark_4_drama_3_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_4_drama_3_user_3->setInline(0);
													mark_4_drama_3_user_3->setHtmlTagName("div");
													{
														button_drama_3_mark_4_user_3 = new Wt::WPushButton(mark_4_drama_3_user_3);
														button_drama_3_mark_4_user_3->setId("button_drama_3_mark_4_user_3");
														button_drama_3_mark_4_user_3->setStyleClass(Wt::WString::fromUTF8(" btn-info btn btn-group with-label"));
														button_drama_3_mark_4_user_3->setInline(1);
														button_drama_3_mark_4_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_3_mark_4_user_3->setText(Wt::WString::fromUTF8("4"));
														button_drama_3_mark_4_user_3->setLink(Wt::WLink(""));
														button_drama_3_mark_4_user_3->clicked().connect(button_drama_3_mark_4_user_3, &Wt::WPushButton::disable);
														button_drama_3_mark_4_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_drama_3_mark_4_user_3->valueText();
															writeFile("3", "6", "4");
														}));
													}
													mark_5_drama_3_user_3 = new Wt::WContainerWidget(mark_drama_3_user_3);
													mark_5_drama_3_user_3->setId("mark_5_drama_3_user_3");
													mark_5_drama_3_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_5_drama_3_user_3->setInline(0);
													mark_5_drama_3_user_3->setHtmlTagName("div");
													{
														button_drama_3_mark_5_user_3 = new Wt::WPushButton(mark_5_drama_3_user_3);
														button_drama_3_mark_5_user_3->setId("button_drama_3_mark_5_user_3");
														button_drama_3_mark_5_user_3->setStyleClass(Wt::WString::fromUTF8(" btn btn-group with-label btn-success"));
														button_drama_3_mark_5_user_3->setInline(1);
														button_drama_3_mark_5_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_3_mark_5_user_3->setText(Wt::WString::fromUTF8("5"));
														button_drama_3_mark_5_user_3->setLink(Wt::WLink(""));
														button_drama_3_mark_5_user_3->clicked().connect(button_drama_3_mark_5_user_3, &Wt::WPushButton::disable);
														button_drama_3_mark_5_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_drama_3_mark_5_user_3->valueText();
															writeFile("3", "6", "5");
														}));
													}
												}
											}
										}
									}
									horror_user_3 = new Wt::WContainerWidget(container_films_3);
									horror_user_3_mi = menu_user_3->addItem(Wt::WString("Horror"), horror_user_3);
									horror_user_3->setId("horror_user_3");
									horror_user_3->setStyleClass(Wt::WString::fromUTF8(""));
									horror_user_3->setInline(0);
									menu_user_3->setItemDisabled(2, 0);
									menu_user_3->setItemHidden(2, 0);
									{
										container_horror_user_3 = new Wt::WContainerWidget(horror_user_3);
										container_horror_user_3->setId("container_horror_user_3");
										container_horror_user_3->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
										container_horror_user_3->setInline(0);
										container_horror_user_3->setHtmlTagName("div");
										{
											horror_1_user_3 = new Wt::WContainerWidget(container_horror_user_3);
											horror_1_user_3->setId("horror_1_user_3");
											horror_1_user_3->setStyleClass(Wt::WString::fromUTF8(" btn-group"));
											horror_1_user_3->setInline(0);
											horror_1_user_3->setHtmlTagName("div");
											{
												horror_image_1_user_3 = new Wt::WImage(horror_1_user_3);
												horror_image_1_user_3->setId("horror_image_1_user_3");
												horror_image_1_user_3->setStyleClass(Wt::WString::fromUTF8("center-block"));
												horror_image_1_user_3->setInline(0);
												horror_image_1_user_3->setImageLink(Wt::WLink("http://img.dotua.org/fsua_items/cover/00/42/35/10/00423560.jpg"));
												watch_horror_1_user_3 = new Wt::WPushButton(horror_1_user_3);
												watch_horror_1_user_3->setId("watch_horror_1_user_3");
												watch_horror_1_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default with-label btn-success center-block"));
												watch_horror_1_user_3->setInline(1);
												watch_horror_1_user_3->setEmptyText(Wt::WString::fromUTF8(""));
												watch_horror_1_user_3->setText(Wt::WString::fromUTF8("Watch"));
												watch_horror_1_user_3->setLink(Wt::WLink("http://fs213.www.ex.ua/show/79fe30f4355edf31282fce0cb5b44115/4266267/79fe30f4355edf31282fce0cb5b44115.mp4"));
												rating_horror_1_user_3 = new Wt::WPushButton(horror_1_user_3);
												rating_horror_1_user_3->setId("rating_horror_1_user_3");
												rating_horror_1_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-warning with-label center-block"));
												rating_horror_1_user_3->setInline(1);
												rating_horror_1_user_3->setEmptyText(Wt::WString::fromUTF8(""));
												rating_horror_1_user_3->setText(Wt::WString::fromUTF8("Rating"));
												rating_horror_1_user_3->setLink(Wt::WLink("http://www.kinopoisk.ru/film/87179/"));
												mark_horror_1_user_3 = new Wt::WContainerWidget(horror_1_user_3);
												mark_horror_1_user_3->setId("mark_horror_1_user_3");
												mark_horror_1_user_3->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
												mark_horror_1_user_3->setInline(0);
												mark_horror_1_user_3->setHtmlTagName("div");
												{
													mark_1_horror_1_user_3 = new Wt::WContainerWidget(mark_horror_1_user_3);
													mark_1_horror_1_user_3->setId("mark_1_horror_1_user_3");
													mark_1_horror_1_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_1_horror_1_user_3->setInline(0);
													mark_1_horror_1_user_3->setHtmlTagName("div");
													{
														button_horror_1_mark_1_user_3 = new Wt::WPushButton(mark_1_horror_1_user_3);
														button_horror_1_mark_1_user_3->setId("button_horror_1_mark_1_user_3");
														button_horror_1_mark_1_user_3->setStyleClass(Wt::WString::fromUTF8(" btn btn-danger btn-group with-label"));
														button_horror_1_mark_1_user_3->setInline(1);
														button_horror_1_mark_1_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_1_mark_1_user_3->setText(Wt::WString::fromUTF8("1"));
														button_horror_1_mark_1_user_3->setLink(Wt::WLink(""));
														button_horror_1_mark_1_user_3->clicked().connect(button_horror_1_mark_1_user_3, &Wt::WPushButton::disable);
														button_horror_1_mark_1_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_horror_1_mark_1_user_3->valueText();
															writeFile("3", "7", "1");
														}));
													}
													mark_2_horror_1_user_3 = new Wt::WContainerWidget(mark_horror_1_user_3);
													mark_2_horror_1_user_3->setId("mark_2_horror_1_user_3");
													mark_2_horror_1_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_2_horror_1_user_3->setInline(0);
													mark_2_horror_1_user_3->setHtmlTagName("div");
													{
														button_horror_1_mark_2_user_3 = new Wt::WPushButton(mark_2_horror_1_user_3);
														button_horror_1_mark_2_user_3->setId("button_horror_1_mark_2_user_3");
														button_horror_1_mark_2_user_3->setStyleClass(Wt::WString::fromUTF8(" btn btn-warning btn-group with-label"));
														button_horror_1_mark_2_user_3->setInline(1);
														button_horror_1_mark_2_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_1_mark_2_user_3->setText(Wt::WString::fromUTF8("2"));
														button_horror_1_mark_2_user_3->setLink(Wt::WLink(""));
														button_horror_1_mark_2_user_3->clicked().connect(button_horror_1_mark_2_user_3, &Wt::WPushButton::disable);
														button_horror_1_mark_2_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_horror_1_mark_2_user_3->valueText();
															writeFile("3", "7", "2");
														}));
													}
													mark_3_horror_1_user_3 = new Wt::WContainerWidget(mark_horror_1_user_3);
													mark_3_horror_1_user_3->setId("mark_3_horror_1_user_3");
													mark_3_horror_1_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_3_horror_1_user_3->setInline(0);
													mark_3_horror_1_user_3->setHtmlTagName("div");
													{
														button_horror_1_mark_3_user_3 = new Wt::WPushButton(mark_3_horror_1_user_3);
														button_horror_1_mark_3_user_3->setId("button_horror_1_mark_3_user_3");
														button_horror_1_mark_3_user_3->setStyleClass(Wt::WString::fromUTF8("btn-primary  btn btn-group with-label"));
														button_horror_1_mark_3_user_3->setInline(1);
														button_horror_1_mark_3_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_1_mark_3_user_3->setText(Wt::WString::fromUTF8("3"));
														button_horror_1_mark_3_user_3->setLink(Wt::WLink(""));
														button_horror_1_mark_3_user_3->clicked().connect(button_horror_1_mark_3_user_3, &Wt::WPushButton::disable);
														button_horror_1_mark_3_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_horror_1_mark_3_user_3->valueText();
															writeFile("3", "7", "3");
														}));
													}
													mark_4_horror_1_user_3 = new Wt::WContainerWidget(mark_horror_1_user_3);
													mark_4_horror_1_user_3->setId("mark_4_horror_1_user_3");
													mark_4_horror_1_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_4_horror_1_user_3->setInline(0);
													mark_4_horror_1_user_3->setHtmlTagName("div");
													{
														button_horror_1_mark_4_user_3 = new Wt::WPushButton(mark_4_horror_1_user_3);
														button_horror_1_mark_4_user_3->setId("button_horror_1_mark_4_user_3");
														button_horror_1_mark_4_user_3->setStyleClass(Wt::WString::fromUTF8(" btn-info btn btn-group with-label"));
														button_horror_1_mark_4_user_3->setInline(1);
														button_horror_1_mark_4_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_1_mark_4_user_3->setText(Wt::WString::fromUTF8("4"));
														button_horror_1_mark_4_user_3->setLink(Wt::WLink(""));
														button_horror_1_mark_4_user_3->clicked().connect(button_horror_1_mark_4_user_3, &Wt::WPushButton::disable);
														button_horror_1_mark_4_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_horror_1_mark_4_user_3->valueText();
															writeFile("3", "7", "4");
														}));
													}
													mark_5_horror_1_user_3 = new Wt::WContainerWidget(mark_horror_1_user_3);
													mark_5_horror_1_user_3->setId("mark_5_horror_1_user_3");
													mark_5_horror_1_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_5_horror_1_user_3->setInline(0);
													mark_5_horror_1_user_3->setHtmlTagName("div");
													{
														button_horror_1_mark_5_user_3 = new Wt::WPushButton(mark_5_horror_1_user_3);
														button_horror_1_mark_5_user_3->setId("button_horror_1_mark_5_user_3");
														button_horror_1_mark_5_user_3->setStyleClass(Wt::WString::fromUTF8(" btn btn-group with-label btn-success"));
														button_horror_1_mark_5_user_3->setInline(1);
														button_horror_1_mark_5_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_1_mark_5_user_3->setText(Wt::WString::fromUTF8("5"));
														button_horror_1_mark_5_user_3->setLink(Wt::WLink(""));
														button_horror_1_mark_5_user_3->clicked().connect(button_horror_1_mark_5_user_3, &Wt::WPushButton::disable);
														button_horror_1_mark_5_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_horror_1_mark_5_user_3->valueText();
															writeFile("3", "7", "5");
														}));
													}
												}
											}
											horror_2_user_3 = new Wt::WContainerWidget(container_horror_user_3);
											horror_2_user_3->setId("horror_2_user_3");
											horror_2_user_3->setStyleClass(Wt::WString::fromUTF8(" btn-group"));
											horror_2_user_3->setInline(0);
											horror_2_user_3->setHtmlTagName("div");
											{
												horror_image_2_user_3 = new Wt::WImage(horror_2_user_3);
												horror_image_2_user_3->setId("horror_image_2_user_3");
												horror_image_2_user_3->setStyleClass(Wt::WString::fromUTF8("center-block"));
												horror_image_2_user_3->setInline(0);
												horror_image_2_user_3->setImageLink(Wt::WLink("http://img.dotua.org/fsua_items/cover/00/14/58/10/00145883.jpg"));
												watch_horror_2_user_3 = new Wt::WPushButton(horror_2_user_3);
												watch_horror_2_user_3->setId("watch_horror_2_user_3");
												watch_horror_2_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default with-label btn-success center-block"));
												watch_horror_2_user_3->setInline(1);
												watch_horror_2_user_3->setEmptyText(Wt::WString::fromUTF8(""));
												watch_horror_2_user_3->setText(Wt::WString::fromUTF8("Watch"));
												watch_horror_2_user_3->setLink(Wt::WLink("http://fs145.www.ex.ua/show/4450bba7e9c69222a3f02b6752483fe6/152133418/4450bba7e9c69222a3f02b6752483fe6.mp4"));
												rating_horror_2_user_3 = new Wt::WPushButton(horror_2_user_3);
												rating_horror_2_user_3->setId("rating_horror_2_user_3");
												rating_horror_2_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-warning with-label center-block"));
												rating_horror_2_user_3->setInline(1);
												rating_horror_2_user_3->setEmptyText(Wt::WString::fromUTF8(""));
												rating_horror_2_user_3->setText(Wt::WString::fromUTF8("Rating"));
												rating_horror_2_user_3->setLink(Wt::WLink("http://www.kinopoisk.ru/film/345/"));
												mark_horror_2_user_3 = new Wt::WContainerWidget(horror_2_user_3);
												mark_horror_2_user_3->setId("mark_horror_2_user_3");
												mark_horror_2_user_3->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
												mark_horror_2_user_3->setInline(0);
												mark_horror_2_user_3->setHtmlTagName("div");
												{
													mark_1_horror_2_user_3 = new Wt::WContainerWidget(mark_horror_2_user_3);
													mark_1_horror_2_user_3->setId("mark_1_horror_2_user_3");
													mark_1_horror_2_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_1_horror_2_user_3->setInline(0);
													mark_1_horror_2_user_3->setHtmlTagName("div");
													{
														button_horror_2_mark_1_user_3 = new Wt::WPushButton(mark_1_horror_2_user_3);
														button_horror_2_mark_1_user_3->setId("button_horror_2_mark_1_user_3");
														button_horror_2_mark_1_user_3->setStyleClass(Wt::WString::fromUTF8(" btn btn-danger btn-group with-label"));
														button_horror_2_mark_1_user_3->setInline(1);
														button_horror_2_mark_1_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_2_mark_1_user_3->setText(Wt::WString::fromUTF8("1"));
														button_horror_2_mark_1_user_3->setLink(Wt::WLink(""));
														button_horror_2_mark_1_user_3->clicked().connect(button_horror_2_mark_1_user_3, &Wt::WPushButton::disable);
														button_horror_2_mark_1_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_horror_2_mark_1_user_3->valueText();
															writeFile("3", "8", "1");
														}));
													}
													mark_2_horror_2_user_3 = new Wt::WContainerWidget(mark_horror_2_user_3);
													mark_2_horror_2_user_3->setId("mark_2_horror_2_user_3");
													mark_2_horror_2_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_2_horror_2_user_3->setInline(0);
													mark_2_horror_2_user_3->setHtmlTagName("div");
													{
														button_horror_2_mark_2_user_3 = new Wt::WPushButton(mark_2_horror_2_user_3);
														button_horror_2_mark_2_user_3->setId("button_horror_2_mark_2_user_3");
														button_horror_2_mark_2_user_3->setStyleClass(Wt::WString::fromUTF8(" btn btn-warning btn-group with-label"));
														button_horror_2_mark_2_user_3->setInline(1);
														button_horror_2_mark_2_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_2_mark_2_user_3->setText(Wt::WString::fromUTF8("2"));
														button_horror_2_mark_2_user_3->setLink(Wt::WLink(""));
														button_horror_2_mark_2_user_3->clicked().connect(button_horror_2_mark_2_user_3, &Wt::WPushButton::disable);
														button_horror_2_mark_2_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_horror_2_mark_2_user_3->valueText();
															writeFile("3", "8", "2");
														}));
													}
													mark_3_horror_2_user_3 = new Wt::WContainerWidget(mark_horror_2_user_3);
													mark_3_horror_2_user_3->setId("mark_3_horror_2_user_3");
													mark_3_horror_2_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_3_horror_2_user_3->setInline(0);
													mark_3_horror_2_user_3->setHtmlTagName("div");
													{
														button_horror_2_mark_3_user_3 = new Wt::WPushButton(mark_3_horror_2_user_3);
														button_horror_2_mark_3_user_3->setId("button_horror_2_mark_3_user_3");
														button_horror_2_mark_3_user_3->setStyleClass(Wt::WString::fromUTF8("btn-primary  btn btn-group with-label"));
														button_horror_2_mark_3_user_3->setInline(1);
														button_horror_2_mark_3_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_2_mark_3_user_3->setText(Wt::WString::fromUTF8("3"));
														button_horror_2_mark_3_user_3->setLink(Wt::WLink(""));
														button_horror_2_mark_3_user_3->clicked().connect(button_horror_2_mark_3_user_3, &Wt::WPushButton::disable);
														button_horror_2_mark_3_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_horror_2_mark_3_user_3->valueText();
															writeFile("3", "8", "3");
														}));
													}
													mark_4_horror_2_user_3 = new Wt::WContainerWidget(mark_horror_2_user_3);
													mark_4_horror_2_user_3->setId("mark_4_horror_2_user_3");
													mark_4_horror_2_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_4_horror_2_user_3->setInline(0);
													mark_4_horror_2_user_3->setHtmlTagName("div");
													{
														button_horror_2_mark_4_user_3 = new Wt::WPushButton(mark_4_horror_2_user_3);
														button_horror_2_mark_4_user_3->setId("button_horror_2_mark_4_user_3");
														button_horror_2_mark_4_user_3->setStyleClass(Wt::WString::fromUTF8(" btn-info btn btn-group with-label"));
														button_horror_2_mark_4_user_3->setInline(1);
														button_horror_2_mark_4_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_2_mark_4_user_3->setText(Wt::WString::fromUTF8("4"));
														button_horror_2_mark_4_user_3->setLink(Wt::WLink(""));
														button_horror_2_mark_4_user_3->clicked().connect(button_horror_2_mark_4_user_3, &Wt::WPushButton::disable);
														button_horror_2_mark_4_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_horror_2_mark_4_user_3->valueText();
															writeFile("3", "8", "4");
														}));
													}
													mark_5_horror_2_user_3 = new Wt::WContainerWidget(mark_horror_2_user_3);
													mark_5_horror_2_user_3->setId("mark_5_horror_2_user_3");
													mark_5_horror_2_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_5_horror_2_user_3->setInline(0);
													mark_5_horror_2_user_3->setHtmlTagName("div");
													{
														button_horror_2_mark_5_user_3 = new Wt::WPushButton(mark_5_horror_2_user_3);
														button_horror_2_mark_5_user_3->setId("button_horror_2_mark_5_user_3");
														button_horror_2_mark_5_user_3->setStyleClass(Wt::WString::fromUTF8(" btn btn-group with-label btn-success"));
														button_horror_2_mark_5_user_3->setInline(1);
														button_horror_2_mark_5_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_2_mark_5_user_3->setText(Wt::WString::fromUTF8("5"));
														button_horror_2_mark_5_user_3->setLink(Wt::WLink(""));
														button_horror_2_mark_5_user_3->clicked().connect(button_horror_2_mark_5_user_3, &Wt::WPushButton::disable);
														button_horror_2_mark_5_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_horror_2_mark_5_user_3->valueText();
															writeFile("3", "8", "5");
														}));
													}
												}
											}
											horror_3_user_3 = new Wt::WContainerWidget(container_horror_user_3);
											horror_3_user_3->setId("horror_3_user_3");
											horror_3_user_3->setStyleClass(Wt::WString::fromUTF8(" btn-group"));
											horror_3_user_3->setInline(0);
											horror_3_user_3->setHtmlTagName("div");
											{
												horror_image_3_user_3 = new Wt::WImage(horror_3_user_3);
												horror_image_3_user_3->setId("horror_image_3_user_3");
												horror_image_3_user_3->setStyleClass(Wt::WString::fromUTF8("center-block"));
												horror_image_3_user_3->setInline(0);
												horror_image_3_user_3->setImageLink(Wt::WLink("http://img.dotua.org/fsua_items/cover/00/14/01/10/00140147.jpg"));
												watch_horror_3_user_3 = new Wt::WPushButton(horror_3_user_3);
												watch_horror_3_user_3->setId("watch_horror_3_user_3");
												watch_horror_3_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default with-label btn-success center-block"));
												watch_horror_3_user_3->setInline(1);
												watch_horror_3_user_3->setEmptyText(Wt::WString::fromUTF8(""));
												watch_horror_3_user_3->setText(Wt::WString::fromUTF8("Watch"));
												watch_horror_3_user_3->setLink(Wt::WLink("http://fs9.www.ex.ua/show/c6f2d7015bdad96fefa71b6d1f37eadc/87754719/c6f2d7015bdad96fefa71b6d1f37eadc.mp4"));
												rating_horror_3_user_3 = new Wt::WPushButton(horror_3_user_3);
												rating_horror_3_user_3->setId("rating_horror_3_user_3");
												rating_horror_3_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-warning with-label center-block"));
												rating_horror_3_user_3->setInline(1);
												rating_horror_3_user_3->setEmptyText(Wt::WString::fromUTF8(""));
												rating_horror_3_user_3->setText(Wt::WString::fromUTF8("Rating"));
												rating_horror_3_user_3->setLink(Wt::WLink("http://www.kinopoisk.ru/film/64187/"));
												mark_horror_3_user_3 = new Wt::WContainerWidget(horror_3_user_3);
												mark_horror_3_user_3->setId("mark_horror_3_user_3");
												mark_horror_3_user_3->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
												mark_horror_3_user_3->setInline(0);
												mark_horror_3_user_3->setHtmlTagName("div");
												{
													mark_1_horror_3_user_3 = new Wt::WContainerWidget(mark_horror_3_user_3);
													mark_1_horror_3_user_3->setId("mark_1_horror_3_user_3");
													mark_1_horror_3_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_1_horror_3_user_3->setInline(0);
													mark_1_horror_3_user_3->setHtmlTagName("div");
													{
														button_horror_3_mark_1_user_3 = new Wt::WPushButton(mark_1_horror_3_user_3);
														button_horror_3_mark_1_user_3->setId("button_horror_3_mark_1_user_3");
														button_horror_3_mark_1_user_3->setStyleClass(Wt::WString::fromUTF8(" btn btn-danger btn-group with-label"));
														button_horror_3_mark_1_user_3->setInline(1);
														button_horror_3_mark_1_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_3_mark_1_user_3->setText(Wt::WString::fromUTF8("1"));
														button_horror_3_mark_1_user_3->setLink(Wt::WLink(""));
														button_horror_3_mark_1_user_3->clicked().connect(button_horror_3_mark_1_user_3, &Wt::WPushButton::disable);
														button_horror_3_mark_1_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_horror_3_mark_1_user_3->valueText();
															writeFile("3", "9", "1");
														}));
													}
													mark_2_horror_3_user_3 = new Wt::WContainerWidget(mark_horror_3_user_3);
													mark_2_horror_3_user_3->setId("mark_2_horror_3_user_3");
													mark_2_horror_3_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_2_horror_3_user_3->setInline(0);
													mark_2_horror_3_user_3->setHtmlTagName("div");
													{
														button_horror_3_mark_2_user_3 = new Wt::WPushButton(mark_2_horror_3_user_3);
														button_horror_3_mark_2_user_3->setId("button_horror_3_mark_2_user_3");
														button_horror_3_mark_2_user_3->setStyleClass(Wt::WString::fromUTF8(" btn btn-warning btn-group with-label"));
														button_horror_3_mark_2_user_3->setInline(1);
														button_horror_3_mark_2_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_3_mark_2_user_3->setText(Wt::WString::fromUTF8("2"));
														button_horror_3_mark_2_user_3->setLink(Wt::WLink(""));
														button_horror_3_mark_2_user_3->clicked().connect(button_horror_3_mark_2_user_3, &Wt::WPushButton::disable);
														button_horror_3_mark_2_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_horror_3_mark_2_user_3->valueText();
															writeFile("3", "9", "2");
														}));
													}
													mark_3_horror_3_user_3 = new Wt::WContainerWidget(mark_horror_3_user_3);
													mark_3_horror_3_user_3->setId("mark_3_horror_3_user_3");
													mark_3_horror_3_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_3_horror_3_user_3->setInline(0);
													mark_3_horror_3_user_3->setHtmlTagName("div");
													{
														button_horror_3_mark_3_user_3 = new Wt::WPushButton(mark_3_horror_3_user_3);
														button_horror_3_mark_3_user_3->setId("button_horror_3_mark_3_user_3");
														button_horror_3_mark_3_user_3->setStyleClass(Wt::WString::fromUTF8("btn-primary  btn btn-group with-label"));
														button_horror_3_mark_3_user_3->setInline(1);
														button_horror_3_mark_3_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_3_mark_3_user_3->setText(Wt::WString::fromUTF8("3"));
														button_horror_3_mark_3_user_3->setLink(Wt::WLink(""));
														button_horror_3_mark_3_user_3->clicked().connect(button_horror_3_mark_3_user_3, &Wt::WPushButton::disable);
														button_horror_3_mark_3_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_horror_3_mark_3_user_3->valueText();
															writeFile("3", "9", "3");
														}));
													}
													mark_4_horror_3_user_3 = new Wt::WContainerWidget(mark_horror_3_user_3);
													mark_4_horror_3_user_3->setId("mark_4_horror_3_user_3");
													mark_4_horror_3_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_4_horror_3_user_3->setInline(0);
													mark_4_horror_3_user_3->setHtmlTagName("div");
													{
														button_horror_3_mark_4_user_3 = new Wt::WPushButton(mark_4_horror_3_user_3);
														button_horror_3_mark_4_user_3->setId("button_horror_3_mark_4_user_3");
														button_horror_3_mark_4_user_3->setStyleClass(Wt::WString::fromUTF8(" btn-info btn btn-group with-label"));
														button_horror_3_mark_4_user_3->setInline(1);
														button_horror_3_mark_4_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_3_mark_4_user_3->setText(Wt::WString::fromUTF8("4"));
														button_horror_3_mark_4_user_3->setLink(Wt::WLink(""));
														button_horror_3_mark_4_user_3->clicked().connect(button_horror_3_mark_4_user_3, &Wt::WPushButton::disable);
														button_horror_3_mark_4_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_horror_3_mark_4_user_3->valueText();
															writeFile("3", "9", "4");
														}));
													}
													mark_5_horror_3_user_3 = new Wt::WContainerWidget(mark_horror_3_user_3);
													mark_5_horror_3_user_3->setId("mark_5_horror_3_user_3");
													mark_5_horror_3_user_3->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_5_horror_3_user_3->setInline(0);
													mark_5_horror_3_user_3->setHtmlTagName("div");
													{
														button_horror_3_mark_5_user_3 = new Wt::WPushButton(mark_5_horror_3_user_3);
														button_horror_3_mark_5_user_3->setId("button_horror_3_mark_5_user_3");
														button_horror_3_mark_5_user_3->setStyleClass(Wt::WString::fromUTF8(" btn btn-group with-label btn-success"));
														button_horror_3_mark_5_user_3->setInline(1);
														button_horror_3_mark_5_user_3->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_3_mark_5_user_3->setText(Wt::WString::fromUTF8("5"));
														button_horror_3_mark_5_user_3->setLink(Wt::WLink(""));
														button_horror_3_mark_5_user_3->clicked().connect(button_horror_3_mark_5_user_3, &Wt::WPushButton::disable);
														button_horror_3_mark_5_user_3->clicked().connect(std::bind([=]() {
															std::cout << button_horror_3_mark_5_user_3->valueText();
															writeFile("3", "9", "5");
														}));
													}
												}
											}
										}
									}
								}
							}
						}
						nv_menu_user_4 = new Wt::WContainerWidget(container_text);
						nv_menu_user_4_mi = select_user->addItem(Wt::WString("User 4"), nv_menu_user_4);
						nv_menu_user_4->setId("nv_menu_user_4");
						nv_menu_user_4->setStyleClass(Wt::WString::fromUTF8(""));
						nv_menu_user_4->setInline(0);
						select_user->setItemDisabled(3, 0);
						select_user->setItemHidden(3, 0);
						{
							container_films_4 = new Wt::WContainerWidget(nv_menu_user_4);
							container_films_4->setId("container_films_4");
							container_films_4->setStyleClass(Wt::WString::fromUTF8(""));
							container_films_4->setInline(0);
							container_films_4->setHtmlTagName("div");
							{
								menu_user_4 = new Wt::WMenu(new Wt::WStackedWidget(), container_films_4);
								container_films_4->addWidget(menu_user_4->contentsStack());
								menu_user_4->contentsStack()->setId("menu_user_4_stackedwidget");
								menu_user_4->setId("menu_user_4");
								menu_user_4->setStyleClass(Wt::WString::fromUTF8("nav-pills nav-stacked nav"));
								menu_user_4->setInline(1);
								userNumber = 4;
								{
									comedy_user_4 = new Wt::WContainerWidget(container_films_4);
									comedy_user_4_mi = menu_user_4->addItem(Wt::WString("Comedy"), comedy_user_4);
									comedy_user_4->setId("comedy_user_4");
									comedy_user_4->setStyleClass(Wt::WString::fromUTF8(""));
									comedy_user_4->setInline(0);
									menu_user_4->setItemDisabled(0, 0);
									menu_user_4->setItemHidden(0, 0);
									{
										container_comedy_user_4 = new Wt::WContainerWidget(comedy_user_4);
										container_comedy_user_4->setId("container_comedy_user_4");
										container_comedy_user_4->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
										container_comedy_user_4->setInline(0);
										container_comedy_user_4->setHtmlTagName("div");
										{
											comedy_1_user_4 = new Wt::WContainerWidget(container_comedy_user_4);
											comedy_1_user_4->setId("comedy_1_user_4");
											comedy_1_user_4->setStyleClass(Wt::WString::fromUTF8(" btn-group"));
											comedy_1_user_4->setInline(0);
											comedy_1_user_4->setHtmlTagName("div");
											{
												comedy_image_1_user_4 = new Wt::WImage(comedy_1_user_4);
												comedy_image_1_user_4->setId("comedy_image_1_user_4");
												comedy_image_1_user_4->setStyleClass(Wt::WString::fromUTF8("center-block"));
												comedy_image_1_user_4->setInline(0);
												comedy_image_1_user_4->setImageLink(Wt::WLink("http://img.dotua.org/fsua_items/cover/00/42/37/10/00423720.jpg"));
												watch_comedy_1_user_4 = new Wt::WPushButton(comedy_1_user_4);
												watch_comedy_1_user_4->setId("watch_comedy_1_user_4");
												watch_comedy_1_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default with-label btn-success center-block"));
												watch_comedy_1_user_4->setInline(1);
												watch_comedy_1_user_4->setEmptyText(Wt::WString::fromUTF8(""));
												watch_comedy_1_user_4->setText(Wt::WString::fromUTF8("Watch"));
												watch_comedy_1_user_4->setLink(Wt::WLink("http://www.ex.ua/show/207854449/5e2b0e298067ac5505e943070d9ee633.mp4"));
												rating_comedy_1_user_4 = new Wt::WPushButton(comedy_1_user_4);
												rating_comedy_1_user_4->setId("rating_comedy_1_user_4");
												rating_comedy_1_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-warning with-label center-block"));
												rating_comedy_1_user_4->setInline(1);
												rating_comedy_1_user_4->setEmptyText(Wt::WString::fromUTF8(""));
												rating_comedy_1_user_4->setText(Wt::WString::fromUTF8("Rating"));
												rating_comedy_1_user_4->setLink(Wt::WLink("http://www.kinopoisk.ru/film/817481/"));
												mark_comedy_1_user_4 = new Wt::WContainerWidget(comedy_1_user_4);
												mark_comedy_1_user_4->setId("mark_comedy_1_user_4");
												mark_comedy_1_user_4->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
												mark_comedy_1_user_4->setInline(0);
												mark_comedy_1_user_4->setHtmlTagName("div");
												{
													mark_1_comedy_1_user_4 = new Wt::WContainerWidget(mark_comedy_1_user_4);
													mark_1_comedy_1_user_4->setId("mark_1_comedy_1_user_4");
													mark_1_comedy_1_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_1_comedy_1_user_4->setInline(0);
													mark_1_comedy_1_user_4->setHtmlTagName("div");
													{
														button_comedy_1_mark_1_user_4 = new Wt::WPushButton(mark_1_comedy_1_user_4);
														button_comedy_1_mark_1_user_4->setId("button_comedy_1_mark_1_user_4");
														button_comedy_1_mark_1_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-danger btn-group with-label"));
														button_comedy_1_mark_1_user_4->setInline(1);
														button_comedy_1_mark_1_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_1_mark_1_user_4->setText(Wt::WString::fromUTF8("1"));
														button_comedy_1_mark_1_user_4->setLink(Wt::WLink(""));
														button_comedy_1_mark_1_user_4->clicked().connect(button_comedy_1_mark_1_user_4, &Wt::WPushButton::disable);
														button_comedy_1_mark_1_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_1_mark_1_user_4->valueText();
															writeFile("4", "1", "1");
														}));
													}
													mark_2_comedy_1_user_4 = new Wt::WContainerWidget(mark_comedy_1_user_4);
													mark_2_comedy_1_user_4->setId("mark_2_comedy_1_user_4");
													mark_2_comedy_1_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_2_comedy_1_user_4->setInline(0);
													mark_2_comedy_1_user_4->setHtmlTagName("div");
													{
														button_comedy_1_mark_2_user_4 = new Wt::WPushButton(mark_2_comedy_1_user_4);
														button_comedy_1_mark_2_user_4->setId("button_comedy_1_mark_2_user_4");
														button_comedy_1_mark_2_user_4->setStyleClass(Wt::WString::fromUTF8(" btn btn-warning btn-group with-label"));
														button_comedy_1_mark_2_user_4->setInline(1);
														button_comedy_1_mark_2_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_1_mark_2_user_4->setText(Wt::WString::fromUTF8("2"));
														button_comedy_1_mark_2_user_4->setLink(Wt::WLink(""));
														button_comedy_1_mark_2_user_4->clicked().connect(button_comedy_1_mark_2_user_4, &Wt::WPushButton::disable);
														button_comedy_1_mark_2_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_1_mark_2_user_4->valueText();
															writeFile("4", "1", "2");
														}));
													}
													mark_3_comedy_1_user_4 = new Wt::WContainerWidget(mark_comedy_1_user_4);
													mark_3_comedy_1_user_4->setId("mark_3_comedy_1_user_4");
													mark_3_comedy_1_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_3_comedy_1_user_4->setInline(0);
													mark_3_comedy_1_user_4->setHtmlTagName("div");
													{
														button_comedy_1_mark_3_user_4 = new Wt::WPushButton(mark_3_comedy_1_user_4);
														button_comedy_1_mark_3_user_4->setId("button_comedy_1_mark_3_user_4");
														button_comedy_1_mark_3_user_4->setStyleClass(Wt::WString::fromUTF8("btn-primary  btn btn-group with-label"));
														button_comedy_1_mark_3_user_4->setInline(1);
														button_comedy_1_mark_3_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_1_mark_3_user_4->setText(Wt::WString::fromUTF8("3"));
														button_comedy_1_mark_3_user_4->setLink(Wt::WLink(""));
														button_comedy_1_mark_3_user_4->clicked().connect(button_comedy_1_mark_3_user_4, &Wt::WPushButton::disable);
														button_comedy_1_mark_3_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_1_mark_3_user_4->valueText();
															writeFile("4", "1", "3");
														}));
													}
													mark_4_comedy_1_user_4 = new Wt::WContainerWidget(mark_comedy_1_user_4);
													mark_4_comedy_1_user_4->setId("mark_4_comedy_1_user_4");
													mark_4_comedy_1_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_4_comedy_1_user_4->setInline(0);
													mark_4_comedy_1_user_4->setHtmlTagName("div");
													{
														button_comedy_1_mark_4_user_4 = new Wt::WPushButton(mark_4_comedy_1_user_4);
														button_comedy_1_mark_4_user_4->setId("button_comedy_1_mark_4_user_4");
														button_comedy_1_mark_4_user_4->setStyleClass(Wt::WString::fromUTF8(" btn-info btn btn-group with-label"));
														button_comedy_1_mark_4_user_4->setInline(1);
														button_comedy_1_mark_4_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_1_mark_4_user_4->setText(Wt::WString::fromUTF8("4"));
														button_comedy_1_mark_4_user_4->setLink(Wt::WLink(""));
														button_comedy_1_mark_4_user_4->clicked().connect(button_comedy_1_mark_4_user_4, &Wt::WPushButton::disable);
														button_comedy_1_mark_4_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_1_mark_4_user_4->valueText();
															writeFile("4", "1", "4");
														}));
													}
													mark_5_comedy_1_user_4 = new Wt::WContainerWidget(mark_comedy_1_user_4);
													mark_5_comedy_1_user_4->setId("mark_5_comedy_1_user_4");
													mark_5_comedy_1_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_5_comedy_1_user_4->setInline(0);
													mark_5_comedy_1_user_4->setHtmlTagName("div");
													{
														button_comedy_1_mark_5_user_4 = new Wt::WPushButton(mark_5_comedy_1_user_4);
														button_comedy_1_mark_5_user_4->setId("button_comedy_1_mark_5_user_4");
														button_comedy_1_mark_5_user_4->setStyleClass(Wt::WString::fromUTF8(" btn btn-group with-label btn-success"));
														button_comedy_1_mark_5_user_4->setInline(1);
														button_comedy_1_mark_5_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_1_mark_5_user_4->setText(Wt::WString::fromUTF8("5"));
														button_comedy_1_mark_5_user_4->setLink(Wt::WLink(""));
														button_comedy_1_mark_5_user_4->clicked().connect(button_comedy_1_mark_5_user_4, &Wt::WPushButton::disable);
														button_comedy_1_mark_5_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_1_mark_5_user_4->valueText();
															writeFile("4", "1", "5");
														}));
													}
												}
											}
											comedy_2_user_4 = new Wt::WContainerWidget(container_comedy_user_4);
											comedy_2_user_4->setId("comedy_2_user_4");
											comedy_2_user_4->setStyleClass(Wt::WString::fromUTF8(" btn-group"));
											comedy_2_user_4->setInline(0);
											comedy_2_user_4->setHtmlTagName("div");
											{
												comedy_image_2_user_4 = new Wt::WImage(comedy_2_user_4);
												comedy_image_2_user_4->setId("comedy_image_2_user_4");
												comedy_image_2_user_4->setStyleClass(Wt::WString::fromUTF8("center-block"));
												comedy_image_2_user_4->setInline(0);
												comedy_image_2_user_4->setImageLink(Wt::WLink("http://img.dotua.org/fsua_items/cover/00/42/35/10/00423542.jpg"));
												watch_comedy_2_user_4 = new Wt::WPushButton(comedy_2_user_4);
												watch_comedy_2_user_4->setId("watch_comedy_2_user_4");
												watch_comedy_2_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default with-label btn-success center-block"));
												watch_comedy_2_user_4->setInline(1);
												watch_comedy_2_user_4->setEmptyText(Wt::WString::fromUTF8(""));
												watch_comedy_2_user_4->setText(Wt::WString::fromUTF8("Watch"));
												watch_comedy_2_user_4->setLink(Wt::WLink("http://www.ex.ua/show/221305334/44721d879c4a9fdb9416347c45e6f5d2.mp4"));
												rating_comedy_2_user_4 = new Wt::WPushButton(comedy_2_user_4);
												rating_comedy_2_user_4->setId("rating_comedy_2_user_4");
												rating_comedy_2_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-warning with-label center-block"));
												rating_comedy_2_user_4->setInline(1);
												rating_comedy_2_user_4->setEmptyText(Wt::WString::fromUTF8(""));
												rating_comedy_2_user_4->setText(Wt::WString::fromUTF8("Rating"));
												rating_comedy_2_user_4->setLink(Wt::WLink("http://www.kinopoisk.ru/film/891509/"));
												mark_comedy_2_user_4 = new Wt::WContainerWidget(comedy_2_user_4);
												mark_comedy_2_user_4->setId("mark_comedy_2_user_4");
												mark_comedy_2_user_4->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
												mark_comedy_2_user_4->setInline(0);
												mark_comedy_2_user_4->setHtmlTagName("div");
												{
													mark_1_comedy_2_user_4 = new Wt::WContainerWidget(mark_comedy_2_user_4);
													mark_1_comedy_2_user_4->setId("mark_1_comedy_2_user_4");
													mark_1_comedy_2_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_1_comedy_2_user_4->setInline(0);
													mark_1_comedy_2_user_4->setHtmlTagName("div");
													{
														button_comedy_2_mark_1_user_4 = new Wt::WPushButton(mark_1_comedy_2_user_4);
														button_comedy_2_mark_1_user_4->setId("button_comedy_2_mark_1_user_4");
														button_comedy_2_mark_1_user_4->setStyleClass(Wt::WString::fromUTF8(" btn btn-danger btn-group with-label"));
														button_comedy_2_mark_1_user_4->setInline(1);
														button_comedy_2_mark_1_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_2_mark_1_user_4->setText(Wt::WString::fromUTF8("1"));
														button_comedy_2_mark_1_user_4->setLink(Wt::WLink(""));
														button_comedy_2_mark_1_user_4->clicked().connect(button_comedy_2_mark_1_user_4, &Wt::WPushButton::disable);
														button_comedy_2_mark_1_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_2_mark_1_user_4->valueText();
															writeFile("4", "2", "1");
														}));
													}
													mark_2_comedy_2_user_4 = new Wt::WContainerWidget(mark_comedy_2_user_4);
													mark_2_comedy_2_user_4->setId("mark_2_comedy_2_user_4");
													mark_2_comedy_2_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_2_comedy_2_user_4->setInline(0);
													mark_2_comedy_2_user_4->setHtmlTagName("div");
													{
														button_comedy_2_mark_2_user_4 = new Wt::WPushButton(mark_2_comedy_2_user_4);
														button_comedy_2_mark_2_user_4->setId("button_comedy_2_mark_2_user_4");
														button_comedy_2_mark_2_user_4->setStyleClass(Wt::WString::fromUTF8(" btn btn-warning btn-group with-label"));
														button_comedy_2_mark_2_user_4->setInline(1);
														button_comedy_2_mark_2_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_2_mark_2_user_4->setText(Wt::WString::fromUTF8("2"));
														button_comedy_2_mark_2_user_4->setLink(Wt::WLink(""));
														button_comedy_2_mark_2_user_4->clicked().connect(button_comedy_2_mark_2_user_4, &Wt::WPushButton::disable);
														button_comedy_2_mark_2_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_2_mark_2_user_4->valueText();
															writeFile("4", "2", "2");
														}));
													}
													mark_3_comedy_2_user_4 = new Wt::WContainerWidget(mark_comedy_2_user_4);
													mark_3_comedy_2_user_4->setId("mark_3_comedy_2_user_4");
													mark_3_comedy_2_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_3_comedy_2_user_4->setInline(0);
													mark_3_comedy_2_user_4->setHtmlTagName("div");
													{
														button_comedy_2_mark_3_user_4 = new Wt::WPushButton(mark_3_comedy_2_user_4);
														button_comedy_2_mark_3_user_4->setId("button_comedy_2_mark_3_user_4");
														button_comedy_2_mark_3_user_4->setStyleClass(Wt::WString::fromUTF8("btn-primary  btn btn-group with-label"));
														button_comedy_2_mark_3_user_4->setInline(1);
														button_comedy_2_mark_3_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_2_mark_3_user_4->setText(Wt::WString::fromUTF8("3"));
														button_comedy_2_mark_3_user_4->setLink(Wt::WLink(""));
														button_comedy_2_mark_3_user_4->clicked().connect(button_comedy_2_mark_3_user_4, &Wt::WPushButton::disable);
														button_comedy_2_mark_3_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_2_mark_3_user_4->valueText();
															writeFile("4", "2", "3");
														}));
													}
													mark_4_comedy_2_user_4 = new Wt::WContainerWidget(mark_comedy_2_user_4);
													mark_4_comedy_2_user_4->setId("mark_4_comedy_2_user_4");
													mark_4_comedy_2_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_4_comedy_2_user_4->setInline(0);
													mark_4_comedy_2_user_4->setHtmlTagName("div");
													{
														button_comedy_2_mark_4_user_4 = new Wt::WPushButton(mark_4_comedy_2_user_4);
														button_comedy_2_mark_4_user_4->setId("button_comedy_2_mark_4_user_4");
														button_comedy_2_mark_4_user_4->setStyleClass(Wt::WString::fromUTF8(" btn-info btn btn-group with-label"));
														button_comedy_2_mark_4_user_4->setInline(1);
														button_comedy_2_mark_4_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_2_mark_4_user_4->setText(Wt::WString::fromUTF8("4"));
														button_comedy_2_mark_4_user_4->setLink(Wt::WLink(""));
														button_comedy_2_mark_4_user_4->clicked().connect(button_comedy_2_mark_4_user_4, &Wt::WPushButton::disable);
														button_comedy_2_mark_4_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_2_mark_4_user_4->valueText();
															writeFile("4", "2", "4");
														}));
													}
													mark_5_comedy_2_user_4 = new Wt::WContainerWidget(mark_comedy_2_user_4);
													mark_5_comedy_2_user_4->setId("mark_5_comedy_2_user_4");
													mark_5_comedy_2_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_5_comedy_2_user_4->setInline(0);
													mark_5_comedy_2_user_4->setHtmlTagName("div");
													{
														button_comedy_2_mark_5_user_4 = new Wt::WPushButton(mark_5_comedy_2_user_4);
														button_comedy_2_mark_5_user_4->setId("button_comedy_2_mark_5_user_4");
														button_comedy_2_mark_5_user_4->setStyleClass(Wt::WString::fromUTF8(" btn btn-group with-label btn-success"));
														button_comedy_2_mark_5_user_4->setInline(1);
														button_comedy_2_mark_5_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_2_mark_5_user_4->setText(Wt::WString::fromUTF8("5"));
														button_comedy_2_mark_5_user_4->setLink(Wt::WLink(""));
														button_comedy_2_mark_5_user_4->clicked().connect(button_comedy_2_mark_5_user_4, &Wt::WPushButton::disable);
														button_comedy_2_mark_5_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_2_mark_5_user_4->valueText();
															writeFile("4", "2", "5");
														}));
													}
												}
											}
											comedy_3_user_4 = new Wt::WContainerWidget(container_comedy_user_4);
											comedy_3_user_4->setId("comedy_3_user_4");
											comedy_3_user_4->setStyleClass(Wt::WString::fromUTF8(" btn-group"));
											comedy_3_user_4->setInline(0);
											comedy_3_user_4->setHtmlTagName("div");
											{
												comedy_image_3_user_4 = new Wt::WImage(comedy_3_user_4);
												comedy_image_3_user_4->setId("comedy_image_3_user_4");
												comedy_image_3_user_4->setStyleClass(Wt::WString::fromUTF8("center-block"));
												comedy_image_3_user_4->setInline(0);
												comedy_image_3_user_4->setImageLink(Wt::WLink("http://img.dotua.org/fsua_items/cover/00/41/63/10/00416346.jpg"));
												watch_comedy_3_user_4 = new Wt::WPushButton(comedy_3_user_4);
												watch_comedy_3_user_4->setId("watch_comedy_3_user_4");
												watch_comedy_3_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default with-label btn-success center-block"));
												watch_comedy_3_user_4->setInline(1);
												watch_comedy_3_user_4->setEmptyText(Wt::WString::fromUTF8(""));
												watch_comedy_3_user_4->setText(Wt::WString::fromUTF8("Watch"));
												watch_comedy_3_user_4->setLink(Wt::WLink("http://fs183.www.ex.ua/show/1db3efc80e81aee31128052d5e04addf/216383529/1db3efc80e81aee31128052d5e04addf.mp4"));
												rating_comedy_3_user_4 = new Wt::WPushButton(comedy_3_user_4);
												rating_comedy_3_user_4->setId("rating_comedy_3_user_4");
												rating_comedy_3_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-warning with-label center-block"));
												rating_comedy_3_user_4->setInline(1);
												rating_comedy_3_user_4->setEmptyText(Wt::WString::fromUTF8(""));
												rating_comedy_3_user_4->setText(Wt::WString::fromUTF8("Rating"));
												rating_comedy_3_user_4->setLink(Wt::WLink("http://www.kinopoisk.ru/film/714187/"));
												mark_comedy_3_user_4 = new Wt::WContainerWidget(comedy_3_user_4);
												mark_comedy_3_user_4->setId("mark_comedy_3_user_4");
												mark_comedy_3_user_4->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
												mark_comedy_3_user_4->setInline(0);
												mark_comedy_3_user_4->setHtmlTagName("div");
												{
													mark_1_comedy_3_user_4 = new Wt::WContainerWidget(mark_comedy_3_user_4);
													mark_1_comedy_3_user_4->setId("mark_1_comedy_3_user_4");
													mark_1_comedy_3_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_1_comedy_3_user_4->setInline(0);
													mark_1_comedy_3_user_4->setHtmlTagName("div");
													{
														button_comedy_3_mark_1_user_4 = new Wt::WPushButton(mark_1_comedy_3_user_4);
														button_comedy_3_mark_1_user_4->setId("button_comedy_3_mark_1_user_4");
														button_comedy_3_mark_1_user_4->setStyleClass(Wt::WString::fromUTF8(" btn btn-danger btn-group with-label"));
														button_comedy_3_mark_1_user_4->setInline(1);
														button_comedy_3_mark_1_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_3_mark_1_user_4->setText(Wt::WString::fromUTF8("1"));
														button_comedy_3_mark_1_user_4->setLink(Wt::WLink(""));
														button_comedy_3_mark_1_user_4->clicked().connect(button_comedy_3_mark_1_user_4, &Wt::WPushButton::disable);
														button_comedy_3_mark_1_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_3_mark_1_user_4->valueText();
															writeFile("4", "3", "1");
														}));
													}
													mark_2_comedy_3_user_4 = new Wt::WContainerWidget(mark_comedy_3_user_4);
													mark_2_comedy_3_user_4->setId("mark_2_comedy_3_user_4");
													mark_2_comedy_3_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_2_comedy_3_user_4->setInline(0);
													mark_2_comedy_3_user_4->setHtmlTagName("div");
													{
														button_comedy_3_mark_2_user_4 = new Wt::WPushButton(mark_2_comedy_3_user_4);
														button_comedy_3_mark_2_user_4->setId("button_comedy_3_mark_2_user_4");
														button_comedy_3_mark_2_user_4->setStyleClass(Wt::WString::fromUTF8(" btn btn-warning btn-group with-label"));
														button_comedy_3_mark_2_user_4->setInline(1);
														button_comedy_3_mark_2_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_3_mark_2_user_4->setText(Wt::WString::fromUTF8("2"));
														button_comedy_3_mark_2_user_4->setLink(Wt::WLink(""));
														button_comedy_3_mark_2_user_4->clicked().connect(button_comedy_3_mark_2_user_4, &Wt::WPushButton::disable);
														button_comedy_3_mark_2_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_3_mark_2_user_4->valueText();
															writeFile("4", "3", "2");
														}));
													}
													mark_3_comedy_3_user_4 = new Wt::WContainerWidget(mark_comedy_3_user_4);
													mark_3_comedy_3_user_4->setId("mark_3_comedy_3_user_4");
													mark_3_comedy_3_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_3_comedy_3_user_4->setInline(0);
													mark_3_comedy_3_user_4->setHtmlTagName("div");
													{
														button_comedy_3_mark_3_user_4 = new Wt::WPushButton(mark_3_comedy_3_user_4);
														button_comedy_3_mark_3_user_4->setId("button_comedy_3_mark_3_user_4");
														button_comedy_3_mark_3_user_4->setStyleClass(Wt::WString::fromUTF8("btn-primary  btn btn-group with-label"));
														button_comedy_3_mark_3_user_4->setInline(1);
														button_comedy_3_mark_3_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_3_mark_3_user_4->setText(Wt::WString::fromUTF8("3"));
														button_comedy_3_mark_3_user_4->setLink(Wt::WLink(""));
														button_comedy_3_mark_3_user_4->clicked().connect(button_comedy_3_mark_3_user_4, &Wt::WPushButton::disable);
														button_comedy_3_mark_3_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_3_mark_3_user_4->valueText();
															writeFile("4", "3", "3");
														}));
													}
													mark_4_comedy_3_user_4 = new Wt::WContainerWidget(mark_comedy_3_user_4);
													mark_4_comedy_3_user_4->setId("mark_4_comedy_3_user_4");
													mark_4_comedy_3_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_4_comedy_3_user_4->setInline(0);
													mark_4_comedy_3_user_4->setHtmlTagName("div");
													{
														button_comedy_3_mark_4_user_4 = new Wt::WPushButton(mark_4_comedy_3_user_4);
														button_comedy_3_mark_4_user_4->setId("button_comedy_3_mark_4_user_4");
														button_comedy_3_mark_4_user_4->setStyleClass(Wt::WString::fromUTF8(" btn-info btn btn-group with-label"));
														button_comedy_3_mark_4_user_4->setInline(1);
														button_comedy_3_mark_4_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_3_mark_4_user_4->setText(Wt::WString::fromUTF8("4"));
														button_comedy_3_mark_4_user_4->setLink(Wt::WLink(""));
														button_comedy_3_mark_4_user_4->clicked().connect(button_comedy_3_mark_4_user_4, &Wt::WPushButton::disable);
														button_comedy_3_mark_4_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_3_mark_4_user_4->valueText();
															writeFile("4", "3", "4");
														}));
													}
													mark_5_comedy_3_user_4 = new Wt::WContainerWidget(mark_comedy_3_user_4);
													mark_5_comedy_3_user_4->setId("mark_5_comedy_3_user_4");
													mark_5_comedy_3_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_5_comedy_3_user_4->setInline(0);
													mark_5_comedy_3_user_4->setHtmlTagName("div");
													{
														button_comedy_3_mark_5_user_4 = new Wt::WPushButton(mark_5_comedy_3_user_4);
														button_comedy_3_mark_5_user_4->setId("button_comedy_3_mark_5_user_4");
														button_comedy_3_mark_5_user_4->setStyleClass(Wt::WString::fromUTF8(" btn btn-group with-label btn-success"));
														button_comedy_3_mark_5_user_4->setInline(1);
														button_comedy_3_mark_5_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_comedy_3_mark_5_user_4->setText(Wt::WString::fromUTF8("5"));
														button_comedy_3_mark_5_user_4->setLink(Wt::WLink(""));
														button_comedy_3_mark_5_user_4->clicked().connect(button_comedy_3_mark_5_user_4, &Wt::WPushButton::disable);
														button_comedy_3_mark_5_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_comedy_3_mark_5_user_4->valueText();
															writeFile("4", "3", "5");
														}));
													}
												}
											}
										}
									}
									drama_user_4 = new Wt::WContainerWidget(container_films_4);
									drama_user_4_mi = menu_user_4->addItem(Wt::WString("Drama"), drama_user_4);
									drama_user_4->setId("drama_user_4");
									drama_user_4->setStyleClass(Wt::WString::fromUTF8(""));
									drama_user_4->setInline(0);
									menu_user_4->setItemDisabled(1, 0);
									menu_user_4->setItemHidden(1, 0);
									{
										container_drama_user_4 = new Wt::WContainerWidget(drama_user_4);
										container_drama_user_4->setId("container_drama_user_4");
										container_drama_user_4->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
										container_drama_user_4->setInline(0);
										container_drama_user_4->setHtmlTagName("div");
										{
											drama_1_user_4 = new Wt::WContainerWidget(container_drama_user_4);
											drama_1_user_4->setId("drama_1_user_4");
											drama_1_user_4->setStyleClass(Wt::WString::fromUTF8(" btn-group"));
											drama_1_user_4->setInline(0);
											drama_1_user_4->setHtmlTagName("div");
											{
												drama_image_1_user_4 = new Wt::WImage(drama_1_user_4);
												drama_image_1_user_4->setId("drama_image_1_user_4");
												drama_image_1_user_4->setStyleClass(Wt::WString::fromUTF8("center-block"));
												drama_image_1_user_4->setInline(0);
												drama_image_1_user_4->setImageLink(Wt::WLink("http://img.dotua.org/fsua_items/cover/00/20/75/10/00207558.jpg"));
												watch_drama_1_user_4 = new Wt::WPushButton(drama_1_user_4);
												watch_drama_1_user_4->setId("watch_drama_1_user_4");
												watch_drama_1_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default with-label btn-success center-block"));
												watch_drama_1_user_4->setInline(1);
												watch_drama_1_user_4->setEmptyText(Wt::WString::fromUTF8(""));
												watch_drama_1_user_4->setText(Wt::WString::fromUTF8("Watch"));
												watch_drama_1_user_4->setLink(Wt::WLink("http://fs136.www.ex.ua/show/e86bb1854d95b249f3ee8d557e7224bd/12141246/e86bb1854d95b249f3ee8d557e7224bd.mp4"));
												rating_drama_1_user_4 = new Wt::WPushButton(drama_1_user_4);
												rating_drama_1_user_4->setId("rating_drama_1_user_4");
												rating_drama_1_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-warning with-label center-block"));
												rating_drama_1_user_4->setInline(1);
												rating_drama_1_user_4->setEmptyText(Wt::WString::fromUTF8(""));
												rating_drama_1_user_4->setText(Wt::WString::fromUTF8("Rating"));
												rating_drama_1_user_4->setLink(Wt::WLink("/"));
												mark_drama_1_user_4 = new Wt::WContainerWidget(drama_1_user_4);
												mark_drama_1_user_4->setId("mark_drama_1_user_4");
												mark_drama_1_user_4->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
												mark_drama_1_user_4->setInline(0);
												mark_drama_1_user_4->setHtmlTagName("div");
												{
													mark_1_drama_1_user_4 = new Wt::WContainerWidget(mark_drama_1_user_4);
													mark_1_drama_1_user_4->setId("mark_1_drama_1_user_4");
													mark_1_drama_1_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_1_drama_1_user_4->setInline(0);
													mark_1_drama_1_user_4->setHtmlTagName("div");
													{
														button_drama_1_mark_1_user_4 = new Wt::WPushButton(mark_1_drama_1_user_4);
														button_drama_1_mark_1_user_4->setId("button_drama_1_mark_1_user_4");
														button_drama_1_mark_1_user_4->setStyleClass(Wt::WString::fromUTF8(" btn btn-danger btn-group with-label"));
														button_drama_1_mark_1_user_4->setInline(1);
														button_drama_1_mark_1_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_1_mark_1_user_4->setText(Wt::WString::fromUTF8("1"));
														button_drama_1_mark_1_user_4->setLink(Wt::WLink(""));
														button_drama_1_mark_1_user_4->clicked().connect(button_drama_1_mark_1_user_4, &Wt::WPushButton::disable);
														button_drama_1_mark_1_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_drama_1_mark_1_user_4->valueText();
															writeFile("4", "4", "1");
														}));
													}
													mark_2_drama_1_user_4 = new Wt::WContainerWidget(mark_drama_1_user_4);
													mark_2_drama_1_user_4->setId("mark_2_drama_1_user_4");
													mark_2_drama_1_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_2_drama_1_user_4->setInline(0);
													mark_2_drama_1_user_4->setHtmlTagName("div");
													{
														button_drama_1_mark_2_user_4 = new Wt::WPushButton(mark_2_drama_1_user_4);
														button_drama_1_mark_2_user_4->setId("button_drama_1_mark_2_user_4");
														button_drama_1_mark_2_user_4->setStyleClass(Wt::WString::fromUTF8(" btn btn-warning btn-group with-label"));
														button_drama_1_mark_2_user_4->setInline(1);
														button_drama_1_mark_2_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_1_mark_2_user_4->setText(Wt::WString::fromUTF8("2"));
														button_drama_1_mark_2_user_4->setLink(Wt::WLink(""));
														button_drama_1_mark_2_user_4->clicked().connect(button_drama_1_mark_2_user_4, &Wt::WPushButton::disable);
														button_drama_1_mark_2_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_drama_1_mark_2_user_4->valueText();
															writeFile("4", "4", "2");
														}));
													}
													mark_3_drama_1_user_4 = new Wt::WContainerWidget(mark_drama_1_user_4);
													mark_3_drama_1_user_4->setId("mark_3_drama_1_user_4");
													mark_3_drama_1_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_3_drama_1_user_4->setInline(0);
													mark_3_drama_1_user_4->setHtmlTagName("div");
													{
														button_drama_1_mark_3_user_4 = new Wt::WPushButton(mark_3_drama_1_user_4);
														button_drama_1_mark_3_user_4->setId("button_drama_1_mark_3_user_4");
														button_drama_1_mark_3_user_4->setStyleClass(Wt::WString::fromUTF8("btn-primary  btn btn-group with-label"));
														button_drama_1_mark_3_user_4->setInline(1);
														button_drama_1_mark_3_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_1_mark_3_user_4->setText(Wt::WString::fromUTF8("3"));
														button_drama_1_mark_3_user_4->setLink(Wt::WLink(""));
														button_drama_1_mark_3_user_4->clicked().connect(button_drama_1_mark_3_user_4, &Wt::WPushButton::disable);
														button_drama_1_mark_3_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_drama_1_mark_3_user_4->valueText();
															writeFile("4", "4", "3");
														}));
													}
													mark_4_drama_1_user_4 = new Wt::WContainerWidget(mark_drama_1_user_4);
													mark_4_drama_1_user_4->setId("mark_4_drama_1_user_4");
													mark_4_drama_1_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_4_drama_1_user_4->setInline(0);
													mark_4_drama_1_user_4->setHtmlTagName("div");
													{
														button_drama_1_mark_4_user_4 = new Wt::WPushButton(mark_4_drama_1_user_4);
														button_drama_1_mark_4_user_4->setId("button_drama_1_mark_4_user_4");
														button_drama_1_mark_4_user_4->setStyleClass(Wt::WString::fromUTF8(" btn-info btn btn-group with-label"));
														button_drama_1_mark_4_user_4->setInline(1);
														button_drama_1_mark_4_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_1_mark_4_user_4->setText(Wt::WString::fromUTF8("4"));
														button_drama_1_mark_4_user_4->setLink(Wt::WLink(""));
														button_drama_1_mark_4_user_4->clicked().connect(button_drama_1_mark_4_user_4, &Wt::WPushButton::disable);
														button_drama_1_mark_4_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_drama_1_mark_4_user_4->valueText();
															writeFile("4", "4", "4");
														}));
													}
													mark_5_drama_1_user_4 = new Wt::WContainerWidget(mark_drama_1_user_4);
													mark_5_drama_1_user_4->setId("mark_5_drama_1_user_4");
													mark_5_drama_1_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_5_drama_1_user_4->setInline(0);
													mark_5_drama_1_user_4->setHtmlTagName("div");
													{
														button_drama_1_mark_5_user_4 = new Wt::WPushButton(mark_5_drama_1_user_4);
														button_drama_1_mark_5_user_4->setId("button_drama_1_mark_5_user_4");
														button_drama_1_mark_5_user_4->setStyleClass(Wt::WString::fromUTF8(" btn btn-group with-label btn-success"));
														button_drama_1_mark_5_user_4->setInline(1);
														button_drama_1_mark_5_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_1_mark_5_user_4->setText(Wt::WString::fromUTF8("5"));
														button_drama_1_mark_5_user_4->setLink(Wt::WLink(""));
														button_drama_1_mark_5_user_4->clicked().connect(button_drama_1_mark_5_user_4, &Wt::WPushButton::disable);
														button_drama_1_mark_5_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_drama_1_mark_5_user_4->valueText();
															writeFile("4", "4", "5");
														}));
													}
												}
											}
											drama_2_user_4 = new Wt::WContainerWidget(container_drama_user_4);
											drama_2_user_4->setId("drama_2_user_4");
											drama_2_user_4->setStyleClass(Wt::WString::fromUTF8(" btn-group"));
											drama_2_user_4->setInline(0);
											drama_2_user_4->setHtmlTagName("div");
											{
												drama_image_2_user_4 = new Wt::WImage(drama_2_user_4);
												drama_image_2_user_4->setId("drama_image_2_user_4");
												drama_image_2_user_4->setStyleClass(Wt::WString::fromUTF8("center-block"));
												drama_image_2_user_4->setInline(0);
												drama_image_2_user_4->setImageLink(Wt::WLink("http://img.dotua.org/fsua_items/cover/00/40/52/10/00405214.jpg"));
												watch_drama_2_user_4 = new Wt::WPushButton(drama_2_user_4);
												watch_drama_2_user_4->setId("watch_drama_2_user_4");
												watch_drama_2_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default with-label btn-success center-block"));
												watch_drama_2_user_4->setInline(1);
												watch_drama_2_user_4->setEmptyText(Wt::WString::fromUTF8(""));
												watch_drama_2_user_4->setText(Wt::WString::fromUTF8("Watch"));
												watch_drama_2_user_4->setLink(Wt::WLink("http://www.ex.ua/show/133560114/7f126915aca218eaa77915d19759d185.mp4"));
												rating_drama_2_user_4 = new Wt::WPushButton(drama_2_user_4);
												rating_drama_2_user_4->setId("rating_drama_2_user_4");
												rating_drama_2_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-warning with-label center-block"));
												rating_drama_2_user_4->setInline(1);
												rating_drama_2_user_4->setEmptyText(Wt::WString::fromUTF8(""));
												rating_drama_2_user_4->setText(Wt::WString::fromUTF8("Rating"));
												rating_drama_2_user_4->setLink(Wt::WLink("http://www.kinopoisk.ru/film/448/"));
												mark_drama_2_user_4 = new Wt::WContainerWidget(drama_2_user_4);
												mark_drama_2_user_4->setId("mark_drama_2_user_4");
												mark_drama_2_user_4->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
												mark_drama_2_user_4->setInline(0);
												mark_drama_2_user_4->setHtmlTagName("div");
												{
													mark_1_drama_2_user_4 = new Wt::WContainerWidget(mark_drama_2_user_4);
													mark_1_drama_2_user_4->setId("mark_1_drama_2_user_4");
													mark_1_drama_2_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_1_drama_2_user_4->setInline(0);
													mark_1_drama_2_user_4->setHtmlTagName("div");
													{
														button_drama_2_mark_1_user_4 = new Wt::WPushButton(mark_1_drama_2_user_4);
														button_drama_2_mark_1_user_4->setId("button_drama_2_mark_1_user_4");
														button_drama_2_mark_1_user_4->setStyleClass(Wt::WString::fromUTF8(" btn btn-danger btn-group with-label"));
														button_drama_2_mark_1_user_4->setInline(1);
														button_drama_2_mark_1_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_2_mark_1_user_4->setText(Wt::WString::fromUTF8("1"));
														button_drama_2_mark_1_user_4->setLink(Wt::WLink(""));
														button_drama_2_mark_1_user_4->clicked().connect(button_drama_2_mark_1_user_4, &Wt::WPushButton::disable);
														button_drama_2_mark_1_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_drama_2_mark_1_user_4->valueText();
															writeFile("4", "5", "1");
														}));
													}
													mark_2_drama_2_user_4 = new Wt::WContainerWidget(mark_drama_2_user_4);
													mark_2_drama_2_user_4->setId("mark_2_drama_2_user_4");
													mark_2_drama_2_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_2_drama_2_user_4->setInline(0);
													mark_2_drama_2_user_4->setHtmlTagName("div");
													{
														button_drama_2_mark_2_user_4 = new Wt::WPushButton(mark_2_drama_2_user_4);
														button_drama_2_mark_2_user_4->setId("button_drama_2_mark_2_user_4");
														button_drama_2_mark_2_user_4->setStyleClass(Wt::WString::fromUTF8(" btn btn-warning btn-group with-label"));
														button_drama_2_mark_2_user_4->setInline(1);
														button_drama_2_mark_2_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_2_mark_2_user_4->setText(Wt::WString::fromUTF8("2"));
														button_drama_2_mark_2_user_4->setLink(Wt::WLink(""));
														button_drama_2_mark_2_user_4->clicked().connect(button_drama_2_mark_2_user_4, &Wt::WPushButton::disable);
														button_drama_2_mark_2_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_drama_2_mark_2_user_4->valueText();
															writeFile("4", "5", "2");
														}));
													}
													mark_3_drama_2_user_4 = new Wt::WContainerWidget(mark_drama_2_user_4);
													mark_3_drama_2_user_4->setId("mark_3_drama_2_user_4");
													mark_3_drama_2_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_3_drama_2_user_4->setInline(0);
													mark_3_drama_2_user_4->setHtmlTagName("div");
													{
														button_drama_2_mark_3_user_4 = new Wt::WPushButton(mark_3_drama_2_user_4);
														button_drama_2_mark_3_user_4->setId("button_drama_2_mark_3_user_4");
														button_drama_2_mark_3_user_4->setStyleClass(Wt::WString::fromUTF8("btn-primary  btn btn-group with-label"));
														button_drama_2_mark_3_user_4->setInline(1);
														button_drama_2_mark_3_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_2_mark_3_user_4->setText(Wt::WString::fromUTF8("3"));
														button_drama_2_mark_3_user_4->setLink(Wt::WLink(""));
														button_drama_2_mark_3_user_4->clicked().connect(button_drama_2_mark_3_user_4, &Wt::WPushButton::disable);
														button_drama_2_mark_3_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_drama_2_mark_3_user_4->valueText();
															writeFile("4", "5", "3");
														}));
													}
													mark_4_drama_2_user_4 = new Wt::WContainerWidget(mark_drama_2_user_4);
													mark_4_drama_2_user_4->setId("mark_4_drama_2_user_4");
													mark_4_drama_2_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_4_drama_2_user_4->setInline(0);
													mark_4_drama_2_user_4->setHtmlTagName("div");
													{
														button_drama_2_mark_4_user_4 = new Wt::WPushButton(mark_4_drama_2_user_4);
														button_drama_2_mark_4_user_4->setId("button_drama_2_mark_4_user_4");
														button_drama_2_mark_4_user_4->setStyleClass(Wt::WString::fromUTF8(" btn-info btn btn-group with-label"));
														button_drama_2_mark_4_user_4->setInline(1);
														button_drama_2_mark_4_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_2_mark_4_user_4->setText(Wt::WString::fromUTF8("4"));
														button_drama_2_mark_4_user_4->setLink(Wt::WLink(""));
														button_drama_2_mark_4_user_4->clicked().connect(button_drama_2_mark_4_user_4, &Wt::WPushButton::disable);
														button_drama_2_mark_4_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_drama_2_mark_4_user_4->valueText();
															writeFile("4", "5", "4");
														}));
													}
													mark_5_drama_2_user_4 = new Wt::WContainerWidget(mark_drama_2_user_4);
													mark_5_drama_2_user_4->setId("mark_5_drama_2_user_4");
													mark_5_drama_2_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_5_drama_2_user_4->setInline(0);
													mark_5_drama_2_user_4->setHtmlTagName("div");
													{
														button_drama_2_mark_5_user_4 = new Wt::WPushButton(mark_5_drama_2_user_4);
														button_drama_2_mark_5_user_4->setId("button_drama_2_mark_5_user_4");
														button_drama_2_mark_5_user_4->setStyleClass(Wt::WString::fromUTF8(" btn btn-group with-label btn-success"));
														button_drama_2_mark_5_user_4->setInline(1);
														button_drama_2_mark_5_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_2_mark_5_user_4->setText(Wt::WString::fromUTF8("5"));
														button_drama_2_mark_5_user_4->setLink(Wt::WLink(""));
														button_drama_2_mark_5_user_4->clicked().connect(button_drama_2_mark_5_user_4, &Wt::WPushButton::disable);
														button_drama_2_mark_5_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_drama_2_mark_5_user_4->valueText();
															writeFile("4", "5", "5");
														}));
													}
												}
											}
											drama_3_user_4 = new Wt::WContainerWidget(container_drama_user_4);
											drama_3_user_4->setId("drama_3_user_4");
											drama_3_user_4->setStyleClass(Wt::WString::fromUTF8(" btn-group"));
											drama_3_user_4->setInline(0);
											drama_3_user_4->setHtmlTagName("div");
											{
												drama_image_3_user_4 = new Wt::WImage(drama_3_user_4);
												drama_image_3_user_4->setId("drama_image_3_user_4");
												drama_image_3_user_4->setStyleClass(Wt::WString::fromUTF8("center-block"));
												drama_image_3_user_4->setInline(0);
												drama_image_3_user_4->setImageLink(Wt::WLink("http://img.dotua.org/fsua_items/cover/00/20/75/10/00207568.jpg"));
												watch_drama_3_user_4 = new Wt::WPushButton(drama_3_user_4);
												watch_drama_3_user_4->setId("watch_drama_3_user_4");
												watch_drama_3_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default with-label btn-success center-block"));
												watch_drama_3_user_4->setInline(1);
												watch_drama_3_user_4->setEmptyText(Wt::WString::fromUTF8(""));
												watch_drama_3_user_4->setText(Wt::WString::fromUTF8("Watch"));
												watch_drama_3_user_4->setLink(Wt::WLink("http://fs66.www.ex.ua/show/2f54492f0a828f0f260ab55aa660cc85/62023/2f54492f0a828f0f260ab55aa660cc85.mp4"));
												rating_drama_3_user_4 = new Wt::WPushButton(drama_3_user_4);
												rating_drama_3_user_4->setId("rating_drama_3_user_4");
												rating_drama_3_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-warning with-label center-block"));
												rating_drama_3_user_4->setInline(1);
												rating_drama_3_user_4->setEmptyText(Wt::WString::fromUTF8(""));
												rating_drama_3_user_4->setText(Wt::WString::fromUTF8("Rating"));
												rating_drama_3_user_4->setLink(Wt::WLink("http://www.kinopoisk.ru/film/519/"));
												mark_drama_3_user_4 = new Wt::WContainerWidget(drama_3_user_4);
												mark_drama_3_user_4->setId("mark_drama_3_user_4");
												mark_drama_3_user_4->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
												mark_drama_3_user_4->setInline(0);
												mark_drama_3_user_4->setHtmlTagName("div");
												{
													mark_1_drama_3_user_4 = new Wt::WContainerWidget(mark_drama_3_user_4);
													mark_1_drama_3_user_4->setId("mark_1_drama_3_user_4");
													mark_1_drama_3_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_1_drama_3_user_4->setInline(0);
													mark_1_drama_3_user_4->setHtmlTagName("div");
													{
														button_drama_3_mark_1_user_4 = new Wt::WPushButton(mark_1_drama_3_user_4);
														button_drama_3_mark_1_user_4->setId("button_drama_3_mark_1_user_4");
														button_drama_3_mark_1_user_4->setStyleClass(Wt::WString::fromUTF8(" btn btn-danger btn-group with-label"));
														button_drama_3_mark_1_user_4->setInline(1);
														button_drama_3_mark_1_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_3_mark_1_user_4->setText(Wt::WString::fromUTF8("1"));
														button_drama_3_mark_1_user_4->setLink(Wt::WLink(""));
														button_drama_3_mark_1_user_4->clicked().connect(button_drama_3_mark_1_user_4, &Wt::WPushButton::disable);
														button_drama_3_mark_1_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_drama_3_mark_1_user_4->valueText();
															writeFile("4", "6", "1");
														}));
													}
													mark_2_drama_3_user_4 = new Wt::WContainerWidget(mark_drama_3_user_4);
													mark_2_drama_3_user_4->setId("mark_2_drama_3_user_4");
													mark_2_drama_3_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_2_drama_3_user_4->setInline(0);
													mark_2_drama_3_user_4->setHtmlTagName("div");
													{
														button_drama_3_mark_2_user_4 = new Wt::WPushButton(mark_2_drama_3_user_4);
														button_drama_3_mark_2_user_4->setId("button_drama_3_mark_2_user_4");
														button_drama_3_mark_2_user_4->setStyleClass(Wt::WString::fromUTF8(" btn btn-warning btn-group with-label"));
														button_drama_3_mark_2_user_4->setInline(1);
														button_drama_3_mark_2_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_3_mark_2_user_4->setText(Wt::WString::fromUTF8("2"));
														button_drama_3_mark_2_user_4->setLink(Wt::WLink(""));
														button_drama_3_mark_2_user_4->clicked().connect(button_drama_3_mark_2_user_4, &Wt::WPushButton::disable);
														button_drama_3_mark_2_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_drama_3_mark_2_user_4->valueText();
															writeFile("4", "6", "2");
														}));
													}
													mark_3_drama_3_user_4 = new Wt::WContainerWidget(mark_drama_3_user_4);
													mark_3_drama_3_user_4->setId("mark_3_drama_3_user_4");
													mark_3_drama_3_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_3_drama_3_user_4->setInline(0);
													mark_3_drama_3_user_4->setHtmlTagName("div");
													{
														button_drama_3_mark_3_user_4 = new Wt::WPushButton(mark_3_drama_3_user_4);
														button_drama_3_mark_3_user_4->setId("button_drama_3_mark_3_user_4");
														button_drama_3_mark_3_user_4->setStyleClass(Wt::WString::fromUTF8("btn-primary  btn btn-group with-label"));
														button_drama_3_mark_3_user_4->setInline(1);
														button_drama_3_mark_3_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_3_mark_3_user_4->setText(Wt::WString::fromUTF8("3"));
														button_drama_3_mark_3_user_4->setLink(Wt::WLink(""));
														button_drama_3_mark_3_user_4->clicked().connect(button_drama_3_mark_3_user_4, &Wt::WPushButton::disable);
														button_drama_3_mark_3_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_drama_3_mark_3_user_4->valueText();
															writeFile("4", "6", "3");
														}));
													}
													mark_4_drama_3_user_4 = new Wt::WContainerWidget(mark_drama_3_user_4);
													mark_4_drama_3_user_4->setId("mark_4_drama_3_user_4");
													mark_4_drama_3_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_4_drama_3_user_4->setInline(0);
													mark_4_drama_3_user_4->setHtmlTagName("div");
													{
														button_drama_3_mark_4_user_4 = new Wt::WPushButton(mark_4_drama_3_user_4);
														button_drama_3_mark_4_user_4->setId("button_drama_3_mark_4_user_4");
														button_drama_3_mark_4_user_4->setStyleClass(Wt::WString::fromUTF8(" btn-info btn btn-group with-label"));
														button_drama_3_mark_4_user_4->setInline(1);
														button_drama_3_mark_4_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_3_mark_4_user_4->setText(Wt::WString::fromUTF8("4"));
														button_drama_3_mark_4_user_4->setLink(Wt::WLink(""));
														button_drama_3_mark_4_user_4->clicked().connect(button_drama_3_mark_4_user_4, &Wt::WPushButton::disable);
														button_drama_3_mark_4_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_drama_3_mark_4_user_4->valueText();
															writeFile("4", "6", "4");
														}));
													}
													mark_5_drama_3_user_4 = new Wt::WContainerWidget(mark_drama_3_user_4);
													mark_5_drama_3_user_4->setId("mark_5_drama_3_user_4");
													mark_5_drama_3_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_5_drama_3_user_4->setInline(0);
													mark_5_drama_3_user_4->setHtmlTagName("div");
													{
														button_drama_3_mark_5_user_4 = new Wt::WPushButton(mark_5_drama_3_user_4);
														button_drama_3_mark_5_user_4->setId("button_drama_3_mark_5_user_4");
														button_drama_3_mark_5_user_4->setStyleClass(Wt::WString::fromUTF8(" btn btn-group with-label btn-success"));
														button_drama_3_mark_5_user_4->setInline(1);
														button_drama_3_mark_5_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_drama_3_mark_5_user_4->setText(Wt::WString::fromUTF8("5"));
														button_drama_3_mark_5_user_4->setLink(Wt::WLink(""));
														button_drama_3_mark_5_user_4->clicked().connect(button_drama_3_mark_5_user_4, &Wt::WPushButton::disable);
														button_drama_3_mark_5_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_drama_3_mark_5_user_4->valueText();
															writeFile("4", "6", "5");
														}));
													}
												}
											}
										}
									}
									horror_user_4 = new Wt::WContainerWidget(container_films_4);
									horror_user_4_mi = menu_user_4->addItem(Wt::WString("Horror"), horror_user_4);
									horror_user_4->setId("horror_user_4");
									horror_user_4->setStyleClass(Wt::WString::fromUTF8(""));
									horror_user_4->setInline(0);
									menu_user_4->setItemDisabled(2, 0);
									menu_user_4->setItemHidden(2, 0);
									{
										container_horror_user_4 = new Wt::WContainerWidget(horror_user_4);
										container_horror_user_4->setId("container_horror_user_4");
										container_horror_user_4->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
										container_horror_user_4->setInline(0);
										container_horror_user_4->setHtmlTagName("div");
										{
											horror_1_user_4 = new Wt::WContainerWidget(container_horror_user_4);
											horror_1_user_4->setId("horror_1_user_4");
											horror_1_user_4->setStyleClass(Wt::WString::fromUTF8(" btn-group"));
											horror_1_user_4->setInline(0);
											horror_1_user_4->setHtmlTagName("div");
											{
												horror_image_1_user_4 = new Wt::WImage(horror_1_user_4);
												horror_image_1_user_4->setId("horror_image_1_user_4");
												horror_image_1_user_4->setStyleClass(Wt::WString::fromUTF8("center-block"));
												horror_image_1_user_4->setInline(0);
												horror_image_1_user_4->setImageLink(Wt::WLink("http://img.dotua.org/fsua_items/cover/00/42/35/10/00423560.jpg"));
												watch_horror_1_user_4 = new Wt::WPushButton(horror_1_user_4);
												watch_horror_1_user_4->setId("watch_horror_1_user_4");
												watch_horror_1_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default with-label btn-success center-block"));
												watch_horror_1_user_4->setInline(1);
												watch_horror_1_user_4->setEmptyText(Wt::WString::fromUTF8(""));
												watch_horror_1_user_4->setText(Wt::WString::fromUTF8("Watch"));
												watch_horror_1_user_4->setLink(Wt::WLink("http://fs213.www.ex.ua/show/79fe30f4355edf31282fce0cb5b44115/4266267/79fe30f4355edf31282fce0cb5b44115.mp4"));
												rating_horror_1_user_4 = new Wt::WPushButton(horror_1_user_4);
												rating_horror_1_user_4->setId("rating_horror_1_user_4");
												rating_horror_1_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-warning with-label center-block"));
												rating_horror_1_user_4->setInline(1);
												rating_horror_1_user_4->setEmptyText(Wt::WString::fromUTF8(""));
												rating_horror_1_user_4->setText(Wt::WString::fromUTF8("Rating"));
												rating_horror_1_user_4->setLink(Wt::WLink("http://www.kinopoisk.ru/film/87179/"));
												mark_horror_1_user_4 = new Wt::WContainerWidget(horror_1_user_4);
												mark_horror_1_user_4->setId("mark_horror_1_user_4");
												mark_horror_1_user_4->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
												mark_horror_1_user_4->setInline(0);
												mark_horror_1_user_4->setHtmlTagName("div");
												{
													mark_1_horror_1_user_4 = new Wt::WContainerWidget(mark_horror_1_user_4);
													mark_1_horror_1_user_4->setId("mark_1_horror_1_user_4");
													mark_1_horror_1_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_1_horror_1_user_4->setInline(0);
													mark_1_horror_1_user_4->setHtmlTagName("div");
													{
														button_horror_1_mark_1_user_4 = new Wt::WPushButton(mark_1_horror_1_user_4);
														button_horror_1_mark_1_user_4->setId("button_horror_1_mark_1_user_4");
														button_horror_1_mark_1_user_4->setStyleClass(Wt::WString::fromUTF8(" btn btn-danger btn-group with-label"));
														button_horror_1_mark_1_user_4->setInline(1);
														button_horror_1_mark_1_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_1_mark_1_user_4->setText(Wt::WString::fromUTF8("1"));
														button_horror_1_mark_1_user_4->setLink(Wt::WLink(""));
														button_horror_1_mark_1_user_4->clicked().connect(button_horror_1_mark_1_user_4, &Wt::WPushButton::disable);
														button_horror_1_mark_1_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_horror_1_mark_1_user_4->valueText();
															writeFile("4", "7", "1");
														}));
													}
													mark_2_horror_1_user_4 = new Wt::WContainerWidget(mark_horror_1_user_4);
													mark_2_horror_1_user_4->setId("mark_2_horror_1_user_4");
													mark_2_horror_1_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_2_horror_1_user_4->setInline(0);
													mark_2_horror_1_user_4->setHtmlTagName("div");
													{
														button_horror_1_mark_2_user_4 = new Wt::WPushButton(mark_2_horror_1_user_4);
														button_horror_1_mark_2_user_4->setId("button_horror_1_mark_2_user_4");
														button_horror_1_mark_2_user_4->setStyleClass(Wt::WString::fromUTF8(" btn btn-warning btn-group with-label"));
														button_horror_1_mark_2_user_4->setInline(1);
														button_horror_1_mark_2_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_1_mark_2_user_4->setText(Wt::WString::fromUTF8("2"));
														button_horror_1_mark_2_user_4->setLink(Wt::WLink(""));
														button_horror_1_mark_2_user_4->clicked().connect(button_horror_1_mark_2_user_4, &Wt::WPushButton::disable);
														button_horror_1_mark_2_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_horror_1_mark_2_user_4->valueText();
															writeFile("4", "7", "2");
														}));
													}
													mark_3_horror_1_user_4 = new Wt::WContainerWidget(mark_horror_1_user_4);
													mark_3_horror_1_user_4->setId("mark_3_horror_1_user_4");
													mark_3_horror_1_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_3_horror_1_user_4->setInline(0);
													mark_3_horror_1_user_4->setHtmlTagName("div");
													{
														button_horror_1_mark_3_user_4 = new Wt::WPushButton(mark_3_horror_1_user_4);
														button_horror_1_mark_3_user_4->setId("button_horror_1_mark_3_user_4");
														button_horror_1_mark_3_user_4->setStyleClass(Wt::WString::fromUTF8("btn-primary  btn btn-group with-label"));
														button_horror_1_mark_3_user_4->setInline(1);
														button_horror_1_mark_3_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_1_mark_3_user_4->setText(Wt::WString::fromUTF8("3"));
														button_horror_1_mark_3_user_4->setLink(Wt::WLink(""));
														button_horror_1_mark_3_user_4->clicked().connect(button_horror_1_mark_3_user_4, &Wt::WPushButton::disable);
														button_horror_1_mark_3_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_horror_1_mark_3_user_4->valueText();
															writeFile("4", "7", "3");
														}));
													}
													mark_4_horror_1_user_4 = new Wt::WContainerWidget(mark_horror_1_user_4);
													mark_4_horror_1_user_4->setId("mark_4_horror_1_user_4");
													mark_4_horror_1_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_4_horror_1_user_4->setInline(0);
													mark_4_horror_1_user_4->setHtmlTagName("div");
													{
														button_horror_1_mark_4_user_4 = new Wt::WPushButton(mark_4_horror_1_user_4);
														button_horror_1_mark_4_user_4->setId("button_horror_1_mark_4_user_4");
														button_horror_1_mark_4_user_4->setStyleClass(Wt::WString::fromUTF8(" btn-info btn btn-group with-label"));
														button_horror_1_mark_4_user_4->setInline(1);
														button_horror_1_mark_4_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_1_mark_4_user_4->setText(Wt::WString::fromUTF8("4"));
														button_horror_1_mark_4_user_4->setLink(Wt::WLink(""));
														button_horror_1_mark_4_user_4->clicked().connect(button_horror_1_mark_4_user_4, &Wt::WPushButton::disable);
														button_horror_1_mark_4_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_horror_1_mark_4_user_4->valueText();
															writeFile("4", "7", "4");
														}));
													}
													mark_5_horror_1_user_4 = new Wt::WContainerWidget(mark_horror_1_user_4);
													mark_5_horror_1_user_4->setId("mark_5_horror_1_user_4");
													mark_5_horror_1_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_5_horror_1_user_4->setInline(0);
													mark_5_horror_1_user_4->setHtmlTagName("div");
													{
														button_horror_1_mark_5_user_4 = new Wt::WPushButton(mark_5_horror_1_user_4);
														button_horror_1_mark_5_user_4->setId("button_horror_1_mark_5_user_4");
														button_horror_1_mark_5_user_4->setStyleClass(Wt::WString::fromUTF8(" btn btn-group with-label btn-success"));
														button_horror_1_mark_5_user_4->setInline(1);
														button_horror_1_mark_5_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_1_mark_5_user_4->setText(Wt::WString::fromUTF8("5"));
														button_horror_1_mark_5_user_4->setLink(Wt::WLink(""));
														button_horror_1_mark_5_user_4->clicked().connect(button_horror_1_mark_5_user_4, &Wt::WPushButton::disable);
														button_horror_1_mark_5_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_horror_1_mark_5_user_4->valueText();
															writeFile("4", "7", "5");
														}));
													}
												}
											}
											horror_2_user_4 = new Wt::WContainerWidget(container_horror_user_4);
											horror_2_user_4->setId("horror_2_user_4");
											horror_2_user_4->setStyleClass(Wt::WString::fromUTF8(" btn-group"));
											horror_2_user_4->setInline(0);
											horror_2_user_4->setHtmlTagName("div");
											{
												horror_image_2_user_4 = new Wt::WImage(horror_2_user_4);
												horror_image_2_user_4->setId("horror_image_2_user_4");
												horror_image_2_user_4->setStyleClass(Wt::WString::fromUTF8("center-block"));
												horror_image_2_user_4->setInline(0);
												horror_image_2_user_4->setImageLink(Wt::WLink("http://img.dotua.org/fsua_items/cover/00/14/58/10/00145883.jpg"));
												watch_horror_2_user_4 = new Wt::WPushButton(horror_2_user_4);
												watch_horror_2_user_4->setId("watch_horror_2_user_4");
												watch_horror_2_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default with-label btn-success center-block"));
												watch_horror_2_user_4->setInline(1);
												watch_horror_2_user_4->setEmptyText(Wt::WString::fromUTF8(""));
												watch_horror_2_user_4->setText(Wt::WString::fromUTF8("Watch"));
												watch_horror_2_user_4->setLink(Wt::WLink("http://fs145.www.ex.ua/show/4450bba7e9c69222a3f02b6752483fe6/152133418/4450bba7e9c69222a3f02b6752483fe6.mp4"));
												rating_horror_2_user_4 = new Wt::WPushButton(horror_2_user_4);
												rating_horror_2_user_4->setId("rating_horror_2_user_4");
												rating_horror_2_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-warning with-label center-block"));
												rating_horror_2_user_4->setInline(1);
												rating_horror_2_user_4->setEmptyText(Wt::WString::fromUTF8(""));
												rating_horror_2_user_4->setText(Wt::WString::fromUTF8("Rating"));
												rating_horror_2_user_4->setLink(Wt::WLink("http://www.kinopoisk.ru/film/345/"));
												mark_horror_2_user_4 = new Wt::WContainerWidget(horror_2_user_4);
												mark_horror_2_user_4->setId("mark_horror_2_user_4");
												mark_horror_2_user_4->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
												mark_horror_2_user_4->setInline(0);
												mark_horror_2_user_4->setHtmlTagName("div");
												{
													mark_1_horror_2_user_4 = new Wt::WContainerWidget(mark_horror_2_user_4);
													mark_1_horror_2_user_4->setId("mark_1_horror_2_user_4");
													mark_1_horror_2_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_1_horror_2_user_4->setInline(0);
													mark_1_horror_2_user_4->setHtmlTagName("div");
													{
														button_horror_2_mark_1_user_4 = new Wt::WPushButton(mark_1_horror_2_user_4);
														button_horror_2_mark_1_user_4->setId("button_horror_2_mark_1_user_4");
														button_horror_2_mark_1_user_4->setStyleClass(Wt::WString::fromUTF8(" btn btn-danger btn-group with-label"));
														button_horror_2_mark_1_user_4->setInline(1);
														button_horror_2_mark_1_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_2_mark_1_user_4->setText(Wt::WString::fromUTF8("1"));
														button_horror_2_mark_1_user_4->setLink(Wt::WLink(""));
														button_horror_2_mark_1_user_4->clicked().connect(button_horror_2_mark_1_user_4, &Wt::WPushButton::disable);
														button_horror_2_mark_1_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_horror_2_mark_1_user_4->valueText();
															writeFile("4", "8", "1");
														}));
													}
													mark_2_horror_2_user_4 = new Wt::WContainerWidget(mark_horror_2_user_4);
													mark_2_horror_2_user_4->setId("mark_2_horror_2_user_4");
													mark_2_horror_2_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_2_horror_2_user_4->setInline(0);
													mark_2_horror_2_user_4->setHtmlTagName("div");
													{
														button_horror_2_mark_2_user_4 = new Wt::WPushButton(mark_2_horror_2_user_4);
														button_horror_2_mark_2_user_4->setId("button_horror_2_mark_2_user_4");
														button_horror_2_mark_2_user_4->setStyleClass(Wt::WString::fromUTF8(" btn btn-warning btn-group with-label"));
														button_horror_2_mark_2_user_4->setInline(1);
														button_horror_2_mark_2_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_2_mark_2_user_4->setText(Wt::WString::fromUTF8("2"));
														button_horror_2_mark_2_user_4->setLink(Wt::WLink(""));
														button_horror_2_mark_2_user_4->clicked().connect(button_horror_2_mark_2_user_4, &Wt::WPushButton::disable);
														button_horror_2_mark_2_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_horror_2_mark_2_user_4->valueText();
															writeFile("4", "8", "2");
														}));
													}
													mark_3_horror_2_user_4 = new Wt::WContainerWidget(mark_horror_2_user_4);
													mark_3_horror_2_user_4->setId("mark_3_horror_2_user_4");
													mark_3_horror_2_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_3_horror_2_user_4->setInline(0);
													mark_3_horror_2_user_4->setHtmlTagName("div");
													{
														button_horror_2_mark_3_user_4 = new Wt::WPushButton(mark_3_horror_2_user_4);
														button_horror_2_mark_3_user_4->setId("button_horror_2_mark_3_user_4");
														button_horror_2_mark_3_user_4->setStyleClass(Wt::WString::fromUTF8("btn-primary  btn btn-group with-label"));
														button_horror_2_mark_3_user_4->setInline(1);
														button_horror_2_mark_3_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_2_mark_3_user_4->setText(Wt::WString::fromUTF8("3"));
														button_horror_2_mark_3_user_4->setLink(Wt::WLink(""));
														button_horror_2_mark_3_user_4->clicked().connect(button_horror_2_mark_3_user_4, &Wt::WPushButton::disable);
														button_horror_2_mark_3_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_horror_2_mark_3_user_4->valueText();
															writeFile("4", "8", "3");
														}));
													}
													mark_4_horror_2_user_4 = new Wt::WContainerWidget(mark_horror_2_user_4);
													mark_4_horror_2_user_4->setId("mark_4_horror_2_user_4");
													mark_4_horror_2_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_4_horror_2_user_4->setInline(0);
													mark_4_horror_2_user_4->setHtmlTagName("div");
													{
														button_horror_2_mark_4_user_4 = new Wt::WPushButton(mark_4_horror_2_user_4);
														button_horror_2_mark_4_user_4->setId("button_horror_2_mark_4_user_4");
														button_horror_2_mark_4_user_4->setStyleClass(Wt::WString::fromUTF8(" btn-info btn btn-group with-label"));
														button_horror_2_mark_4_user_4->setInline(1);
														button_horror_2_mark_4_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_2_mark_4_user_4->setText(Wt::WString::fromUTF8("4"));
														button_horror_2_mark_4_user_4->setLink(Wt::WLink(""));
														button_horror_2_mark_4_user_4->clicked().connect(button_horror_2_mark_4_user_4, &Wt::WPushButton::disable);
														button_horror_2_mark_4_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_horror_2_mark_4_user_4->valueText();
															writeFile("4", "8", "4");
														}));
													}
													mark_5_horror_2_user_4 = new Wt::WContainerWidget(mark_horror_2_user_4);
													mark_5_horror_2_user_4->setId("mark_5_horror_2_user_4");
													mark_5_horror_2_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_5_horror_2_user_4->setInline(0);
													mark_5_horror_2_user_4->setHtmlTagName("div");
													{
														button_horror_2_mark_5_user_4 = new Wt::WPushButton(mark_5_horror_2_user_4);
														button_horror_2_mark_5_user_4->setId("button_horror_2_mark_5_user_4");
														button_horror_2_mark_5_user_4->setStyleClass(Wt::WString::fromUTF8(" btn btn-group with-label btn-success"));
														button_horror_2_mark_5_user_4->setInline(1);
														button_horror_2_mark_5_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_2_mark_5_user_4->setText(Wt::WString::fromUTF8("5"));
														button_horror_2_mark_5_user_4->setLink(Wt::WLink(""));
														button_horror_2_mark_5_user_4->clicked().connect(button_horror_2_mark_5_user_4, &Wt::WPushButton::disable);
														button_horror_2_mark_5_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_horror_2_mark_5_user_4->valueText();
															writeFile("4", "8", "5");
														}));
													}
												}
											}
											horror_3_user_4 = new Wt::WContainerWidget(container_horror_user_4);
											horror_3_user_4->setId("horror_3_user_4");
											horror_3_user_4->setStyleClass(Wt::WString::fromUTF8(" btn-group"));
											horror_3_user_4->setInline(0);
											horror_3_user_4->setHtmlTagName("div");
											{
												horror_image_3_user_4 = new Wt::WImage(horror_3_user_4);
												horror_image_3_user_4->setId("horror_image_3_user_4");
												horror_image_3_user_4->setStyleClass(Wt::WString::fromUTF8("center-block"));
												horror_image_3_user_4->setInline(0);
												horror_image_3_user_4->setImageLink(Wt::WLink("http://img.dotua.org/fsua_items/cover/00/14/01/10/00140147.jpg"));
												watch_horror_3_user_4 = new Wt::WPushButton(horror_3_user_4);
												watch_horror_3_user_4->setId("watch_horror_3_user_4");
												watch_horror_3_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default with-label btn-success center-block"));
												watch_horror_3_user_4->setInline(1);
												watch_horror_3_user_4->setEmptyText(Wt::WString::fromUTF8(""));
												watch_horror_3_user_4->setText(Wt::WString::fromUTF8("Watch"));
												watch_horror_3_user_4->setLink(Wt::WLink("http://fs9.www.ex.ua/show/c6f2d7015bdad96fefa71b6d1f37eadc/87754719/c6f2d7015bdad96fefa71b6d1f37eadc.mp4"));
												rating_horror_3_user_4 = new Wt::WPushButton(horror_3_user_4);
												rating_horror_3_user_4->setId("rating_horror_3_user_4");
												rating_horror_3_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-warning with-label center-block"));
												rating_horror_3_user_4->setInline(1);
												rating_horror_3_user_4->setEmptyText(Wt::WString::fromUTF8(""));
												rating_horror_3_user_4->setText(Wt::WString::fromUTF8("Rating"));
												rating_horror_3_user_4->setLink(Wt::WLink("http://www.kinopoisk.ru/film/64187/"));
												mark_horror_3_user_2_cp = new Wt::WContainerWidget(horror_3_user_4);
												mark_horror_3_user_2_cp->setId("mark_horror_3_user_2_cp");
												mark_horror_3_user_2_cp->setStyleClass(Wt::WString::fromUTF8(" btn-group-justified btn-group"));
												mark_horror_3_user_2_cp->setInline(0);
												mark_horror_3_user_2_cp->setHtmlTagName("div");
												{
													mark_1_horror_3_user_4 = new Wt::WContainerWidget(mark_horror_3_user_2_cp);
													mark_1_horror_3_user_4->setId("mark_1_horror_3_user_4");
													mark_1_horror_3_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_1_horror_3_user_4->setInline(0);
													mark_1_horror_3_user_4->setHtmlTagName("div");
													{
														button_horror_3_mark_1_user_4 = new Wt::WPushButton(mark_1_horror_3_user_4);
														button_horror_3_mark_1_user_4->setId("button_horror_3_mark_1_user_4");
														button_horror_3_mark_1_user_4->setStyleClass(Wt::WString::fromUTF8(" btn btn-danger btn-group with-label"));
														button_horror_3_mark_1_user_4->setInline(1);
														button_horror_3_mark_1_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_3_mark_1_user_4->setText(Wt::WString::fromUTF8("1"));
														button_horror_3_mark_1_user_4->setLink(Wt::WLink(""));
														button_horror_3_mark_1_user_4->clicked().connect(button_horror_3_mark_1_user_4, &Wt::WPushButton::disable);
														button_horror_3_mark_1_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_horror_3_mark_1_user_4->valueText();
															writeFile("4", "9", "1");
														}));
													}
													mark_2_horror_3_user_4 = new Wt::WContainerWidget(mark_horror_3_user_2_cp);
													mark_2_horror_3_user_4->setId("mark_2_horror_3_user_4");
													mark_2_horror_3_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_2_horror_3_user_4->setInline(0);
													mark_2_horror_3_user_4->setHtmlTagName("div");
													{
														button_horror_3_mark_2_user_4 = new Wt::WPushButton(mark_2_horror_3_user_4);
														button_horror_3_mark_2_user_4->setId("button_horror_3_mark_2_user_4");
														button_horror_3_mark_2_user_4->setStyleClass(Wt::WString::fromUTF8(" btn btn-warning btn-group with-label"));
														button_horror_3_mark_2_user_4->setInline(1);
														button_horror_3_mark_2_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_3_mark_2_user_4->setText(Wt::WString::fromUTF8("2"));
														button_horror_3_mark_2_user_4->setLink(Wt::WLink(""));
														button_horror_3_mark_2_user_4->clicked().connect(button_horror_3_mark_2_user_4, &Wt::WPushButton::disable);
														button_horror_3_mark_2_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_horror_3_mark_2_user_4->valueText();
															writeFile("4", "9", "2");
														}));
													}
													mark_3_horror_3_user_4 = new Wt::WContainerWidget(mark_horror_3_user_2_cp);
													mark_3_horror_3_user_4->setId("mark_3_horror_3_user_4");
													mark_3_horror_3_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_3_horror_3_user_4->setInline(0);
													mark_3_horror_3_user_4->setHtmlTagName("div");
													{
														button_horror_3_mark_3_user_4 = new Wt::WPushButton(mark_3_horror_3_user_4);
														button_horror_3_mark_3_user_4->setId("button_horror_3_mark_3_user_4");
														button_horror_3_mark_3_user_4->setStyleClass(Wt::WString::fromUTF8("btn-primary  btn btn-group with-label"));
														button_horror_3_mark_3_user_4->setInline(1);
														button_horror_3_mark_3_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_3_mark_3_user_4->setText(Wt::WString::fromUTF8("3"));
														button_horror_3_mark_3_user_4->setLink(Wt::WLink(""));
														button_horror_3_mark_3_user_4->clicked().connect(button_horror_3_mark_3_user_4, &Wt::WPushButton::disable);
														button_horror_3_mark_3_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_horror_3_mark_3_user_4->valueText();
															writeFile("4", "9", "3");
														}));
													}
													mark_4_horror_3_user_4 = new Wt::WContainerWidget(mark_horror_3_user_2_cp);
													mark_4_horror_3_user_4->setId("mark_4_horror_3_user_4");
													mark_4_horror_3_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_4_horror_3_user_4->setInline(0);
													mark_4_horror_3_user_4->setHtmlTagName("div");
													{
														button_horror_3_mark_4_user_4 = new Wt::WPushButton(mark_4_horror_3_user_4);
														button_horror_3_mark_4_user_4->setId("button_horror_3_mark_4_user_4");
														button_horror_3_mark_4_user_4->setStyleClass(Wt::WString::fromUTF8(" btn-info btn btn-group with-label"));
														button_horror_3_mark_4_user_4->setInline(1);
														button_horror_3_mark_4_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_3_mark_4_user_4->setText(Wt::WString::fromUTF8("4"));
														button_horror_3_mark_4_user_4->setLink(Wt::WLink(""));
														button_horror_3_mark_4_user_4->clicked().connect(button_horror_3_mark_4_user_4, &Wt::WPushButton::disable);
														button_horror_3_mark_1_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_horror_3_mark_4_user_4->valueText();
															writeFile("4", "9", "4");
														}));
													}
													mark_5_horror_3_user_4 = new Wt::WContainerWidget(mark_horror_3_user_2_cp);
													mark_5_horror_3_user_4->setId("mark_5_horror_3_user_4");
													mark_5_horror_3_user_4->setStyleClass(Wt::WString::fromUTF8("btn btn-default btn-group with-label"));
													mark_5_horror_3_user_4->setInline(0);
													mark_5_horror_3_user_4->setHtmlTagName("div");
													{
														button_horror_3_mark_5_user_4 = new Wt::WPushButton(mark_5_horror_3_user_4);
														button_horror_3_mark_5_user_4->setId("button_horror_3_mark_5_user_4");
														button_horror_3_mark_5_user_4->setStyleClass(Wt::WString::fromUTF8(" btn btn-group with-label btn-success"));
														button_horror_3_mark_5_user_4->setInline(1);
														button_horror_3_mark_5_user_4->setEmptyText(Wt::WString::fromUTF8(""));
														button_horror_3_mark_5_user_4->setText(Wt::WString::fromUTF8("5"));
														button_horror_3_mark_5_user_4->setLink(Wt::WLink(""));
														button_horror_3_mark_5_user_4->clicked().connect(button_horror_3_mark_5_user_4, &Wt::WPushButton::disable);
														button_horror_3_mark_5_user_4->clicked().connect(std::bind([=]() {
															std::cout << button_horror_3_mark_5_user_4->valueText();
															writeFile("4", "9", "5");
														}));
													}
												}
											}
										}
									}
								}
							}
						}
						
					}
				}
				Recommends = new Wt::WContainerWidget(container_text);
				Recommends->setId("Recommends");
				Recommends->setStyleClass(Wt::WString::fromUTF8(""));
				Recommends->setInline(0);
				Recommends->setHtmlTagName("div");
				{
					container = new Wt::WContainerWidget(Recommends);
					container->setId("container");
					container->setStyleClass(Wt::WString::fromUTF8(""));
					container->setInline(0);
					container->setHtmlTagName("div");
					{
						text = new Wt::WText(container);
						text->setId("text");
						text->setStyleClass(Wt::WString::fromUTF8("alert alert-success"));
						text->setInline(0);
						text->setTextFormat((Wt::TextFormat)0);
						text->setText(Wt::WString::fromUTF8("Ваші вподобання близькі із"));
					}
					container_cp = new Wt::WContainerWidget(Recommends);
					container_cp->setId("container_cp");
					container_cp->setStyleClass(Wt::WString::fromUTF8(""));
					container_cp->setInline(0);
					container_cp->setHtmlTagName("div");
					{
						text_cp = new Wt::WText(container_cp);
						text_cp->setId("text_cp");
						text_cp->setStyleClass(Wt::WString::fromUTF8("alert alert-success"));
						text_cp->setInline(0);
						text_cp->setTextFormat((Wt::TextFormat)0);
						text_cp->setText(ReadFromFile_and_result(userNumber));
					}
				}
			}
		}

		connectAllSignals();

		addAllJavaScripts();

	}


	void addAllStyleSheets()
	{

		Wt::WApplication::instance()->useStyleSheet(Wt::WLink("resources/main.css"));

	}


	void addAllJavaScripts()
	{


	}


	void connectAllSignals()
	{


	}

	void writeFile(char* user, char* film_ID, char* mark)
	{
		ofstream fout;
		fout.open("marks.txt", ios::out | ios::app);
		fout <<  user << " " <<  film_ID << " " <<  mark << endl;
		fout.close();
		
	}


};

#endif // UI_FILMS_H


	