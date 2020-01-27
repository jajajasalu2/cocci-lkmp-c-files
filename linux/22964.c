cocci_test_suite() {
	struct snd_rawmidi_runtime *cocci_id/* sound/core/seq/seq_midi.c 98 */;
	const char *cocci_id/* sound/core/seq/seq_midi.c 96 */;
	struct snd_rawmidi_substream *cocci_id/* sound/core/seq/seq_midi.c 96 */;
	int cocci_id/* sound/core/seq/seq_midi.c 96 */;
	long cocci_id/* sound/core/seq/seq_midi.c 67 */;
	char cocci_id/* sound/core/seq/seq_midi.c 66 */[16];
	struct snd_seq_event cocci_id/* sound/core/seq/seq_midi.c 65 */;
	void cocci_id/* sound/core/seq/seq_midi.c 61 */;
	struct seq_midisynth_client *cocci_id/* sound/core/seq/seq_midi.c 57 */[SNDRV_CARDS];
	struct seq_midisynth_client {
		int seq_client;
		int num_ports;
		int ports_per_device[SNDRV_RAWMIDI_DEVICES];
		struct seq_midisynth *ports[SNDRV_RAWMIDI_DEVICES];
	} cocci_id/* sound/core/seq/seq_midi.c 50 */;
	struct snd_seq_driver cocci_id/* sound/core/seq/seq_midi.c 444 */;
	struct seq_midisynth {
		struct snd_card *card;
		int device;
		int subdevice;
		struct snd_rawmidi_file input_rfile;
		struct snd_rawmidi_file output_rfile;
		int seq_client;
		int seq_port;
		struct snd_midi_event *parser;
	} cocci_id/* sound/core/seq/seq_midi.c 39 */;
	struct seq_midisynth cocci_id/* sound/core/seq/seq_midi.c 319 */;
	struct snd_seq_port_callback cocci_id/* sound/core/seq/seq_midi.c 268 */;
	unsigned int cocci_id/* sound/core/seq/seq_midi.c 267 */;
	struct snd_rawmidi *cocci_id/* sound/core/seq/seq_midi.c 265 */;
	struct snd_rawmidi_info *cocci_id/* sound/core/seq/seq_midi.c 264 */;
	struct snd_seq_port_info *cocci_id/* sound/core/seq/seq_midi.c 263 */;
	struct seq_midisynth_client *cocci_id/* sound/core/seq/seq_midi.c 261 */;
	struct snd_seq_device *cocci_id/* sound/core/seq/seq_midi.c 260 */;
	struct device *cocci_id/* sound/core/seq/seq_midi.c 258 */;
	struct snd_rawmidi_params cocci_id/* sound/core/seq/seq_midi.c 167 */;
	struct snd_seq_port_subscribe *cocci_id/* sound/core/seq/seq_midi.c 162 */;
	struct snd_card *cocci_id/* sound/core/seq/seq_midi.c 149 */;
	snd_seq_dump_func_t cocci_id/* sound/core/seq/seq_midi.c 133 */;
	unsigned char cocci_id/* sound/core/seq/seq_midi.c 118 */[10];
	struct seq_midisynth *cocci_id/* sound/core/seq/seq_midi.c 117 */;
	void *cocci_id/* sound/core/seq/seq_midi.c 115 */;
	struct snd_seq_event *cocci_id/* sound/core/seq/seq_midi.c 114 */;
}
