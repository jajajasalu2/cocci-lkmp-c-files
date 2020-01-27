cocci_test_suite() {
	struct extra_event_list {
		int event;
		int (*decode)(struct snd_midi_event *dev, unsigned char *buf,
			      int len, struct snd_seq_event *ev);
	} cocci_id/* sound/core/seq/seq_midi_event.c 88 */[];
	int cocci_id/* sound/core/seq/seq_midi_event.c 85 */(struct snd_midi_event *dev,
							     unsigned char *buf,
							     int count,
							     struct snd_seq_event *ev);
	int cocci_id/* sound/core/seq/seq_midi_event.c 83 */(struct snd_midi_event *dev,
							     unsigned char *buf,
							     int len,
							     struct snd_seq_event *ev);
	struct status_event_list {
		int event;
		int qlen;
		void (*encode)(struct snd_midi_event *dev,
			       struct snd_seq_event *ev);
		void (*decode)(struct snd_seq_event *ev, unsigned char *buf);
	} cocci_id/* sound/core/seq/seq_midi_event.c 48 */[];
	unsigned char cocci_id/* sound/core/seq/seq_midi_event.c 434 */[4];
	char cocci_id/* sound/core/seq/seq_midi_event.c 426 */[4];
	char *cocci_id/* sound/core/seq/seq_midi_event.c 425 */;
	void cocci_id/* sound/core/seq/seq_midi_event.c 39 */(struct snd_seq_event *ev,
							      unsigned char *buf);
	unsigned char cocci_id/* sound/core/seq/seq_midi_event.c 386 */;
	struct snd_seq_event *cocci_id/* sound/core/seq/seq_midi_event.c 384 */;
	struct snd_midi_event *cocci_id/* sound/core/seq/seq_midi_event.c 383 */;
	unsigned char *cocci_id/* sound/core/seq/seq_midi_event.c 383 */;
	int cocci_id/* sound/core/seq/seq_midi_event.c 383 */;
	void cocci_id/* sound/core/seq/seq_midi_event.c 348 */;
	void cocci_id/* sound/core/seq/seq_midi_event.c 33 */(struct snd_midi_event *dev,
							      struct snd_seq_event *ev);
	unsigned long cocci_id/* sound/core/seq/seq_midi_event.c 322 */;
	unsigned int cocci_id/* sound/core/seq/seq_midi_event.c 293 */;
	long cocci_id/* sound/core/seq/seq_midi_event.c 290 */;
	bool cocci_id/* sound/core/seq/seq_midi_event.c 176 */;
	struct snd_midi_event **cocci_id/* sound/core/seq/seq_midi_event.c 102 */;
}
