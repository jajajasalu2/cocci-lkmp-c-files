cocci_test_suite() {
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/es7134.c 66 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/es7134.c 65 */;
	const struct es7134_clock_mode *cocci_id/* sound/soc/codecs/es7134.c 45 */;
	unsigned int cocci_id/* sound/soc/codecs/es7134.c 39 */;
	struct es7134_data *cocci_id/* sound/soc/codecs/es7134.c 38 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/es7134.c 37 */;
	int cocci_id/* sound/soc/codecs/es7134.c 37 */;
	struct es7134_data {
		unsigned int mclk;
		const struct es7134_chip *chip;
	} cocci_id/* sound/soc/codecs/es7134.c 32 */;
	struct platform_driver cocci_id/* sound/soc/codecs/es7134.c 305 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/es7134.c 296 */[];
	struct device *cocci_id/* sound/soc/codecs/es7134.c 276 */;
	struct platform_device *cocci_id/* sound/soc/codecs/es7134.c 274 */;
	struct es7134_chip {
		struct snd_soc_dai_driver *dai_drv;
		const struct es7134_clock_mode *modes;
		unsigned int mode_num;
		const struct snd_soc_dapm_widget *extra_widgets;
		unsigned int extra_widget_num;
		const struct snd_soc_dapm_route *extra_routes;
		unsigned int extra_route_num;
	} cocci_id/* sound/soc/codecs/es7134.c 22 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/es7134.c 207 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/es7134.c 201 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/es7134.c 194 */[];
	const struct es7134_chip cocci_id/* sound/soc/codecs/es7134.c 186 */;
	unsigned int cocci_id/* sound/soc/codecs/es7134.c 164 */[];
	const struct es7134_clock_mode cocci_id/* sound/soc/codecs/es7134.c 159 */[];
	struct es7134_clock_mode {
		unsigned int rate_min;
		unsigned int rate_max;
		unsigned int *mclk_fs;
		unsigned int mclk_fs_num;
	} cocci_id/* sound/soc/codecs/es7134.c 15 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/es7134.c 139 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/es7134.c 133 */;
	const struct es7134_chip *cocci_id/* sound/soc/codecs/es7134.c 109 */;
	struct snd_soc_dapm_context *cocci_id/* sound/soc/codecs/es7134.c 107 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/es7134.c 105 */;
}
