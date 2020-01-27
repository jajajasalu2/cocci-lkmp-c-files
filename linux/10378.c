cocci_test_suite() {
	u32 cocci_id/* drivers/gpu/drm/mediatek/mtk_cec.c 63 */;
	void __iomem *cocci_id/* drivers/gpu/drm/mediatek/mtk_cec.c 62 */;
	struct mtk_cec *cocci_id/* drivers/gpu/drm/mediatek/mtk_cec.c 59 */;
	unsigned int cocci_id/* drivers/gpu/drm/mediatek/mtk_cec.c 59 */;
	void cocci_id/* drivers/gpu/drm/mediatek/mtk_cec.c 59 */;
	struct mtk_cec {
		void __iomem *regs;
		struct clk *clk;
		int irq;
		bool hpd;
		void (*hpd_event)(bool hpd, struct device *dev);
		struct device *hdmi_dev;
		spinlock_t lock;
	} cocci_id/* drivers/gpu/drm/mediatek/mtk_cec.c 49 */;
	struct platform_driver cocci_id/* drivers/gpu/drm/mediatek/mtk_cec.c 251 */;
	const struct of_device_id cocci_id/* drivers/gpu/drm/mediatek/mtk_cec.c 246 */[];
	struct resource *cocci_id/* drivers/gpu/drm/mediatek/mtk_cec.c 185 */;
	struct platform_device *cocci_id/* drivers/gpu/drm/mediatek/mtk_cec.c 181 */;
	irqreturn_t cocci_id/* drivers/gpu/drm/mediatek/mtk_cec.c 163 */;
	void *cocci_id/* drivers/gpu/drm/mediatek/mtk_cec.c 163 */;
	int cocci_id/* drivers/gpu/drm/mediatek/mtk_cec.c 163 */;
	unsigned long cocci_id/* drivers/gpu/drm/mediatek/mtk_cec.c 152 */;
	struct device *cocci_id/* drivers/gpu/drm/mediatek/mtk_cec.c 151 */;
	void (*cocci_id/* drivers/gpu/drm/mediatek/mtk_cec.c 150 */)(bool hpd,
								     struct device *dev);
	bool cocci_id/* drivers/gpu/drm/mediatek/mtk_cec.c 148 */;
}
