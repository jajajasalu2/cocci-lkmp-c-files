cocci_test_suite() {
	struct platform_driver cocci_id/* sound/soc/sunxi/sun4i-spdif.c 605 */;
	const struct dev_pm_ops cocci_id/* sound/soc/sunxi/sun4i-spdif.c 600 */;
	void __iomem *cocci_id/* sound/soc/sunxi/sun4i-spdif.c 506 */;
	struct resource *cocci_id/* sound/soc/sunxi/sun4i-spdif.c 503 */;
	struct device *cocci_id/* sound/soc/sunxi/sun4i-spdif.c 485 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/sunxi/sun4i-spdif.c 471 */;
	const struct of_device_id cocci_id/* sound/soc/sunxi/sun4i-spdif.c 450 */[];
	const struct sun4i_spdif_quirks cocci_id/* sound/soc/sunxi/sun4i-spdif.c 427 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/sunxi/sun4i-spdif.c 415 */;
	const struct regmap_config cocci_id/* sound/soc/sunxi/sun4i-spdif.c 402 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/sunxi/sun4i-spdif.c 396 */;
	struct platform_device *cocci_id/* sound/soc/sunxi/sun4i-spdif.c 268 */;
	unsigned int cocci_id/* sound/soc/sunxi/sun4i-spdif.c 265 */;
	u32 cocci_id/* sound/soc/sunxi/sun4i-spdif.c 264 */;
	unsigned long cocci_id/* sound/soc/sunxi/sun4i-spdif.c 263 */;
	struct snd_soc_dai *cocci_id/* sound/soc/sunxi/sun4i-spdif.c 259 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/sunxi/sun4i-spdif.c 258 */;
	int cocci_id/* sound/soc/sunxi/sun4i-spdif.c 257 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/sunxi/sun4i-spdif.c 246 */;
	struct sun4i_spdif_dev *cocci_id/* sound/soc/sunxi/sun4i-spdif.c 228 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/sunxi/sun4i-spdif.c 227 */;
	void cocci_id/* sound/soc/sunxi/sun4i-spdif.c 227 */;
	const struct sun4i_spdif_quirks *cocci_id/* sound/soc/sunxi/sun4i-spdif.c 193 */;
	struct sun4i_spdif_dev {
		struct platform_device *pdev;
		struct clk *spdif_clk;
		struct clk *apb_clk;
		struct reset_control *rst;
		struct snd_soc_dai_driver cpu_dai_drv;
		struct regmap *regmap;
		struct snd_dmaengine_dai_dma_data dma_params_tx;
		const struct sun4i_spdif_quirks *quirks;
	} cocci_id/* sound/soc/sunxi/sun4i-spdif.c 180 */;
	struct sun4i_spdif_quirks {
		unsigned int reg_dac_txdata;
		bool has_reset;
		unsigned int val_fctl_ftx;
	} cocci_id/* sound/soc/sunxi/sun4i-spdif.c 174 */;
}
