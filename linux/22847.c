cocci_test_suite() {
	unsigned int cocci_id/* sound/firewire/dice/dice-tcelectronic.c 94 */;
	struct fw_csr_iterator cocci_id/* sound/firewire/dice/dice-tcelectronic.c 72 */;
	const struct {
		u32 model_id;
		const struct dice_tc_spec *spec;
	} *cocci_id/* sound/firewire/dice/dice-tcelectronic.c 60 */;
	struct snd_dice *cocci_id/* sound/firewire/dice/dice-tcelectronic.c 58 */;
	int cocci_id/* sound/firewire/dice/dice-tcelectronic.c 58 */;
	const struct dice_tc_spec cocci_id/* sound/firewire/dice/dice-tcelectronic.c 16 */;
	struct dice_tc_spec {
		unsigned int tx_pcm_chs[MAX_STREAMS][SND_DICE_RATE_MODE_COUNT];
		unsigned int rx_pcm_chs[MAX_STREAMS][SND_DICE_RATE_MODE_COUNT];
		bool has_midi;
	} cocci_id/* sound/firewire/dice/dice-tcelectronic.c 10 */;
}
