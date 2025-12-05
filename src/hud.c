#include <genesis.h>
#include "hud.h"

static char buffer[40];

void hud_init(void) {
    VDP_clearTextArea(0, 0, 40, 3);
}

void hud_reset_phase(u8 phaseId) {
    VDP_clearTextArea(0, 0, 40, 3);
    switch (phaseId) {
        case 1: VDP_drawText("Fase 1: Recogida", 2, 1); break;
        case 2: VDP_drawText("Fase 2: Tejados", 2, 1); break;
        case 3: VDP_drawText("Fase 3: Campanas", 2, 1); break;
        case 4: VDP_drawText("Fase 4: Fiesta", 2, 1); break;
        default: VDP_drawText("Intro", 2, 1); break;
    }
}

void hud_draw_pickup(u16 collected, u16 target, u16 secondsRemaining) {
    sprintf(buffer, "Regalos: %u/%u  Tiempo:%us", collected, target, secondsRemaining);
    VDP_drawText(buffer, 2, 2);
}

void hud_draw_delivery(u16 delivered, u16 target, u16 secondsRemaining) {
    sprintf(buffer, "Entregas: %u/%u  Tiempo:%us", delivered, target, secondsRemaining);
    VDP_drawText(buffer, 2, 2);
}

void hud_draw_bells(u16 bells, u16 target) {
    sprintf(buffer, "Campanillas: %u/%u", bells, target);
    VDP_drawText(buffer, 2, 2);
}

void hud_draw_celebration(void) {
    VDP_drawText("Celebrando... ¡FELIZ 2026!", 2, 2);
}
