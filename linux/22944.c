cocci_test_suite() {
	struct snd_info_buffer *cocci_id/* sound/core/seq/oss/seq_oss_midi.c 674 */;
	int cocci_id/* sound/core/seq/oss/seq_oss_midi.c 660 */;
	struct snd_seq_client_info *cocci_id/* sound/core/seq/oss/seq_oss_midi.c 66 */;
	char *cocci_id/* sound/core/seq/oss/seq_oss_midi.c 659 */;
	struct midi_info *cocci_id/* sound/core/seq/oss/seq_oss_midi.c 640 */;
	unsigned char cocci_id/* sound/core/seq/oss/seq_oss_midi.c 621 */;
	char cocci_id/* sound/core/seq/oss/seq_oss_midi.c 597 */[32];
	struct snd_seq_event *cocci_id/* sound/core/seq/oss/seq_oss_midi.c 595 */;
	int cocci_id/* sound/core/seq/oss/seq_oss_midi.c 57 */(struct seq_oss_devinfo *dp,
							       struct snd_seq_event *ev,
							       struct seq_oss_midi *mdev);
	int cocci_id/* sound/core/seq/oss/seq_oss_midi.c 56 */(struct seq_oss_devinfo *dp,
							       struct snd_seq_event *ev,
							       int dev);
	struct seq_oss_midi *cocci_id/* sound/core/seq/oss/seq_oss_midi.c 55 */(struct seq_oss_devinfo *dp,
										int dev);
	struct seq_oss_midi *cocci_id/* sound/core/seq/oss/seq_oss_midi.c 54 */(int dev);
	union evrec cocci_id/* sound/core/seq/oss/seq_oss_midi.c 536 */;
	void *cocci_id/* sound/core/seq/oss/seq_oss_midi.c 506 */;
	struct snd_seq_addr *cocci_id/* sound/core/seq/oss/seq_oss_midi.c 490 */;
	struct seq_oss_midi *cocci_id/* sound/core/seq/oss/seq_oss_midi.c 47 */[SNDRV_SEQ_OSS_MAX_MIDI_DEVS];
	struct snd_seq_event cocci_id/* sound/core/seq/oss/seq_oss_midi.c 454 */;
	struct snd_seq_port_subscribe cocci_id/* sound/core/seq/oss/seq_oss_midi.c 385 */;
	struct seq_oss_devinfo *cocci_id/* sound/core/seq/oss/seq_oss_midi.c 302 */;
	struct seq_oss_midi {
		int seq_device;
		int client;
		int port;
		unsigned int flags;
		int opened;
		unsigned char name[SNDRV_SEQ_OSS_MAX_MIDI_NAME];
		struct snd_midi_event *coder;
		struct seq_oss_devinfo *devinfo;
		snd_use_lock_t use_lock;
	} cocci_id/* sound/core/seq/oss/seq_oss_midi.c 30 */;
	void cocci_id/* sound/core/seq/oss/seq_oss_midi.c 276 */;
	struct snd_seq_port_info *cocci_id/* sound/core/seq/oss/seq_oss_midi.c 138 */;
	unsigned long cocci_id/* sound/core/seq/oss/seq_oss_midi.c 115 */;
	struct seq_oss_midi *cocci_id/* sound/core/seq/oss/seq_oss_midi.c 110 */;
}
