cocci_test_suite() {
	struct device *cocci_id/* sound/soc/sunxi/sun8i-codec.c 94 */;
	struct sun8i_codec {
		struct device *dev;
		struct regmap *regmap;
		struct clk *clk_module;
		struct clk *clk_bus;
	} cocci_id/* sound/soc/sunxi/sun8i-codec.c 87 */;
	struct platform_driver cocci_id/* sound/soc/sunxi/sun8i-codec.c 619 */;
	const struct dev_pm_ops cocci_id/* sound/soc/sunxi/sun8i-codec.c 614 */;
	const struct of_device_id cocci_id/* sound/soc/sunxi/sun8i-codec.c 608 */[];
	void __iomem *cocci_id/* sound/soc/sunxi/sun8i-codec.c 537 */;
	struct platform_device *cocci_id/* sound/soc/sunxi/sun8i-codec.c 534 */;
	const struct regmap_config cocci_id/* sound/soc/sunxi/sun8i-codec.c 525 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/sunxi/sun8i-codec.c 514 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/sunxi/sun8i-codec.c 491 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/sunxi/sun8i-codec.c 486 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/sunxi/sun8i-codec.c 448 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/sunxi/sun8i-codec.c 384 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/sunxi/sun8i-codec.c 349 */[];
	struct snd_soc_dai *cocci_id/* sound/soc/sunxi/sun8i-codec.c 307 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/sunxi/sun8i-codec.c 305 */;
	const struct sun8i_codec_clk_div *cocci_id/* sound/soc/sunxi/sun8i-codec.c 282 */;
	int cocci_id/* sound/soc/sunxi/sun8i-codec.c 279 */;
	unsigned long cocci_id/* sound/soc/sunxi/sun8i-codec.c 276 */;
	unsigned int cocci_id/* sound/soc/sunxi/sun8i-codec.c 273 */;
	u8 cocci_id/* sound/soc/sunxi/sun8i-codec.c 272 */;
	struct sun8i_codec *cocci_id/* sound/soc/sunxi/sun8i-codec.c 272 */;
	const struct sun8i_codec_clk_div cocci_id/* sound/soc/sunxi/sun8i-codec.c 255 */[];
	struct sun8i_codec_clk_div {
		u8 div;
		u8 val;
	} cocci_id/* sound/soc/sunxi/sun8i-codec.c 250 */;
	u32 cocci_id/* sound/soc/sunxi/sun8i-codec.c 179 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/sunxi/sun8i-codec.c 143 */;
}
