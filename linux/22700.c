cocci_test_suite() {
	struct portman cocci_id/* sound/drivers/portman2x4.c 92 */;
	struct portman *cocci_id/* sound/drivers/portman2x4.c 88 */;
	struct portman **cocci_id/* sound/drivers/portman2x4.c 86 */;
	void __exit cocci_id/* sound/drivers/portman2x4.c 851 */;
	struct pardevice *cocci_id/* sound/drivers/portman2x4.c 85 */;
	struct snd_card *cocci_id/* sound/drivers/portman2x4.c 84 */;
	int __init cocci_id/* sound/drivers/portman2x4.c 831 */;
	struct platform_driver cocci_id/* sound/drivers/portman2x4.c 806 */;
	struct pardev_cb cocci_id/* sound/drivers/portman2x4.c 709 */;
	struct portman {
		spinlock_t reg_lock;
		struct snd_card *card;
		struct snd_rawmidi *rmidi;
		struct pardevice *pardev;
		int open_count;
		int mode[PORTMAN_NUM_INPUT_PORTS];
		struct snd_rawmidi_substream *midi_input[PORTMAN_NUM_INPUT_PORTS];
	} cocci_id/* sound/drivers/portman2x4.c 68 */;
	struct parport_driver cocci_id/* sound/drivers/portman2x4.c 677 */;
	struct platform_device *cocci_id/* sound/drivers/portman2x4.c 638 */;
	void *cocci_id/* sound/drivers/portman2x4.c 600 */;
	struct snd_rawmidi *cocci_id/* sound/drivers/portman2x4.c 552 */;
	const struct snd_rawmidi_ops cocci_id/* sound/drivers/portman2x4.c 542 */;
	bool cocci_id/* sound/drivers/portman2x4.c 54 */;
	unsigned long cocci_id/* sound/drivers/portman2x4.c 511 */;
	struct snd_rawmidi_substream *cocci_id/* sound/drivers/portman2x4.c 502 */;
	int cocci_id/* sound/drivers/portman2x4.c 48 */;
	struct platform_device *cocci_id/* sound/drivers/portman2x4.c 47 */[SNDRV_CARDS];
	bool cocci_id/* sound/drivers/portman2x4.c 45 */[SNDRV_CARDS];
	char *cocci_id/* sound/drivers/portman2x4.c 44 */[SNDRV_CARDS];
	struct parport *cocci_id/* sound/drivers/portman2x4.c 432 */;
	int cocci_id/* sound/drivers/portman2x4.c 43 */[SNDRV_CARDS];
	unsigned int cocci_id/* sound/drivers/portman2x4.c 388 */;
	unsigned char cocci_id/* sound/drivers/portman2x4.c 385 */;
	void cocci_id/* sound/drivers/portman2x4.c 385 */;
	u8 cocci_id/* sound/drivers/portman2x4.c 186 */;
}
