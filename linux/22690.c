cocci_test_suite() {
	struct snd_virmidi_dev *cocci_id/* sound/drivers/virmidi.c 94 */;
	struct snd_rawmidi *cocci_id/* sound/drivers/virmidi.c 93 */;
	struct snd_card_virmidi cocci_id/* sound/drivers/virmidi.c 80 */;
	struct snd_card_virmidi *cocci_id/* sound/drivers/virmidi.c 75 */;
	struct snd_card *cocci_id/* sound/drivers/virmidi.c 74 */;
	struct platform_device *cocci_id/* sound/drivers/virmidi.c 69 */[SNDRV_CARDS];
	struct snd_card_virmidi {
		struct snd_card *card;
		struct snd_rawmidi *midi[MAX_MIDI_DEVICES];
	} cocci_id/* sound/drivers/virmidi.c 64 */;
	bool cocci_id/* sound/drivers/virmidi.c 59 */;
	bool cocci_id/* sound/drivers/virmidi.c 52 */[SNDRV_CARDS];
	char *cocci_id/* sound/drivers/virmidi.c 51 */[SNDRV_CARDS];
	int cocci_id/* sound/drivers/virmidi.c 50 */[SNDRV_CARDS];
	void __exit cocci_id/* sound/drivers/virmidi.c 179 */;
	void cocci_id/* sound/drivers/virmidi.c 179 */;
	struct platform_device *cocci_id/* sound/drivers/virmidi.c 154 */;
	int cocci_id/* sound/drivers/virmidi.c 146 */;
	int __init cocci_id/* sound/drivers/virmidi.c 144 */;
	struct platform_driver cocci_id/* sound/drivers/virmidi.c 127 */;
}
