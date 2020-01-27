cocci_test_suite() {
	struct snd_seq_event *cocci_id/* sound/core/seq/seq_midi_emul.c 70 */;
	struct snd_midi_channel cocci_id/* sound/core/seq/seq_midi_emul.c 625 */;
	int cocci_id/* sound/core/seq/seq_midi_emul.c 607 */;
	struct snd_midi_op *cocci_id/* sound/core/seq/seq_midi_emul.c 605 */;
	struct snd_midi_channel *cocci_id/* sound/core/seq/seq_midi_emul.c 605 */;
	void *cocci_id/* sound/core/seq/seq_midi_emul.c 605 */;
	void cocci_id/* sound/core/seq/seq_midi_emul.c 604 */;
	void cocci_id/* sound/core/seq/seq_midi_emul.c 51 */(struct snd_midi_channel_set *chset);
	void cocci_id/* sound/core/seq/seq_midi_emul.c 50 */(struct snd_midi_channel *chan);
	void cocci_id/* sound/core/seq/seq_midi_emul.c 48 */(struct snd_midi_op *ops,
							     void *private,
							     struct snd_midi_channel *chan);
	unsigned char cocci_id/* sound/core/seq/seq_midi_emul.c 477 */[];
	unsigned char *cocci_id/* sound/core/seq/seq_midi_emul.c 473 */;
	unsigned char cocci_id/* sound/core/seq/seq_midi_emul.c 458 */;
	void cocci_id/* sound/core/seq/seq_midi_emul.c 44 */(struct snd_midi_op *ops,
							     void *private,
							     unsigned char *sysex,
							     int len,
							     struct snd_midi_channel_set *chset);
	void cocci_id/* sound/core/seq/seq_midi_emul.c 42 */(struct snd_midi_op *ops,
							     void *drv,
							     struct snd_midi_channel *chan,
							     struct snd_midi_channel_set *chset);
	void cocci_id/* sound/core/seq/seq_midi_emul.c 36 */(struct snd_midi_op *ops,
							     void *private,
							     struct snd_midi_channel_set *chset,
							     struct snd_midi_channel *chan,
							     int control,
							     int value);
	void cocci_id/* sound/core/seq/seq_midi_emul.c 33 */(struct snd_midi_op *ops,
							     void *drv,
							     struct snd_midi_channel *chan,
							     int note,
							     int vel);
	struct snd_midi_channel_set *cocci_id/* sound/core/seq/seq_midi_emul.c 254 */;
	unsigned char cocci_id/* sound/core/seq/seq_midi_emul.c 192 */[64];
}
