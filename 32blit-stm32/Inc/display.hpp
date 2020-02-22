#ifndef DISPLAY_H
#define DISPLAY_H

#include "stm32h7xx_hal.h"

#include "engine/engine.hpp"
#include "graphics/surface.hpp"

extern "C" {
  void LTDC_IRQHandler(void);
}

using namespace blit;

namespace display {

  extern ScreenMode mode;
  extern bool needs_render;

  extern uint32_t flip_cycle_count;
  
  void init();  

  void enable_vblank_interrupt(); 

  void set_screen_mode(ScreenMode new_mode);   
  void flip(const Surface &source);

  void screen_init();
  void ltdc_init();

}


#endif