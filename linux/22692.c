cocci_test_suite() {
	struct pardev_cb cocci_id/* sound/drivers/mts64.c 910 */;
	struct pardevice *cocci_id/* sound/drivers/mts64.c 892 */;
	struct snd_card *cocci_id/* sound/drivers/mts64.c 889 */;
	struct parport_driver cocci_id/* sound/drivers/mts64.c 878 */;
	struct platform_device *cocci_id/* sound/drivers/mts64.c 839 */;
	struct snd_rawmidi_substream *cocci_id/* sound/drivers/mts64.c 817 */;
	void *cocci_id/* sound/drivers/mts64.c 812 */;
	struct snd_rawmidi_substream cocci_id/* sound/drivers/mts64.c 784 */;
	struct mts64 cocci_id/* sound/drivers/mts64.c 78 */;
	struct list_head *cocci_id/* sound/drivers/mts64.c 756 */;
	struct snd_rawmidi *cocci_id/* sound/drivers/mts64.c 754 */;
	const struct snd_rawmidi_ops cocci_id/* sound/drivers/mts64.c 744 */;
	struct mts64 **cocci_id/* sound/drivers/mts64.c 72 */;
	unsigned long cocci_id/* sound/drivers/mts64.c 690 */;
	struct snd_kcontrol_new *cocci_id/* sound/drivers/mts64.c 644 */[];
	struct snd_kcontrol_new cocci_id/* sound/drivers/mts64.c 628 */;
	struct snd_ctl_elem_value *cocci_id/* sound/drivers/mts64.c 599 */;
	struct snd_kcontrol *cocci_id/* sound/drivers/mts64.c 598 */;
	const char *const cocci_id/* sound/drivers/mts64.c 591 */[5];
	struct snd_ctl_elem_info *cocci_id/* sound/drivers/mts64.c 589 */;
	unsigned int cocci_id/* sound/drivers/mts64.c 530 */;
	struct mts64 {
		spinlock_t lock;
		struct snd_card *card;
		struct snd_rawmidi *rmidi;
		struct pardevice *pardev;
		int open_count;
		int current_midi_output_port;
		int current_midi_input_port;
		u8 mode[MTS64_NUM_INPUT_PORTS];
		struct snd_rawmidi_substream *midi_input_substream[MTS64_NUM_INPUT_PORTS];
		int smpte_switch;
		u8 time[4];
		u8 fps;
	} cocci_id/* sound/drivers/mts64.c 49 */;
	u8 cocci_id/* sound/drivers/mts64.c 356 */[5];
	bool cocci_id/* sound/drivers/mts64.c 34 */;
	u16 cocci_id/* sound/drivers/mts64.c 301 */;
	int cocci_id/* sound/drivers/mts64.c 28 */;
	struct platform_device *cocci_id/* sound/drivers/mts64.c 27 */[SNDRV_CARDS];
	u8 cocci_id/* sound/drivers/mts64.c 264 */[];
	bool cocci_id/* sound/drivers/mts64.c 25 */[SNDRV_CARDS];
	struct parport *cocci_id/* sound/drivers/mts64.c 241 */;
	char *cocci_id/* sound/drivers/mts64.c 24 */[SNDRV_CARDS];
	struct mts64 *cocci_id/* sound/drivers/mts64.c 238 */;
	int cocci_id/* sound/drivers/mts64.c 23 */[SNDRV_CARDS];
	u8 cocci_id/* sound/drivers/mts64.c 183 */;
	void cocci_id/* sound/drivers/mts64.c 165 */;
	void cocci_id/* sound/drivers/mts64.c 144 */(struct mts64 *mts, u8 c,
						     int midiport);
	void cocci_id/* sound/drivers/mts64.c 142 */(struct parport *p, u8 c);
	void cocci_id/* sound/drivers/mts64.c 137 */(struct parport *p,
						     u8 hours, u8 minutes,
						     u8 seconds, u8 frames,
						     u8 idx);
	u8 cocci_id/* sound/drivers/mts64.c 136 */(struct parport *p);
	u16 cocci_id/* sound/drivers/mts64.c 135 */(struct parport *p);
	u8 cocci_id/* sound/drivers/mts64.c 133 */(u8 c);
	int cocci_id/* sound/drivers/mts64.c 132 */(struct mts64 *mts);
	int cocci_id/* sound/drivers/mts64.c 130 */(struct parport *p);
	void cocci_id/* sound/drivers/mts64.c 128 */(struct parport *p);
	void __exit cocci_id/* sound/drivers/mts64.c 1051 */;
	int __init cocci_id/* sound/drivers/mts64.c 1031 */;
	struct platform_driver cocci_id/* sound/drivers/mts64.c 1006 */;
}
