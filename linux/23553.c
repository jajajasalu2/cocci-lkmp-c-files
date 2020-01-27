cocci_test_suite() {
	struct hsw_pcm_module_map {
		int dai_id;
		int stream;
		enum sst_hsw_module_id mod_id;
	} cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 96 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 950 */[];
	struct snd_pcm *cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 926 */;
	const struct snd_pcm_hardware cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 79 */;
	uint64_t cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 783 */;
	ssize_t cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 723 */;
	snd_pcm_uframes_t cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 717 */;
	struct sst_hsw *cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 715 */;
	struct snd_soc_component *cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 713 */;
	struct snd_pcm_runtime *cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 711 */;
	struct hsw_pcm_data *cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 709 */;
	struct sst_hsw_stream *cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 707 */;
	void *cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 707 */;
	u8 cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 476 */;
	enum sst_hsw_stream_path_id cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 474 */;
	enum sst_hsw_stream_type cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 473 */;
	struct sst_dsp *cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 471 */;
	struct sst_module *cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 470 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 463 */;
	u32 *cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 445 */;
	u32 cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 443 */;
	struct snd_dma_buffer *cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 434 */;
	unsigned char *cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 432 */;
	size_t cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 432 */;
	struct snd_soc_pcm_runtime *cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 431 */;
	struct hsw_priv_data *cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 431 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 430 */;
	int cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 430 */;
	const struct snd_kcontrol_new cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 404 */[];
	enum sst_hsw_module_id cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 379 */;
	const u32 cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 36 */[];
	bool cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 335 */;
	struct soc_mixer_control *cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 225 */;
	struct snd_ctl_elem_value *cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 222 */;
	struct snd_kcontrol *cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 221 */;
	unsigned int cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 160 */;
	u32 cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 150 */(struct sst_hsw_stream *stream,
									void *data);
	struct hsw_pcm_module_map cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 142 */[];
	struct platform_driver cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 1371 */;
	const struct dev_pm_ops cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 1363 */;
	struct device *cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 1266 */;
	void cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 1266 */;
	struct hsw_priv_data {
		struct sst_hsw *hsw;
		struct device *dev;
		enum hsw_pm_state pm_state;
		struct snd_soc_card *soc_card;
		struct sst_module_runtime *runtime_waves;
		struct snd_dma_buffer dmab[HSW_PCM_COUNT][2];
		struct hsw_pcm_data pcm[HSW_PCM_COUNT][2];
	} cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 125 */;
	enum hsw_pm_state{HSW_PM_STATE_D0=0, HSW_PM_STATE_RTD3=1, HSW_PM_STATE_D3=2,} cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 118 */;
	struct sst_pdata *cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 1132 */;
	struct platform_device *cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 1130 */;
	const struct snd_soc_component_driver cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 1110 */;
	struct hsw_pcm_data {
		int dai_id;
		struct sst_hsw_stream *stream;
		struct sst_module_runtime *runtime;
		struct sst_module_runtime_context context;
		struct snd_pcm *hsw_pcm;
		u32 volume[2];
		struct snd_pcm_substream *substream;
		struct snd_compr_stream *cstream;
		unsigned int wpos;
		struct mutex mutex;
		bool allocated;
		int persistent_offset;
	} cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 103 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 1018 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/intel/haswell/sst-haswell-pcm.c 1006 */[];
}