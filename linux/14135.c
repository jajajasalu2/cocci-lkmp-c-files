cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/media/platform/meson/ao-cec-g12a.c 783 */;
	const struct of_device_id cocci_id/* drivers/media/platform/meson/ao-cec-g12a.c 770 */[];
	const struct meson_ao_cec_g12a_data cocci_id/* drivers/media/platform/meson/ao-cec-g12a.c 762 */;
	void __iomem *cocci_id/* drivers/media/platform/meson/ao-cec-g12a.c 637 */;
	struct resource *cocci_id/* drivers/media/platform/meson/ao-cec-g12a.c 636 */;
	struct device *cocci_id/* drivers/media/platform/meson/ao-cec-g12a.c 635 */;
	struct platform_device *cocci_id/* drivers/media/platform/meson/ao-cec-g12a.c 632 */;
	const struct cec_adap_ops cocci_id/* drivers/media/platform/meson/ao-cec-g12a.c 626 */;
	struct meson_ao_cec_g12a_device *cocci_id/* drivers/media/platform/meson/ao-cec-g12a.c 584 */;
	bool cocci_id/* drivers/media/platform/meson/ao-cec-g12a.c 582 */;
	struct cec_adapter *cocci_id/* drivers/media/platform/meson/ao-cec-g12a.c 582 */;
	int cocci_id/* drivers/media/platform/meson/ao-cec-g12a.c 582 */;
	struct cec_msg *cocci_id/* drivers/media/platform/meson/ao-cec-g12a.c 530 */;
	u8 cocci_id/* drivers/media/platform/meson/ao-cec-g12a.c 500 */;
	irqreturn_t cocci_id/* drivers/media/platform/meson/ao-cec-g12a.c 452 */;
	void *cocci_id/* drivers/media/platform/meson/ao-cec-g12a.c 452 */;
	const struct regmap_config cocci_id/* drivers/media/platform/meson/ao-cec-g12a.c 407 */;
	unsigned int *cocci_id/* drivers/media/platform/meson/ao-cec-g12a.c 373 */;
	unsigned int cocci_id/* drivers/media/platform/meson/ao-cec-g12a.c 372 */;
	char *cocci_id/* drivers/media/platform/meson/ao-cec-g12a.c 340 */;
	struct clk *cocci_id/* drivers/media/platform/meson/ao-cec-g12a.c 339 */;
	const char *cocci_id/* drivers/media/platform/meson/ao-cec-g12a.c 338 */;
	struct clk_init_data cocci_id/* drivers/media/platform/meson/ao-cec-g12a.c 337 */;
	const struct clk_ops cocci_id/* drivers/media/platform/meson/ao-cec-g12a.c 326 */;
	struct meson_ao_cec_g12a_dualdiv_clk *cocci_id/* drivers/media/platform/meson/ao-cec-g12a.c 307 */;
	struct clk_hw *cocci_id/* drivers/media/platform/meson/ao-cec-g12a.c 305 */;
	void cocci_id/* drivers/media/platform/meson/ao-cec-g12a.c 305 */;
	u32 cocci_id/* drivers/media/platform/meson/ao-cec-g12a.c 229 */;
	unsigned long cocci_id/* drivers/media/platform/meson/ao-cec-g12a.c 222 */;
	struct meson_ao_cec_g12a_dualdiv_clk cocci_id/* drivers/media/platform/meson/ao-cec-g12a.c 220 */;
	struct meson_ao_cec_g12a_dualdiv_clk {
		struct clk_hw hw;
		struct regmap *regmap;
	} cocci_id/* drivers/media/platform/meson/ao-cec-g12a.c 214 */;
	struct meson_ao_cec_g12a_device {
		struct platform_device *pdev;
		struct regmap *regmap;
		struct regmap *regmap_cec;
		spinlock_t cec_reg_lock;
		struct cec_notifier *notify;
		struct cec_adapter *adap;
		struct cec_msg rx_msg;
		struct clk *oscin;
		struct clk *core;
		const struct meson_ao_cec_g12a_data *data;
	} cocci_id/* drivers/media/platform/meson/ao-cec-g12a.c 176 */;
	struct meson_ao_cec_g12a_data {
		bool ctrl2_setup;
	} cocci_id/* drivers/media/platform/meson/ao-cec-g12a.c 171 */;
}
