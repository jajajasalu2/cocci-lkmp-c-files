cocci_test_suite() {
	const char *constcocci_id/* sound/soc/sunxi/sun4i-codec.c 969 */[];
	const struct snd_soc_component_driver cocci_id/* sound/soc/sunxi/sun4i-codec.c 892 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/sunxi/sun4i-codec.c 699 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/sunxi/sun4i-codec.c 679 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/sunxi/sun4i-codec.c 643 */;
	void cocci_id/* sound/soc/sunxi/sun4i-codec.c 634 */;
	struct snd_pcm_hw_constraint_list cocci_id/* sound/soc/sunxi/sun4i-codec.c 608 */;
	unsigned int cocci_id/* sound/soc/sunxi/sun4i-codec.c 602 */[];
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/sunxi/sun4i-codec.c 576 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/sunxi/sun4i-codec.c 572 */;
	u32 cocci_id/* sound/soc/sunxi/sun4i-codec.c 527 */;
	unsigned int cocci_id/* sound/soc/sunxi/sun4i-codec.c 437 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/sunxi/sun4i-codec.c 435 */;
	unsigned long cocci_id/* sound/soc/sunxi/sun4i-codec.c 405 */;
	struct sun4i_codec {
		struct device *dev;
		struct regmap *regmap;
		struct clk *clk_apb;
		struct clk *clk_module;
		struct reset_control *rst;
		struct gpio_desc *gpio_pa;
		struct regmap_field *reg_adc_fifoc;
		struct snd_dmaengine_dai_dma_data capture_dma_data;
		struct snd_dmaengine_dai_dma_data playback_dma_data;
	} cocci_id/* sound/soc/sunxi/sun4i-codec.c 235 */;
	struct platform_driver cocci_id/* sound/soc/sunxi/sun4i-codec.c 1854 */;
	void __iomem *cocci_id/* sound/soc/sunxi/sun4i-codec.c 1698 */;
	struct resource *cocci_id/* sound/soc/sunxi/sun4i-codec.c 1697 */;
	const struct sun4i_codec_quirks *cocci_id/* sound/soc/sunxi/sun4i-codec.c 1696 */;
	struct platform_device *cocci_id/* sound/soc/sunxi/sun4i-codec.c 1692 */;
	const struct of_device_id cocci_id/* sound/soc/sunxi/sun4i-codec.c 1663 */[];
	const struct sun4i_codec_quirks cocci_id/* sound/soc/sunxi/sun4i-codec.c 1596 */;
	struct sun4i_codec_quirks {
		const struct regmap_config *regmap_config;
		const struct snd_soc_component_driver *codec;
		struct snd_soc_card *(*create_card)(struct device *dev);
		struct reg_field reg_adc_fifoc;
		unsigned int reg_dac_txdata;
		unsigned int reg_adc_rxdata;
		bool has_reset;
	} cocci_id/* sound/soc/sunxi/sun4i-codec.c 1586 */;
	const struct regmap_config cocci_id/* sound/soc/sunxi/sun4i-codec.c 1544 */;
	struct snd_soc_aux_dev cocci_id/* sound/soc/sunxi/sun4i-codec.c 1426 */;
	struct snd_soc_card *cocci_id/* sound/soc/sunxi/sun4i-codec.c 1354 */;
	struct device *cocci_id/* sound/soc/sunxi/sun4i-codec.c 1354 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/sunxi/sun4i-codec.c 1349 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/sunxi/sun4i-codec.c 1345 */[];
	struct snd_kcontrol *cocci_id/* sound/soc/sunxi/sun4i-codec.c 1326 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/sunxi/sun4i-codec.c 1325 */;
	struct snd_soc_dai_link_component *cocci_id/* sound/soc/sunxi/sun4i-codec.c 1299 */;
	int *cocci_id/* sound/soc/sunxi/sun4i-codec.c 1295 */;
	struct snd_soc_dai_link *cocci_id/* sound/soc/sunxi/sun4i-codec.c 1294 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/sunxi/sun4i-codec.c 1273 */;
	struct sun4i_codec *cocci_id/* sound/soc/sunxi/sun4i-codec.c 1265 */;
	struct snd_soc_dai *cocci_id/* sound/soc/sunxi/sun4i-codec.c 1262 */;
	int cocci_id/* sound/soc/sunxi/sun4i-codec.c 1262 */;
	const  cocci_id/* sound/soc/sunxi/sun4i-codec.c 1024 */(sun6i_codec_mic_gain_scale,
								0,0,
								TLV_DB_SCALE_ITEM(0,0,0),
								1,7,
								TLV_DB_SCALE_ITEM(2400,300,0));
	const  cocci_id/* sound/soc/sunxi/sun4i-codec.c 1020 */(sun6i_codec_lineout_vol_scale,
								0,1,
								TLV_DB_SCALE_ITEM(TLV_DB_GAIN_MUTE,0,1),
								2,31,
								TLV_DB_SCALE_ITEM(-4350,150,0));
	const  cocci_id/* sound/soc/sunxi/sun4i-codec.c 1018 */(sun6i_codec_out_mixer_pregain_scale,
								-450,150,0);
}
