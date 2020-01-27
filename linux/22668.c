cocci_test_suite() {
	struct snd_i2c_bus *cocci_id/* sound/i2c/tea6330t.c 45 */;
	int cocci_id/* sound/i2c/tea6330t.c 45 */;
	struct tea6330t {
		struct snd_i2c_device *device;
		struct snd_i2c_bus *bus;
		int equalizer;
		int fader;
		unsigned char regs[8];
		unsigned char mleft,mright;
		unsigned char bass,treble;
		unsigned char max_bass,max_treble;
	} cocci_id/* sound/i2c/tea6330t.c 33 */;
	unsigned char cocci_id/* sound/i2c/tea6330t.c 285 */[7];
	u8 cocci_id/* sound/i2c/tea6330t.c 284 */;
	unsigned int cocci_id/* sound/i2c/tea6330t.c 282 */;
	struct snd_kcontrol_new *cocci_id/* sound/i2c/tea6330t.c 281 */;
	struct snd_card *cocci_id/* sound/i2c/tea6330t.c 275 */;
	struct snd_i2c_device *cocci_id/* sound/i2c/tea6330t.c 270 */;
	void cocci_id/* sound/i2c/tea6330t.c 270 */;
	struct snd_kcontrol_new cocci_id/* sound/i2c/tea6330t.c 263 */[];
	unsigned char cocci_id/* sound/i2c/tea6330t.c 201 */;
	unsigned char cocci_id/* sound/i2c/tea6330t.c 200 */[2];
	struct tea6330t *cocci_id/* sound/i2c/tea6330t.c 189 */;
	struct snd_ctl_elem_value *cocci_id/* sound/i2c/tea6330t.c 187 */;
	struct snd_kcontrol *cocci_id/* sound/i2c/tea6330t.c 186 */;
	struct snd_ctl_elem_info *cocci_id/* sound/i2c/tea6330t.c 175 */;
	unsigned char cocci_id/* sound/i2c/tea6330t.c 149 */[3];
}
