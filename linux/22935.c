cocci_test_suite() {
	struct snd_pcm_runtime *cocci_id/* sound/core/pcm_misc.c 484 */;
	struct pcm_format_data cocci_id/* sound/core/pcm_misc.c 45 */[(INT)SNDRV_PCM_FORMAT_LAST + 1];
	unsigned char *cocci_id/* sound/core/pcm_misc.c 418 */;
	void *cocci_id/* sound/core/pcm_misc.c 415 */;
	unsigned int cocci_id/* sound/core/pcm_misc.c 415 */;
	const unsigned char *cocci_id/* sound/core/pcm_misc.c 395 */;
	ssize_t cocci_id/* sound/core/pcm_misc.c 380 */;
	size_t cocci_id/* sound/core/pcm_misc.c 380 */;
	struct pcm_format_data {
		unsigned char width;
		unsigned char phys;
		signed char le;
		signed char signd;
		unsigned char silence[8];
	} cocci_id/* sound/core/pcm_misc.c 34 */;
	snd_pcm_format_t cocci_id/* sound/core/pcm_misc.c 325 */;
	int cocci_id/* sound/core/pcm_misc.c 325 */;
	INT cocci_id/* sound/core/pcm_misc.c 310 */;
}
