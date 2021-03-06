
/*******************************************************************************
* image
* filename: P:/KDS/FRDM-K64F120M/FRDM-K64F_SSD1306/Sources/Circle.xml
* name: Circle
*
* preset name: Monochrome
* data block size: 8 bit(s), uint8_t
* RLE compression enabled: no
* conversion type: Monochrome, Threshold Dither 0
* bits per pixel: 1
*
* preprocess:
*  main scan direction: top_to_bottom
*  line scan direction: forward
*  inverse: no
*******************************************************************************/

/*
 typedef struct {
     const uint8_t *data;
     uint16_t width;
     uint16_t height;
     uint8_t dataSize;
     } tImage;
*/
#include <stdint.h>



static const uint8_t image_data_Circle[135] = {
    0xff, 0xf0, 0x0f, 0xff, 0xc0, 
    0xff, 0x8f, 0xf1, 0xff, 0xc0, 
    0xfe, 0x7f, 0xfe, 0x7f, 0xc0, 
    0xf9, 0xff, 0xff, 0x9f, 0xc0, 
    0xf7, 0xff, 0x7f, 0xef, 0xc0, 
    0xef, 0xff, 0x1f, 0xf7, 0xc0, 
    0xdf, 0xff, 0x6f, 0xfb, 0xc0, 
    0xdf, 0xff, 0x77, 0xfb, 0xc0, 
    0xb0, 0x00, 0x79, 0xfd, 0xc0, 
    0xb7, 0xff, 0xfe, 0xfd, 0xc0, 
    0x77, 0xff, 0xff, 0x3e, 0xc0, 
    0x77, 0xff, 0xff, 0xde, 0xc0, 
    0x77, 0xff, 0xff, 0xe6, 0xc0, 
    0x77, 0xff, 0xff, 0xe6, 0xc0, 
    0x77, 0xff, 0xff, 0xde, 0xc0, 
    0x77, 0xff, 0xff, 0x3e, 0xc0, 
    0xb7, 0xff, 0xfe, 0xfd, 0xc0, 
    0xb0, 0x00, 0x79, 0xfd, 0xc0, 
    0xdf, 0xff, 0x77, 0xfb, 0xc0, 
    0xdf, 0xff, 0x6f, 0xfb, 0xc0, 
    0xef, 0xff, 0x1f, 0xf7, 0xc0, 
    0xf7, 0xff, 0x7f, 0xef, 0xc0, 
    0xf9, 0xff, 0xff, 0x9f, 0xc0, 
    0xfe, 0x7f, 0xfe, 0x7f, 0xc0, 
    0xff, 0x8f, 0xf1, 0xff, 0xc0, 
    0xff, 0xf0, 0x0f, 0xff, 0xc0, 
    0xff, 0xff, 0xff, 0xff, 0xc0
};
const tImage Circle = { image_data_Circle, 34, 27,
    8 };

