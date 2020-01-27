cocci_test_suite() {
	char *cocci_id/* sound/i2c/cs8427.c 571 */;
	struct snd_kcontrol *cocci_id/* sound/i2c/cs8427.c 520 */;
	struct snd_pcm_substream *cocci_id/* sound/i2c/cs8427.c 516 */;
	unsigned char cocci_id/* sound/i2c/cs8427.c 49 */[2];
	struct snd_kcontrol_new cocci_id/* sound/i2c/cs8427.c 462 */[];
	struct snd_pcm_runtime *cocci_id/* sound/i2c/cs8427.c 430 */;
	struct cs8427 {
		unsigned char regmap[0x14];
		unsigned int rate;
		unsigned int reset_timeout;
		struct cs8427_stream playback;
		struct cs8427_stream capture;
	} cocci_id/* sound/i2c/cs8427.c 37 */;
	struct snd_ctl_elem_value *cocci_id/* sound/i2c/cs8427.c 356 */;
	struct snd_ctl_elem_info *cocci_id/* sound/i2c/cs8427.c 346 */;
	unsigned long cocci_id/* sound/i2c/cs8427.c 308 */;
	struct cs8427_stream {
		struct snd_pcm_substream *substream;
		char hw_status[24];
		char def_status[24];
		char pcm_status[24];
		char hw_udata[32];
		struct snd_kcontrol *pcm_ctl;
	} cocci_id/* sound/i2c/cs8427.c 28 */;
	struct snd_i2c_device *cocci_id/* sound/i2c/cs8427.c 256 */;
	struct cs8427 *cocci_id/* sound/i2c/cs8427.c 255 */;
	struct snd_i2c_device **cocci_id/* sound/i2c/cs8427.c 252 */;
	unsigned int cocci_id/* sound/i2c/cs8427.c 251 */;
	unsigned char cocci_id/* sound/i2c/cs8427.c 250 */;
	struct snd_i2c_bus *cocci_id/* sound/i2c/cs8427.c 249 */;
	int cocci_id/* sound/i2c/cs8427.c 249 */;
	void cocci_id/* sound/i2c/cs8427.c 20 */(struct snd_i2c_device *cs8427);
	unsigned char cocci_id/* sound/i2c/cs8427.c 188 */[24];
	unsigned char cocci_id/* sound/i2c/cs8427.c 141 */[];
	void cocci_id/* sound/i2c/cs8427.c 133 */;
	unsigned char cocci_id/* sound/i2c/cs8427.c 106 */[32];
	unsigned char *cocci_id/* sound/i2c/cs8427.c 100 */;
}
