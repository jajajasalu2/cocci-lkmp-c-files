cocci_test_suite() {
	struct vpss_hw_ops {
		int (*enable_clock)(enum vpss_clock_sel clock_sel, int en);
		void (*select_ccdc_source)(enum vpss_ccdc_source_sel src_sel);
		int (*clear_wbl_overflow)(enum vpss_wbl_sel wbl_sel);
		void (*set_sync_pol)(struct vpss_sync_pol);
		void (*set_pg_frame_size)(struct vpss_pg_frame_size);
		int (*dma_complete_interrupt)(void);
	} cocci_id/* drivers/media/platform/davinci/vpss.c 91 */;
	enum vpss_platform_type{DM644X, DM355, DM365,} cocci_id/* drivers/media/platform/davinci/vpss.c 79 */;
	int __init cocci_id/* drivers/media/platform/davinci/vpss.c 506 */;
	struct platform_driver cocci_id/* drivers/media/platform/davinci/vpss.c 490 */;
	const struct dev_pm_ops cocci_id/* drivers/media/platform/davinci/vpss.c 485 */;
	struct device *cocci_id/* drivers/media/platform/davinci/vpss.c 479 */;
	char *cocci_id/* drivers/media/platform/davinci/vpss.c 396 */;
	struct resource *cocci_id/* drivers/media/platform/davinci/vpss.c 395 */;
	struct platform_device *cocci_id/* drivers/media/platform/davinci/vpss.c 393 */;
	struct vpss_pg_frame_size cocci_id/* drivers/media/platform/davinci/vpss.c 384 */;
	struct vpss_sync_pol cocci_id/* drivers/media/platform/davinci/vpss.c 363 */;
	void (*cocci_id/* drivers/media/platform/davinci/vpss.c 273 */)(u32 val,
									u32 offset);
	u32 (*cocci_id/* drivers/media/platform/davinci/vpss.c 272 */)(u32 offset);
	unsigned long cocci_id/* drivers/media/platform/davinci/vpss.c 228 */;
	enum vpss_clock_sel cocci_id/* drivers/media/platform/davinci/vpss.c 226 */;
	int cocci_id/* drivers/media/platform/davinci/vpss.c 226 */;
	enum vpss_wbl_sel cocci_id/* drivers/media/platform/davinci/vpss.c 186 */;
	enum vpss_ccdc_source_sel cocci_id/* drivers/media/platform/davinci/vpss.c 163 */;
	void cocci_id/* drivers/media/platform/davinci/vpss.c 124 */;
	u32 cocci_id/* drivers/media/platform/davinci/vpss.c 119 */;
	struct vpss_oper_config cocci_id/* drivers/media/platform/davinci/vpss.c 116 */;
	struct vpss_oper_config {
	__iomem
		void *vpss_regs_base0;
	__iomem
		void *vpss_regs_base1;
	__iomem
		void *vpss_regs_base2;
		enum vpss_platform_type platform;
		spinlock_t vpss_lock;
		struct vpss_hw_ops hw_ops;
	} cocci_id/* drivers/media/platform/davinci/vpss.c 107 */;
}
