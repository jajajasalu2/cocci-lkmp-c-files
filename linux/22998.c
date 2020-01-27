cocci_test_suite() {
	struct platform_driver cocci_id/* sound/soc/rockchip/rockchip_i2s.c 712 */;
	const struct dev_pm_ops cocci_id/* sound/soc/rockchip/rockchip_i2s.c 707 */;
	struct rk_i2s_dev *cocci_id/* sound/soc/rockchip/rockchip_i2s.c 66 */;
	struct device *cocci_id/* sound/soc/rockchip/rockchip_i2s.c 64 */;
	int cocci_id/* sound/soc/rockchip/rockchip_i2s.c 64 */;
	void __iomem *cocci_id/* sound/soc/rockchip/rockchip_i2s.c 584 */;
	struct resource *cocci_id/* sound/soc/rockchip/rockchip_i2s.c 583 */;
	struct snd_soc_dai_driver *cocci_id/* sound/soc/rockchip/rockchip_i2s.c 582 */;
	const struct of_device_id *cocci_id/* sound/soc/rockchip/rockchip_i2s.c 580 */;
	struct device_node *cocci_id/* sound/soc/rockchip/rockchip_i2s.c 579 */;
	struct platform_device *cocci_id/* sound/soc/rockchip/rockchip_i2s.c 577 */;
	const struct of_device_id cocci_id/* sound/soc/rockchip/rockchip_i2s.c 569 */[];
	const struct rk_i2s_pins cocci_id/* sound/soc/rockchip/rockchip_i2s.c 564 */;
	const struct regmap_config cocci_id/* sound/soc/rockchip/rockchip_i2s.c 550 */;
	const struct reg_default cocci_id/* sound/soc/rockchip/rockchip_i2s.c 542 */[];
	bool cocci_id/* sound/soc/rockchip/rockchip_i2s.c 532 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/rockchip/rockchip_i2s.c 477 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/rockchip/rockchip_i2s.c 449 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/rockchip/rockchip_i2s.c 442 */;
	struct snd_soc_dai *cocci_id/* sound/soc/rockchip/rockchip_i2s.c 432 */;
	struct rk_i2s_dev {
		struct device *dev;
		struct clk *hclk;
		struct clk *mclk;
		struct snd_dmaengine_dai_dma_data capture_dma_data;
		struct snd_dmaengine_dai_dma_data playback_dma_data;
		struct regmap *regmap;
		struct regmap *grf;
		bool tx_start;
		bool rx_start;
		bool is_master_mode;
		const struct rk_i2s_pins *pins;
	} cocci_id/* sound/soc/rockchip/rockchip_i2s.c 31 */;
	unsigned int cocci_id/* sound/soc/rockchip/rockchip_i2s.c 276 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/rockchip/rockchip_i2s.c 275 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/rockchip/rockchip_i2s.c 271 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/rockchip/rockchip_i2s.c 270 */;
	struct rk_i2s_pins {
		u32 reg_offset;
		u32 shift;
	} cocci_id/* sound/soc/rockchip/rockchip_i2s.c 26 */;
	void cocci_id/* sound/soc/rockchip/rockchip_i2s.c 137 */;
}
