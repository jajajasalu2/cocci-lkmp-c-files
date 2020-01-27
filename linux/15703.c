cocci_test_suite() {
	enum st7789v_command{PORCTRL=0xB2, GCTRL=0xB7, VCOMS=0xBB, VDVVRHEN=0xC2, VRHS=0xC3, VDVS=0xC4, VCMOFSET=0xC5, PWCTRL1=0xD0, PVGAMCTRL=0xE0, NVGAMCTRL=0xE1,} cocci_id/* drivers/staging/fbtft/fb_st7789v.c 45 */;
	struct fbtft_display cocci_id/* drivers/staging/fbtft/fb_st7789v.c 231 */;
	bool cocci_id/* drivers/staging/fbtft/fb_st7789v.c 222 */;
	struct fbtft_par *cocci_id/* drivers/staging/fbtft/fb_st7789v.c 222 */;
	int cocci_id/* drivers/staging/fbtft/fb_st7789v.c 222 */;
	const u8 cocci_id/* drivers/staging/fbtft/fb_st7789v.c 183 */[];
	u32 *cocci_id/* drivers/staging/fbtft/fb_st7789v.c 172 */;
	u8 cocci_id/* drivers/staging/fbtft/fb_st7789v.c 135 */;
}
