// #include QMK_KEYBOARD_H
#include "manolodeinternet.h"

/*
Copyright 2020 manolodeinternet <manolodeinternet@gmail.com> @manolodeinternet

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

        bool diaeresis_requested = false;
            bool grave_requested = false;
       bool circumflex_requested = false;

bool disabled_caps_before_accent = false;
         bool capslock_is_active = false;

          bool numbers_is_active = false;   // flag for _NUMB layer

//
// ======================================================
// Following line is not necesary.  Its place is in 'rgblight_mini_datyl.c':
// ------------------------------------------------------
// #include "/Users/navarro/qmk_firmware/users/manolodeinternet/rgblight_mini_dactyl.h"
// ======================================================
//



//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [FUNCTIONS] [_DALY] KC_A [F(CAPSL)]                                                  //
//                                                                                      //
// CAPSLOCK COMPLEMENTARY FUNCTIONS                                                     //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
void capslock_tap(void) { // [F(CAPSL)] - MY CAPSLOCK FINISHED FUNCTION

  SEND_STRING(SS_DOWN(X_CAPSLOCK));
  register_code(KC_LCAP);

  capslock_is_active = !capslock_is_active;

// [INFO]
// Note, that instead of unregister_code (KC_LCAP), ...
// ... we write unregister_code (KC_CAPS).
// This is the way it works that I found by the trial and error method.
  unregister_code(KC_CAPS); 
// [info] 

  SEND_STRING(SS_UP(X_CAPSLOCK));

} //  my capslock function  -  [f(capsl)] - my capslock finished function


void disable_capslock_before_accents_function(void) { // MY CAPSLOCK FINISHED FUNCTION

  if (capslock_is_active)
    {
      capslock_tap();
      disabled_caps_before_accent = true;
    }
} // my disable_capslock_before_accents_function

void enable_capslock_after_accents_function(void) {  // MY CAPSLOCK RESET FUNCTION
  if (disabled_caps_before_accent == true)
    {
      capslock_tap();
      disabled_caps_before_accent = false;
  }
} // my enable_capslock_after_accents_function
//                                                                                      //
// capslock complementary functions                                                     //
//                                                                                      //
// [functions] [_daly] kc_a [f(capsl)]                                                  //
//////////////////////////////////////////////////////////////////////////////////////////







//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [FUNCTIONS] [_DALY] KC_A, KC_E, KC_I, KC_O, KC_U, KC_N                               //
//                    [F(CIRCU)], [F(GRAVE)], [F(DIAER)]                                //
//                    [F(ACC_A)], [F(ACC_E)],... [F(ACC_U)], [F(TIL_N)]                 //
//                                                                                      //
// ACCENTS COMPLEMENTARY FUNCTIONS                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////

void acute_accent_function(void) {
  register_code(KC_LALT); register_code(KC_E);
  unregister_code(KC_E); unregister_code(KC_LALT);
}

// void reset_my_keyboard_function(void) {  // MY RESET FUNCTION
//   // _delay_ms (1);
//   // wait_ms(1);
//   // rgblight_enable_noeeprom(); // switch on LEDs to allow us seeing the reset LEDs flashing
//   // wait_ms(1);

//   // SS_BEEP_1; SS_BEEP_2; SS_BEEP_1; SS_BEEP_2;

//   // flashing_LEDs(5, RGB_MY_GREEN, RGB_MY_YELLOW);
//   reset_keyboard();
// }


void diaeresis_accent_function(void) {
    register_code(KC_LALT); register_code(KC_U);
    unregister_code(KC_U);  unregister_code(KC_LALT);
}


void circumflex_accent_function(void) {
    register_code(KC_LALT); register_code(KC_I);
    unregister_code(KC_I);  unregister_code(KC_LALT);
}


void grave_accent_function(void) {
    register_code(KC_LALT); register_code(KC_GRAVE);
    unregister_code(KC_GRAVE);  unregister_code(KC_LALT);
}

void tilde_accent_function(void) {
    register_code(KC_LALT); register_code(KC_N);
    unregister_code(KC_N);  unregister_code(KC_LALT);
}
//                                                                                      //
// [functions] [_daly] kc_a, kc_e, kc_i, kc_o, kc_u, kc_n                               //
//                    [f(circu)], [f(grave)], [f(diaer)]                                //
//                    [f(acc_a)], [f(acc_e)],... [f(acc_u)], [f(til_n)]                 //
//                                                                                      //
// accents complementary functions                                                      //
//////////////////////////////////////////////////////////////////////////////////////////




//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
//  GLOBAL  FUNCTIONS                                                                   //
//                                                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [FUNCTIONS] [_DFLT] [_FVIM], [_DVIM], [_CVIM],     [_XVIM       & [_APPS]            //
//               KC_V,    KC_X,  [_FVIM]KC_C, [_FVIM]KC_X,   [_FVIM]KC_Z   (KC_Q & KC_P)//
//                                                                                      //
// FUNCTIONS FOR ACCESING KEYBINDINGS MAPPED FUNCTIONS                                  //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
void fvim(char *key)
{
//  SEND_STRING(SS_LSFT(SS_LCTRL(SS_LALT(SS_LGUI("v")))));
    HYPR_V;
    SEND_STRING("f");
    send_string(key);
}

void dvim(char *key)
{
    HYPR_V;
    SEND_STRING("d");
    send_string(key);
}

void cvim(char *key)
{
    HYPR_V;
    SEND_STRING("c");
    send_string(key);
}

void xvim(char *key)
{
    HYPR_V;
    SEND_STRING("x");
    send_string(key);
}


//////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
//  GLOBAL  FUNCTIONS                                                                   //
//                                                                                      //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [FUNCTIONS] [_DFLT] [_FVIM], [_DVIM], [_CVIM],     [_XVIM       & [_APPS]            //
//               KC_V,    KC_X,  [_FVIM]KC_C, [_FVIM]KC_X,   [_FVIM]KC_Z   (KC_Q & KC_P)//
//                                                                                      //
// FUNCTIONS FOR ACCESING KEYBINDINGS MAPPED FUNCTIONS                                  //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
void add_desired_mod(uint8_t desired_mod)
{
  add_mods     (desired_mod);
  add_weak_mods(desired_mod);
  send_keyboard_report();
}

void remove_activated_mod(uint8_t activated_mod)
{
  del_mods     (activated_mod);
  del_weak_mods(activated_mod);
  send_keyboard_report();
}
//
// [FIRMWARE_SIZE]
  // next function saves from 158 to 216 (58 bytes)
  // ... instead of repeating this bunch or code into 'process_record_user' for ...
  // ... SL_MEN, KA_DCK, KM_TOL, SH_STA, RT_FLO, ...
  // ... we call this function into every function !!!
// [firmware_size]
bool triggered_control_mod(void)
{
  control_flag = get_mods()&CTRL_MODS;
  if (control_flag)
  {
    remove_activated_mod(control_flag);
    // del_mods     (control_flag);
    // del_weak_mods(control_flag);
    // send_keyboard_report();
    return true;
  }
  return false;
}

// using this function, we pass from 674 to 586 bytes free while compile firmware !!!
bool triggered_mod(uint8_t mod)
{
  switch (mod) {
    case KC_C: control_flag = get_mods()&CTRL_MODS;
               if (control_flag)
               {
                 current_flag = control_flag;
                 remove_activated_mod(control_flag);
                 return true;
               }
               return false;
    case KC_A: option_flag  = get_mods()&ALT_MODS;
               if (option_flag)
               {
                 current_flag = option_flag;
                 remove_activated_mod(option_flag);
                 return true;
               }
               return false;
    case KC_G: gui_flag     = get_mods()&GUI_MODS;
               if (gui_flag)
               {
                 current_flag = gui_flag;
                 remove_activated_mod(gui_flag);
                 return true;
               }
               return false;
    case KC_S: shift_flag   = get_mods()&SHFT_MODS;
               if (shift_flag)
               {
                 current_flag = shift_flag;
                 remove_activated_mod(shift_flag);
                 return true;
               }
               return false;
  }
  return false;
}



void call_app_with_keycode(uint16_t keycode)
{
// open Spotlight search:
      register_code (KC_LGUI);
           tap_code (KC_SPC);
    unregister_code (KC_LGUI);

// type Typinator Abbreviation for Typinator Expansion (/a/?):
    tap_code(KC_SLSH); tap_code(KC_A); tap_code(KC_SLSH);
    tap_code(keycode);

// in Typinator expansion, there is a 0.01 seconds delay 
}



//////////////////////////////////////////////////////////////////////////////////////////
//
//                                                                                      //
// [FUNCTIONS] [_POWR] KC_Y (VOL_8)                                                     //
//             [_POWR] KC_O (VOL_1)                                                     //
//             [_POWR] KC_V (SHUT_S)                                                    //
//                                                                                      //
//             [_POWR] KC_M (BRIGHT_1)                                                  //
//                                                                                      //
// VOLUME SET TO LEVEL x FUNCTION (USED AS A _POWR KEYCODE AND INTO SHUT DOWN AS WELL)  //
// BRIGHT SET TO LEVEL y FUNCTION                                                       //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
void volumeSetToLevel(uint8_t max_volume) {
  for (uint8_t i = 0; i < 16; i++)
    {
      tap_code(KC__VOLDOWN);
    }
  for (uint8_t i = 0; i < max_volume; i++)
    {
      tap_code(KC__VOLUP);
    }
}

void brightSetToLevel(uint8_t max_bright) {
  for (uint8_t i = 0; i < 16; i++)
    {
      tap_code(KC_SLCK);
    }
  for (uint8_t i = 0; i < max_bright; i++)
    {
      tap_code(KC_PAUS);
    }
}
//
// [functions] [_powr] kc_y (vol_8)                                                     //
//             [_powr] kc_o (vol_1)                                                     //
//             [_powr] kc_v (shut_s)                                                    //
//                                                                                      //
//             [_powr] kc_m (bright_1)                                                  //
//                                                                                      //
// volume set to level x function (used as a _powr keycode and into shut down as well)  //
// bright set to level y function                                                       //
//////////////////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
//                                                                                      //
//  m y    f u n c t i o n s                                                            //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////
//                                                                                      //
// [FUNCTIONS] [_POWR] KC_R (MY_RESET)process_record_user                               //
// [FUNCTIONS] [_DFLT] L_TH_4 /*(TH_R4_POWR_LEDS)*/ process_record_user                 //
//                                                                                      //
// RESET MY KEYBOARD FUNCTION                                                           //
//                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////
//
void reset_my_keyboard_function(void) {  // MY RESET FUNCTION

  wait_ms(1);
#if defined(RGBLIGHT_ENABLE)
  rgblight_enable_noeeprom(); // switch on LEDs to allow us seeing the reset LEDs flashing
#elif defined(BACKLIGHT_ENABLE)
  backlight_enable();
#endif
  wait_ms(1);

#if defined(RGBLIGHT_ENABLE)
  flashing_RGB_LEDs(6, RGB_MY_WHITE, RGB_MY_RED);
#elif defined(BACKLIGHT_ENABLE)
  flashing_BCK_LEDs(5, BL_RESE, BL_MIN);
#endif

  reset_keyboard();
}
//
//                                                                                      //
// [functions] [_powr] kc_r (my_reset)                                                  //
// [functions] [_dflt] l_th_4 /*(TH_R4_POWR_LEDS)*/                                     //
//                                                                                      //
// reset my keyboard function                                                           //
//////////////////////////////////////////////////////////////////////////////////////////

