cocci_test_suite() {
	struct snd_sf_zone **cocci_id/* sound/synth/emux/emux_synth.c 891 */;
	int *cocci_id/* sound/synth/emux/emux_synth.c 890 */;
	struct snd_emux_effect_table *cocci_id/* sound/synth/emux/emux_synth.c 840 */;
	struct snd_emux_port *cocci_id/* sound/synth/emux/emux_synth.c 745 */;
	unsigned char cocci_id/* sound/synth/emux/emux_synth.c 719 */[128];
	struct snd_sf_zone *cocci_id/* sound/synth/emux/emux_synth.c 70 */;
	struct snd_midi_channel *cocci_id/* sound/synth/emux/emux_synth.c 641 */;
	struct snd_emux_voice *cocci_id/* sound/synth/emux/emux_synth.c 639 */;
	int cocci_id/* sound/synth/emux/emux_synth.c 638 */;
	unsigned char cocci_id/* sound/synth/emux/emux_synth.c 619 */[256];
	struct soundfont_voice_parm *cocci_id/* sound/synth/emux/emux_synth.c 548 */;
	struct snd_sf_zone *cocci_id/* sound/synth/emux/emux_synth.c 51 */[SNDRV_EMUX_MAX_MULTI_VOICES];
	unsigned long cocci_id/* sound/synth/emux/emux_synth.c 475 */;
	struct snd_emux *cocci_id/* sound/synth/emux/emux_synth.c 471 */;
	void cocci_id/* sound/synth/emux/emux_synth.c 470 */;
	int cocci_id/* sound/synth/emux/emux_synth.c 37 */(struct snd_emux_voice *vp);
	void cocci_id/* sound/synth/emux/emux_synth.c 36 */(struct snd_emux_voice *vp);
	void cocci_id/* sound/synth/emux/emux_synth.c 35 */(struct snd_emux *emu,
							    struct snd_emux_voice *vp,
							    int update);
	void cocci_id/* sound/synth/emux/emux_synth.c 34 */(struct snd_emux *emu,
							    struct snd_emux_voice *vp,
							    int free);
	void cocci_id/* sound/synth/emux/emux_synth.c 32 */(struct snd_emux *emu,
							    struct snd_emux_port *port,
							    int exclass);
	void *cocci_id/* sound/synth/emux/emux_synth.c 311 */;
	void cocci_id/* sound/synth/emux/emux_synth.c 30 */(struct snd_emux *emu,
							    int note,
							    struct snd_midi_channel *chan,
							    int free);
	int cocci_id/* sound/synth/emux/emux_synth.c 29 */(struct snd_emux_port *port,
							   struct snd_midi_channel *chan);
	int cocci_id/* sound/synth/emux/emux_synth.c 26 */(struct snd_emux *emu,
							   struct snd_emux_port *port,
							   int *notep,
							   int vel,
							   struct snd_midi_channel *chan,
							   struct snd_sf_zone **table);
	struct timer_list *cocci_id/* sound/synth/emux/emux_synth.c 191 */;
}
