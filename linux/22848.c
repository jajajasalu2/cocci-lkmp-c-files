cocci_test_suite() {
	unsigned int cocci_id/* sound/firewire/dice/dice-presonus.c 52 */;
	struct fw_csr_iterator cocci_id/* sound/firewire/dice/dice-presonus.c 30 */;
	const struct {
		u32 model_id;
		const struct dice_presonus_spec *spec;
	} *cocci_id/* sound/firewire/dice/dice-presonus.c 24 */;
	struct snd_dice *cocci_id/* sound/firewire/dice/dice-presonus.c 22 */;
	int cocci_id/* sound/firewire/dice/dice-presonus.c 22 */;
	const struct dice_presonus_spec cocci_id/* sound/firewire/dice/dice-presonus.c 16 */;
	struct dice_presonus_spec {
		unsigned int tx_pcm_chs[MAX_STREAMS][SND_DICE_RATE_MODE_COUNT];
		unsigned int rx_pcm_chs[MAX_STREAMS][SND_DICE_RATE_MODE_COUNT];
		bool has_midi;
	} cocci_id/* sound/firewire/dice/dice-presonus.c 10 */;
}
