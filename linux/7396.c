cocci_test_suite() {
	long cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc-compat.c 636 */;
	struct dispc_irq_stats cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc-compat.c 63 */;
	unsigned long cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc-compat.c 62 */;
	struct seq_file *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc-compat.c 60 */;
	struct completion *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc-compat.c 503 */;
	void *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc-compat.c 501 */;
	enum omap_channel cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc-compat.c 462 */;
	struct {
		spinlock_t irq_lock;
		u32 irq_error_mask;
		struct omap_dispc_isr_data registered_isr[DISPC_MAX_NR_ISRS];
		u32 error_irqs;
		struct work_struct error_work;
#ifdef CONFIG_FB_OMAP2_DSS_COLLECT_IRQ_STATS
		spinlock_t irq_stats_lock;
		struct dispc_irq_stats irq_stats;
#endif
	} cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc-compat.c 45 */;
	struct dispc_irq_stats {
		unsigned long last_reset;
		unsigned irq_count;
		unsigned irqs[32];
	} cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc-compat.c 39 */;
	struct omap_overlay_manager *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc-compat.c 358 */;
	unsigned cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc-compat.c 344 */;
	struct omap_overlay *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc-compat.c 343 */;
	struct omap_dispc_isr_data {
		omap_dispc_isr_t isr;
		void *arg;
		u32 mask;
	} cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc-compat.c 33 */;
	const unsigned cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc-compat.c 328 */[];
	struct work_struct *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc-compat.c 323 */;
	struct omap_dispc_isr_data cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc-compat.c 258 */[DISPC_MAX_NR_ISRS];
	irqreturn_t cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc-compat.c 251 */;
	omap_dispc_isr_t cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc-compat.c 138 */;
	struct omap_dispc_isr_data *cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc-compat.c 122 */;
	int cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc-compat.c 121 */;
	u32 cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc-compat.c 120 */;
	void cocci_id/* drivers/video/fbdev/omap2/omapfb/dss/dispc-compat.c 118 */;
}
