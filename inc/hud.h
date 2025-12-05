/**
 * HUD placeholder para todas las fases.
 * Muestra contadores básicos hasta que se implemente el HUD final.
 */

#ifndef _HUD_H_
#define _HUD_H_

#include <genesis.h>

void hud_init(void);
void hud_reset_phase(u8 phaseId);
void hud_draw_pickup(u16 collected, u16 target, u16 secondsRemaining);
void hud_draw_delivery(u16 delivered, u16 target, u16 secondsRemaining);
void hud_draw_bells(u16 bells, u16 target);
void hud_draw_celebration(void);

#endif
