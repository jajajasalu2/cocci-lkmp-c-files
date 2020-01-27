cocci_test_suite() {
	const struct es7241_clock_mode *cocci_id/* sound/soc/codecs/es7241.c 96 */;
	unsigned int cocci_id/* sound/soc/codecs/es7241.c 91 */;
	struct es7241_data *cocci_id/* sound/soc/codecs/es7241.c 90 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/es7241.c 88 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/es7241.c 87 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/es7241.c 86 */;
	int cocci_id/* sound/soc/codecs/es7241.c 86 */;
	struct platform_driver cocci_id/* sound/soc/codecs/es7241.c 310 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/es7241.c 303 */[];
	struct es7241_data {
		struct gpio_desc *reset;
		struct gpio_desc *m0;
		struct gpio_desc *m1;
		unsigned int fmt;
		unsigned int mclk;
		bool is_slave;
		const struct es7241_chip *chip;
	} cocci_id/* sound/soc/codecs/es7241.c 26 */;
	struct platform_device *cocci_id/* sound/soc/codecs/es7241.c 254 */;
	bool cocci_id/* sound/soc/codecs/es7241.c 240 */;
	struct device *cocci_id/* sound/soc/codecs/es7241.c 238 */;
	void cocci_id/* sound/soc/codecs/es7241.c 238 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/es7241.c 228 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/es7241.c 220 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/es7241.c 211 */[];
	struct es7241_chip {
		const struct es7241_clock_mode *modes;
		unsigned int mode_num;
	} cocci_id/* sound/soc/codecs/es7241.c 21 */;
	const struct es7241_chip cocci_id/* sound/soc/codecs/es7241.c 206 */;
	unsigned int cocci_id/* sound/soc/codecs/es7241.c 180 */[];
	const struct es7241_clock_mode cocci_id/* sound/soc/codecs/es7241.c 175 */[];
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/es7241.c 161 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/es7241.c 155 */;
	struct es7241_clock_mode {
		unsigned int rate_min;
		unsigned int rate_max;
		unsigned int *slv_mfs;
		unsigned int slv_mfs_num;
		unsigned int mst_mfs;
		unsigned int mst_m0:1;
		unsigned int mst_m1:1;
	} cocci_id/* sound/soc/codecs/es7241.c 11 */;
}
