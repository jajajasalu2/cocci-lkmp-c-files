cocci_test_suite() {
	struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/goldfishfb.c 88 */;
	unsigned int cocci_id/* drivers/video/fbdev/goldfishfb.c 66 */;
	u32 cocci_id/* drivers/video/fbdev/goldfishfb.c 64 */;
	struct fb_bitfield *cocci_id/* drivers/video/fbdev/goldfishfb.c 64 */;
	int cocci_id/* drivers/video/fbdev/goldfishfb.c 64 */;
	unsigned long cocci_id/* drivers/video/fbdev/goldfishfb.c 50 */;
	irqreturn_t cocci_id/* drivers/video/fbdev/goldfishfb.c 48 */;
	void *cocci_id/* drivers/video/fbdev/goldfishfb.c 48 */;
	struct goldfish_fb {
		void __iomem *reg_base;
		int irq;
		spinlock_t lock;
		wait_queue_head_t wait;
		int base_update_count;
		int rotation;
		struct fb_info fb;
		u32 cmap[16];
	} cocci_id/* drivers/video/fbdev/goldfishfb.c 37 */;
	struct platform_driver cocci_id/* drivers/video/fbdev/goldfishfb.c 314 */;
	const struct acpi_device_id cocci_id/* drivers/video/fbdev/goldfishfb.c 308 */[];
	const struct of_device_id cocci_id/* drivers/video/fbdev/goldfishfb.c 302 */[];
	char __force __iomem *cocci_id/* drivers/video/fbdev/goldfishfb.c 241 */;
	enum{FB_GET_WIDTH=0x00, FB_GET_HEIGHT=0x04, FB_INT_STATUS=0x08, FB_INT_ENABLE=0x0c, FB_SET_BASE=0x10, FB_SET_ROTATION=0x14, FB_SET_BLANK=0x18, FB_GET_PHYS_WIDTH=0x1c, FB_GET_PHYS_HEIGHT=0x20, FB_INT_VSYNC=1U << 0, FB_INT_BASE_UPDATE_DONE=1U << 1,} cocci_id/* drivers/video/fbdev/goldfishfb.c 22 */;
	dma_addr_t cocci_id/* drivers/video/fbdev/goldfishfb.c 183 */;
	size_t cocci_id/* drivers/video/fbdev/goldfishfb.c 181 */;
	struct resource *cocci_id/* drivers/video/fbdev/goldfishfb.c 179 */;
	struct platform_device *cocci_id/* drivers/video/fbdev/goldfishfb.c 176 */;
	struct fb_ops cocci_id/* drivers/video/fbdev/goldfishfb.c 163 */;
	struct goldfish_fb cocci_id/* drivers/video/fbdev/goldfishfb.c 150 */;
	struct goldfish_fb *cocci_id/* drivers/video/fbdev/goldfishfb.c 150 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/goldfishfb.c 148 */;
}
