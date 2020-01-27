cocci_test_suite() {
	struct control_regints *cocci_id/* drivers/video/fbdev/controlfb.c 957 */;
	struct fb_info_control {
		struct fb_info info;
		struct fb_par_control par;
		u32 pseudo_palette[16];
		struct cmap_regs __iomem *cmap_regs;
		unsigned long cmap_regs_phys;
		struct control_regs __iomem *control_regs;
		unsigned long control_regs_phys;
		unsigned long control_regs_size;
		__u8 __iomem *frame_buffer;
		unsigned long frame_buffer_phys;
		unsigned long fb_orig_base;
		unsigned long fb_orig_size;
		int control_use_bank2;
		unsigned long total_vram;
		unsigned char vram_attr;
	} cocci_id/* drivers/video/fbdev/controlfb.c 94 */;
	struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/controlfb.c 86 */;
	struct fb_info_control cocci_id/* drivers/video/fbdev/controlfb.c 826 */;
	unsigned cocci_id/* drivers/video/fbdev/controlfb.c 822 */;
	const struct fb_info *cocci_id/* drivers/video/fbdev/controlfb.c 819 */;
	unsigned char *cocci_id/* drivers/video/fbdev/controlfb.c 779 */;
	unsigned long cocci_id/* drivers/video/fbdev/controlfb.c 779 */;
	struct fb_par_control *cocci_id/* drivers/video/fbdev/controlfb.c 70 */;
	int cocci_id/* drivers/video/fbdev/controlfb.c 70 */;
	struct resource cocci_id/* drivers/video/fbdev/controlfb.c 673 */;
	char *cocci_id/* drivers/video/fbdev/controlfb.c 575 */;
	struct device_node *cocci_id/* drivers/video/fbdev/controlfb.c 574 */;
	int __init cocci_id/* drivers/video/fbdev/controlfb.c 572 */;
	struct fb_par_control {
		int vmode,cmode;
		int xres,yres;
		int vxres,vyres;
		int xoffset,yoffset;
		int pitch;
		struct control_regvals regvals;
		unsigned long sync;
		unsigned char ctrl;
	} cocci_id/* drivers/video/fbdev/controlfb.c 57 */;
	volatile struct preg __iomem *cocci_id/* drivers/video/fbdev/controlfb.c 479 */;
	struct control_regvals *cocci_id/* drivers/video/fbdev/controlfb.c 478 */;
	struct fb_var_screeninfo cocci_id/* drivers/video/fbdev/controlfb.c 406 */;
	struct adb_request cocci_id/* drivers/video/fbdev/controlfb.c 387 */;
	__u8 cocci_id/* drivers/video/fbdev/controlfb.c 348 */;
	u_int cocci_id/* drivers/video/fbdev/controlfb.c 343 */;
	u32 cocci_id/* drivers/video/fbdev/controlfb.c 290 */;
	struct vm_area_struct *cocci_id/* drivers/video/fbdev/controlfb.c 286 */;
	unsigned int cocci_id/* drivers/video/fbdev/controlfb.c 259 */;
	struct fb_par_control cocci_id/* drivers/video/fbdev/controlfb.c 203 */;
	void cocci_id/* drivers/video/fbdev/controlfb.c 192 */;
	struct fb_ops cocci_id/* drivers/video/fbdev/controlfb.c 160 */;
	void cocci_id/* drivers/video/fbdev/controlfb.c 149 */(void);
	void cocci_id/* drivers/video/fbdev/controlfb.c 148 */(struct fb_info *info,
							       struct fb_info_control *p);
	void cocci_id/* drivers/video/fbdev/controlfb.c 146 */(struct fb_par_control *par,
							       struct fb_var_screeninfo *var);
	int cocci_id/* drivers/video/fbdev/controlfb.c 144 */(struct fb_var_screeninfo *var,
							      struct fb_par_control *par,
							      const struct fb_info *fb_info);
	int cocci_id/* drivers/video/fbdev/controlfb.c 143 */(unsigned long clk,
							      unsigned char *param);
	void cocci_id/* drivers/video/fbdev/controlfb.c 141 */(struct fb_info_control *p);
	int cocci_id/* drivers/video/fbdev/controlfb.c 140 */(struct device_node *dp);
	void cocci_id/* drivers/video/fbdev/controlfb.c 138 */(struct fb_info_control *p,
							       struct fb_par_control *par);
	int cocci_id/* drivers/video/fbdev/controlfb.c 137 */(struct fb_info_control *p);
	void cocci_id/* drivers/video/fbdev/controlfb.c 136 */(unsigned char *params);
	int cocci_id/* drivers/video/fbdev/controlfb.c 132 */(struct fb_var_screeninfo *var,
							      struct fb_info *info);
	int cocci_id/* drivers/video/fbdev/controlfb.c 131 */(struct fb_info *info);
	int cocci_id/* drivers/video/fbdev/controlfb.c 129 */(struct fb_info *info,
							      struct vm_area_struct *vma);
	int cocci_id/* drivers/video/fbdev/controlfb.c 128 */(int blank_mode,
							      struct fb_info *info);
	int cocci_id/* drivers/video/fbdev/controlfb.c 126 */(u_int regno,
							      u_int red,
							      u_int green,
							      u_int blue,
							      u_int transp,
							      struct fb_info *info);
	struct fb_info_control *cocci_id/* drivers/video/fbdev/controlfb.c 1051 */;
	struct control_regs cocci_id/* drivers/video/fbdev/controlfb.c 1039 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/controlfb.c 1025 */;
	void __init cocci_id/* drivers/video/fbdev/controlfb.c 1025 */;
}
