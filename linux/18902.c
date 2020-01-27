cocci_test_suite() {
	unsigned long cocci_id/* arch/arm/mach-omap1/lcd_dma.c 66 */;
	struct lcd_dma_info {
		spinlock_t lock;
		int reserved;
		void (*callback)(u16 status, void *data);
		void *cb_data;
		int active;
		unsigned long addr;
		int rotate,data_type,xres,yres;
		int vxres;
		int mirror;
		int xscale,yscale;
		int ext_ctrl;
		int src_port;
		int single_transfer;
	} cocci_id/* arch/arm/mach-omap1/lcd_dma.c 49 */;
	int __init cocci_id/* arch/arm/mach-omap1/lcd_dma.c 414 */;
	void cocci_id/* arch/arm/mach-omap1/lcd_dma.c 345 */;
	void (*cocci_id/* arch/arm/mach-omap1/lcd_dma.c 300 */)(u16 status,
								void *data);
	u16 cocci_id/* arch/arm/mach-omap1/lcd_dma.c 283 */;
	irqreturn_t cocci_id/* arch/arm/mach-omap1/lcd_dma.c 281 */;
	void *cocci_id/* arch/arm/mach-omap1/lcd_dma.c 281 */;
	int cocci_id/* arch/arm/mach-omap1/lcd_dma.c 281 */;
	long cocci_id/* arch/arm/mach-omap1/lcd_dma.c 136 */;
	unsigned int cocci_id/* arch/arm/mach-omap1/lcd_dma.c 119 */;
}
