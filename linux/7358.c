cocci_test_suite() {
	struct p9100_regs {
		u32 sys_base;
		u32 sys_config;
		u32 sys_intr;
		u32 sys_int_ena;
		u32 sys_alt_rd;
		u32 sys_alt_wr;
		u32 sys_xxx[58];
		u32 vid_base;
		u32 vid_hcnt;
		u32 vid_htotal;
		u32 vid_hsync_rise;
		u32 vid_hblank_rise;
		u32 vid_hblank_fall;
		u32 vid_hcnt_preload;
		u32 vid_vcnt;
		u32 vid_vlen;
		u32 vid_vsync_rise;
		u32 vid_vblank_rise;
		u32 vid_vblank_fall;
		u32 vid_vcnt_preload;
		u32 vid_screenpaint_addr;
		u32 vid_screenpaint_timectl1;
		u32 vid_screenpaint_qsfcnt;
		u32 vid_screenpaint_timectl2;
		u32 vid_xxx[15];
		u32 vram_base;
		u32 vram_memcfg;
		u32 vram_refresh_pd;
		u32 vram_refresh_cnt;
		u32 vram_raslo_max;
		u32 vram_raslo_cur;
		u32 pwrup_cfg;
		u32 vram_xxx[25];
		u32 ramdac_cmap_wridx;
		u32 ramdac_palette_data;
		u32 ramdac_pixel_mask;
		u32 ramdac_palette_rdaddr;
		u32 ramdac_idx_lo;
		u32 ramdac_idx_hi;
		u32 ramdac_idx_data;
		u32 ramdac_idx_ctl;
		u32 ramdac_xxx[1784];
	} cocci_id/* drivers/video/fbdev/p9100.c 72 */;
	struct fb_ops cocci_id/* drivers/video/fbdev/p9100.c 40 */;
	void __exit cocci_id/* drivers/video/fbdev/p9100.c 371 */;
	void cocci_id/* drivers/video/fbdev/p9100.c 371 */;
	int __init cocci_id/* drivers/video/fbdev/p9100.c 363 */;
	struct platform_driver cocci_id/* drivers/video/fbdev/p9100.c 354 */;
	const struct of_device_id cocci_id/* drivers/video/fbdev/p9100.c 346 */[];
	int cocci_id/* drivers/video/fbdev/p9100.c 34 */(struct fb_info *,
							 unsigned int,
							 unsigned long);
	int cocci_id/* drivers/video/fbdev/p9100.c 33 */(struct fb_info *,
							 struct vm_area_struct *);
	int cocci_id/* drivers/video/fbdev/p9100.c 31 */(int,
							 struct fb_info *);
	int cocci_id/* drivers/video/fbdev/p9100.c 29 */(unsigned, unsigned,
							 unsigned, unsigned,
							 unsigned,
							 struct fb_info *);
	struct p9100_regs cocci_id/* drivers/video/fbdev/p9100.c 282 */;
	struct p9100_par cocci_id/* drivers/video/fbdev/p9100.c 260 */;
	struct platform_device *cocci_id/* drivers/video/fbdev/p9100.c 253 */;
	struct device_node *cocci_id/* drivers/video/fbdev/p9100.c 241 */;
	unsigned int cocci_id/* drivers/video/fbdev/p9100.c 229 */;
	struct vm_area_struct *cocci_id/* drivers/video/fbdev/p9100.c 220 */;
	struct sbus_mmap_map cocci_id/* drivers/video/fbdev/p9100.c 215 */[];
	u32 cocci_id/* drivers/video/fbdev/p9100.c 187 */;
	unsigned long cocci_id/* drivers/video/fbdev/p9100.c 186 */;
	struct p9100_regs __iomem *cocci_id/* drivers/video/fbdev/p9100.c 185 */;
	struct p9100_par *cocci_id/* drivers/video/fbdev/p9100.c 184 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/p9100.c 182 */;
	int cocci_id/* drivers/video/fbdev/p9100.c 181 */;
	unsigned cocci_id/* drivers/video/fbdev/p9100.c 149 */;
	struct p9100_par {
		spinlock_t lock;
		struct p9100_regs __iomem *regs;
		u32 flags;
#define P9100_FLAG_BLANKED 0x00000001
		unsigned long which_io;
	} cocci_id/* drivers/video/fbdev/p9100.c 130 */;
	struct p9100_cmd_parameng {
		u32 parameng_status;
		u32 parameng_bltcmd;
		u32 parameng_quadcmd;
	} cocci_id/* drivers/video/fbdev/p9100.c 124 */;
}
