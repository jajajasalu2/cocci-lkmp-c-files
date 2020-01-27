cocci_test_suite() {
	struct snd_opl3_drum_note cocci_id/* sound/drivers/opl3/opl3_drums.c 52 */;
	struct snd_opl3_drum_voice cocci_id/* sound/drivers/opl3/opl3_drums.c 50 */;
	struct snd_opl3_drum_note {
		int voice;
		unsigned char fnum;
		unsigned char octave_f;
		unsigned char feedback_connection;
	} cocci_id/* sound/drivers/opl3/opl3_drums.c 43 */;
	struct snd_opl3_drum_voice {
		int voice;
		int op;
		unsigned char am_vib;
		unsigned char ksl_level;
		unsigned char attack_decay;
		unsigned char sustain_release;
		unsigned char feedback_connection;
		unsigned char wave_select;
	} cocci_id/* sound/drivers/opl3/opl3_drums.c 32 */;
	struct snd_opl3_drum_voice *cocci_id/* sound/drivers/opl3/opl3_drums.c 173 */;
	struct snd_midi_channel *cocci_id/* sound/drivers/opl3/opl3_drums.c 170 */;
	int cocci_id/* sound/drivers/opl3/opl3_drums.c 169 */;
	unsigned short cocci_id/* sound/drivers/opl3/opl3_drums.c 106 */;
	unsigned char cocci_id/* sound/drivers/opl3/opl3_drums.c 105 */;
	struct snd_opl3_drum_note *cocci_id/* sound/drivers/opl3/opl3_drums.c 103 */;
	struct snd_opl3 *cocci_id/* sound/drivers/opl3/opl3_drums.c 102 */;
	void cocci_id/* sound/drivers/opl3/opl3_drums.c 102 */;
	char cocci_id/* sound/drivers/opl3/opl3_drums.c 10 */[47];
}
