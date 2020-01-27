cocci_test_suite() {
	struct matroxfb_dh_fb_info *cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 946 */;
	struct matrox_altout *cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 911 */;
	struct matroxioc_output_mode cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 910 */;
	u_int32_t __user *cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 903 */;
	struct fb_vblank cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 889 */;
	void __user *cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 877 */;
	struct matrox_altout cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 870 */;
	struct fb_vblank *cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 842 */;
	struct matrox_hw_state *cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 784 */;
	struct my_timming cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 783 */;
	struct fb_fix_screeninfo *cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 707 */;
	struct matrox_fb_info cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 647 */;
	unsigned cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 643 */;
	const struct RGBT *cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 550 */;
	const struct RGBT cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 543 */[];
	struct RGBT {
		unsigned char bpp;
		struct {
			unsigned char offset,length;
		} red,green,blue,transp;
		signed char visual;
	} cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 532 */;
	unsigned int *cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 530 */;
	int *cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 529 */;
	const struct matrox_fb_info *cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 528 */;
	const int *cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 483 */;
	unsigned short cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 311 */;
	struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 308 */;
	struct matrox_vsync *cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 271 */;
	int __init cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 2564 */;
	void cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 2564 */;
	char *cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 2458 */;
	int __initdata cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 2454 */;
	void __exit cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 2309 */;
	void __init cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 2254 */;
	struct {
		unsigned int vesa;
		unsigned int info;
	} *cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 2198 */;
	struct {
		int xres,yres,left,right,upper,lower,hslen,vslen,vfreq;
	} cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 2179 */[]__initdata;
	struct pci_driver cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 2153 */;
	u_int16_t cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 2031 */;
	const struct pci_device_id *cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 2029 */;
	struct pci_dev *cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 2029 */;
	irqreturn_t cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 202 */;
	void *cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 202 */;
	struct matroxfb_driver *cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 1998 */;
	struct matroxfb_driver cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 1955 */;
	struct fb_var_screeninfo cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 1875 */;
	u_int32_t cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 1728 */;
	const struct pci_device_id cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 1627 */[];
	unsigned long cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 1622 */;
	struct matrox_fb_info *cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 1620 */;
	struct board *cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 1620 */;
	char cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 1600 */;
	const char *cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 1589 */;
	const struct fb_videomode cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 1577 */;
	struct board {
		unsigned short vendor,device,rev,svid,sid;
		unsigned int flags;
		unsigned int maxclk;
		enum mga_chip chip;
		struct video_board *base;
		const char *name;
	} cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 1414 */[];
	struct video_board cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 1366 */;
	struct video_board {
		int maxvram;
		int maxdisplayable;
		int accelID;
		struct matrox_switch *lowlevel;
	} cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 1329 */;
	unsigned char *cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 1288 */;
	unsigned char cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 1287 */[32];
	unsigned char cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 1286 */;
	vaddr_t cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 1283 */;
	char cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 1277 */[64];
	char cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 1274 */[8];
	unsigned int cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 1269 */;
	void cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 125 */(struct matrox_fb_info *minfo);
	int cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 1243 */;
	struct {
		struct fb_bitfield red,green,blue,transp;
		int bits_per_pixel;
	} cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 1228 */[];
	const struct fb_ops cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 1202 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 1171 */;
	struct v4l2_control cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 1126 */;
	struct v4l2_queryctrl cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 1104 */;
	struct v4l2_capability cocci_id/* drivers/video/fbdev/matrox/matroxfb_base.c 1089 */;
}
