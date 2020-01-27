cocci_test_suite() {
	struct leo_cursor {
		u8 xxx0[16];
		u32 cur_type;
		u32 cur_misc;
		u32 cur_cursxy;
		u32 cur_data;
	} cocci_id/* drivers/video/fbdev/leo.c 80 */;
	void __exit cocci_id/* drivers/video/fbdev/leo.c 680 */;
	void cocci_id/* drivers/video/fbdev/leo.c 680 */;
	int __init cocci_id/* drivers/video/fbdev/leo.c 672 */;
	struct platform_driver cocci_id/* drivers/video/fbdev/leo.c 663 */;
	const struct of_device_id cocci_id/* drivers/video/fbdev/leo.c 655 */[];
	struct leo_cursor cocci_id/* drivers/video/fbdev/leo.c 591 */;
	struct leo_par cocci_id/* drivers/video/fbdev/leo.c 558 */;
	struct platform_device *cocci_id/* drivers/video/fbdev/leo.c 551 */;
	struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/leo.c 521 */;
	struct fb_wid_list cocci_id/* drivers/video/fbdev/leo.c 489 */;
	struct fb_wid_item cocci_id/* drivers/video/fbdev/leo.c 488 */;
	struct fb_wid_item *cocci_id/* drivers/video/fbdev/leo.c 452 */;
	struct fb_wid_list *cocci_id/* drivers/video/fbdev/leo.c 448 */;
	struct device_node *cocci_id/* drivers/video/fbdev/leo.c 436 */;
	unsigned int cocci_id/* drivers/video/fbdev/leo.c 425 */;
	struct fb_ops cocci_id/* drivers/video/fbdev/leo.c 42 */;
	struct vm_area_struct *cocci_id/* drivers/video/fbdev/leo.c 416 */;
	int cocci_id/* drivers/video/fbdev/leo.c 36 */(struct fb_var_screeninfo *,
						       struct fb_info *);
	int cocci_id/* drivers/video/fbdev/leo.c 35 */(struct fb_info *,
						       unsigned int,
						       unsigned long);
	struct sbus_mmap_map cocci_id/* drivers/video/fbdev/leo.c 347 */[];
	int cocci_id/* drivers/video/fbdev/leo.c 34 */(struct fb_info *,
						       struct vm_area_struct *);
	int cocci_id/* drivers/video/fbdev/leo.c 32 */(int, struct fb_info *);
	u32 cocci_id/* drivers/video/fbdev/leo.c 319 */;
	unsigned long cocci_id/* drivers/video/fbdev/leo.c 318 */;
	struct leo_lx_krn __iomem *cocci_id/* drivers/video/fbdev/leo.c 317 */;
	struct leo_par *cocci_id/* drivers/video/fbdev/leo.c 316 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/leo.c 314 */;
	int cocci_id/* drivers/video/fbdev/leo.c 314 */;
	int cocci_id/* drivers/video/fbdev/leo.c 30 */(unsigned, unsigned,
						       unsigned, unsigned,
						       unsigned,
						       struct fb_info *);
	unsigned cocci_id/* drivers/video/fbdev/leo.c 272 */;
	struct leo_cursor __iomem *cocci_id/* drivers/video/fbdev/leo.c 213 */;
	struct leo_ld_ss0 __iomem *cocci_id/* drivers/video/fbdev/leo.c 212 */;
	struct leo_par {
		spinlock_t lock;
		struct leo_lx_krn __iomem *lx_krn;
		struct leo_lc_ss0_usr __iomem *lc_ss0_usr;
		struct leo_ld_ss0 __iomem *ld_ss0;
		struct leo_ld_ss1 __iomem *ld_ss1;
		struct leo_cursor __iomem *cursor;
		u32 extent;
		u32 clut_data[256];
		u32 flags;
#define LEO_FLAG_BLANKED 0x00000001
		unsigned long which_io;
	} cocci_id/* drivers/video/fbdev/leo.c 181 */;
	struct leo_ld_gbl {
		u8 unknown;
	} cocci_id/* drivers/video/fbdev/leo.c 177 */;
	struct leo_ld_ss1 {
		u8 xxx0[0xef4];
		u32 ss1_misc;
	} cocci_id/* drivers/video/fbdev/leo.c 172 */;
	struct leo_ld_ss0 {
		u8 xxx0[0xe00];
		u32 csr;
		u32 wid;
		u32 wmask;
		u32 widclip;
		u32 vclipmin;
		u32 vclipmax;
		u32 pickmin;
		u32 pickmax;
		u32 fg;
		u32 bg;
		u32 src;
		u32 dst;
		u32 extent;
		u32 xxx1[3];
		u32 setsem;
		u32 clrsem;
		u32 clrpick;
		u32 clrdat;
		u32 alpha;
		u8 xxx2[0x2c];
		u32 winbg;
		u32 planemask;
		u32 rop;
		u32 z;
		u32 dczf;
		u32 dczb;
		u32 dcs;
		u32 dczs;
		u32 pickfb;
		u32 pickbb;
		u32 dcfc;
		u32 forcecol;
		u32 door[8];
		u32 pick[5];
	} cocci_id/* drivers/video/fbdev/leo.c 132 */;
	struct leo_lc_ss1_usr {
		u8 unknown;
	} cocci_id/* drivers/video/fbdev/leo.c 128 */;
	struct leo_lc_ss1_krn {
		u8 unknown;
	} cocci_id/* drivers/video/fbdev/leo.c 124 */;
	struct leo_lc_ss0_usr {
		u32 csr;
		u32 addrspace;
		u32 fontmsk;
		u32 fontt;
		u32 extent;
		u32 src;
		u32 dst;
		u32 copy;
		u32 fill;
	} cocci_id/* drivers/video/fbdev/leo.c 112 */;
	struct leo_lc_ss0_krn {
		u32 misc;
		u8 xxx0[0x800 - 4];
		u32 rev;
	} cocci_id/* drivers/video/fbdev/leo.c 106 */;
	struct leo_lx_krn {
		u32 krn_type;
		u32 krn_csr;
		u32 krn_value;
	} cocci_id/* drivers/video/fbdev/leo.c 100 */;
}
