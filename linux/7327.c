cocci_test_suite() {
	struct stifb_info cocci_id/* drivers/video/fbdev/stifb.c 988 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/stifb.c 986 */;
	u32 *cocci_id/* drivers/video/fbdev/stifb.c 956 */;
	struct {
		__s16 sizeof_ngle_data;
		__s16 x_size_visible;
		__s16 y_size_visible;
		__s16 pad2[15];
		__s16 cursor_pipeline_delay;
		__s16 video_interleaves;
		__s32 pad3[11];
	} cocci_id/* drivers/video/fbdev/stifb.c 95 */;
	u_int cocci_id/* drivers/video/fbdev/stifb.c 925 */;
	void __init cocci_id/* drivers/video/fbdev/stifb.c 880 */;
	struct {
		__s32 video_config_reg;
		__s32 misc_video_start;
		__s32 horiz_timing_fmt;
		__s32 serr_timing_fmt;
		__s32 vert_timing_fmt;
		__s32 horiz_state;
		__s32 vert_state;
		__s32 vtg_state_elements;
		__s32 pipeline_delay;
		__s32 misc_video_end;
	} cocci_id/* drivers/video/fbdev/stifb.c 82 */;
	NgleLutBltCtl cocci_id/* drivers/video/fbdev/stifb.c 598 */;
	union {
		u32 all;
		struct {
			unsigned enable:1;
			unsigned waitBlank:1;
			unsigned reserved1:4;
			unsigned lutOffset:10;
			unsigned lutType:2;
			unsigned reserved2:4;
			unsigned length:10;
		} fields;
	} cocci_id/* drivers/video/fbdev/stifb.c 543 */;
	unsigned cocci_id/* drivers/video/fbdev/stifb.c 463 */;
	u32 cocci_id/* drivers/video/fbdev/stifb.c 330 */;
	struct stifb_info *cocci_id/* drivers/video/fbdev/stifb.c 328 */;
	int cocci_id/* drivers/video/fbdev/stifb.c 328 */;
	void cocci_id/* drivers/video/fbdev/stifb.c 327 */;
	unsigned int cocci_id/* drivers/video/fbdev/stifb.c 320 */;
	char cocci_id/* drivers/video/fbdev/stifb.c 189 */;
	int __init cocci_id/* drivers/video/fbdev/stifb.c 1425 */;
	struct sti_struct *cocci_id/* drivers/video/fbdev/stifb.c 1404 */;
	void __exit cocci_id/* drivers/video/fbdev/stifb.c 1401 */;
	char *cocci_id/* drivers/video/fbdev/stifb.c 1362 */;
	int __init cocci_id/* drivers/video/fbdev/stifb.c 1355 */;
	int __init cocci_id/* drivers/video/fbdev/stifb.c 1352 */(char *options);
	int __initdata cocci_id/* drivers/video/fbdev/stifb.c 114 */[MAX_STI_ROMS];
	unsigned long cocci_id/* drivers/video/fbdev/stifb.c 1124 */;
	struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/stifb.c 1121 */;
	struct fb_fix_screeninfo *cocci_id/* drivers/video/fbdev/stifb.c 1120 */;
	struct fb_ops cocci_id/* drivers/video/fbdev/stifb.c 1104 */;
	struct stifb_info {
		struct fb_info info;
		unsigned int id;
		ngle_rom_t ngle_rom;
		struct sti_struct *sti;
		int deviceSpecificConfig;
		u32 pseudo_palette[16];
	} cocci_id/* drivers/video/fbdev/stifb.c 105 */;
	const struct fb_copyarea *cocci_id/* drivers/video/fbdev/stifb.c 1015 */;
}
