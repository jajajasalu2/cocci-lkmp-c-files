cocci_test_suite() {
	struct snd_pcm_runtime *cocci_id/* sound/soc/codecs/rt5514-spi.c 78 */;
	struct rt5514_dsp cocci_id/* sound/soc/codecs/rt5514-spi.c 77 */;
	struct work_struct *cocci_id/* sound/soc/codecs/rt5514-spi.c 74 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/rt5514-spi.c 62 */;
	struct spi_driver cocci_id/* sound/soc/codecs/rt5514-spi.c 504 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/rt5514-spi.c 498 */[];
	const struct dev_pm_ops cocci_id/* sound/soc/codecs/rt5514-spi.c 494 */;
	u8 *cocci_id/* sound/soc/codecs/rt5514-spi.c 484 */;
	const struct snd_pcm_hardware cocci_id/* sound/soc/codecs/rt5514-spi.c 48 */;
	u8 cocci_id/* sound/soc/codecs/rt5514-spi.c 477 */[8];
	int cocci_id/* sound/soc/codecs/rt5514-spi.c 476 */;
	struct rt5514_dsp *cocci_id/* sound/soc/codecs/rt5514-spi.c 475 */;
	struct device *cocci_id/* sound/soc/codecs/rt5514-spi.c 473 */;
	int __maybe_unused cocci_id/* sound/soc/codecs/rt5514-spi.c 473 */;
	u32 cocci_id/* sound/soc/codecs/rt5514-spi.c 399 */;
	const u8 *cocci_id/* sound/soc/codecs/rt5514-spi.c 399 */;
	struct rt5514_dsp {
		struct device *dev;
		struct delayed_work copy_work;
		struct mutex dma_lock;
		struct snd_pcm_substream *substream;
		unsigned int buf_base,buf_limit,buf_rp;
		size_t buf_size,get_size,dma_offset;
	} cocci_id/* sound/soc/codecs/rt5514-spi.c 39 */;
	struct spi_device *cocci_id/* sound/soc/codecs/rt5514-spi.c 37 */;
	struct spi_transfer cocci_id/* sound/soc/codecs/rt5514-spi.c 329 */[3];
	struct spi_message cocci_id/* sound/soc/codecs/rt5514-spi.c 328 */;
	u8 cocci_id/* sound/soc/codecs/rt5514-spi.c 323 */;
	unsigned int cocci_id/* sound/soc/codecs/rt5514-spi.c 321 */;
	size_t cocci_id/* sound/soc/codecs/rt5514-spi.c 321 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/rt5514-spi.c 302 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/codecs/rt5514-spi.c 295 */;
	snd_pcm_uframes_t cocci_id/* sound/soc/codecs/rt5514-spi.c 251 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/rt5514-spi.c 237 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/rt5514-spi.c 236 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/rt5514-spi.c 214 */;
	irqreturn_t cocci_id/* sound/soc/codecs/rt5514-spi.c 194 */;
	void *cocci_id/* sound/soc/codecs/rt5514-spi.c 194 */;
	void cocci_id/* sound/soc/codecs/rt5514-spi.c 155 */;
}
