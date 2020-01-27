cocci_test_suite() {
	unsigned char cocci_id/* drivers/media/tuners/tda8290.c 834 */[PROBE_BUFFER_SIZE];
	struct tuner_i2c_props cocci_id/* drivers/media/tuners/tda8290.c 822 */;
	unsigned char cocci_id/* drivers/media/tuners/tda8290.c 77 */[3];
	struct analog_demod_ops cocci_id/* drivers/media/tuners/tda8290.c 753 */;
	struct tda8290_priv cocci_id/* drivers/media/tuners/tda8290.c 737 */;
	struct tda829x_config *cocci_id/* drivers/media/tuners/tda8290.c 732 */;
	struct i2c_adapter *cocci_id/* drivers/media/tuners/tda8290.c 731 */;
	const struct analog_demod_ops cocci_id/* drivers/media/tuners/tda8290.c 714 */;
	struct i2c_msg cocci_id/* drivers/media/tuners/tda8290.c 662 */[];
	u8 cocci_id/* drivers/media/tuners/tda8290.c 661 */;
	struct tuner_i2c_props *cocci_id/* drivers/media/tuners/tda8290.c 658 */;
	u32 cocci_id/* drivers/media/tuners/tda8290.c 572 */;
	struct tda18271_config cocci_id/* drivers/media/tuners/tda8290.c 564 */;
	unsigned char *cocci_id/* drivers/media/tuners/tda8290.c 56 */;
	unsigned char cocci_id/* drivers/media/tuners/tda8290.c 54 */[2];
	struct i2c_msg cocci_id/* drivers/media/tuners/tda8290.c 536 */;
	unsigned char cocci_id/* drivers/media/tuners/tda8290.c 486 */[];
	unsigned char cocci_id/* drivers/media/tuners/tda8290.c 445 */;
	unsigned char cocci_id/* drivers/media/tuners/tda8290.c 444 */[1];
	u16 *cocci_id/* drivers/media/tuners/tda8290.c 440 */;
	u16 cocci_id/* drivers/media/tuners/tda8290.c 400 */;
	struct tda8290_priv {
		struct tuner_i2c_props i2c_props;
		unsigned char tda8290_easy_mode;
		unsigned char tda827x_addr;
		unsigned char ver;
#define TDA8290 1
#define TDA8295 2
#define TDA8275 4
#define TDA8275A 8
#define TDA18271 16
		struct tda827x_config cfg;
		struct tda18271_std_map *tda18271_std_map;
	} cocci_id/* drivers/media/tuners/tda8290.c 30 */;
	int cocci_id/* drivers/media/tuners/tda8290.c 20 */;
	struct {
		unsigned char seq[2];
	} cocci_id/* drivers/media/tuners/tda8290.c 144 */[];
	char *cocci_id/* drivers/media/tuners/tda8290.c 107 */;
	struct tda8290_priv *cocci_id/* drivers/media/tuners/tda8290.c 106 */;
	struct analog_parameters *cocci_id/* drivers/media/tuners/tda8290.c 104 */;
	struct dvb_frontend *cocci_id/* drivers/media/tuners/tda8290.c 103 */;
	void cocci_id/* drivers/media/tuners/tda8290.c 103 */;
}
