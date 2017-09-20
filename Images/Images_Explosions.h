#ifndef IMAGES_EXPLOSIONS_H
#define IMAGES_EXPLOSIONS_H

const uint8_t PROGMEM explosion_01[] = {
  15, 17,
  0x20, 0x60, 0xE0, 0xE0, 0xFC, 0xF8, 0xF0, 0xE0, 0xF0, 0xF0, 0x78, 0x38, 0x0C, 0x00, 0x00,
  0x00, 0x00, 0xE0, 0x7D, 0x3F, 0x3F, 0x1F, 0x0F, 0x07, 0x0F, 0x1F, 0x1C, 0x30, 0x20, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM explosion_02[] = {
  15, 17,
  0x00, 0x00, 0x00, 0x00, 0x10, 0x70, 0xE0, 0xE0, 0xF0, 0x30, 0x08, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x10, 0x08, 0x0E, 0x07, 0x07, 0x03, 0x07, 0x06, 0x08, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM explosion_03[] = {
  15, 17,
  0x06, 0x0F, 0x04, 0x60, 0xC0, 0xC8, 0x8C, 0x9E, 0xC7, 0xC0, 0x60, 0x10, 0x02, 0x00, 0x40,
  0x80, 0xC0, 0xC8, 0x06, 0x07, 0x03, 0x63, 0x67, 0x8F, 0x0D, 0x10, 0x00, 0x00, 0xC0, 0x62,
  0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
};

const uint8_t PROGMEM explosion_04[] = {
  15, 17,
  0x00, 0x04, 0x00, 0x40, 0x00, 0x00, 0x00, 0x80, 0x88, 0x42, 0x00, 0x01, 0x20, 0x00, 0x00,
  0x80, 0x40, 0x00, 0x11, 0x00, 0x02, 0x40, 0x02, 0x00, 0x00, 0x00, 0x00, 0x80, 0x08, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM explosion_mask_01[] = {
  0x70, 0xF0, 0xF0, 0xFE, 0xFE, 0xFE, 0xF8, 0xF0, 0xF8, 0xF8, 0xFC, 0x7E, 0x3E, 0x0E, 0x00,
  0x00, 0xF0, 0xFD, 0xFF, 0x7F, 0x7F, 0x3F, 0x1F, 0x0F, 0x1F, 0x3F, 0x3F, 0x7C, 0x70, 0x70,
  0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM explosion_mask_02[] = {
  0x00, 0x00, 0x1C, 0x1C, 0x7C, 0xFC, 0xFC, 0xF8, 0xF8, 0xFC, 0x3C, 0x1C, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x38, 0x38, 0x3E, 0x1F, 0x0F, 0x0F, 0x07, 0x0F, 0x1F, 0x1E, 0x1C, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM explosion_mask_03[] = { 
  0x06, 0x0F, 0x04, 0x60, 0xC0, 0xC8, 0x8C, 0x9E, 0xC7, 0xC0, 0x60, 0x10, 0x02, 0x00, 0x40,
  0x80, 0xC0, 0xC8, 0x06, 0x07, 0x03, 0x63, 0x67, 0x8F, 0x0D, 0x10, 0x00, 0x00, 0xC0, 0x62,
  0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
};

const uint8_t PROGMEM explosion_mask_04[] = {
  0x00, 0x04, 0x00, 0x40, 0x00, 0x00, 0x00, 0x80, 0x88, 0x42, 0x00, 0x01, 0x20, 0x00, 0x00,
  0x80, 0x40, 0x00, 0x11, 0x00, 0x02, 0x40, 0x02, 0x00, 0x00, 0x00, 0x00, 0x80, 0x08, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

#endif