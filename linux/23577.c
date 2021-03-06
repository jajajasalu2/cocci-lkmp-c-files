cocci_test_suite() {
	struct stm32_adfsdm_priv *cocci_id/* sound/soc/stm/stm32_adfsdm.c 79 */;
	struct snd_soc_dai *cocci_id/* sound/soc/stm/stm32_adfsdm.c 77 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/stm/stm32_adfsdm.c 76 */;
	int cocci_id/* sound/soc/stm/stm32_adfsdm.c 76 */;
	const struct snd_pcm_hardware cocci_id/* sound/soc/stm/stm32_adfsdm.c 45 */;
	struct platform_driver cocci_id/* sound/soc/stm/stm32_adfsdm.c 392 */;
	struct platform_device *cocci_id/* sound/soc/stm/stm32_adfsdm.c 338 */;
	const struct of_device_id cocci_id/* sound/soc/stm/stm32_adfsdm.c 332 */[];
	struct snd_soc_component_driver cocci_id/* sound/soc/stm/stm32_adfsdm.c 321 */;
	struct snd_pcm *cocci_id/* sound/soc/stm/stm32_adfsdm.c 312 */;
	struct stm32_adfsdm_priv {
		struct snd_soc_dai_driver dai_drv;
		struct snd_pcm_substream *substream;
		struct device *dev;
		struct iio_channel *iio_ch;
		struct iio_cb_buffer *iio_cb;
		bool iio_active;
		unsigned char *pcm_buff;
		unsigned int pos;
		struct mutex lock;
	} cocci_id/* sound/soc/stm/stm32_adfsdm.c 28 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/stm/stm32_adfsdm.c 274 */;
	snd_pcm_uframes_t cocci_id/* sound/soc/stm/stm32_adfsdm.c 261 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/stm/stm32_adfsdm.c 251 */;
	struct snd_soc_component *cocci_id/* sound/soc/stm/stm32_adfsdm.c 248 */;
	snd_pcm_format_t cocci_id/* sound/soc/stm/stm32_adfsdm.c 178 */;
	u8 *cocci_id/* sound/soc/stm/stm32_adfsdm.c 172 */;
	u16 *cocci_id/* sound/soc/stm/stm32_adfsdm.c 159 */;
	unsigned int cocci_id/* sound/soc/stm/stm32_adfsdm.c 158 */;
	const void *cocci_id/* sound/soc/stm/stm32_adfsdm.c 156 */;
	void *cocci_id/* sound/soc/stm/stm32_adfsdm.c 156 */;
	size_t cocci_id/* sound/soc/stm/stm32_adfsdm.c 156 */;
	void cocci_id/* sound/soc/stm/stm32_adfsdm.c 156 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/stm/stm32_adfsdm.c 152 */;
	const struct snd_soc_dai_driver cocci_id/* sound/soc/stm/stm32_adfsdm.c 140 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/stm/stm32_adfsdm.c 134 */;
	char cocci_id/* sound/soc/stm/stm32_adfsdm.c 117 */[10];
	ssize_t cocci_id/* sound/soc/stm/stm32_adfsdm.c 116 */;
}
