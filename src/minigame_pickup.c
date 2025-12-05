/**
 * ═════════════════════════════════════════════════════════════════════════════
 * ARCHIVO: src/minigame_pickup.c
 * 
 * Fase 1: Recogida - PLACEHOLDER (estructura lista para implementar)
 * ═════════════════════════════════════════════════════════════════════════════
 */

#include "minigame_pickup.h"

#define NUM_REGALOS 6
#define NUM_BULLETS 3
#define OBJETIVO_REGALOS 20

typedef struct {
    Sprite* sprite;
    s16 x, y;
    s8 velY;
    u8 active;
} Regalo;

typedef struct {
    Sprite* sprite;
    s16 x, y;
    s8 velY;
    u8 active;
} RedConfeti;

static Regalo regalos[NUM_REGALOS];
static RedConfeti balas[NUM_BULLETS];
static Sprite* cannonPolo;
static s16 cannonX;
static s8 cannonVelocity;
static u16 regalosRecolectados;
static u16 frameCounter;
static s8 bulletCooldown;

void minigamePickup_init(void) {
    VDP_setScreenWidth320();
    VDP_setScreenHeight224();
    VDP_clearPlane(BG_A, TRUE);
    VDP_clearPlane(BG_B, TRUE);

    memset(regalos, 0, sizeof(regalos));
    memset(balas, 0, sizeof(balas));
    cannonPolo = NULL;
    cannonX = SCREEN_WIDTH / 2;
    cannonVelocity = 0;
    regalosRecolectados = 0;
    frameCounter = 0;
    bulletCooldown = 0;

    VDP_drawText("FASE 1 (placeholder) - Recogida", 4, 10);
    VDP_drawText("Recolecta 20 regalos (simulado)", 4, 12);
}

void minigamePickup_update(void) {
    frameCounter++;
    /* Placeholder de progreso automático cada medio segundo */
    if ((frameCounter % 30) == 0 && regalosRecolectados < OBJETIVO_REGALOS) {
        regalosRecolectados++;
    }
}

void minigamePickup_render(void) {
    /* HUD temporal */
    char buffer[32];
    sprintf(buffer, "Regalos: %u/%u", regalosRecolectados, OBJETIVO_REGALOS);
    VDP_drawText(buffer, 4, 14);

    SPR_update();
    SYS_doVBlankProcess();
}

u8 minigamePickup_isComplete(void) {
    /* Completa automáticamente tras simular el objetivo */
    return (regalosRecolectados >= OBJETIVO_REGALOS);
}
