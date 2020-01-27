cocci_test_suite() {
	struct snd_seq_oss_reg *cocci_id/* sound/core/seq/oss/seq_oss_synth.c 94 */;
	struct snd_seq_device *cocci_id/* sound/core/seq/oss/seq_oss_synth.c 91 */;
	struct device *cocci_id/* sound/core/seq/oss/seq_oss_synth.c 89 */;
	void __init cocci_id/* sound/core/seq/oss/seq_oss_synth.c 79 */;
	void cocci_id/* sound/core/seq/oss/seq_oss_synth.c 74 */(struct seq_oss_synthinfo *info);
	struct seq_oss_synth *cocci_id/* sound/core/seq/oss/seq_oss_synth.c 73 */(struct seq_oss_devinfo *dp,
										  int dev);
	long cocci_id/* sound/core/seq/oss/seq_oss_synth.c 657 */;
	struct snd_info_buffer *cocci_id/* sound/core/seq/oss/seq_oss_synth.c 639 */;
	struct midi_info cocci_id/* sound/core/seq/oss/seq_oss_synth.c 613 */;
	struct synth_info *cocci_id/* sound/core/seq/oss/seq_oss_synth.c 604 */;
	struct seq_oss_synth cocci_id/* sound/core/seq/oss/seq_oss_synth.c 60 */;
	struct seq_oss_synth *cocci_id/* sound/core/seq/oss/seq_oss_synth.c 59 */[SNDRV_SEQ_OSS_MAX_SYNTH_DEVS];
	unsigned char *cocci_id/* sound/core/seq/oss/seq_oss_synth.c 587 */;
	unsigned int cocci_id/* sound/core/seq/oss/seq_oss_synth.c 563 */;
	struct snd_seq_event *cocci_id/* sound/core/seq/oss/seq_oss_synth.c 547 */;
	struct seq_oss_synth_sysex *cocci_id/* sound/core/seq/oss/seq_oss_synth.c 492 */;
	const char __user *cocci_id/* sound/core/seq/oss/seq_oss_synth.c 442 */;
	struct snd_seq_event cocci_id/* sound/core/seq/oss/seq_oss_synth.c 425 */;
	void cocci_id/* sound/core/seq/oss/seq_oss_synth.c 371 */;
	struct seq_oss_synth {
		int seq_device;
		int synth_type;
		int synth_subtype;
		int nr_voices;
		char name[SNDRV_SEQ_OSS_MAX_SYNTH_NAME];
		struct snd_seq_oss_callback oper;
		int opened;
		void *private_data;
		snd_use_lock_t use_lock;
	} cocci_id/* sound/core/seq/oss/seq_oss_synth.c 37 */;
	struct seq_oss_synthinfo *cocci_id/* sound/core/seq/oss/seq_oss_synth.c 346 */;
	struct seq_oss_devinfo *cocci_id/* sound/core/seq/oss/seq_oss_synth.c 343 */;
	struct seq_oss_synth_sysex {
		int len;
		int skip;
		unsigned char buf[MAX_SYSEX_BUFLEN];
	} cocci_id/* sound/core/seq/oss/seq_oss_synth.c 30 */;
	struct seq_oss_chinfo cocci_id/* sound/core/seq/oss/seq_oss_synth.c 237 */;
	unsigned long cocci_id/* sound/core/seq/oss/seq_oss_synth.c 184 */;
	int cocci_id/* sound/core/seq/oss/seq_oss_synth.c 181 */;
	struct seq_oss_synth *cocci_id/* sound/core/seq/oss/seq_oss_synth.c 180 */;
}
