cocci_test_suite() {
	const struct snd_pcm_hardware cocci_id/* sound/sh/sh_dac_audio.c 81 */;
	struct snd_sh_dac *cocci_id/* sound/sh/sh_dac_audio.c 65 */;
	void cocci_id/* sound/sh/sh_dac_audio.c 65 */;
	struct platform_driver cocci_id/* sound/sh/sh_dac_audio.c 425 */;
	struct snd_sh_dac {
		struct snd_card *card;
		struct snd_pcm_substream *substream;
		struct hrtimer hrtimer;
		ktime_t wakeups_per_second;
		int rate;
		int empty;
		char *data_buffer,*buffer_begin,*buffer_end;
		int processed;
		int buffer_size;
		struct dac_audio_pdata *pdata;
	} cocci_id/* sound/sh/sh_dac_audio.c 39 */;
	struct snd_device_ops cocci_id/* sound/sh/sh_dac_audio.c 345 */;
	struct snd_sh_dac **cocci_id/* sound/sh/sh_dac_audio.c 340 */;
	struct platform_device *cocci_id/* sound/sh/sh_dac_audio.c 339 */;
	struct snd_card *cocci_id/* sound/sh/sh_dac_audio.c 338 */;
	char *cocci_id/* sound/sh/sh_dac_audio.c 32 */;
	int cocci_id/* sound/sh/sh_dac_audio.c 31 */;
	ssize_t cocci_id/* sound/sh/sh_dac_audio.c 309 */;
	struct snd_pcm_runtime *cocci_id/* sound/sh/sh_dac_audio.c 308 */;
	struct snd_sh_dac cocci_id/* sound/sh/sh_dac_audio.c 306 */;
	enum hrtimer_restart cocci_id/* sound/sh/sh_dac_audio.c 304 */;
	struct hrtimer *cocci_id/* sound/sh/sh_dac_audio.c 304 */;
	struct snd_device *cocci_id/* sound/sh/sh_dac_audio.c 297 */;
	struct snd_pcm *cocci_id/* sound/sh/sh_dac_audio.c 258 */;
	const struct snd_pcm_ops cocci_id/* sound/sh/sh_dac_audio.c 240 */;
	snd_pcm_uframes_t cocci_id/* sound/sh/sh_dac_audio.c 231 */;
	void *cocci_id/* sound/sh/sh_dac_audio.c 194 */;
	void __user *cocci_id/* sound/sh/sh_dac_audio.c 174 */;
	unsigned long cocci_id/* sound/sh/sh_dac_audio.c 173 */;
	struct snd_pcm_hw_params *cocci_id/* sound/sh/sh_dac_audio.c 129 */;
	struct snd_pcm_substream *cocci_id/* sound/sh/sh_dac_audio.c 116 */;
}
