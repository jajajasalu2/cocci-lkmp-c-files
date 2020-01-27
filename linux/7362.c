cocci_test_suite() {
	struct cg3_regs {
		struct bt_regs cmap;
		u8 control;
		u8 status;
		u8 cursor_start;
		u8 cursor_end;
		u8 h_blank_start;
		u8 h_blank_end;
		u8 h_sync_start;
		u8 h_sync_end;
		u8 comp_sync_end;
		u8 v_blank_start_high;
		u8 v_blank_start_low;
		u8 v_blank_end;
		u8 v_sync_start;
		u8 v_sync_end;
		u8 xfer_holdoff_start;
		u8 xfer_holdoff_end;
	} cocci_id/* drivers/video/fbdev/cg3.c 88 */;
	struct bt_regs {
		u32 addr;
		u32 color_map;
		u32 control;
		u32 cursor;
	} cocci_id/* drivers/video/fbdev/cg3.c 81 */;
	enum cg3_type{CG3_AT_66HZ=0, CG3_AT_76HZ, CG3_RDI,} cocci_id/* drivers/video/fbdev/cg3.c 75 */;
	void __exit cocci_id/* drivers/video/fbdev/cg3.c 481 */;
	void cocci_id/* drivers/video/fbdev/cg3.c 481 */;
	int __init cocci_id/* drivers/video/fbdev/cg3.c 473 */;
	struct platform_driver cocci_id/* drivers/video/fbdev/cg3.c 464 */;
	const struct of_device_id cocci_id/* drivers/video/fbdev/cg3.c 453 */[];
	struct fb_ops cocci_id/* drivers/video/fbdev/cg3.c 42 */;
	struct cg3_regs cocci_id/* drivers/video/fbdev/cg3.c 383 */;
	int cocci_id/* drivers/video/fbdev/cg3.c 36 */(struct fb_info *,
						       unsigned int,
						       unsigned long);
	struct cg3_par cocci_id/* drivers/video/fbdev/cg3.c 357 */;
	struct platform_device *cocci_id/* drivers/video/fbdev/cg3.c 350 */;
	int cocci_id/* drivers/video/fbdev/cg3.c 35 */(struct fb_info *,
						       struct vm_area_struct *);
	u8 __iomem *cocci_id/* drivers/video/fbdev/cg3.c 336 */;
	int cocci_id/* drivers/video/fbdev/cg3.c 33 */(int, struct fb_info *);
	u8 *cocci_id/* drivers/video/fbdev/cg3.c 315 */;
	enum cg3_type cocci_id/* drivers/video/fbdev/cg3.c 314 */;
	int cocci_id/* drivers/video/fbdev/cg3.c 31 */(unsigned, unsigned,
						       unsigned, unsigned,
						       unsigned,
						       struct fb_info *);
	u_char cocci_id/* drivers/video/fbdev/cg3.c 308 */[];
	u8 *cocci_id/* drivers/video/fbdev/cg3.c 304 */[];
	u8 cocci_id/* drivers/video/fbdev/cg3.c 283 */[];
	char *cocci_id/* drivers/video/fbdev/cg3.c 264 */;
	const char *cocci_id/* drivers/video/fbdev/cg3.c 263 */;
	struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/cg3.c 260 */;
	struct device_node *cocci_id/* drivers/video/fbdev/cg3.c 248 */;
	unsigned int cocci_id/* drivers/video/fbdev/cg3.c 237 */;
	struct vm_area_struct *cocci_id/* drivers/video/fbdev/cg3.c 227 */;
	struct sbus_mmap_map cocci_id/* drivers/video/fbdev/cg3.c 218 */[];
	u8 cocci_id/* drivers/video/fbdev/cg3.c 190 */;
	unsigned long cocci_id/* drivers/video/fbdev/cg3.c 189 */;
	struct cg3_regs __iomem *cocci_id/* drivers/video/fbdev/cg3.c 188 */;
	struct cg3_par *cocci_id/* drivers/video/fbdev/cg3.c 187 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/cg3.c 185 */;
	int cocci_id/* drivers/video/fbdev/cg3.c 185 */;
	u32 *cocci_id/* drivers/video/fbdev/cg3.c 145 */;
	struct bt_regs __iomem *cocci_id/* drivers/video/fbdev/cg3.c 143 */;
	unsigned cocci_id/* drivers/video/fbdev/cg3.c 138 */;
	struct cg3_par {
		spinlock_t lock;
		struct cg3_regs __iomem *regs;
		u32 sw_cmap[((256 * 3) + 3) / 4];
		u32 flags;
#define CG3_FLAG_BLANKED 0x00000001
#define CG3_FLAG_RDI 0x00000002
		unsigned long which_io;
	} cocci_id/* drivers/video/fbdev/cg3.c 112 */;
}
