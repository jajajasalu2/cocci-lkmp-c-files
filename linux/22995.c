cocci_test_suite() {
	int __maybe_unused cocci_id/* sound/soc/rockchip/rockchip_spdif.c 76 */;
	void *cocci_id/* sound/soc/rockchip/rockchip_spdif.c 46 */;
	const struct of_device_id cocci_id/* sound/soc/rockchip/rockchip_spdif.c 44 */[];
	struct platform_driver cocci_id/* sound/soc/rockchip/rockchip_spdif.c 404 */;
	const struct dev_pm_ops cocci_id/* sound/soc/rockchip/rockchip_spdif.c 399 */;
	struct rk_spdif_dev {
		struct device *dev;
		struct clk *mclk;
		struct clk *hclk;
		struct snd_dmaengine_dai_dma_data playback_dma_data;
		struct regmap *regmap;
	} cocci_id/* sound/soc/rockchip/rockchip_spdif.c 33 */;
	struct regmap *cocci_id/* sound/soc/rockchip/rockchip_spdif.c 289 */;
	void __iomem *cocci_id/* sound/soc/rockchip/rockchip_spdif.c 284 */;
	struct resource *cocci_id/* sound/soc/rockchip/rockchip_spdif.c 283 */;
	const struct of_device_id *cocci_id/* sound/soc/rockchip/rockchip_spdif.c 282 */;
	struct device_node *cocci_id/* sound/soc/rockchip/rockchip_spdif.c 280 */;
	struct platform_device *cocci_id/* sound/soc/rockchip/rockchip_spdif.c 278 */;
	const struct regmap_config cocci_id/* sound/soc/rockchip/rockchip_spdif.c 267 */;
	bool cocci_id/* sound/soc/rockchip/rockchip_spdif.c 242 */;
	struct device *cocci_id/* sound/soc/rockchip/rockchip_spdif.c 242 */;
	enum rk_spdif_type{RK_SPDIF_RK3066, RK_SPDIF_RK3188, RK_SPDIF_RK3288, RK_SPDIF_RK3366,} cocci_id/* sound/soc/rockchip/rockchip_spdif.c 24 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/rockchip/rockchip_spdif.c 224 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/rockchip/rockchip_spdif.c 206 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/rockchip/rockchip_spdif.c 201 */;
	struct rk_spdif_dev *cocci_id/* sound/soc/rockchip/rockchip_spdif.c 194 */;
	struct snd_soc_dai *cocci_id/* sound/soc/rockchip/rockchip_spdif.c 192 */;
	int cocci_id/* sound/soc/rockchip/rockchip_spdif.c 192 */;
	unsigned int cocci_id/* sound/soc/rockchip/rockchip_spdif.c 110 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/rockchip/rockchip_spdif.c 106 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/rockchip/rockchip_spdif.c 105 */;
}
