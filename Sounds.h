
const uint16_t score[] PROGMEM = {
  NOTE_CS6,168, NOTE_REST,176, NOTE_CS6,168, NOTE_REST,348, NOTE_GS5,168, NOTE_REST,3, NOTE_CS6,168, NOTE_REST,3,
  NOTE_B5,1548, NOTE_REST,3, NOTE_A5,168, NOTE_REST,176, NOTE_A5,168, NOTE_REST,348, NOTE_A5,168, NOTE_REST,3,
  NOTE_FS5,168, NOTE_REST,3, NOTE_A5,168, NOTE_REST,3, NOTE_AS5,226, NOTE_REST,3, NOTE_FS5,226, NOTE_REST,3,
  NOTE_AS5,226, NOTE_REST,3, NOTE_C6,226, NOTE_REST,3, NOTE_GS5,226, NOTE_REST,3, NOTE_C6,226, NOTE_REST,3,
  NOTE_CS6,168, NOTE_REST,176, NOTE_CS6,168, NOTE_REST,348, NOTE_GS5,168, NOTE_REST,3, NOTE_CS6,168, NOTE_REST,3,
  NOTE_B5,1548, NOTE_REST,3, NOTE_A5,168, NOTE_REST,176, NOTE_A5,168, NOTE_REST,348, NOTE_A5,168, NOTE_REST,3,
  NOTE_FS5,168, NOTE_REST,3, NOTE_A5,168, NOTE_REST,3, NOTE_AS5,226, NOTE_REST,3, NOTE_FS5,226, NOTE_REST,3,
  NOTE_AS5,226, NOTE_REST,3, NOTE_C6,226, NOTE_REST,3, NOTE_GS5,226, NOTE_REST,3, NOTE_DS6,226, NOTE_REST,3,
  NOTE_F6,2255, NOTE_REST,3, NOTE_F5,1030, NOTE_REST,3, NOTE_FS5,168, NOTE_REST,3, NOTE_G5,168, NOTE_REST,3,
  NOTE_GS5,1375, NOTE_REST,3, NOTE_AS5,854, NOTE_REST,7, NOTE_C6,168, NOTE_REST,3, NOTE_CS6,168, NOTE_REST,3,
  NOTE_DS6,168, NOTE_REST,3, NOTE_F6,1375, NOTE_REST,3, NOTE_FS6,854, NOTE_REST,7, NOTE_AS6,341, NOTE_REST,3,
  NOTE_GS6,168, NOTE_REST,3, NOTE_FS6,1375, NOTE_REST,3, NOTE_DS6,854, NOTE_REST,7, NOTE_FS6,341, NOTE_REST,3,
  NOTE_F6,168, NOTE_REST,3, NOTE_CS6,854, NOTE_REST,7, NOTE_C6,168, NOTE_REST,3, NOTE_AS5,168, NOTE_REST,3,
  NOTE_GS5,168, NOTE_REST,3, NOTE_F5,1030, NOTE_REST,3, NOTE_FS5,168, NOTE_REST,3, NOTE_G5,168, NOTE_REST,3,
  NOTE_GS5,1375, NOTE_REST,3, NOTE_AS5,854, NOTE_REST,7, NOTE_C6,168, NOTE_REST,3, NOTE_CS6,168, NOTE_REST,3,
  NOTE_DS6,168, NOTE_REST,3, NOTE_F6,1375, NOTE_REST,3, NOTE_FS6,854, NOTE_REST,7, NOTE_AS6,341, NOTE_REST,3,
  NOTE_GS6,168, NOTE_REST,3, NOTE_FS6,1375, NOTE_REST,3, NOTE_DS6,686, NOTE_REST,3, NOTE_GS5,341, NOTE_REST,3,
  NOTE_FS6,168, NOTE_REST,3, NOTE_F6,168, NOTE_REST,3, NOTE_CS6,1375,
  TONES_END
};

const uint16_t mission_start[] PROGMEM = {
  NOTE_REST,300, NOTE_F4,82, NOTE_REST,3, NOTE_F4,82, NOTE_REST,3, NOTE_F4,82, NOTE_REST,3, NOTE_F4,82, NOTE_REST,3,
  NOTE_FS4,82, NOTE_REST,3, NOTE_FS4,82, NOTE_REST,3, NOTE_FS4,82, NOTE_REST,3, NOTE_FS4,82, NOTE_REST,3,
  NOTE_G4,82, NOTE_REST,3, NOTE_G4,82, NOTE_REST,3, NOTE_G4,82, NOTE_REST,3, NOTE_G4,82, NOTE_REST,3,
  NOTE_GS4,82, NOTE_REST,3, NOTE_GS4,82, NOTE_REST,3, NOTE_GS4,82, NOTE_REST,3, NOTE_GS4,82, NOTE_REST,3,
  NOTE_A4,82, NOTE_REST,3, NOTE_A4,82, NOTE_REST,3, NOTE_A4,82, NOTE_REST,3, NOTE_A4,82, NOTE_REST,3,
  NOTE_AS4,82, NOTE_REST,3, NOTE_AS4,82, NOTE_REST,3, NOTE_AS4,82, NOTE_REST,3, NOTE_AS4,82, NOTE_REST,3,
  NOTE_B4,82, NOTE_REST,3, NOTE_B4,82, NOTE_REST,3, NOTE_B4,82, NOTE_REST,3, NOTE_B4,82, NOTE_REST,3,
  NOTE_C5,82, NOTE_REST,3, NOTE_C5,82, NOTE_REST,3, NOTE_C5,82, NOTE_REST,3, NOTE_C5,82, NOTE_REST,3,
  TONES_END
};

const uint16_t mission_success[] PROGMEM = {
  NOTE_FS5,498, NOTE_REST,144, NOTE_FS5,34, NOTE_REST,72, NOTE_FS5,34, NOTE_REST,72, NOTE_FS5,177,
  NOTE_REST,108, NOTE_FS5,105, NOTE_REST,36, NOTE_FS5,70, NOTE_REST,72, NOTE_GS5,105, NOTE_REST,36, NOTE_AS5,105,
  NOTE_REST,36, NOTE_B5,1034, NOTE_REST,251, NOTE_B5,105, NOTE_REST,36, NOTE_CS6,70, NOTE_REST,72, NOTE_DS6,70,
  NOTE_REST,72, NOTE_F6,605, NOTE_REST,36, NOTE_F6,34, NOTE_REST,72, NOTE_F6,34, NOTE_REST,72, NOTE_F6,34,
  NOTE_REST,179, NOTE_CS6,177, NOTE_REST,36, NOTE_F6,70, NOTE_REST,72, NOTE_FS6,117, NOTE_REST,24, NOTE_GS6,105,
  NOTE_REST,36, NOTE_FS6,1641,
  TONES_END
};

const uint16_t mission_failure[] PROGMEM = {
  NOTE_CS6,617, NOTE_REST,13, NOTE_CS6,105, NOTE_REST,13, NOTE_CS6,105, NOTE_REST,1, NOTE_C6,427,
  NOTE_REST,1, NOTE_C6,213, NOTE_REST,1, NOTE_C6,213, NOTE_REST,1, NOTE_B5,641, NOTE_REST,1, NOTE_B5,213,
  NOTE_REST,1, NOTE_AS5,284, NOTE_REST,1, NOTE_AS5,70, NOTE_REST,108, NOTE_AS5,34, NOTE_REST,108, NOTE_AS5,34,
  NOTE_REST,108, NOTE_AS5,34, NOTE_REST,72, NOTE_A5,284, NOTE_REST,1, NOTE_FS5,284, NOTE_REST,1, NOTE_A5,284,
  NOTE_REST,1, NOTE_GS5,284, NOTE_REST,1, NOTE_E5,284, NOTE_REST,1, NOTE_GS5,284, NOTE_REST,1, NOTE_FS5,641,
  NOTE_REST,1, NOTE_DS5,70, NOTE_REST,1, NOTE_C5,70, NOTE_REST,1, NOTE_DS5,70, NOTE_REST,1, NOTE_CS5,891,
  TONES_END
};


const uint16_t collect_obstacle[] PROGMEM = {
  NOTE_FS5, 2, NOTE_F6, 6, NOTE_GS6, 8, NOTE_F6, 4,
  TONES_END
};


const uint16_t machine_gun_player[] PROGMEM = {
  NOTE_F2,22, NOTE_REST,3, NOTE_F2,22, NOTE_REST,3, NOTE_F2,22,
  TONES_END
};

const uint16_t machine_gun_enemy[] PROGMEM = {
  NOTE_F3,22, NOTE_REST,3, NOTE_F3,22, NOTE_REST,3, NOTE_F3,22,
  TONES_END
};

const uint16_t hit_by_plane[] PROGMEM = {
  NOTE_F3,2, NOTE_REST,3, NOTE_D4,2, NOTE_REST,3, NOTE_A4,4, NOTE_REST,2, NOTE_E3,1, 
  TONES_END
};

const uint16_t hit_by_bullets[] PROGMEM = {
  NOTE_A3, 6, NOTE_REST,3, NOTE_D3,7, NOTE_REST,5, NOTE_C3,6, NOTE_REST,2, NOTE_F3,8, 
  TONES_END
};
