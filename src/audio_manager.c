#include <genesis.h>
#include "audio_manager.h"
#include "resources.h"
#include "res_geesebumps.h"

void audio_init(void) {
    XGM2_setLoopNumber(-1);
    XGM2_setFMVolume(80);
    XGM2_setPSGVolume(110);
}

void audio_play_intro(void) {
    XGM2_setLoopNumber(0);
    XGM2_play(music_geesebumps);
}

void audio_play_phase1(void) {
    /* TODO: cargar musica_polo cuando el asset exista */
    XGM2_stop();
}

void audio_play_phase2(void) {
    /* TODO: cargar musica_tejados cuando el asset exista */
    XGM2_stop();
}

void audio_play_phase3(void) {
    XGM2_setLoopNumber(-1);
    XGM2_play(musica_fondo);
    XGM2_setFMVolume(70);
    XGM2_setPSGVolume(100);
}

void audio_play_phase4(void) {
    /* TODO: cargar musica_celebracion cuando el asset exista */
    XGM2_stop();
}

void audio_stop_music(void) {
    XGM2_stop();
}
