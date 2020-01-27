cocci_test_suite() {
	const struct tda827x_data cocci_id/* drivers/media/tuners/tda827x.c 91 */[];
	struct dvb_tuner_ops cocci_id/* drivers/media/tuners/tda827x.c 883 */;
	struct tda827x_priv cocci_id/* drivers/media/tuners/tda827x.c 876 */;
	struct tda827x_priv *cocci_id/* drivers/media/tuners/tda827x.c 873 */;
	struct tda827x_config *cocci_id/* drivers/media/tuners/tda827x.c 871 */;
	struct i2c_adapter *cocci_id/* drivers/media/tuners/tda827x.c 870 */;
	struct dvb_frontend *cocci_id/* drivers/media/tuners/tda827x.c 869 */;
	struct i2c_msg cocci_id/* drivers/media/tuners/tda827x.c 844 */;
	u8 cocci_id/* drivers/media/tuners/tda827x.c 841 */;
	const struct dvb_tuner_ops cocci_id/* drivers/media/tuners/tda827x.c 823 */;
	struct tda827x_data {
		u32 lomax;
		u8 spd;
		u8 bs;
		u8 bp;
		u8 cp;
		u8 gc3;
		u8 div1p5;
	} cocci_id/* drivers/media/tuners/tda827x.c 81 */;
	int cocci_id/* drivers/media/tuners/tda827x.c 787 */(struct dvb_frontend *fe);
	u32 *cocci_id/* drivers/media/tuners/tda827x.c 770 */;
	void cocci_id/* drivers/media/tuners/tda827x.c 757 */;
	unsigned char cocci_id/* drivers/media/tuners/tda827x.c 749 */[];
	unsigned char cocci_id/* drivers/media/tuners/tda827x.c 679 */;
	unsigned int cocci_id/* drivers/media/tuners/tda827x.c 657 */;
	u32 cocci_id/* drivers/media/tuners/tda827x.c 652 */;
	unsigned char cocci_id/* drivers/media/tuners/tda827x.c 651 */[11];
	u8 cocci_id/* drivers/media/tuners/tda827x.c 506 */[11];
	struct tda827xa_data *cocci_id/* drivers/media/tuners/tda827x.c 505 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/tuners/tda827x.c 503 */;
	u8 cocci_id/* drivers/media/tuners/tda827x.c 434 */[];
	char *cocci_id/* drivers/media/tuners/tda827x.c 41 */;
	struct tda827xa_data cocci_id/* drivers/media/tuners/tda827x.c 402 */[];
	struct analog_parameters *cocci_id/* drivers/media/tuners/tda827x.c 38 */;
	struct tda827xa_data {
		u32 lomax;
		u8 svco;
		u8 spd;
		u8 scr;
		u8 sbs;
		u8 gc3;
	} cocci_id/* drivers/media/tuners/tda827x.c 333 */;
	struct tda827x_priv {
		int i2c_addr;
		struct i2c_adapter *i2c_adap;
		struct tda827x_config *cfg;
		unsigned int sgIF;
		unsigned char lpsel;
		u32 frequency;
		u32 bandwidth;
	} cocci_id/* drivers/media/tuners/tda827x.c 25 */;
	unsigned char cocci_id/* drivers/media/tuners/tda827x.c 241 */[2];
	unsigned char cocci_id/* drivers/media/tuners/tda827x.c 240 */[8];
	int cocci_id/* drivers/media/tuners/tda827x.c 16 */;
	u8 cocci_id/* drivers/media/tuners/tda827x.c 146 */[14];
	const int cocci_id/* drivers/media/tuners/tda827x.c 125 */;
	struct i2c_msg *cocci_id/* drivers/media/tuners/tda827x.c 124 */;
}
