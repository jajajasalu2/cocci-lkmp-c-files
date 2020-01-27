cocci_test_suite() {
	struct device *cocci_id/* sound/soc/ti/omap-hdmi.c 48 */;
	void cocci_id/* sound/soc/ti/omap-hdmi.c 48 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/ti/omap-hdmi.c 43 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/ti/omap-hdmi.c 41 */;
	struct hdmi_audio_data *cocci_id/* sound/soc/ti/omap-hdmi.c 41 */;
	struct platform_driver cocci_id/* sound/soc/ti/omap-hdmi.c 408 */;
	struct snd_soc_dai_link_component *cocci_id/* sound/soc/ti/omap-hdmi.c 315 */;
	struct snd_soc_card *cocci_id/* sound/soc/ti/omap-hdmi.c 314 */;
	struct snd_soc_dai_driver *cocci_id/* sound/soc/ti/omap-hdmi.c 313 */;
	struct omap_hdmi_audio_pdata *cocci_id/* sound/soc/ti/omap-hdmi.c 310 */;
	struct platform_device *cocci_id/* sound/soc/ti/omap-hdmi.c 308 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/ti/omap-hdmi.c 294 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/ti/omap-hdmi.c 276 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/ti/omap-hdmi.c 269 */;
	struct hdmi_audio_data {
		struct snd_soc_card *card;
		const struct omap_hdmi_audio_ops *ops;
		struct device *dssdev;
		struct snd_dmaengine_dai_dma_data dma_data;
		struct omap_dss_audio dss_audio;
		struct snd_aes_iec958 iec;
		struct snd_cea_861_aud_if cea;
		struct mutex current_stream_lock;
		struct snd_pcm_substream *current_stream;
	} cocci_id/* sound/soc/ti/omap-hdmi.c 26 */;
	struct snd_cea_861_aud_if *cocci_id/* sound/soc/ti/omap-hdmi.c 110 */;
	struct snd_aes_iec958 *cocci_id/* sound/soc/ti/omap-hdmi.c 109 */;
	struct snd_soc_dai *cocci_id/* sound/soc/ti/omap-hdmi.c 106 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/ti/omap-hdmi.c 105 */;
	int cocci_id/* sound/soc/ti/omap-hdmi.c 104 */;
}
