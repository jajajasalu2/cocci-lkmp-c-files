cocci_test_suite() {
	u8 cocci_id/* sound/soc/intel/baytrail/sst-baytrail-pcm.c 70 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-pcm.c 63 */;
	struct sst_byt_priv_data {
		struct sst_byt *byt;
		struct sst_byt_pcm_data pcm[BYT_PCM_COUNT];
		bool restore_stream;
	} cocci_id/* sound/soc/intel/baytrail/sst-baytrail-pcm.c 49 */;
	struct platform_driver cocci_id/* sound/soc/intel/baytrail/sst-baytrail-pcm.c 461 */;
	struct sst_pdata *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-pcm.c 433 */;
	struct platform_device *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-pcm.c 431 */;
	const struct dev_pm_ops cocci_id/* sound/soc/intel/baytrail/sst-baytrail-pcm.c 421 */;
	struct device *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-pcm.c 405 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/intel/baytrail/sst-baytrail-pcm.c 371 */;
	struct sst_byt_pcm_data {
		struct sst_byt_stream *stream;
		struct snd_pcm_substream *substream;
		struct mutex mutex;
		u32 hw_ptr;
		struct work_struct work;
	} cocci_id/* sound/soc/intel/baytrail/sst-baytrail-pcm.c 37 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/intel/baytrail/sst-baytrail-pcm.c 326 */[];
	size_t cocci_id/* sound/soc/intel/baytrail/sst-baytrail-pcm.c 312 */;
	struct snd_pcm *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-pcm.c 311 */;
	struct vm_area_struct *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-pcm.c 300 */;
	int cocci_id/* sound/soc/intel/baytrail/sst-baytrail-pcm.c 273 */;
	snd_pcm_uframes_t cocci_id/* sound/soc/intel/baytrail/sst-baytrail-pcm.c 232 */;
	struct sst_byt *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-pcm.c 216 */;
	struct sst_byt_priv_data *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-pcm.c 215 */;
	struct snd_soc_component *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-pcm.c 214 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-pcm.c 213 */;
	struct snd_pcm_runtime *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-pcm.c 212 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-pcm.c 211 */;
	struct sst_byt_pcm_data *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-pcm.c 210 */;
	const struct snd_pcm_hardware cocci_id/* sound/soc/intel/baytrail/sst-baytrail-pcm.c 21 */;
	u32 cocci_id/* sound/soc/intel/baytrail/sst-baytrail-pcm.c 208 */;
	struct sst_byt_stream *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-pcm.c 208 */;
	void *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-pcm.c 208 */;
	struct sst_byt_pcm_data cocci_id/* sound/soc/intel/baytrail/sst-baytrail-pcm.c 162 */;
	struct work_struct *cocci_id/* sound/soc/intel/baytrail/sst-baytrail-pcm.c 159 */;
	void cocci_id/* sound/soc/intel/baytrail/sst-baytrail-pcm.c 159 */;
}
