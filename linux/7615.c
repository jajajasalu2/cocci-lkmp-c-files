cocci_test_suite() {
	struct bw2_regs {
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
	} cocci_id/* drivers/video/fbdev/bw2.c 63 */;
	struct bt_regs {
		u32 addr;
		u32 color_map;
		u32 control;
		u32 cursor;
	} cocci_id/* drivers/video/fbdev/bw2.c 56 */;
	struct fb_ops cocci_id/* drivers/video/fbdev/bw2.c 40 */;
	void __exit cocci_id/* drivers/video/fbdev/bw2.c 395 */;
	void cocci_id/* drivers/video/fbdev/bw2.c 395 */;
	int __init cocci_id/* drivers/video/fbdev/bw2.c 387 */;
	struct platform_driver cocci_id/* drivers/video/fbdev/bw2.c 378 */;
	const struct of_device_id cocci_id/* drivers/video/fbdev/bw2.c 370 */[];
	int cocci_id/* drivers/video/fbdev/bw2.c 34 */(struct fb_info *,
						       unsigned int,
						       unsigned long);
	int cocci_id/* drivers/video/fbdev/bw2.c 33 */(struct fb_info *,
						       struct vm_area_struct *);
	int cocci_id/* drivers/video/fbdev/bw2.c 31 */(int, struct fb_info *);
	struct bw2_regs cocci_id/* drivers/video/fbdev/bw2.c 305 */;
	struct bw2_par cocci_id/* drivers/video/fbdev/bw2.c 283 */;
	struct device_node *cocci_id/* drivers/video/fbdev/bw2.c 278 */;
	struct platform_device *cocci_id/* drivers/video/fbdev/bw2.c 276 */;
	u8 __iomem *cocci_id/* drivers/video/fbdev/bw2.c 270 */;
	u8 *cocci_id/* drivers/video/fbdev/bw2.c 234 */;
	int *cocci_id/* drivers/video/fbdev/bw2.c 231 */;
	u8 cocci_id/* drivers/video/fbdev/bw2.c 195 */[];
	unsigned int cocci_id/* drivers/video/fbdev/bw2.c 173 */;
	struct vm_area_struct *cocci_id/* drivers/video/fbdev/bw2.c 163 */;
	struct sbus_mmap_map cocci_id/* drivers/video/fbdev/bw2.c 156 */[];
	u8 cocci_id/* drivers/video/fbdev/bw2.c 128 */;
	unsigned long cocci_id/* drivers/video/fbdev/bw2.c 127 */;
	struct bw2_regs __iomem *cocci_id/* drivers/video/fbdev/bw2.c 126 */;
	struct bw2_par *cocci_id/* drivers/video/fbdev/bw2.c 125 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/bw2.c 123 */;
	int cocci_id/* drivers/video/fbdev/bw2.c 122 */;
	struct bw2_par {
		spinlock_t lock;
		struct bw2_regs __iomem *regs;
		u32 flags;
#define BW2_FLAG_BLANKED 0x00000001
		unsigned long which_io;
	} cocci_id/* drivers/video/fbdev/bw2.c 107 */;
}
