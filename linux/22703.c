cocci_test_suite() {
	struct snd_midi_channel_set *cocci_id/* sound/drivers/opl3/opl3_midi.c 839 */;
	void *cocci_id/* sound/drivers/opl3/opl3_midi.c 802 */;
	unsigned char *cocci_id/* sound/drivers/opl3/opl3_midi.c 79 */;
	short cocci_id/* sound/drivers/opl3/opl3_midi.c 72 */[16];
	unsigned long cocci_id/* sound/drivers/opl3/opl3_midi.c 695 */;
	unsigned short cocci_id/* sound/drivers/opl3/opl3_midi.c 607 */;
	struct fm_instrument *cocci_id/* sound/drivers/opl3/opl3_midi.c 301 */;
	struct fm_patch *cocci_id/* sound/drivers/opl3/opl3_midi.c 300 */;
	unsigned char cocci_id/* sound/drivers/opl3/opl3_midi.c 285 */[4];
	int cocci_id/* sound/drivers/opl3/opl3_midi.c 269 */[MAX_OPL3_VOICES];
	char cocci_id/* sound/drivers/opl3/opl3_midi.c 26 */[128];
	struct timer_list *cocci_id/* sound/drivers/opl3/opl3_midi.c 223 */;
	struct best *cocci_id/* sound/drivers/opl3/opl3_midi.c 147 */;
	struct best {
		unsigned int time;
		int voice;
	} cocci_id/* sound/drivers/opl3/opl3_midi.c 143 */[END];
	void cocci_id/* sound/drivers/opl3/opl3_midi.c 14 */(void *p,
							     int note,
							     int vel,
							     struct snd_midi_channel *chan);
	enum{FREE=0, CHEAP, EXPENSIVE, END,} cocci_id/* sound/drivers/opl3/opl3_midi.c 138 */;
	char *cocci_id/* sound/drivers/opl3/opl3_midi.c 134 */[3];
	unsigned int cocci_id/* sound/drivers/opl3/opl3_midi.c 130 */;
	struct snd_opl3_voice *cocci_id/* sound/drivers/opl3/opl3_midi.c 129 */;
	struct snd_midi_channel *cocci_id/* sound/drivers/opl3/opl3_midi.c 125 */;
	struct snd_opl3 *cocci_id/* sound/drivers/opl3/opl3_midi.c 110 */;
	char *cocci_id/* sound/drivers/opl3/opl3_midi.c 110 */;
	int cocci_id/* sound/drivers/opl3/opl3_midi.c 110 */;
	void cocci_id/* sound/drivers/opl3/opl3_midi.c 110 */;
	unsigned char cocci_id/* sound/drivers/opl3/opl3_midi.c 103 */;
}
