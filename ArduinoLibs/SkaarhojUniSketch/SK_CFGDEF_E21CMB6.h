#ifndef SK_CUSTOM
		
	// Define number of each supported device we want to talk to:
#define SK_DEVICES_ATEM 1
#define SK_DEVICES_SMARTSCOPE 1

#define SK_DEVICES 2		
		

#define SK_HWCCOUNT 32	
			

#define SK_MAXACTIONS 13	
			

	// Define the relation between a device index in the configuration and which device type it is.
	// There must be an exact match between the listed devices here and the defined number of devices just above
	// The order in the list below correspondance to the JavaScript based listing inside "JSscriptData" (variable "devLst")
	// This is how the arduino code will know, what a given device index means
static const uint8_t deviceArray[] PROGMEM = {0,SK_DEV_ATEM,SK_DEV_SMARTSCOPE};

		// SVG drawing of the unit
static const unsigned char htmlSVG[] PROGMEM = "<svg viewBox=\"0 0 2268 1064\" width=\"100%\" id=\"ctrlimg\"><defs><linearGradient id=\"grad1\" x1=\"0%\" y1=\"0%\" x2=\"0%\" y2=\"100%\"><stop offset=\"0%\" style=\"stop-color:rgb(0,0,208);stop-opacity:1\" /><stop offset=\"40%\" style=\"stop-color:rgb(0,0,150);stop-opacity:1\" /><stop offset=\"100%\" style=\"stop-color:rgb(0,0,190);stop-opacity:1\" /></linearGradient></defs><rect width=\"2108\" height=\"1030\" x=80 y=17 style=\"fill:url(#grad1);\" /><rect width=\"2108\" height=\"10\" x=80 y=85 style=\"fill:rgb(0,0,100);\" /><rect width=\"2108\" height=\"10\" x=80 y=979 style=\"fill:rgb(0,0,100);\" /><rect width=\"90\" height=\"1064\" x=0 y=0 rx=\"30\" ry=\"30\" style=\"fill:rgb(0,0,0);\" /><rect width=\"90\" height=\"1064\" x=2178 y=0 rx=\"30\" ry=\"30\" style=\"fill:rgb(0,0,0);\" /></svg>";

	// JavaScript generic code (script.min.js) + configuration data for controller / devices. GZIP'ed
	// Orig size: 16966, GZIP size: 5602 
static const unsigned char JSscriptData[] PROGMEM = {
	
	0x1F, 0x8B, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
	0xB5, 0x3B, 0x6B, 0x73, 0x9B, 0xC8, 0xB2, 0xDF, 0xCF, 0xAF, 
	0x60, 0x49, 0x1D, 0x5B, 0xBA, 0x42, 0x32, 0x4F, 0x49, 0x86, 
	0xC8, 0x39, 0xB6, 0x93, 0xAC, 0x5D, 0x1B, 0x27, 0xAE, 0x28, 
	0x8F, 0x3D, 0x57, 0xA5, 0xDA, 0xC2, 0x30, 0xB2, 0x48, 0x30, 
	0xE8, 0x02, 0xB2, 0xE3, 0xEB, 0xF8, 0xBF, 0xDF, 0xEE, 0x9E, 
	0x01, 0x0D, 0x48, 0x72, 0x94, 0xEC, 0xB9, 0x49, 0x45, 0xC3, 
	0xF4, 0x3C, 0xFA, 0xDD, 0xD3, 0xD3, 0x90, 0x5B, 0x3F, 0x53, 
	0xCE, 0x3E, 0x07, 0xA3, 0xC9, 0xC4, 0xD0, 0x2C, 0x5D, 0xD7, 
	0x86, 0x46, 0x5F, 0x53, 0x0D, 0x55, 0x33, 0xA7, 0x1A, 0x40, 
	0x6C, 0xC7, 0xEC, 0xD9, 0x1C, 0x66, 0x96, 0xB0, 0xBE, 0x6E, 
	0xF7, 0x86, 0x1C, 0x66, 0x95, 0xB0, 0x81, 0x33, 0xE8, 0x99, 
	0x1C, 0x66, 0x97, 0xB0, 0x43, 0xFD, 0xB0, 0xD7, 0xE7, 0x30, 
	0xA7, 0x84, 0x19, 0x7A, 0x5F, 0x4C, 0xEB, 0x57, 0x20, 0xD3, 
	0xB0, 0x4B, 0x1C, 0x83, 0x0A, 0x68, 0xF5, 0xFB, 0x25, 0x92, 
	0x61, 0x05, 0x74, 0x8C, 0xC3, 0x12, 0xCB, 0x61, 0x05, 0xEC, 
	0x0F, 0x8C, 0x12, 0x8D, 0xA1, 0x97, 0x50, 0xE4, 0xA4, 0xAF, 
	0x1B, 0x6B, 0x9C, 0x10, 0xAC, 0xC1, 0x09, 0xC1, 0x1A, 0x9C, 
	0x10, 0xAC, 0xC1, 0x09, 0xC1, 0xEA, 0x9C, 0x10, 0xA8, 0xC9, 
	0x09, 0x01, 0x9B, 0x9C, 0x10, 0xB0, 0xC9, 0x09, 0x01, 0x9B, 
	0x9C, 0x70, 0xB2, 0x2B, 0x4E, 0x8C, 0xC3, 0x41, 0xBF, 0x14, 
	0xCF, 0xE9, 0xC7, 0x0F, 0x0D, 0x30, 0x4D, 0x3E, 0xFE, 0xF8, 
	0xE1, 0x5D, 0x09, 0x1F, 0x5A, 0x16, 0x80, 0x4D, 0xEB, 0x10, 
	0xC0, 0x15, 0xF9, 0x43, 0x07, 0x28, 0x20, 0xD8, 0x49, 0x7D, 
	0x9E, 0x75, 0x08, 0xCB, 0x4F, 0xEB, 0xF3, 0x08, 0xF6, 0xB2, 
	0xC1, 0x13, 0x2D, 0x1E, 0x9F, 0x9D, 0xBF, 0x16, 0x04, 0xD8, 
	0x40, 0x6D, 0xDF, 0xD2, 0x2C, 0xC7, 0x01, 0x70, 0x1C, 0x85, 
	0x2C, 0x03, 0x38, 0x0E, 0x98, 0x9A, 0x6D, 0x39, 0x9A, 0x39, 
	0xD0, 0x01, 0x7E, 0xE3, 0x67, 0xC5, 0x05, 0x4B, 0x96, 0xAA, 
	0xE6, 0xE8, 0x30, 0x64, 0x21, 0xD5, 0x96, 0xAE, 0x99, 0x3A, 
	0x2C, 0x7A, 0x19, 0xE5, 0x8B, 0xD8, 0xBF, 0x57, 0x41, 0x53, 
	0x62, 0x68, 0x38, 0x2C, 0x87, 0x40, 0x67, 0x83, 0x6A, 0x41, 
	0x05, 0x35, 0x09, 0x3A, 0xF5, 0xFE, 0x71, 0x0B, 0x16, 0x1B, 
	0xB2, 0xDB, 0x37, 0x79, 0x41, 0x46, 0xAB, 0x1E, 0x7F, 0x78, 
	0x75, 0xA1, 0x6A, 0x06, 0x21, 0xE7, 0x48, 0xC7, 0x41, 0xBA, 
	0x60, 0x1C, 0x64, 0x20, 0x81, 0xF7, 0x79, 0xC1, 0x6E, 0x54, 
	0x69, 0xED, 0xEB, 0x65, 0x82, 0x16, 0x3F, 0x31, 0x60, 0xF9, 
	0x65, 0x96, 0x5E, 0x67, 0xFE, 0x8D, 0x32, 0xCE, 0x02, 0x55, 
	0xEB, 0x1A, 0x5A, 0xD7, 0xD4, 0x26, 0xAA, 0xAA, 0xA9, 0x67, 
	0x69, 0x1C, 0x2A, 0x2F, 0xD3, 0xBB, 0x04, 0x9E, 0x3F, 0xA4, 
	0xD7, 0xD7, 0x31, 0xEC, 0xA8, 0x9E, 0xDE, 0x07, 0xD0, 0x4E, 
	0x71, 0x63, 0x5A, 0xCA, 0x6E, 0x23, 0x76, 0xB7, 0xB6, 0xB4, 
	0x39, 0xEB, 0xF6, 0xE0, 0x32, 0xBB, 0xFE, 0xC1, 0xAC, 0xE3, 
	0x8F, 0x7F, 0x2A, 0xEF, 0x96, 0xC5, 0x62, 0x59, 0x88, 0x89, 
	0xD6, 0xD3, 0x94, 0x10, 0xF0, 0xF7, 0x2C, 0x5D, 0x2E, 0x94, 
	0xE3, 0x7A, 0xF7, 0x64, 0x6D, 0xEF, 0x8F, 0x8B, 0xBC, 0xC8, 
	0x18, 0xF0, 0xF8, 0x07, 0xBB, 0x47, 0x4D, 0x21, 0x11, 0xB6, 
	0xD6, 0x75, 0x36, 0x0E, 0x2B, 0xAF, 0xA3, 0x38, 0xAE, 0xE6, 
	0x98, 0x9B, 0xE7, 0xC0, 0xEF, 0xDA, 0x14, 0xA4, 0xB0, 0x81, 
	0xA7, 0xBF, 0x42, 0xD2, 0x1C, 0x2D, 0xD1, 0xF4, 0xB7, 0x6F, 
	0x20, 0xB0, 0x48, 0x33, 0x2E, 0x2E, 0x95, 0x71, 0xC1, 0xD7, 
	0x0D, 0xC8, 0xCD, 0x71, 0x60, 0x17, 0x65, 0x99, 0x43, 0x4D, 
	0x6D, 0x95, 0xAB, 0x15, 0x1A, 0x68, 0xAF, 0x36, 0x01, 0x13, 
	0x29, 0xC0, 0x6C, 0xD4, 0x69, 0xD9, 0x7D, 0x95, 0x84, 0xD8, 
	0xD1, 0xC1, 0xFC, 0xC1, 0x90, 0x8F, 0x97, 0x45, 0xAA, 0x9C, 
	0x27, 0x05, 0xCB, 0x6E, 0xFD, 0x58, 0x15, 0x18, 0xDF, 0xFB, 
	0x49, 0x98, 0xDE, 0x50, 0xAF, 0x42, 0xF8, 0x0E, 0xD1, 0xBF, 
	0x9B, 0xCD, 0x6A, 0x04, 0xD5, 0xF0, 0x9F, 0xC6, 0xD1, 0x82, 
	0x23, 0x36, 0x6B, 0xE0, 0x34, 0x29, 0xB2, 0x34, 0xE6, 0x23, 
	0xDD, 0xA1, 0xE0, 0xF6, 0x74, 0x59, 0xA0, 0x90, 0x4B, 0x03, 
	0x01, 0x2A, 0xA4, 0xEE, 0xEB, 0x0F, 0x27, 0x52, 0xEF, 0x43, 
	0xE6, 0x27, 0x79, 0x54, 0x44, 0x69, 0x02, 0x2C, 0xDE, 0x23, 
	0x31, 0xA8, 0x9C, 0x43, 0xC2, 0x51, 0x1B, 0xBD, 0x4C, 0x73, 
	0x69, 0xD9, 0x25, 0xB8, 0xA0, 0x72, 0xE1, 0x07, 0x19, 0xEC, 
	0x4C, 0x31, 0x0D, 0xD9, 0xB9, 0x24, 0xBF, 0x04, 0x91, 0xA4, 
	0x8B, 0x35, 0x83, 0x13, 0x22, 0x16, 0x92, 0xE5, 0x92, 0x78, 
	0x93, 0xC2, 0xC4, 0x15, 0x97, 0xEF, 0x59, 0x90, 0x66, 0x21, 
	0xDF, 0xB5, 0x4D, 0xDB, 0x9A, 0xFA, 0x6A, 0x74, 0x9C, 0x2E, 
	0xB3, 0x80, 0x55, 0x1A, 0x98, 0xA8, 0x17, 0x07, 0xAF, 0x14, 
	0x70, 0x78, 0x6A, 0xC1, 0xC5, 0xC9, 0x0F, 0x0C, 0xD1, 0x96, 
	0x7D, 0x4B, 0xB4, 0xB6, 0x68, 0x1D, 0xD1, 0xF6, 0x91, 0x84, 
	0xAE, 0xAC, 0xBE, 0xEE, 0x4F, 0x2B, 0x0F, 0x7A, 0x9F, 0xFC, 
	0xEC, 0x5E, 0x29, 0xA2, 0x9B, 0x28, 0xB9, 0x56, 0x4C, 0xFD, 
	0x9F, 0x0D, 0x88, 0x03, 0x90, 0x1D, 0xB5, 0x4C, 0x5A, 0x0A, 
	0x23, 0x52, 0x93, 0x0E, 0xFF, 0x8C, 0x9D, 0x8C, 0x73, 0x20, 
	0x56, 0x29, 0x9F, 0xD2, 0x78, 0x79, 0x43, 0xAA, 0xD3, 0x65, 
	0xF0, 0x89, 0x1F, 0xFB, 0x49, 0x50, 0xC1, 0x4D, 0xBB, 0x1C, 
	0x78, 0xC3, 0x6E, 0x59, 0x9C, 0x4B, 0xF3, 0x25, 0x3D, 0xBF, 
	0xF7, 0x0B, 0x6E, 0x04, 0x13, 0x81, 0x09, 0x24, 0x1C, 0x7D, 
	0x53, 0x31, 0xF0, 0xA2, 0x56, 0x3F, 0x47, 0x18, 0x20, 0xD5, 
	0x97, 0x9F, 0x5E, 0xA9, 0xDC, 0x94, 0xC8, 0xF4, 0x4D, 0x0C, 
	0xE7, 0xAF, 0x21, 0x18, 0xB2, 0x5C, 0x52, 0x68, 0x9B, 0xEF, 
	0xB3, 0x6D, 0xB8, 0x11, 0x19, 0x2E, 0x7D, 0x98, 0x80, 0x4B, 
	0x20, 0x32, 0x18, 0x2B, 0x23, 0x5F, 0xF3, 0xED, 0x6A, 0x5E, 
	0x5F, 0xCC, 0xB3, 0x60, 0xEF, 0x34, 0x58, 0x12, 0x3F, 0x16, 
	0xE7, 0xE7, 0x3C, 0x8B, 0xAA, 0x2E, 0x0C, 0x8F, 0x59, 0x92, 
	0xA7, 0x99, 0xF2, 0xBB, 0x1F, 0x25, 0x04, 0x95, 0x78, 0xD3, 
	0xC3, 0x2B, 0xF8, 0xED, 0xD3, 0xAF, 0x61, 0xF2, 0x66, 0x08, 
	0xCD, 0x54, 0xAC, 0x9C, 0x2F, 0x8B, 0x82, 0x47, 0x3E, 0x79, 
	0x95, 0x71, 0xE0, 0xE8, 0xD4, 0xF4, 0x79, 0x33, 0x70, 0xA8, 
	0x39, 0xE4, 0x3D, 0x43, 0x17, 0xAD, 0x29, 0x5A, 0x31, 0xD9, 
	0x18, 0xF2, 0xD6, 0x14, 0x7D, 0x4B, 0xAC, 0x76, 0xC4, 0xFC, 
	0x81, 0xE9, 0x94, 0xEB, 0xC5, 0x02, 0x5B, 0xCC, 0x34, 0x11, 
	0x22, 0x48, 0xFA, 0x3C, 0x8F, 0x0A, 0x26, 0xEB, 0x56, 0x26, 
	0x0C, 0xB6, 0xD6, 0xFF, 0xC0, 0x76, 0xC8, 0x5B, 0x48, 0x67, 
	0x78, 0x6B, 0x8A, 0xD6, 0x16, 0x6D, 0x9F, 0xB7, 0xB6, 0x18, 
	0xB7, 0xC5, 0x3A, 0x5B, 0xAC, 0x73, 0x04, 0xDC, 0x11, 0xEB, 
	0x1C, 0xB1, 0xCE, 0x11, 0xEB, 0xFA, 0x62, 0xBC, 0x2F, 0xD6, 
	0x0D, 0x44, 0x7F, 0x20, 0xFA, 0x43, 0xEA, 0x0B, 0x23, 0x7D, 
	0x13, 0xCD, 0x28, 0x1E, 0xD9, 0x2B, 0x05, 0xFD, 0xEE, 0xDF, 
	0xDC, 0xF8, 0x6B, 0x30, 0xAE, 0x1E, 0x09, 0x74, 0xB6, 0x64, 
	0x92, 0x56, 0x29, 0xD8, 0xF9, 0x79, 0x21, 0x81, 0xC6, 0x7E, 
	0xB1, 0xCC, 0x7C, 0x34, 0xDC, 0x52, 0x12, 0x6F, 0xD3, 0xEC, 
	0x06, 0xFC, 0x15, 0x4C, 0x94, 0xE5, 0x7C, 0x90, 0x85, 0x92, 
	0xD1, 0x9D, 0xF8, 0x59, 0x4E, 0xE1, 0xE3, 0xC7, 0x5E, 0x09, 
	0x89, 0xCB, 0x27, 0x48, 0x50, 0x52, 0xE5, 0x83, 0x1F, 0xC7, 
	0x78, 0x9E, 0xE0, 0xA9, 0x2A, 0x0E, 0x7D, 0xB5, 0x3A, 0xC3, 
	0x55, 0x9E, 0x08, 0x1C, 0x60, 0xB7, 0x5C, 0xC6, 0xBD, 0xAC, 
	0x5C, 0x46, 0x4E, 0xC6, 0xB1, 0x9F, 0xCE, 0xB3, 0xF4, 0xC6, 
	0x47, 0x43, 0x56, 0xC6, 0xAC, 0x28, 0x20, 0x4A, 0x70, 0x62, 
	0x30, 0xB2, 0xB0, 0xC0, 0xC7, 0xF3, 0x09, 0x58, 0xBA, 0xC5, 
	0x08, 0x09, 0x6E, 0x80, 0x89, 0x26, 0x64, 0x5E, 0x7E, 0xF2, 
	0x55, 0x62, 0xE0, 0xF4, 0xF4, 0xE3, 0x8F, 0xD7, 0xA2, 0x24, 
	0x36, 0x2D, 0xBE, 0x3C, 0xBF, 0x24, 0xA7, 0x74, 0xB8, 0x29, 
	0x91, 0x17, 0x03, 0x4F, 0x29, 0xF7, 0x7D, 0xDC, 0x00, 0x36, 
	0x82, 0x9D, 0xCB, 0x00, 0xF7, 0xDF, 0x69, 0x7A, 0xA3, 0x80, 
	0x39, 0x76, 0xC1, 0x0C, 0x20, 0x98, 0xE1, 0x46, 0x28, 0xF5, 
	0x93, 0x2C, 0xBA, 0x9E, 0x17, 0x09, 0xCB, 0xC9, 0xC9, 0xD0, 
	0x0F, 0x07, 0xEB, 0x1A, 0x92, 0xC0, 0x75, 0x2D, 0x95, 0x03, 
	0x18, 0xF5, 0x44, 0xC2, 0xC5, 0x81, 0x43, 0x8E, 0x74, 0xC3, 
	0xC1, 0x51, 0x61, 0x26, 0x3B, 0x87, 0x93, 0x8A, 0x82, 0x14, 
	0x44, 0x6A, 0x10, 0xF6, 0x85, 0xFF, 0x4D, 0x00, 0xCA, 0x50, 
	0x0A, 0xE2, 0xA9, 0x4F, 0x11, 0xC3, 0x5B, 0x83, 0xAA, 0xF0, 
	0x2C, 0xB1, 0xF9, 0x1C, 0xCC, 0x95, 0x87, 0x48, 0x95, 0x1F, 
	0x06, 0x1C, 0x47, 0x4C, 0x90, 0x1A, 0x8E, 0x0D, 0x33, 0x79, 
	0xEF, 0x69, 0x54, 0xE5, 0xFA, 0x0B, 0x76, 0x93, 0x66, 0xF7, 
	0xA8, 0x01, 0x4C, 0xC4, 0x28, 0xFB, 0x42, 0xBB, 0x85, 0xD5, 
	0x18, 0x30, 0xB7, 0xEE, 0xC0, 0x47, 0x2E, 0x59, 0x96, 0x47, 
	0x20, 0x69, 0xE1, 0x63, 0x9C, 0xF6, 0xED, 0x3B, 0x02, 0x79, 
	0x22, 0x0A, 0xF3, 0xE3, 0x4B, 0x74, 0x3F, 0xA4, 0x3B, 0x8E, 
	0x1D, 0xF3, 0xB3, 0xB1, 0x89, 0x99, 0x12, 0x8A, 0xD8, 0xBF, 
	0x26, 0xFE, 0xFB, 0x96, 0xE8, 0xEC, 0x70, 0xEA, 0xF1, 0xAD, 
	0x8C, 0x9B, 0x1C, 0x7F, 0x75, 0xD1, 0xF0, 0xD6, 0x11, 0xAD, 
	0x81, 0x3F, 0x66, 0xCE, 0x89, 0xA0, 0xBD, 0x19, 0x0B, 0xAF, 
	0xFC, 0xE0, 0xAB, 0xC2, 0x91, 0x10, 0x5C, 0xFD, 0xEC, 0x47, 
	0x85, 0x82, 0x31, 0x33, 0x57, 0x72, 0x48, 0x20, 0x80, 0x4C, 
	0x4C, 0x1B, 0x68, 0xE8, 0x74, 0x99, 0x17, 0x60, 0xBF, 0x67, 
	0x70, 0x66, 0xC7, 0x10, 0xC3, 0x39, 0xF0, 0x6D, 0xAA, 0x1C, 
	0x07, 0x64, 0x8A, 0xE2, 0x48, 0xE4, 0x49, 0x3E, 0x9C, 0xF4, 
	0x33, 0xE2, 0x17, 0x39, 0x3A, 0x4F, 0x7C, 0x98, 0x72, 0xCB, 
	0x2D, 0x68, 0xC7, 0xF3, 0x1B, 0xB3, 0x1E, 0x05, 0xF0, 0x27, 
	0x2C, 0xA0, 0x84, 0x62, 0x80, 0xEE, 0xE6, 0x27, 0x2C, 0x56, 
	0x56, 0xDE, 0x02, 0xBE, 0x67, 0x08, 0xDA, 0x2E, 0xA2, 0x2C, 
	0x4B, 0xF1, 0x02, 0x7D, 0xFA, 0x0C, 0x81, 0xBA, 0xD8, 0xA5, 
	0xF5, 0x06, 0x72, 0x87, 0x22, 0x27, 0x78, 0xBB, 0x36, 0xF0, 
	0x3A, 0x4A, 0x18, 0x1C, 0xCE, 0xC9, 0x35, 0x93, 0x07, 0xCB, 
	0xAB, 0x09, 0xA4, 0x28, 0x70, 0xAD, 0xC9, 0xE1, 0x6A, 0xD2, 
	0xC8, 0x8B, 0x50, 0xD0, 0x27, 0x31, 0x08, 0x0D, 0xE6, 0x6B, 
	0xA6, 0x66, 0x69, 0xB6, 0xE6, 0x40, 0x60, 0x18, 0x68, 0x43, 
	0x70, 0x0C, 0xC8, 0x35, 0x0C, 0xBC, 0xA9, 0xC1, 0x5D, 0x53, 
	0x83, 0xB0, 0x0B, 0x57, 0x1E, 0xF0, 0x43, 0x63, 0x00, 0x57, 
	0x2A, 0xB8, 0x3F, 0x69, 0x98, 0x04, 0x61, 0xB8, 0x44, 0x2B, 
	0x4A, 0xE3, 0x34, 0x33, 0xCA, 0x07, 0xCC, 0xAE, 0x2E, 0x2E, 
	0x09, 0xC7, 0x25, 0x3E, 0x8F, 0x97, 0x0B, 0x38, 0x97, 0x79, 
	0x82, 0x86, 0x73, 0x62, 0xE6, 0x27, 0x44, 0x02, 0x7F, 0xFA, 
	0xF9, 0xE4, 0x0C, 0x36, 0x7E, 0x65, 0x28, 0x70, 0xF5, 0xA9, 
	0x9E, 0x6E, 0xE9, 0xC9, 0xAC, 0x60, 0x66, 0x09, 0xFB, 0x04, 
	0xAA, 0x17, 0xAD, 0x29, 0x5A, 0x4B, 0xB4, 0xB6, 0x68, 0x1D, 
	0xD1, 0xF6, 0x45, 0x3B, 0x10, 0xED, 0x90, 0x5A, 0x53, 0xAC, 
	0x37, 0xC5, 0x7A, 0x53, 0xAC, 0x37, 0xC5, 0x7A, 0x53, 0xAC, 
	0x37, 0xC5, 0x7A, 0x53, 0xAC, 0x37, 0xF9, 0x7A, 0xB0, 0x9C, 
	0x63, 0xD1, 0x9E, 0x88, 0xF6, 0x54, 0xB4, 0xE4, 0x76, 0x3F, 
	0x9F, 0x96, 0xAA, 0x3C, 0xCD, 0xC1, 0x35, 0xFC, 0xC9, 0xAC, 
	0x9E, 0xAC, 0xEA, 0xC9, 0xDE, 0xC1, 0xC7, 0x44, 0xE6, 0x8F, 
	0x13, 0x5F, 0x8E, 0xFF, 0xA0, 0x0D, 0xB1, 0xE5, 0x36, 0x01, 
	0x77, 0x07, 0xAE, 0x40, 0xD1, 0xA7, 0xDC, 0x7D, 0xFA, 0x74, 
	0xD2, 0x37, 0xC6, 0x43, 0x07, 0x93, 0x21, 0x3A, 0x38, 0x78, 
	0xE2, 0xF7, 0xD3, 0x16, 0xF5, 0xE7, 0x9B, 0xF7, 0x48, 0xD9, 
	0xAB, 0x31, 0x9E, 0x5B, 0xA7, 0xC7, 0x0D, 0x53, 0xBA, 0x80, 
	0xC3, 0x83, 0x30, 0x5C, 0xA4, 0x49, 0x54, 0xA4, 0xD9, 0x4E, 
	0x22, 0x26, 0xEE, 0x8F, 0x5F, 0x7F, 0x42, 0x12, 0xC1, 0x3E, 
	0x85, 0x68, 0x90, 0xF0, 0x93, 0xB4, 0x80, 0x08, 0xA0, 0x62, 
	0x58, 0xC6, 0x14, 0x44, 0x7D, 0x8F, 0x9E, 0x08, 0xED, 0x9F, 
	0xF0, 0xEF, 0xDF, 0xC4, 0x58, 0x58, 0xCC, 0x51, 0x68, 0x4C, 
	0x0C, 0xC0, 0xB2, 0x83, 0xDA, 0xA2, 0x83, 0x6A, 0xC9, 0x41, 
	0xB5, 0xE0, 0x40, 0x4C, 0x27, 0x71, 0x41, 0x5E, 0x4A, 0xA6, 
	0x0E, 0xAD, 0x29, 0x5A, 0x4B, 0xB4, 0xB6, 0x68, 0x1D, 0xD1, 
	0xF6, 0x45, 0x3B, 0x10, 0xED, 0x50, 0xB4, 0x87, 0xA2, 0xC5, 
	0xDA, 0xCD, 0x0E, 0xEC, 0x22, 0x1D, 0x28, 0xC3, 0xDF, 0x29, 
	0xC4, 0xCB, 0x3A, 0x7B, 0x93, 0xDE, 0x81, 0x6D, 0x94, 0x14, 
	0xF3, 0x23, 0x21, 0x8F, 0xFE, 0x97, 0xE5, 0xDC, 0x12, 0xC5, 
	0x91, 0xF0, 0x63, 0x0C, 0x1F, 0x51, 0x76, 0xB5, 0x1B, 0x1B, 
	0xE6, 0x18, 0x39, 0xE3, 0x2C, 0x5F, 0x46, 0x01, 0x1C, 0xE7, 
	0x08, 0xFB, 0x0C, 0xE9, 0xC6, 0x0C, 0xF2, 0x2D, 0x78, 0xFC, 
	0x04, 0x61, 0x0F, 0xE2, 0x19, 0x25, 0xC2, 0xE2, 0x99, 0xA7, 
	0xC1, 0xEF, 0x7F, 0x3F, 0xA1, 0x94, 0x3D, 0xC4, 0x05, 0xFF, 
	0xFE, 0xF8, 0x69, 0xD5, 0x39, 0x83, 0x43, 0xA4, 0x4C, 0xA6, 
	0x78, 0xC6, 0xF4, 0xF2, 0x6A, 0x96, 0x4B, 0x9D, 0xDB, 0xA5, 
	0xBA, 0xBA, 0xEE, 0x78, 0xFF, 0x98, 0x2D, 0x13, 0x0A, 0xDC, 
	0xCA, 0xF5, 0xAB, 0x93, 0xF3, 0x16, 0x6B, 0x3F, 0x64, 0x0C, 
	0xE8, 0x48, 0x94, 0x10, 0x92, 0xFF, 0x1B, 0x96, 0x14, 0xBD, 
	0x6B, 0x56, 0xBC, 0x8A, 0x19, 0x3E, 0x9E, 0xDC, 0x9F, 0x87, 
	0x30, 0xE3, 0xB1, 0x5A, 0x02, 0xB4, 0x1F, 0xB7, 0x98, 0x56, 
	0xB4, 0x1F, 0x80, 0xDE, 0x16, 0x46, 0xCC, 0x44, 0x89, 0x12, 
	0xA5, 0x68, 0xB3, 0x1E, 0x0E, 0x15, 0x45, 0x16, 0x5D, 0x2D, 
	0x0B, 0xD6, 0x4A, 0xB4, 0x62, 0x92, 0x4C, 0xDB, 0x9E, 0xD8, 
	0x9A, 0xD5, 0x76, 0x78, 0xC3, 0x77, 0x10, 0x63, 0x62, 0xCB, 
	0x87, 0x34, 0x09, 0xE2, 0x28, 0xF8, 0xEA, 0xEE, 0x13, 0x59, 
	0xEA, 0x2C, 0xD9, 0xEF, 0x14, 0x9D, 0x7D, 0xB5, 0xDD, 0xCB, 
	0xE1, 0x1E, 0x1B, 0xC7, 0x70, 0x83, 0x4C, 0x3F, 0x41, 0x9E, 
	0xD8, 0x6A, 0x7B, 0xFB, 0x5A, 0xB0, 0xCC, 0xE0, 0x22, 0xE2, 
	0xAA, 0x8B, 0x34, 0xC2, 0x8B, 0xA5, 0xFA, 0x28, 0x91, 0xB8, 
	0x80, 0xF4, 0xB7, 0xB8, 0x90, 0xF8, 0x2A, 0x11, 0xCC, 0xA2, 
	0x38, 0x76, 0xD5, 0x67, 0x21, 0xFD, 0x51, 0x35, 0xB8, 0x0C, 
	0xA5, 0x5F, 0x19, 0x00, 0xF8, 0x2D, 0x81, 0x77, 0xBB, 0x77, 
	0x64, 0xC9, 0xAE, 0x6A, 0xAE, 0xEF, 0x39, 0xDE, 0xBE, 0x67, 
	0x40, 0x7F, 0xA4, 0x3D, 0xFB, 0xFD, 0xFE, 0xFA, 0x9E, 0x46, 
	0x6D, 0xCF, 0x20, 0x7B, 0xB5, 0x2E, 0x87, 0x4A, 0x07, 0x01, 
	0xDC, 0xD4, 0x0A, 0x26, 0xD4, 0x00, 0x88, 0x61, 0xA2, 0xBC, 
	0x74, 0xBC, 0xF3, 0xDA, 0xB7, 0xE3, 0x96, 0x3A, 0x2F, 0x8A, 
	0x85, 0x7B, 0x70, 0x70, 0x77, 0x77, 0xD7, 0xBB, 0xB3, 0x7A, 
	0x69, 0x76, 0x4D, 0x17, 0xA1, 0x83, 0xFC, 0x16, 0x0E, 0x81, 
	0xC6, 0xD6, 0x3E, 0xEE, 0xDC, 0x7E, 0xF0, 0x4F, 0x5B, 0x5C, 
	0x0D, 0x41, 0x91, 0xC5, 0xD1, 0xCD, 0xB5, 0xDA, 0xD6, 0x64, 
	0x33, 0x80, 0x61, 0x42, 0xCF, 0x7A, 0xFE, 0x62, 0xC1, 0x92, 
	0xF0, 0x74, 0x1E, 0xC5, 0x61, 0x4B, 0xDE, 0x27, 0x2F, 0xDE, 
	0xFA, 0x37, 0xAF, 0xE3, 0x30, 0x5F, 0x59, 0x0B, 0xEB, 0x45, 
	0x70, 0xAA, 0x67, 0x67, 0x1F, 0x2E, 0xDE, 0x8C, 0x20, 0x69, 
	0xF9, 0x32, 0xD2, 0xBD, 0x2F, 0xCF, 0x0D, 0xF8, 0xE9, 0x74, 
	0xDA, 0xC5, 0xD1, 0x97, 0xBD, 0xBD, 0x16, 0x6D, 0x8B, 0x72, 
	0x51, 0xA3, 0x64, 0x81, 0xB5, 0x97, 0x87, 0x28, 0x74, 0x55, 
	0xDA, 0xEA, 0x2F, 0xB5, 0xF3, 0x45, 0x4B, 0xE0, 0xE6, 0x2B, 
	0xF7, 0x73, 0xAC, 0xB4, 0xB8, 0x2A, 0xC9, 0xD7, 0x05, 0x96, 
	0x16, 0xDF, 0x3C, 0x55, 0x83, 0x23, 0x7C, 0xC9, 0xDC, 0x1C, 
	0x53, 0xD5, 0x7C, 0xF2, 0x65, 0xFA, 0xA2, 0x7A, 0x72, 0x55, 
	0x90, 0x3F, 0xF0, 0xB1, 0x22, 0xA3, 0x33, 0x52, 0x9F, 0x5F, 
	0x65, 0x07, 0x47, 0xAA, 0x44, 0x78, 0xF6, 0xE6, 0x2A, 0x96, 
	0x14, 0xCD, 0x7A, 0x19, 0x5B, 0xC0, 0xB9, 0xCF, 0x5A, 0xEA, 
	0x77, 0xD0, 0x28, 0x4C, 0xAF, 0xCD, 0xBE, 0xCB, 0xC6, 0x27, 
	0x9C, 0xC3, 0x60, 0xC4, 0x05, 0x96, 0x9F, 0xCC, 0xD5, 0x0E, 
	0xEB, 0xA8, 0x40, 0x60, 0xD1, 0xD6, 0x82, 0x3A, 0xCF, 0x41, 
	0x8F, 0x48, 0xEE, 0x11, 0xC5, 0xA3, 0x0B, 0xBF, 0x98, 0xF7, 
	0x66, 0x71, 0x0A, 0xB2, 0x31, 0x50, 0x1D, 0x44, 0x68, 0x2F, 
	0x66, 0xC9, 0x75, 0x31, 0xEF, 0x1A, 0xED, 0x8E, 0xFA, 0x4F, 
	0xD5, 0x23, 0x17, 0x1B, 0x91, 0x4C, 0xE6, 0xB6, 0xDA, 0xF6, 
	0x6A, 0x93, 0x8E, 0x0C, 0x10, 0x5A, 0x22, 0xA1, 0xA8, 0x8F, 
	0xEA, 0x25, 0xEF, 0xC5, 0x74, 0xF5, 0xE4, 0xEA, 0xA3, 0x51, 
	0xF1, 0xA2, 0xBC, 0xDE, 0xB9, 0x3C, 0xA7, 0x57, 0x80, 0x58, 
	0x10, 0x4F, 0x5B, 0x03, 0x0D, 0x04, 0x5A, 0x42, 0x6D, 0x52, 
	0xD7, 0x44, 0xE9, 0x9E, 0x6A, 0x18, 0x03, 0xCB, 0xC4, 0xA2, 
	0x06, 0xAB, 0x3A, 0x40, 0x93, 0xAA, 0x15, 0xF7, 0x0B, 0xD0, 
	0x03, 0x78, 0x7E, 0x81, 0x57, 0x13, 0xAE, 0x01, 0xB5, 0x0B, 
	0xF0, 0xA8, 0x40, 0x05, 0xBD, 0x64, 0x31, 0xC3, 0x1C, 0x50, 
	0x0D, 0x62, 0x1F, 0xEE, 0x3A, 0xAE, 0xCA, 0xC2, 0x82, 0x74, 
	0xF1, 0x04, 0x9A, 0x60, 0x71, 0xBF, 0x23, 0x9E, 0xD3, 0xCB, 
	0x0A, 0xD1, 0x69, 0xBA, 0xB8, 0xFF, 0x39, 0x34, 0x51, 0x92, 
	0xEF, 0x88, 0xE6, 0xFC, 0xED, 0xB8, 0xC2, 0x73, 0x9E, 0xE4, 
	0x2C, 0x2B, 0x24, 0x4C, 0xB0, 0x8D, 0x22, 0xB0, 0x79, 0x65, 
	0x64, 0xCC, 0x46, 0xBA, 0x16, 0x81, 0x91, 0x47, 0xCF, 0xC7, 
	0x7F, 0xFC, 0x75, 0x71, 0xFC, 0xE7, 0xF1, 0xE9, 0x87, 0xF3, 
	0x77, 0x6F, 0xC7, 0x5E, 0x04, 0xF6, 0x1E, 0xCD, 0x5A, 0x24, 
	0x6A, 0x22, 0x2A, 0x5F, 0xF8, 0x89, 0xB0, 0xF5, 0x59, 0x12, 
	0x10, 0x2D, 0x5D, 0xA2, 0x05, 0x7E, 0x23, 0x41, 0xFF, 0xFA, 
	0x54, 0xAC, 0xA6, 0xAD, 0x4F, 0x05, 0xED, 0x46, 0x7B, 0x7B, 
	0xA8, 0xE3, 0xEF, 0xDF, 0xCF, 0x3E, 0xDF, 0x4E, 0xD8, 0x74, 
	0x6F, 0x8F, 0xB7, 0xA0, 0x7B, 0xE9, 0x71, 0x12, 0x41, 0x4F, 
	0xFF, 0x6D, 0xD4, 0x32, 0x9C, 0x1A, 0x70, 0xA2, 0x4F, 0xDB, 
	0xED, 0x30, 0x7B, 0x9D, 0x8C, 0xD1, 0xAC, 0xB5, 0xA8, 0xED, 
	0xB1, 0x38, 0x67, 0x0A, 0xD0, 0xFB, 0x5B, 0x06, 0x4E, 0x31, 
	0x32, 0xC8, 0x22, 0xFD, 0x51, 0x19, 0xA4, 0x9B, 0xE4, 0xB6, 
	0x3D, 0x20, 0xD6, 0xDF, 0x66, 0x3A, 0xB4, 0xAF, 0x24, 0x6C, 
	0xF8, 0x8D, 0x9E, 0x10, 0x79, 0x07, 0xE5, 0xF9, 0x28, 0xC5, 
	0x3D, 0xB2, 0x89, 0xFA, 0xF1, 0x33, 0xAA, 0xC2, 0xDE, 0xFF, 
	0x2C, 0x59, 0x76, 0x3F, 0x06, 0x53, 0xC3, 0x53, 0xF3, 0x38, 
	0x8E, 0x5B, 0x2A, 0x78, 0x46, 0x0E, 0x46, 0x0D, 0x8A, 0xF0, 
	0xB2, 0xE7, 0x89, 0x70, 0x0B, 0x2F, 0x03, 0xF9, 0x27, 0x93, 
	0x6C, 0x2A, 0x7C, 0xF1, 0x36, 0xCA, 0xA3, 0xAB, 0x28, 0x8E, 
	0x8A, 0xFB, 0x91, 0x4A, 0xCF, 0x70, 0x4C, 0x7A, 0x51, 0x9E, 
	0x05, 0x23, 0xA6, 0x7D, 0xC1, 0xA6, 0x58, 0x11, 0xC0, 0xAD, 
	0x85, 0x08, 0xE0, 0x42, 0xFB, 0xFE, 0xBD, 0xC5, 0x1F, 0x46, 
	0x93, 0x69, 0x5B, 0xAB, 0x04, 0x39, 0xC2, 0x27, 0xDC, 0x43, 
	0x88, 0x9C, 0x1E, 0x27, 0xB8, 0xDB, 0xF4, 0x45, 0xA3, 0xEF, 
	0x4E, 0xA6, 0x5A, 0x15, 0x45, 0xBC, 0xFF, 0x1F, 0xB6, 0xE6, 
	0x51, 0x18, 0xB2, 0x44, 0x5D, 0xF1, 0x41, 0x3E, 0x2C, 0xB1, 
	0x01, 0x61, 0x64, 0x45, 0x3B, 0x72, 0x52, 0x51, 0x24, 0xF3, 
	0x1E, 0x15, 0xAD, 0xF6, 0xC3, 0x5D, 0x16, 0x15, 0xEC, 0x74, 
	0x3C, 0x6E, 0xAD, 0x88, 0x65, 0xA5, 0x35, 0xC0, 0x54, 0xA0, 
	0xAB, 0x00, 0xBA, 0x8A, 0xE7, 0x67, 0x9F, 0x83, 0x92, 0xB2, 
	0x02, 0x28, 0x7B, 0xE0, 0x5C, 0x3D, 0x18, 0xEE, 0x04, 0xAB, 
	0xC2, 0x06, 0xDE, 0x2D, 0x4D, 0x78, 0x76, 0xE0, 0x19, 0x5F, 
	0x4E, 0x59, 0xF0, 0x3C, 0x80, 0x44, 0x77, 0x60, 0x4F, 0x35, 
	0x5B, 0x9A, 0xE3, 0xB8, 0x93, 0xA1, 0xAE, 0x0D, 0xE1, 0xA9, 
	0xEF, 0x4E, 0xFA, 0xF8, 0x4E, 0x71, 0xAA, 0x0D, 0x60, 0x1C, 
	0x1E, 0x0D, 0x1B, 0x9E, 0x0D, 0xDD, 0x9D, 0x40, 0xE4, 0x87, 
	0xAC, 0x18, 0x3B, 0xB8, 0xFB, 0x21, 0xBE, 0xAF, 0xC2, 0x8E, 
	0x43, 0xD3, 0xE0, 0x01, 0x56, 0x9A, 0x34, 0x17, 0x16, 0xDA, 
	0x34, 0x74, 0x28, 0x86, 0x4C, 0x5C, 0x0D, 0x68, 0xF1, 0x1D, 
	0x98, 0x09, 0x8B, 0xF1, 0xE5, 0x18, 0x52, 0x60, 0x02, 0x69, 
	0x0E, 0x90, 0x40, 0x70, 0x8B, 0xE0, 0x0E, 0x51, 0x0C, 0xA4, 
	0xF5, 0x07, 0x0E, 0x87, 0x3B, 0x04, 0x87, 0x2E, 0x3C, 0x13, 
	0x71, 0x30, 0x69, 0x08, 0xCF, 0x80, 0xC5, 0xC1, 0xF7, 0x8D, 
	0x38, 0x67, 0x08, 0xFB, 0xD3, 0x42, 0xC0, 0xE8, 0x58, 0x16, 
	0xF0, 0x89, 0x18, 0x6D, 0x48, 0xF3, 0x61, 0xA6, 0x05, 0x18, 
	0x4D, 0x48, 0xF3, 0x07, 0xC3, 0x01, 0x74, 0x00, 0x25, 0x3C, 
	0x00, 0x19, 0x06, 0x74, 0x50, 0x1C, 0x36, 0x64, 0xFF, 0x26, 
	0x2E, 0x01, 0xA4, 0x8E, 0x0E, 0x89, 0xBF, 0x6D, 0x42, 0x67, 
	0x88, 0x23, 0x40, 0x19, 0x32, 0x64, 0x1D, 0x22, 0xF3, 0x20, 
	0x30, 0xDC, 0x14, 0x24, 0x89, 0x30, 0x07, 0x9E, 0x6D, 0xE4, 
	0x03, 0x69, 0x74, 0x10, 0x03, 0x74, 0x6C, 0xEA, 0xC0, 0x3E, 
	0xD6, 0x60, 0x00, 0x40, 0xEC, 0x00, 0xC5, 0x43, 0xC7, 0xD0, 
	0xAC, 0x3E, 0xA0, 0xEB, 0xC3, 0x1A, 0xD8, 0x10, 0x30, 0x00, 
	0xEF, 0x7D, 0x83, 0x77, 0x4C, 0x7C, 0x9D, 0x38, 0x80, 0x91, 
	0x43, 0x21, 0x75, 0x84, 0x83, 0xD8, 0x51, 0xD0, 0x03, 0x54, 
	0x9D, 0xD9, 0xA7, 0xB7, 0x84, 0x43, 0x44, 0x08, 0xB7, 0x13, 
	0x13, 0x69, 0x1D, 0xC2, 0xA4, 0xE1, 0xC0, 0xD4, 0xEC, 0x61, 
	0x7F, 0xFA, 0xE8, 0xE5, 0x77, 0x51, 0x11, 0xCC, 0xC1, 0xB4, 
	0x02, 0x0C, 0x2E, 0xF6, 0xB4, 0xFD, 0x10, 0xB2, 0x99, 0xBF, 
	0x8C, 0x0B, 0x17, 0xE2, 0x49, 0x32, 0xA9, 0xE0, 0xD3, 0x89, 
	0x31, 0x6D, 0xF3, 0x90, 0x49, 0xA9, 0x8D, 0x9A, 0xE1, 0xE5, 
	0x5F, 0x7B, 0xF8, 0xE6, 0x8A, 0x29, 0xC6, 0xB4, 0x5B, 0x9B, 
	0xAE, 0x4F, 0x0F, 0x4C, 0xED, 0xBE, 0x1C, 0x35, 0x1B, 0xA3, 
	0x06, 0x8E, 0x66, 0xDF, 0x5C, 0xB8, 0x44, 0x65, 0xF7, 0xF8, 
	0xCB, 0x13, 0x84, 0xC6, 0x0E, 0xDA, 0x9C, 0x6E, 0x1F, 0x6E, 
	0x63, 0xE9, 0xA3, 0x88, 0x78, 0x32, 0x39, 0x41, 0x94, 0x51, 
	0xF2, 0xFE, 0x10, 0x48, 0x14, 0x69, 0x81, 0x44, 0x80, 0x96, 
	0x35, 0xB7, 0x3F, 0x30, 0x21, 0xD9, 0x13, 0x02, 0xC0, 0xA4, 
	0x8A, 0xF2, 0x5E, 0x91, 0x9B, 0x66, 0x98, 0x73, 0x61, 0xB8, 
	0xA8, 0xE4, 0x12, 0xF8, 0x80, 0x12, 0x6C, 0xB9, 0x3E, 0x73, 
	0xDC, 0xDA, 0x2A, 0x8E, 0x56, 0x03, 0x5D, 0xD7, 0xD2, 0xDB, 
	0x0D, 0x99, 0x34, 0x25, 0xDC, 0x75, 0x68, 0xCA, 0x0F, 0x05, 
	0x03, 0x5B, 0x6D, 0x91, 0x0D, 0xEC, 0x80, 0x67, 0x0C, 0xD0, 
	0xEE, 0x5D, 0x41, 0x8E, 0xF9, 0xD5, 0x23, 0xB2, 0xC1, 0x89, 
	0x78, 0x6B, 0x8A, 0xD6, 0xDE, 0x9D, 0x8D, 0xA6, 0xD0, 0xAC, 
	0x1A, 0x07, 0x7D, 0xB3, 0xE7, 0x08, 0x1A, 0x21, 0x41, 0x2A, 
	0x89, 0x32, 0x4C, 0x67, 0x13, 0x15, 0x86, 0xC0, 0x6E, 0x89, 
	0xD6, 0xD9, 0x9D, 0x0A, 0xC2, 0x23, 0x21, 0xEE, 0x34, 0xCD, 
	0xC9, 0x02, 0xCE, 0x4B, 0x42, 0x4C, 0xA7, 0x22, 0x44, 0xDF, 
	0x28, 0x8E, 0xC1, 0xEE, 0x88, 0x4D, 0xD0, 0xC1, 0x53, 0x78, 
	0xED, 0xEE, 0x60, 0x58, 0x89, 0xC0, 0x36, 0x57, 0x22, 0x70, 
	0x06, 0x9B, 0x30, 0x1F, 0x6E, 0xC1, 0xBC, 0x93, 0xFD, 0x1A, 
	0x83, 0xA1, 0xD8, 0x53, 0xFB, 0x3B, 0xBB, 0xE8, 0xFD, 0xFF, 
	0xC0, 0x2E, 0x96, 0xBD, 0x89, 0xBD, 0xE1, 0xDF, 0x61, 0xEF, 
	0x70, 0xB8, 0x61, 0x4B, 0x6B, 0xDB, 0x96, 0x1B, 0x74, 0xE5, 
	0xD4, 0x54, 0xD5, 0x35, 0x2A, 0x8B, 0x58, 0xB9, 0x8B, 0x55, 
	0x19, 0xC4, 0x16, 0xE6, 0xD7, 0xB7, 0xED, 0x38, 0x3A, 0xFA, 
	0xDB, 0xEE, 0x3B, 0xCB, 0xE4, 0x3B, 0xDB, 0x02, 0xC6, 0x46, 
	0x89, 0x74, 0x0C, 0xB0, 0xB6, 0x86, 0x54, 0x86, 0x3F, 0x4D, 
	0x30, 0xBE, 0xC2, 0xA8, 0x91, 0x7B, 0xE8, 0x6C, 0x08, 0x29, 
	0xA6, 0xE4, 0xAE, 0x87, 0xBF, 0x84, 0xA3, 0x63, 0xD4, 0x5C, 
	0xB2, 0x3B, 0xD0, 0x37, 0xA0, 0x31, 0x06, 0x2B, 0x34, 0xF6, 
	0x46, 0x09, 0x19, 0xBF, 0x6C, 0x33, 0x24, 0xAE, 0x5F, 0x92, 
	0x90, 0xD1, 0x90, 0x10, 0x0A, 0xE3, 0x3F, 0x2E, 0xA2, 0x61, 
	0x3D, 0x62, 0x99, 0xCE, 0x16, 0x34, 0x3F, 0x16, 0xD1, 0x4F, 
	0x84, 0x6B, 0xA3, 0xE9, 0x04, 0x87, 0x74, 0x9E, 0x38, 0x88, 
	0xD1, 0xA9, 0x8C, 0x76, 0x65, 0xB5, 0x43, 0xFB, 0xE7, 0x85, 
	0x57, 0x0F, 0x89, 0xDD, 0x41, 0xBF, 0xE7, 0xAC, 0xE1, 0x30, 
	0xE5, 0x50, 0x68, 0x6D, 0x62, 0xAA, 0xBF, 0x3B, 0x53, 0x76, 
	0x43, 0x5D, 0x03, 0x63, 0x0D, 0x1F, 0xA6, 0x5F, 0x95, 0x10, 
	0xCD, 0x5F, 0x08, 0x70, 0x1D, 0xCB, 0xAC, 0xFB, 0x5E, 0x77, 
	0x68, 0xEE, 0x60, 0x5C, 0xBB, 0xED, 0xD5, 0xA9, 0xEF, 0xF5, 
	0x58, 0xE6, 0xE5, 0xC1, 0x48, 0x4C, 0xB1, 0xE0, 0x52, 0xB0, 
	0x80, 0xAB, 0x00, 0xD6, 0x30, 0xDA, 0xE2, 0x4E, 0x5A, 0x65, 
	0xE7, 0x51, 0x99, 0x9D, 0x97, 0xD9, 0x4E, 0xC1, 0xBE, 0x35, 
	0x44, 0x54, 0xB3, 0x34, 0xDB, 0xEA, 0xF4, 0xF5, 0xFF, 0x8A, 
	0xBA, 0xF0, 0x53, 0xEE, 0x01, 0x59, 0x05, 0xAD, 0xEA, 0xFA, 
	0x49, 0x30, 0x4F, 0x33, 0xB8, 0x0F, 0xDF, 0xC0, 0x8D, 0x03, 
	0x09, 0x17, 0xF5, 0x31, 0x5E, 0x62, 0x9B, 0xA5, 0x49, 0xD1, 
	0xBD, 0xE3, 0x35, 0x5F, 0xB8, 0xEB, 0xA5, 0x71, 0x58, 0x02, 
	0xB1, 0xB8, 0x0A, 0x20, 0xCB, 0x81, 0x0B, 0x9F, 0x97, 0xF5, 
	0x70, 0x2F, 0x7C, 0x05, 0x0A, 0xD7, 0x9F, 0x51, 0x00, 0x97, 
	0xD2, 0x95, 0x74, 0x32, 0x62, 0xF0, 0x69, 0x6A, 0xD7, 0x53, 
	0xC5, 0x8E, 0xFD, 0x64, 0x62, 0xF4, 0xA2, 0xD1, 0x6F, 0x26, 
	0x44, 0x90, 0x35, 0x75, 0x40, 0xE4, 0xEB, 0xBC, 0x08, 0xB2, 
	0xF1, 0xF3, 0x84, 0xAA, 0xF2, 0x57, 0x96, 0x17, 0x9B, 0xC5, 
	0xBF, 0xFE, 0x02, 0xDF, 0x03, 0x90, 0x76, 0xBB, 0x69, 0x86, 
	0xDF, 0xEB, 0xB9, 0x62, 0xCA, 0x3A, 0xCF, 0x45, 0xC7, 0x68, 
	0xB0, 0xEC, 0x95, 0x2C, 0x03, 0xC7, 0x61, 0x74, 0x5B, 0x55, 
	0x0B, 0xE0, 0x16, 0xFD, 0x48, 0x57, 0x6E, 0xA6, 0x65, 0x6D, 
	0x71, 0x35, 0xE7, 0xC5, 0x22, 0x0B, 0xAE, 0xD5, 0x58, 0x65, 
	0x90, 0xAA, 0x43, 0xFB, 0xCF, 0xB1, 0x7C, 0xA0, 0xD0, 0xFD, 
	0x70, 0xB4, 0xE2, 0x00, 0x52, 0x9A, 0xC5, 0x37, 0x4F, 0x52, 
	0x8E, 0x9B, 0x50, 0x71, 0xC8, 0xBB, 0x65, 0x59, 0x11, 0x05, 
	0x7E, 0xDC, 0xF5, 0xE3, 0xE8, 0x3A, 0x71, 0x8B, 0x74, 0xE1, 
	0xA9, 0x47, 0xCF, 0xF6, 0x3B, 0x2D, 0xA0, 0xAF, 0xDD, 0xD9, 
	0x57, 0xF6, 0x92, 0xAB, 0x7C, 0xE1, 0x29, 0xCF, 0x0F, 0x70, 
	0xDB, 0x23, 0xE5, 0x39, 0x10, 0xA6, 0x44, 0xE1, 0x48, 0x8D, 
	0xAF, 0xE2, 0xF0, 0x2F, 0x5E, 0xBD, 0x55, 0xA8, 0x40, 0x82, 
	0x20, 0xF5, 0x68, 0xBF, 0x43, 0xB5, 0xB5, 0xCA, 0x26, 0xDB, 
	0x1D, 0xF5, 0xF9, 0x01, 0xAC, 0x39, 0x52, 0xB5, 0x34, 0x89, 
	0xA3, 0x84, 0x71, 0x33, 0xCC, 0x47, 0x6B, 0x15, 0x40, 0xD8, 
	0x10, 0xCB, 0x69, 0xA2, 0xFE, 0x57, 0xF6, 0x78, 0xC9, 0x80, 
	0xEB, 0x9F, 0x17, 0x0C, 0xAA, 0xAD, 0xCB, 0xCA, 0xE0, 0x2C, 
	0x4E, 0xFD, 0xC2, 0xA5, 0xF7, 0x86, 0xEA, 0xA3, 0x28, 0x4D, 
	0xE4, 0x6D, 0x2D, 0xAF, 0x17, 0xAB, 0xD5, 0x34, 0xF9, 0xCA, 
	0xEE, 0x97, 0x58, 0xAC, 0xA7, 0x8B, 0xEC, 0x3E, 0x31, 0x40, 
	0x05, 0x8A, 0xFD, 0xB6, 0x24, 0x3F, 0x22, 0xBF, 0x98, 0x47, 
	0x79, 0x8F, 0xD0, 0xB5, 0x3D, 0xB5, 0xFD, 0x08, 0x5B, 0x66, 
	0x9A, 0xBF, 0xBA, 0x0B, 0xC7, 0xE0, 0x5C, 0xF1, 0xF3, 0x5A, 
	0x1D, 0xCE, 0x8B, 0x4B, 0x0F, 0xF3, 0x65, 0x05, 0x56, 0xB5, 
	0xA3, 0xD9, 0xA9, 0xAA, 0x51, 0x9D, 0x13, 0x2B, 0x87, 0x05, 
	0x55, 0x0E, 0x63, 0x4E, 0x2C, 0xEE, 0xCC, 0xAF, 0xE2, 0x85, 
	0x16, 0x0B, 0x5C, 0xB4, 0xC3, 0x55, 0x26, 0x6F, 0x10, 0xC4, 
	0x19, 0x15, 0x4A, 0xE4, 0xBB, 0x38, 0x51, 0x00, 0xCE, 0x1E, 
	0x72, 0x94, 0x39, 0xD5, 0x0F, 0x56, 0x05, 0xD5, 0xE5, 0x8D, 
	0xBA, 0xAA, 0xA6, 0x42, 0xE7, 0xB1, 0xAD, 0xA5, 0x4D, 0xEB, 
	0xCA, 0x8B, 0x97, 0x28, 0x34, 0xE4, 0x0C, 0xB9, 0x32, 0xF4, 
	0xA3, 0x98, 0x58, 0x01, 0x32, 0x42, 0x2D, 0x61, 0x77, 0xCA, 
	0xBB, 0x05, 0x16, 0x06, 0x5A, 0xBC, 0x84, 0x98, 0xBB, 0x0A, 
	0xD0, 0xAD, 0xC5, 0x9A, 0xAE, 0xD5, 0xB8, 0x1F, 0x8D, 0xE2, 
	0x17, 0x86, 0xAB, 0xB7, 0x37, 0x94, 0x2E, 0x57, 0x35, 0xE2, 
	0xB4, 0xBE, 0x86, 0x2A, 0x5E, 0x4C, 0x0B, 0x45, 0x9B, 0x02, 
	0x1B, 0x6B, 0x1A, 0x0B, 0xE6, 0xF8, 0x0E, 0x97, 0xFC, 0xAC, 
	0xDC, 0x85, 0x2B, 0x0F, 0xC8, 0xDE, 0x87, 0x38, 0x58, 0x53, 
	0x93, 0x27, 0x8B, 0x26, 0x5A, 0xE0, 0x1B, 0x18, 0xD8, 0xBB, 
	0xF2, 0x14, 0x59, 0x96, 0x45, 0x16, 0x97, 0x5C, 0xCB, 0xBE, 
	0xA3, 0x8A, 0x2F, 0x04, 0x63, 0x96, 0x29, 0xE7, 0x97, 0xD5, 
	0x97, 0x23, 0x2A, 0xA7, 0xD0, 0x5F, 0x2F, 0x2B, 0x1F, 0x9D, 
	0x5F, 0xBA, 0xE0, 0x1A, 0x57, 0x47, 0xBC, 0xC2, 0xAC, 0xA1, 
	0x08, 0xED, 0x95, 0x04, 0x37, 0xD4, 0xB9, 0x11, 0xF5, 0xF9, 
	0x25, 0x6A, 0x5F, 0xA8, 0x46, 0x02, 0xD4, 0x2A, 0xDD, 0x8E, 
	0x5C, 0xE8, 0xC6, 0x49, 0xA7, 0xB3, 0x6B, 0x08, 0x53, 0x93, 
	0x78, 0xBA, 0x56, 0xDF, 0xB6, 0x8E, 0xE2, 0x17, 0xAA, 0xD2, 
	0x53, 0x80, 0x33, 0xD5, 0x6B, 0x14, 0xE1, 0xCB, 0xEA, 0xB7, 
	0xF8, 0x39, 0x1A, 0x2F, 0xAF, 0x12, 0xFC, 0x9A, 0xC2, 0xCF, 
	0xBF, 0xBA, 0x3F, 0x45, 0x78, 0x4E, 0x0B, 0x25, 0xC2, 0x25, 
	0xC0, 0x8F, 0x09, 0x37, 0x76, 0x23, 0x1C, 0x35, 0xC8, 0x2B, 
	0x4B, 0xFC, 0xD3, 0x63, 0xB9, 0xB8, 0x04, 0x71, 0x8E, 0x03, 
	0xD1, 0xFB, 0xF5, 0xE9, 0xD1, 0x08, 0x8C, 0x4B, 0x06, 0x3C, 
	0x1F, 0x19, 0x76, 0xCD, 0x03, 0x29, 0x3A, 0xCA, 0xEA, 0x5D, 
	0xCD, 0x86, 0xD3, 0x4E, 0xA8, 0x54, 0x0E, 0xA7, 0x32, 0xBB, 
	0x30, 0xF7, 0x55, 0x22, 0xC5, 0xA3, 0x55, 0x9F, 0x47, 0xA4, 
	0x60, 0xCE, 0x82, 0xAF, 0x57, 0xE9, 0x37, 0x0C, 0x6B, 0xA2, 
	0xF0, 0xC9, 0x2D, 0x13, 0x26, 0x9E, 0x5F, 0x5E, 0x55, 0x81, 
	0x65, 0xAD, 0x4E, 0xC7, 0x63, 0x0B, 0x2D, 0x67, 0xE1, 0x8B, 
	0x7D, 0x51, 0x8C, 0xDC, 0x77, 0xF7, 0x79, 0xFD, 0x6E, 0x1F, 
	0x2C, 0x19, 0xE3, 0x42, 0x39, 0x03, 0x89, 0x46, 0x01, 0x62, 
	0x5D, 0xB7, 0x7A, 0xC4, 0xC2, 0x86, 0x4C, 0xFF, 0x6D, 0xD3, 
	0xAB, 0x57, 0x44, 0x94, 0xBA, 0x09, 0xF9, 0x97, 0xE0, 0xAE, 
	0x12, 0x51, 0x14, 0xEE, 0x5E, 0xC5, 0x69, 0xF0, 0xD5, 0x53, 
	0x56, 0x84, 0xA1, 0x67, 0xB7, 0xB6, 0x20, 0x7B, 0xA1, 0xE6, 
	0xF3, 0xF4, 0x0E, 0xB4, 0x24, 0x6A, 0x8C, 0x10, 0xD4, 0x89, 
	0x4A, 0xAE, 0x12, 0x3E, 0x0D, 0xF5, 0x63, 0x8C, 0x24, 0x19, 
	0x9B, 0xD3, 0x36, 0xA9, 0xB4, 0x66, 0x8B, 0xCA, 0x9A, 0xA9, 
	0xDD, 0xAE, 0x9B, 0x1A, 0x51, 0xFF, 0x57, 0x59, 0x6D, 0x8E, 
	0x57, 0x1A, 0xA8, 0x41, 0xB7, 0x1B, 0xDD, 0x8A, 0xF4, 0xB8, 
	0x63, 0x90, 0xD5, 0xDD, 0x6E, 0xB5, 0x3A, 0x5E, 0x06, 0xAA, 
	0xD3, 0xD8, 0x1A, 0xB3, 0x2C, 0xF2, 0xE3, 0xB6, 0xCA, 0xCF, 
	0xDC, 0x5B, 0xB9, 0x3A, 0xBD, 0xAA, 0x9A, 0x27, 0x65, 0x42, 
	0xB5, 0xA5, 0x4A, 0x9E, 0x90, 0x7C, 0xB2, 0xFA, 0xBB, 0x21, 
	0xFD, 0xB7, 0x11, 0xAC, 0xCB, 0xEA, 0xFE, 0x39, 0x47, 0x17, 
	0xF4, 0x78, 0x32, 0xB7, 0x21, 0x90, 0xB3, 0x38, 0xBE, 0x8E, 
	0x82, 0xBF, 0xAA, 0x17, 0x4E, 0xF4, 0x9B, 0x94, 0x5E, 0xB8, 
	0x65, 0xB4, 0x8C, 0x9D, 0xAE, 0x8A, 0x35, 0x5F, 0x1A, 0x9D, 
	0x4E, 0x68, 0x18, 0x9B, 0x04, 0x1B, 0x7D, 0x3A, 0x6A, 0x3D, 
	0x31, 0xB8, 0x67, 0x38, 0xED, 0xEF, 0xD2, 0x49, 0x78, 0xA4, 
	0xBF, 0x30, 0xFA, 0x10, 0xE3, 0x3D, 0xB5, 0x3C, 0xB7, 0x82, 
	0xF2, 0x55, 0x92, 0x74, 0x4C, 0xF8, 0xF8, 0x4D, 0x91, 0x0E, 
	0x7F, 0x9F, 0x7C, 0x2F, 0x91, 0x40, 0xCF, 0xE8, 0xD7, 0x00, 
	0x68, 0x66, 0xBA, 0x6B, 0xB4, 0x37, 0xEC, 0x99, 0x66, 0x4A, 
	0x2B, 0xC7, 0xCF, 0xC7, 0xF0, 0x3B, 0x9E, 0x5F, 0xDC, 0x9A, 
	0x4E, 0x27, 0x3A, 0x3C, 0xA3, 0xCD, 0x32, 0x06, 0xFD, 0x6D, 
	0x17, 0xF1, 0x86, 0xC1, 0x52, 0x08, 0x51, 0xDB, 0xA3, 0xFD, 
	0x52, 0x22, 0x16, 0xF3, 0xB1, 0x9E, 0x1F, 0x86, 0x2D, 0x99, 
	0x7E, 0x38, 0xBF, 0x54, 0xE9, 0x95, 0x91, 0x3F, 0x9A, 0x80, 
	0x80, 0x20, 0x7D, 0x01, 0x47, 0xC8, 0x1B, 0x81, 0x2E, 0x07, 
	0xA7, 0xA8, 0x67, 0x19, 0xE2, 0xFF, 0x51, 0x4C, 0xF2, 0xA9, 
	0x9C, 0x69, 0x70, 0xCF, 0x13, 0x03, 0x10, 0x5A, 0x51, 0x5F, 
	0x98, 0x18, 0x31, 0x7C, 0xFA, 0xFE, 0x5D, 0x27, 0x47, 0xAC, 
	0x0D, 0x73, 0x6B, 0x0D, 0x47, 0x3F, 0x14, 0x5E, 0xFD, 0x65, 
	0x11, 0x49, 0xAF, 0x5D, 0xF9, 0x75, 0x4E, 0x98, 0xEA, 0xE3, 
	0xC6, 0x54, 0x1C, 0xFF, 0x5E, 0x88, 0xAF, 0x77, 0x47, 0x13, 
	0x79, 0xAE, 0x16, 0x4F, 0x49, 0xA3, 0x91, 0xAC, 0xD1, 0xD5, 
	0x04, 0xB8, 0xE8, 0xA8, 0x18, 0x79, 0xEA, 0xD4, 0x42, 0x78, 
	0x96, 0xF7, 0xE0, 0xD9, 0x12, 0x28, 0x3E, 0x04, 0x15, 0x86, 
	0xD9, 0xA7, 0x78, 0xFC, 0x99, 0x7B, 0xA0, 0xE6, 0x53, 0x24, 
	0xC4, 0xC2, 0xB2, 0x16, 0x6D, 0x4F, 0x1E, 0x68, 0x49, 0xE3, 
	0x8D, 0x54, 0x42, 0x6F, 0xA4, 0xDA, 0xB2, 0x63, 0xE3, 0xA4, 
	0x0D, 0x8E, 0xBD, 0x59, 0xFD, 0x6D, 0x2D, 0x18, 0x65, 0x3D, 
	0xAE, 0xF4, 0x7C, 0x92, 0xF5, 0xB8, 0x39, 0xB1, 0xF0, 0x3C, 
	0x09, 0xD9, 0xB7, 0x29, 0xF7, 0x98, 0xF2, 0x3E, 0xF6, 0x17, 
	0xA0, 0x7A, 0xF2, 0x4D, 0x52, 0x05, 0x2E, 0xDF, 0xCC, 0xC8, 
	0xF2, 0x95, 0x07, 0xA1, 0xBB, 0x36, 0x8E, 0x7E, 0x0C, 0x2A, 
	0x0B, 0x50, 0xF1, 0xAD, 0x8A, 0xE4, 0x4D, 0x41, 0xA1, 0xBD, 
	0xB7, 0xF7, 0xF4, 0x78, 0xDD, 0xD1, 0xB5, 0xA6, 0x96, 0x03, 
	0xF8, 0xF1, 0xB8, 0x0B, 0x6D, 0x89, 0x79, 0xAD, 0x04, 0x2E, 
	0x0D, 0xE0, 0x02, 0x7B, 0x7B, 0xBF, 0x45, 0xAB, 0x18, 0xB7, 
	0xB7, 0x47, 0x06, 0xB0, 0xFB, 0xEB, 0x42, 0xDA, 0xE6, 0x47, 
	0xAF, 0x0C, 0xB5, 0xD5, 0x8B, 0x42, 0xAD, 0x66, 0x14, 0x28, 
	0x09, 0x0D, 0x69, 0x6D, 0x6A, 0x97, 0x4F, 0x80, 0xB8, 0x05, 
	0x4E, 0xFB, 0x20, 0xBF, 0xE1, 0x5C, 0x7B, 0xCB, 0x9A, 0xD5, 
	0x13, 0x07, 0x29, 0x3B, 0xD9, 0xE6, 0xB4, 0xE0, 0x90, 0x41, 
	0xDD, 0x4B, 0xF8, 0xEB, 0xCB, 0x64, 0x64, 0x7A, 0x89, 0xE4, 
	0xC4, 0x70, 0xD1, 0x2D, 0x97, 0x25, 0x6B, 0x7E, 0x1C, 0xA1, 
	0xA4, 0x39, 0x69, 0xF1, 0xE6, 0x28, 0x05, 0x94, 0x36, 0xB4, 
	0x96, 0x35, 0x63, 0xD5, 0xF6, 0x29, 0x4F, 0x9F, 0x09, 0xD9, 
	0x2A, 0xFA, 0x8F, 0x56, 0x51, 0xDF, 0xDB, 0xF4, 0x8A, 0xBE, 
	0xBC, 0x65, 0xC5, 0x3C, 0xFD, 0x08, 0x47, 0xC7, 0x59, 0xE6, 
	0xDF, 0xF7, 0xA2, 0x9C, 0xDA, 0x75, 0x8E, 0xE0, 0xDA, 0x11, 
	0xBE, 0x68, 0x42, 0x41, 0x44, 0x6E, 0x13, 0xA6, 0xDD, 0x8E, 
	0xBA, 0x69, 0xD7, 0xC0, 0x83, 0x13, 0xEF, 0xCD, 0xF8, 0x71, 
	0xF5, 0x68, 0x84, 0x26, 0x90, 0xCE, 0x94, 0xB4, 0x0A, 0x8C, 
	0x67, 0xA0, 0x83, 0xB3, 0xE7, 0xCD, 0xB5, 0xA5, 0x58, 0xCF, 
	0x78, 0x5E, 0x11, 0x37, 0x02, 0x4E, 0x1D, 0xF7, 0xD9, 0x54, 
	0x3B, 0xFB, 0xD1, 0x49, 0x92, 0x35, 0x7A, 0xE8, 0x7C, 0xA3, 
	0x33, 0x71, 0xCF, 0xC1, 0xBC, 0x81, 0x14, 0xF5, 0x79, 0x04, 
	0x51, 0x6F, 0x8D, 0xD8, 0x35, 0x84, 0x5B, 0xA8, 0xED, 0x1A, 
	0x3C, 0xD5, 0xDA, 0x75, 0xF2, 0xBA, 0x14, 0xB7, 0xCF, 0xA5, 
	0xC8, 0x0A, 0x39, 0x8E, 0xB6, 0xC0, 0x5A, 0xD0, 0xAC, 0xA5, 
	0x1F, 0xA5, 0x7B, 0x7B, 0xE2, 0xDB, 0xD7, 0xC9, 0xED, 0xB4, 
	0x21, 0xCE, 0xD5, 0xC0, 0x53, 0x82, 0xFC, 0xDC, 0x59, 0xCD, 
	0xFB, 0xDB, 0x42, 0x04, 0xC2, 0xCE, 0x3A, 0xA4, 0xEC, 0xF4, 
	0x48, 0xFF, 0xFE, 0x3D, 0xDC, 0x20, 0x09, 0x48, 0xEB, 0xD7, 
	0x60, 0x86, 0x4C, 0xFA, 0x66, 0xBB, 0x42, 0x86, 0x46, 0xAD, 
	0x0D, 0x63, 0xC6, 0xD4, 0x4D, 0xDB, 0x5B, 0x38, 0x3B, 0xFB, 
	0x4F, 0x71, 0x13, 0x4A, 0xF4, 0xA5, 0x47, 0x23, 0xFD, 0x85, 
	0xE9, 0x1A, 0xDB, 0x0D, 0x16, 0xCC, 0x7D, 0x57, 0x93, 0x5D, 
	0xFC, 0x12, 0x7D, 0x8B, 0x92, 0xBE, 0x4E, 0xE7, 0xF1, 0x91, 
	0xCA, 0xA7, 0x8F, 0xF2, 0xB7, 0x4D, 0xE5, 0x9B, 0xFE, 0x87, 
	0xB2, 0xA6, 0x40, 0x1F, 0x20, 0xC9, 0xD1, 0xEF, 0x2A, 0x0D, 
	0xEF, 0x1F, 0xA8, 0x74, 0x34, 0xF3, 0x6F, 0xA2, 0xF8, 0xDE, 
	0x3D, 0xC6, 0xF4, 0x58, 0x3B, 0x83, 0x58, 0xC3, 0xB0, 0x76, 
	0xA4, 0xE5, 0x7E, 0x92, 0x77, 0x73, 0x48, 0x9A, 0x67, 0x5E, 
	0xF7, 0x8E, 0x5D, 0x7D, 0x8D, 0x8A, 0xEE, 0x22, 0xC3, 0x1A, 
	0x58, 0x80, 0x5F, 0x40, 0x77, 0xFD, 0xF0, 0xCB, 0x32, 0x2F, 
	0x5C, 0xF6, 0xCD, 0x0F, 0x0A, 0xEF, 0x11, 0xCB, 0x68, 0xB5, 
	0xFC, 0x77, 0x6E, 0x29, 0x0F, 0xCA, 0x15, 0x95, 0xCB, 0x5C, 
	0xE5, 0x99, 0x45, 0x7F, 0x94, 0x3C, 0x8D, 0xA3, 0x50, 0x31, 
	0x20, 0xAB, 0x57, 0x16, 0x90, 0x4F, 0x81, 0x73, 0xB9, 0x0E, 
	0x76, 0x6E, 0xFC, 0xEC, 0x3A, 0x4A, 0x5C, 0xC5, 0x74, 0x14, 
	0x5D, 0x81, 0x7F, 0x9E, 0x82, 0x1F, 0xB9, 0x5F, 0x67, 0xE9, 
	0x32, 0x09, 0x39, 0x3A, 0xF7, 0xD9, 0xD5, 0x21, 0xFE, 0xF5, 
	0xC4, 0x9E, 0xDD, 0xCC, 0x0F, 0xA3, 0x65, 0xCE, 0x97, 0xAF, 
	0x63, 0xEF, 0xC5, 0x57, 0xCA, 0x43, 0x89, 0x1D, 0xF0, 0x09, 
	0xCC, 0xF8, 0x71, 0x1F, 0xFC, 0x69, 0x6E, 0x62, 0xE1, 0x26, 
	0x6B, 0x18, 0x95, 0x67, 0x8C, 0xFE, 0xAC, 0x68, 0x05, 0xD2, 
	0xE8, 0xEF, 0x8A, 0xE0, 0x12, 0xB0, 0xE5, 0x22, 0xC6, 0x2B, 
	0xAB, 0x54, 0x82, 0x0B, 0x18, 0x7E, 0xEE, 0x08, 0x2B, 0xA3, 
	0x84, 0x17, 0x16, 0x61, 0x31, 0x5E, 0x6F, 0x36, 0xD0, 0x8E, 
	0xD7, 0x6B, 0x14, 0xDE, 0x9A, 0x08, 0xFC, 0x30, 0x98, 0x85, 
	0xC3, 0x8D, 0xFC, 0xCE, 0x4E, 0x61, 0x05, 0xAF, 0x99, 0xC5, 
	0x6C, 0x56, 0x78, 0x2B, 0xD1, 0x1F, 0xD2, 0x9F, 0x4D, 0xA2, 
	0x37, 0x37, 0xB2, 0x5D, 0x71, 0xBD, 0x41, 0x46, 0x9B, 0x88, 
	0x8D, 0x33, 0xC0, 0x1C, 0xC4, 0xCC, 0xCF, 0x04, 0xE6, 0x47, 
	0x65, 0x23, 0x79, 0x73, 0x1B, 0xE6, 0x55, 0x8A, 0xA6, 0xDD, 
	0xD6, 0x27, 0x3E, 0x43, 0x13, 0xAE, 0xE6, 0x75, 0x8B, 0x74, 
	0xE1, 0xE2, 0x47, 0xB4, 0x28, 0xA7, 0xF5, 0xC9, 0x73, 0x13, 
	0x79, 0xAE, 0x6A, 0xA1, 0x8A, 0x8D, 0xF3, 0x64, 0x99, 0x2B, 
	0x95, 0xD0, 0x4B, 0xB4, 0x3A, 0xD8, 0x17, 0xEC, 0x87, 0x16, 
	0x56, 0x4A, 0xC1, 0x70, 0x36, 0x8B, 0x41, 0x67, 0x76, 0x78, 
	0x65, 0x7B, 0x0A, 0xEF, 0xDE, 0xE1, 0x7F, 0x39, 0xDB, 0xD5, 
	0xF8, 0xF2, 0x93, 0x65, 0xA1, 0x3C, 0x2C, 0xC4, 0xFF, 0x29, 
	0x72, 0x95, 0x59, 0xF4, 0x8D, 0x85, 0xB8, 0x18, 0xBF, 0xAA, 
	0x76, 0x15, 0x22, 0x93, 0x2A, 0x9B, 0xE2, 0x79, 0x83, 0xE9, 
	0xD9, 0xA7, 0xC7, 0xAF, 0x1D, 0xBD, 0xC4, 0xAE, 0x08, 0xF4, 
	0x95, 0x21, 0x1A, 0xB0, 0x4E, 0xE1, 0x94, 0x6F, 0xE2, 0x97, 
	0x60, 0x21, 0xFE, 0x67, 0x52, 0x9F, 0x53, 0x90, 0xA4, 0x09, 
	0x2C, 0xDF, 0x62, 0xA5, 0xA5, 0x74, 0x6C, 0xD8, 0x93, 0x14, 
	0x23, 0xBE, 0xD1, 0x55, 0xC4, 0x37, 0xBA, 0x4D, 0xB6, 0x71, 
	0xE2, 0x26, 0xBB, 0xC5, 0x2F, 0xE9, 0x1E, 0xA4, 0xDA, 0x03, 
	0xAF, 0x2B, 0x80, 0xE6, 0x7A, 0x2C, 0x2C, 0x1E, 0xA4, 0x82, 
	0xAE, 0xB7, 0x62, 0x18, 0x58, 0x9D, 0xCD, 0x66, 0x5E, 0xC9, 
	0x98, 0xAE, 0x98, 0xA0, 0x21, 0xD3, 0x13, 0x24, 0x95, 0xDD, 
	0x4D, 0xEE, 0xCA, 0xED, 0x5B, 0xF2, 0x6D, 0x6E, 0xE8, 0x9B, 
	0x54, 0x29, 0xFC, 0x66, 0x93, 0xDB, 0x2C, 0x94, 0x87, 0x52, 
	0xE4, 0xE5, 0x7A, 0xC9, 0xA2, 0x8C, 0xCD, 0x1E, 0xFA, 0xAF, 
	0x1B, 0x16, 0x46, 0xBE, 0x42, 0xD1, 0x10, 0x4C, 0x50, 0xE8, 
	0xBB, 0x92, 0x2E, 0x0A, 0x5B, 0xF9, 0x2D, 0xBA, 0x59, 0xA4, 
	0x59, 0xE1, 0x27, 0x10, 0x1C, 0x1F, 0x55, 0x7E, 0x47, 0xC5, 
	0x4F, 0xD2, 0xBA, 0x06, 0xFF, 0x34, 0x0D, 0xF3, 0x21, 0xFA, 
	0x2C, 0xCB, 0xFB, 0x3F, 0x20, 0xF0, 0x31, 0x88, 0x46, 0x42, 
	0x00, 0x00, 
};

	// Default Controller Configuration (len=440)
static const uint8_t defaultControllerConfig[] PROGMEM = {
		
	0x01, 0x8D, 0x0C, 0x05, 0x61, 0x01, 0x00, 0x01, 0x00, 0x05, 
	0x61, 0x02, 0x00, 0x01, 0x00, 0x0C, 0x05, 0x61, 0x01, 0x00, 
	0x02, 0x00, 0x05, 0x61, 0x02, 0x00, 0x02, 0x00, 0x0C, 0x05, 
	0x61, 0x01, 0x00, 0x03, 0x00, 0x05, 0x61, 0x02, 0x00, 0x03, 
	0x00, 0x0C, 0x05, 0x61, 0x01, 0x00, 0x04, 0x00, 0x05, 0x61, 
	0x02, 0x00, 0x04, 0x00, 0x0C, 0x05, 0x61, 0x01, 0x00, 0x05, 
	0x00, 0x05, 0x61, 0x02, 0x00, 0x05, 0x00, 0x0C, 0x05, 0x61, 
	0x01, 0x00, 0x06, 0x00, 0x05, 0x61, 0x02, 0x00, 0x06, 0x00, 
	0x0C, 0x05, 0x61, 0x01, 0x00, 0x07, 0x00, 0x05, 0x61, 0x02, 
	0x00, 0x07, 0x00, 0x0C, 0x05, 0x61, 0x01, 0x00, 0x08, 0x00, 
	0x05, 0x61, 0x02, 0x00, 0x08, 0x00, 0x0C, 0x05, 0x61, 0x01, 
	0x00, 0x09, 0x00, 0x05, 0x61, 0x02, 0x00, 0x09, 0x00, 0x0C, 
	0x05, 0x61, 0x01, 0x00, 0x0A, 0x00, 0x05, 0x61, 0x02, 0x00, 
	0x0A, 0x00, 0x11, 0x05, 0x61, 0x00, 0x00, 0x01, 0x00, 0x0A, 
	0x61, 0x0A, 0x00, 0x01, 0x00, 0x71, 0x13, 0x01, 0x02, 0x00, 
	0x11, 0x05, 0x61, 0x00, 0x00, 0x02, 0x00, 0x0A, 0x61, 0x0A, 
	0x00, 0x02, 0x00, 0x71, 0x13, 0x02, 0x02, 0x00, 0x11, 0x05, 
	0x61, 0x00, 0x00, 0x03, 0x00, 0x0A, 0x61, 0x0A, 0x00, 0x03, 
	0x00, 0x71, 0x13, 0x03, 0x02, 0x00, 0x11, 0x05, 0x61, 0x00, 
	0x00, 0x04, 0x00, 0x0A, 0x61, 0x0A, 0x00, 0x04, 0x00, 0x71, 
	0x13, 0x04, 0x02, 0x00, 0x11, 0x05, 0x61, 0x00, 0x00, 0x05, 
	0x00, 0x0A, 0x61, 0x0A, 0x00, 0x05, 0x00, 0x71, 0x13, 0x05, 
	0x02, 0x00, 0x11, 0x05, 0x61, 0x00, 0x00, 0x06, 0x00, 0x0A, 
	0x61, 0x0A, 0x00, 0x06, 0x00, 0x71, 0x13, 0x06, 0x02, 0x00, 
	0x11, 0x05, 0x61, 0x00, 0x00, 0x07, 0x00, 0x0A, 0x61, 0x0A, 
	0x00, 0x07, 0x00, 0x71, 0x13, 0x07, 0x02, 0x00, 0x11, 0x05, 
	0x61, 0x00, 0x00, 0x08, 0x00, 0x0A, 0x61, 0x0A, 0x00, 0x08, 
	0x00, 0x71, 0x13, 0x08, 0x02, 0x00, 0x11, 0x05, 0x61, 0x00, 
	0x00, 0x09, 0x00, 0x0A, 0x61, 0x0A, 0x00, 0x09, 0x00, 0x71, 
	0x13, 0x09, 0x02, 0x00, 0x11, 0x05, 0x61, 0x00, 0x00, 0x0A, 
	0x00, 0x0A, 0x61, 0x0A, 0x00, 0x0A, 0x00, 0x71, 0x13, 0x0A, 
	0x02, 0x00, 0x04, 0x03, 0x21, 0x0E, 0x00, 0x04, 0x03, 0x21, 
	0x0F, 0x00, 0x04, 0x03, 0x21, 0x10, 0x00, 0x09, 0x08, 0x41, 
	0x07, 0x00, 0x00, 0x51, 0x07, 0x01, 0x00, 0x05, 0x04, 0x4F, 
	0x01, 0x01, 0x02, 0x0B, 0x0A, 0x61, 0x02, 0x00, 0x18, 0x00, 
	0x71, 0x02, 0x00, 0x19, 0x00, 0x05, 0x04, 0x4F, 0x03, 0x01, 
	0x01, 0x04, 0x03, 0x21, 0x12, 0x00, 0x13, 0x12, 0x61, 0x00, 
	0x00, 0x00, 0x00, 0x21, 0x17, 0x00, 0x41, 0x21, 0x00, 0x00, 
	0x21, 0x27, 0x00, 0x2F, 0x00, 0x01, 0x03, 0x02, 0x0F, 0x0A, 
	0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 0xFF, 0xC0, 
	0xA8, 0x0A, 0x63, 0xFF, 0xFF, 0xFF, 0x00, 0x0A, 0x01, 0xC0, 
	0xA8, 0x0A, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x02, 
	0x4E, 0x6F, 0x72, 0x6D, 0x61, 0x6C, 0x00, 0x53, 0x74, 0x69, 
	0x6C, 0x6C, 0x20, 0x53, 0x65, 0x6C, 0x65, 0x63, 0x74, 0x00, 
};

#endif


#define SK_HWEN_STDOLEDDISPLAY 1
#define SK_HWEN_SLIDER 1
#define SK_HWEN_SSWMENU 1
SkaarhojBI8 buttons;
SkaarhojBI8 buttons2;