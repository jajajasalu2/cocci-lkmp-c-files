cocci_test_suite() {
	char cocci_id/* sound/pci/emu10k1/emu10k1_callback.c 520 */;
	short cocci_id/* sound/pci/emu10k1/emu10k1_callback.c 516 */;
	unsigned short cocci_id/* sound/pci/emu10k1/emu10k1_callback.c 515 */;
	const struct snd_emux_operators cocci_id/* sound/pci/emu10k1/emu10k1_callback.c 51 */;
	void cocci_id/* sound/pci/emu10k1/emu10k1_callback.c 38 */(struct snd_emu10k1 *hw,
								   struct snd_emux_voice *vp);
	void cocci_id/* sound/pci/emu10k1/emu10k1_callback.c 35 */(struct snd_emux_voice *vp);
	void cocci_id/* sound/pci/emu10k1/emu10k1_callback.c 33 */(struct snd_emux_voice *vp,
								   int update);
	struct snd_emu10k1_memblk *cocci_id/* sound/pci/emu10k1/emu10k1_callback.c 314 */;
	struct snd_midi_channel *cocci_id/* sound/pci/emu10k1/emu10k1_callback.c 312 */;
	int cocci_id/* sound/pci/emu10k1/emu10k1_callback.c 30 */(struct snd_emux_voice *vp);
	struct snd_emu10k1_voice *cocci_id/* sound/pci/emu10k1/emu10k1_callback.c 289 */;
	struct snd_emux_voice *cocci_id/* sound/pci/emu10k1/emu10k1_callback.c 28 */(struct snd_emux *emux,
										     struct snd_emux_port *port);
	int cocci_id/* sound/pci/emu10k1/emu10k1_callback.c 279 */;
	struct best_voice cocci_id/* sound/pci/emu10k1/emu10k1_callback.c 278 */[V_END];
	struct snd_emux_port *cocci_id/* sound/pci/emu10k1/emu10k1_callback.c 274 */;
	struct snd_emux *cocci_id/* sound/pci/emu10k1/emu10k1_callback.c 274 */;
	void cocci_id/* sound/pci/emu10k1/emu10k1_callback.c 26 */(struct snd_emux *emux,
								   struct snd_emu10k1 *hw,
								   struct best_voice *best,
								   int active_only);
	unsigned int cocci_id/* sound/pci/emu10k1/emu10k1_callback.c 216 */;
	struct best_voice *cocci_id/* sound/pci/emu10k1/emu10k1_callback.c 209 */;
	struct best_voice {
		unsigned int time;
		int voice;
	} cocci_id/* sound/pci/emu10k1/emu10k1_callback.c 18 */;
	struct snd_emu10k1 *cocci_id/* sound/pci/emu10k1/emu10k1_callback.c 155 */;
	struct snd_emux_voice *cocci_id/* sound/pci/emu10k1/emu10k1_callback.c 153 */;
	void cocci_id/* sound/pci/emu10k1/emu10k1_callback.c 152 */;
	enum{V_FREE=0, V_OFF, V_RELEASED, V_PLAYING, V_END,} cocci_id/* sound/pci/emu10k1/emu10k1_callback.c 13 */;
	unsigned char cocci_id/* sound/pci/emu10k1/emu10k1_callback.c 122 */;
}
