cocci_test_suite() {
	struct regdata cocci_id/* drivers/media/dvb-frontends/mb86a20s.c 58 */[];
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/mb86a20s.c 542 */;
	const u32 cocci_id/* drivers/media/dvb-frontends/mb86a20s.c 520 */[3][5][4];
	struct regdata {
		u8 reg;
		u8 data;
	} cocci_id/* drivers/media/dvb-frontends/mb86a20s.c 47 */;
	int cocci_id/* drivers/media/dvb-frontends/mb86a20s.c 447 */[];
	unsigned char cocci_id/* drivers/media/dvb-frontends/mb86a20s.c 413 */[];
	struct mb86a20s_state {
		struct i2c_adapter *i2c;
		const struct mb86a20s_config *config;
		u32 last_frequency;
		struct dvb_frontend frontend;
		u32 if_freq;
		enum mb86a20s_bandwidth bw;
		bool inversion;
		u32 subchannel;
		u32 estimated_rate[NUM_LAYERS];
		unsigned long get_strength_time;
		bool need_init;
	} cocci_id/* drivers/media/dvb-frontends/mb86a20s.c 29 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/mb86a20s.c 281 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/mb86a20s.c 251 */[];
	struct regdata *cocci_id/* drivers/media/dvb-frontends/mb86a20s.c 233 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/mb86a20s.c 216 */;
	u8 cocci_id/* drivers/media/dvb-frontends/mb86a20s.c 215 */[];
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/mb86a20s.c 2068 */;
	u8 cocci_id/* drivers/media/dvb-frontends/mb86a20s.c 2053 */;
	struct mb86a20s_state *cocci_id/* drivers/media/dvb-frontends/mb86a20s.c 2052 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/mb86a20s.c 2050 */;
	const struct mb86a20s_config *cocci_id/* drivers/media/dvb-frontends/mb86a20s.c 2049 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/mb86a20s.c 2049 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/mb86a20s.c 2047 */;
	enum dvbfe_algo cocci_id/* drivers/media/dvb-frontends/mb86a20s.c 2042 */;
	void cocci_id/* drivers/media/dvb-frontends/mb86a20s.c 2033 */;
	unsigned int *cocci_id/* drivers/media/dvb-frontends/mb86a20s.c 2016 */;
	unsigned int cocci_id/* drivers/media/dvb-frontends/mb86a20s.c 2015 */;
	bool cocci_id/* drivers/media/dvb-frontends/mb86a20s.c 2014 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/mb86a20s.c 2003 */;
	long long cocci_id/* drivers/media/dvb-frontends/mb86a20s.c 1810 */;
	enum mb86a20s_bandwidth{MB86A20S_13SEG=0, MB86A20S_13SEG_PARTIAL=1, MB86A20S_1SEG=2, MB86A20S_3SEG=3,} cocci_id/* drivers/media/dvb-frontends/mb86a20s.c 17 */;
	int cocci_id/* drivers/media/dvb-frontends/mb86a20s.c 1349 */;
	u64 cocci_id/* drivers/media/dvb-frontends/mb86a20s.c 1347 */;
	unsigned cocci_id/* drivers/media/dvb-frontends/mb86a20s.c 1345 */;
	u32 cocci_id/* drivers/media/dvb-frontends/mb86a20s.c 1344 */;
	const struct linear_segments *cocci_id/* drivers/media/dvb-frontends/mb86a20s.c 1344 */;
	const struct linear_segments cocci_id/* drivers/media/dvb-frontends/mb86a20s.c 1276 */[];
	struct linear_segments {
		unsigned x,y;
	} cocci_id/* drivers/media/dvb-frontends/mb86a20s.c 1200 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/mb86a20s.c 1055 */;
}
