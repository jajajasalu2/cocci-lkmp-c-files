cocci_test_suite() {
	struct pixel_clock *cocci_id/* drivers/video/fbdev/atafb.c 905 */;
	long cocci_id/* drivers/video/fbdev/atafb.c 856 */[4];
	int cocci_id/* drivers/video/fbdev/atafb.c 851 */[4][3];
	struct pixel_clock {
		unsigned long f;
		unsigned long t;
		int right,hsync,left;
		int sync_mask;
		int control_mask;
	} cocci_id/* drivers/video/fbdev/atafb.c 835 */;
	char **cocci_id/* drivers/video/fbdev/atafb.c 544 */;
	char ***cocci_id/* drivers/video/fbdev/atafb.c 543 */;
	struct fb_videomode cocci_id/* drivers/video/fbdev/atafb.c 467 */[]__initdata;
	struct fb_var_screeninfo cocci_id/* drivers/video/fbdev/atafb.c 407 */[];
	char **cocci_id/* drivers/video/fbdev/atafb.c 390 */[];
	char *cocci_id/* drivers/video/fbdev/atafb.c 376 */[];
	struct fb_hwswitch {
		int (*detect)(void);
		int (*encode_fix)(struct fb_fix_screeninfo *fix,
				  struct atafb_par *par);
		int (*decode_var)(struct fb_var_screeninfo *var,
				  struct atafb_par *par);
		int (*encode_var)(struct fb_var_screeninfo *var,
				  struct atafb_par *par);
		void (*get_par)(struct atafb_par *par);
		void (*set_par)(struct atafb_par *par);
		void (*set_screen_base)(void *s_base);
		int (*blank)(int blank_mode);
		int (*pan_display)(struct fb_var_screeninfo *var,
				   struct fb_info *info);
	} *cocci_id/* drivers/video/fbdev/atafb.c 360 */;
	struct platform_device *cocci_id/* drivers/video/fbdev/atafb.c 3244 */;
	int __init cocci_id/* drivers/video/fbdev/atafb.c 3242 */;
	struct platform_driver cocci_id/* drivers/video/fbdev/atafb.c 3235 */;
	char *cocci_id/* drivers/video/fbdev/atafb.c 3060 */;
	void __init cocci_id/* drivers/video/fbdev/atafb.c 2788 */;
	struct fb_var_screeninfo cocci_id/* drivers/video/fbdev/atafb.c 2751 */;
	char cocci_id/* drivers/video/fbdev/atafb.c 2749 */[10];
	struct fb_ops cocci_id/* drivers/video/fbdev/atafb.c 2734 */;
	struct atafb_par cocci_id/* drivers/video/fbdev/atafb.c 2702 */;
	struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/atafb.c 2699 */;
	unsigned short cocci_id/* drivers/video/fbdev/atafb.c 2677 */;
	struct fb_cmap cocci_id/* drivers/video/fbdev/atafb.c 2673 */;
	unsigned short cocci_id/* drivers/video/fbdev/atafb.c 2672 */[16];
	struct fb_info *cocci_id/* drivers/video/fbdev/atafb.c 2670 */;
	void *cocci_id/* drivers/video/fbdev/atafb.c 2646 */;
	unsigned int cocci_id/* drivers/video/fbdev/atafb.c 2641 */;
	unsigned long cocci_id/* drivers/video/fbdev/atafb.c 2607 */;
	const char *cocci_id/* drivers/video/fbdev/atafb.c 2580 */;
	unsigned long *cocci_id/* drivers/video/fbdev/atafb.c 2578 */;
	const struct fb_image *cocci_id/* drivers/video/fbdev/atafb.c 2574 */;
	u32 cocci_id/* drivers/video/fbdev/atafb.c 2524 */;
	const struct fb_copyarea *cocci_id/* drivers/video/fbdev/atafb.c 2520 */;
	unsigned char cocci_id/* drivers/video/fbdev/atafb.c 250 */[];
	const struct fb_fillrect *cocci_id/* drivers/video/fbdev/atafb.c 2477 */;
	u_int cocci_id/* drivers/video/fbdev/atafb.c 2418 */;
	struct fb_fix_screeninfo cocci_id/* drivers/video/fbdev/atafb.c 2390 */;
	struct fb_fix_screeninfo *cocci_id/* drivers/video/fbdev/atafb.c 2382 */;
	int *cocci_id/* drivers/video/fbdev/atafb.c 238 */;
	struct atafb_par *cocci_id/* drivers/video/fbdev/atafb.c 2341 */;
	void cocci_id/* drivers/video/fbdev/atafb.c 2341 */;
	struct fb_hwswitch cocci_id/* drivers/video/fbdev/atafb.c 2331 */;
	unsigned char cocci_id/* drivers/video/fbdev/atafb.c 2214 */;
	volatile unsigned char *cocci_id/* drivers/video/fbdev/atafb.c 2201 */;
	int cocci_id/* drivers/video/fbdev/atafb.c 219 */[256];
	int cocci_id/* drivers/video/fbdev/atafb.c 216 */[16];
	int cocci_id/* drivers/video/fbdev/atafb.c 213 */[2];
	enum cardtype cocci_id/* drivers/video/fbdev/atafb.c 207 */;
	enum cardtype{IS_VGA, IS_MV300,} cocci_id/* drivers/video/fbdev/atafb.c 206 */;
	unsigned char *cocci_id/* drivers/video/fbdev/atafb.c 1749 */;
	u32 *cocci_id/* drivers/video/fbdev/atafb.c 1698 */;
	struct fb_info cocci_id/* drivers/video/fbdev/atafb.c 164 */;
	volatile unsigned short *cocci_id/* drivers/video/fbdev/atafb.c 1603 */;
	irqreturn_t cocci_id/* drivers/video/fbdev/atafb.c 1594 */;
	struct falcon_hw cocci_id/* drivers/video/fbdev/atafb.c 1532 */;
	int cocci_id/* drivers/video/fbdev/atafb.c 139 */;
	struct falcon_hw *cocci_id/* drivers/video/fbdev/atafb.c 1376 */;
	struct atafb_par {
		void *screen_base;
		int yres_virtual;
		u_long next_line;
#if defined ATAFB_TT || defined ATAFB_STE
		union {
			struct {
				int mode;
				int sync;
			} tt,st;
#endif
#ifdef ATAFB_FALCON
			struct falcon_hw {
				short sync;
				short line_width;
				short line_offset;
				short st_shift;
				short f_shift;
				short vid_control;
				short vid_mode;
				short xoffset;
				short hht,hbb,hbe,hdb,hde,hss;
				short vft,vbb,vbe,vdb,vde,vss;
				short mono;
				short ste_mode;
				short bpp;
				u32 pseudo_palette[16];
			} falcon;
#endif
		} hw;
	} cocci_id/*  1 */;
}
