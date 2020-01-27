cocci_test_suite() {
	struct tcx_thc {
		u32 thc_rev;
		u32 thc_pad0[511];
		u32 thc_hs;
		u32 thc_hsdvs;
		u32 thc_hd;
		u32 thc_vs;
		u32 thc_vd;
		u32 thc_refresh;
		u32 thc_misc;
		u32 thc_pad1[56];
		u32 thc_cursxy;
		u32 thc_cursmask[32];
		u32 thc_cursbits[32];
	} cocci_id/* drivers/video/fbdev/tcx.c 84 */;
	struct tcx_tec {
		u32 tec_matrix;
		u32 tec_clip;
		u32 tec_vdc;
	} cocci_id/* drivers/video/fbdev/tcx.c 78 */;
	void __exit cocci_id/* drivers/video/fbdev/tcx.c 530 */;
	int __init cocci_id/* drivers/video/fbdev/tcx.c 522 */;
	struct platform_driver cocci_id/* drivers/video/fbdev/tcx.c 513 */;
	const struct of_device_id cocci_id/* drivers/video/fbdev/tcx.c 505 */[];
	struct fb_ops cocci_id/* drivers/video/fbdev/tcx.c 43 */;
	struct bt_regs cocci_id/* drivers/video/fbdev/tcx.c 399 */;
	struct tcx_thc cocci_id/* drivers/video/fbdev/tcx.c 397 */;
	struct tcx_tec cocci_id/* drivers/video/fbdev/tcx.c 395 */;
	struct tcx_par cocci_id/* drivers/video/fbdev/tcx.c 373 */;
	int cocci_id/* drivers/video/fbdev/tcx.c 37 */(struct fb_var_screeninfo *,
						       struct fb_info *);
	struct device_node *cocci_id/* drivers/video/fbdev/tcx.c 368 */;
	struct platform_device *cocci_id/* drivers/video/fbdev/tcx.c 366 */;
	int cocci_id/* drivers/video/fbdev/tcx.c 36 */(struct fb_info *,
						       unsigned int,
						       unsigned long);
	int cocci_id/* drivers/video/fbdev/tcx.c 35 */(struct fb_info *,
						       struct vm_area_struct *);
	int cocci_id/* drivers/video/fbdev/tcx.c 33 */(int, struct fb_info *);
	const char *cocci_id/* drivers/video/fbdev/tcx.c 329 */;
	unsigned int cocci_id/* drivers/video/fbdev/tcx.c 310 */;
	int cocci_id/* drivers/video/fbdev/tcx.c 31 */(unsigned, unsigned,
						       unsigned, unsigned,
						       unsigned,
						       struct fb_info *);
	struct vm_area_struct *cocci_id/* drivers/video/fbdev/tcx.c 301 */;
	struct sbus_mmap_map cocci_id/* drivers/video/fbdev/tcx.c 245 */[TCX_MMAP_ENTRIES];
	unsigned long cocci_id/* drivers/video/fbdev/tcx.c 207 */;
	struct tcx_thc __iomem *cocci_id/* drivers/video/fbdev/tcx.c 206 */;
	int cocci_id/* drivers/video/fbdev/tcx.c 202 */;
	struct bt_regs __iomem *cocci_id/* drivers/video/fbdev/tcx.c 175 */;
	unsigned cocci_id/* drivers/video/fbdev/tcx.c 170 */;
	struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/tcx.c 155 */;
	u32 cocci_id/* drivers/video/fbdev/tcx.c 138 */;
	u32 __iomem *cocci_id/* drivers/video/fbdev/tcx.c 129 */;
	struct tcx_par *cocci_id/* drivers/video/fbdev/tcx.c 128 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/tcx.c 126 */;
	void cocci_id/* drivers/video/fbdev/tcx.c 126 */;
	struct tcx_par {
		spinlock_t lock;
		struct bt_regs __iomem *bt;
		struct tcx_thc __iomem *thc;
		struct tcx_tec __iomem *tec;
		u32 __iomem *cplane;
		u32 flags;
#define TCX_FLAG_BLANKED 0x00000001
		unsigned long which_io;
		struct sbus_mmap_map mmap_map[TCX_MMAP_ENTRIES];
		int lowdepth;
	} cocci_id/* drivers/video/fbdev/tcx.c 109 */;
	struct bt_regs {
		u32 addr;
		u32 color_map;
		u32 control;
		u32 cursor;
	} cocci_id/* drivers/video/fbdev/tcx.c 100 */;
}
