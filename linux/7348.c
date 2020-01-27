cocci_test_suite() {
	void __exit cocci_id/* drivers/video/fbdev/cg14.c 613 */;
	int __init cocci_id/* drivers/video/fbdev/cg14.c 605 */;
	struct platform_driver cocci_id/* drivers/video/fbdev/cg14.c 596 */;
	const struct of_device_id cocci_id/* drivers/video/fbdev/cg14.c 588 */[];
	struct sbus_mmap_map *cocci_id/* drivers/video/fbdev/cg14.c 520 */;
	struct cg14_cursor cocci_id/* drivers/video/fbdev/cg14.c 504 */;
	struct cg14_clut cocci_id/* drivers/video/fbdev/cg14.c 502 */;
	struct cg14_regs cocci_id/* drivers/video/fbdev/cg14.c 500 */;
	struct cg14_par cocci_id/* drivers/video/fbdev/cg14.c 472 */;
	struct platform_device *cocci_id/* drivers/video/fbdev/cg14.c 465 */;
	struct fb_ops cocci_id/* drivers/video/fbdev/cg14.c 42 */;
	struct sbus_mmap_map cocci_id/* drivers/video/fbdev/cg14.c 369 */[CG14_MMAP_ENTRIES];
	int cocci_id/* drivers/video/fbdev/cg14.c 36 */(struct fb_var_screeninfo *,
							struct fb_info *);
	struct device_node *cocci_id/* drivers/video/fbdev/cg14.c 357 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/cg14.c 356 */;
	int cocci_id/* drivers/video/fbdev/cg14.c 356 */;
	int cocci_id/* drivers/video/fbdev/cg14.c 35 */(struct fb_info *,
							unsigned int,
							unsigned long);
	int cocci_id/* drivers/video/fbdev/cg14.c 34 */(struct fb_info *,
							struct vm_area_struct *);
	int cocci_id/* drivers/video/fbdev/cg14.c 31 */(unsigned, unsigned,
							unsigned, unsigned,
							unsigned,
							struct fb_info *);
	int __user *cocci_id/* drivers/video/fbdev/cg14.c 309 */;
	struct mdi_cfginfo __user *cocci_id/* drivers/video/fbdev/cg14.c 303 */;
	struct mdi_cfginfo cocci_id/* drivers/video/fbdev/cg14.c 280 */;
	unsigned long cocci_id/* drivers/video/fbdev/cg14.c 276 */;
	unsigned int cocci_id/* drivers/video/fbdev/cg14.c 276 */;
	struct vm_area_struct *cocci_id/* drivers/video/fbdev/cg14.c 267 */;
	u32 cocci_id/* drivers/video/fbdev/cg14.c 250 */;
	struct cg14_clut __iomem *cocci_id/* drivers/video/fbdev/cg14.c 248 */;
	unsigned cocci_id/* drivers/video/fbdev/cg14.c 243 */;
	struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/cg14.c 217 */;
	u8 cocci_id/* drivers/video/fbdev/cg14.c 210 */;
	struct cg14_regs __iomem *cocci_id/* drivers/video/fbdev/cg14.c 209 */;
	struct cg14_par *cocci_id/* drivers/video/fbdev/cg14.c 207 */;
	void cocci_id/* drivers/video/fbdev/cg14.c 207 */;
	struct cg14_par {
		spinlock_t lock;
		struct cg14_regs __iomem *regs;
		struct cg14_clut __iomem *clut;
		struct cg14_cursor __iomem *cursor;
		u32 flags;
#define CG14_FLAG_BLANKED 0x00000001
		unsigned long iospace;
		struct sbus_mmap_map mmap_map[CG14_MMAP_ENTRIES];
		int mode;
		int ramsize;
	} cocci_id/* drivers/video/fbdev/cg14.c 190 */;
	struct cg14_clut {
		u32 c_clut[256];
		u32 c_clutd[256];
		u32 c_clut_inc[256];
		u32 c_clutd_inc[256];
	} cocci_id/* drivers/video/fbdev/cg14.c 181 */;
	struct cg14_xlut {
		u8 x_xlut[256];
		u8 x_xlutd[256];
		u8 xxx0[0x600];
		u8 x_xlut_inc[256];
		u8 x_xlutd_inc[256];
	} cocci_id/* drivers/video/fbdev/cg14.c 163 */;
	struct cg14_dac {
		u8 addr;
		u8 xxx0[255];
		u8 glut;
		u8 xxx1[255];
		u8 select;
		u8 xxx2[255];
		u8 mode;
	} cocci_id/* drivers/video/fbdev/cg14.c 153 */;
	struct cg14_cursor {
		u32 cpl0[32];
		u32 cpl1[32];
		u8 ccr;
		u8 xxx0[3];
		u16 cursx;
		u16 cursy;
		u32 color0;
		u32 color1;
		u32 xxx1[0x1bc];
		u32 cpl0i[32];
		u32 cpl1i[32];
	} cocci_id/* drivers/video/fbdev/cg14.c 139 */;
	struct cg14_regs {
		u8 mcr;
		u8 ppr;
		u8 tms[2];
		u8 msr;
		u8 fsr;
		u8 rev;
		u8 ccr;
		u32 tmr;
		u8 mod;
		u8 acr;
		u8 xxx0[6];
		u16 hct;
		u16 vct;
		u16 hbs;
		u16 hbc;
		u16 hss;
		u16 hsc;
		u16 csc;
		u16 vbs;
		u16 vbc;
		u16 vss;
		u16 vsc;
		u16 xcs;
		u16 xcc;
		u16 fsa;
		u16 adr;
		u8 xxx1[0xce];
		u8 pcg[0x100];
		u32 vbr;
		u32 vmcr;
		u32 vcr;
		u32 vca;
	} cocci_id/* drivers/video/fbdev/cg14.c 101 */;
}
