cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/media/dvb-frontends/dvb-pll.c 941 */;
	const struct i2c_device_id cocci_id/* drivers/media/dvb-frontends/dvb-pll.c 913 */[];
	struct dvb_pll_config *cocci_id/* drivers/media/dvb-frontends/dvb-pll.c 875 */;
	const struct i2c_device_id *cocci_id/* drivers/media/dvb-frontends/dvb-pll.c 873 */;
	struct i2c_client *cocci_id/* drivers/media/dvb-frontends/dvb-pll.c 873 */;
	struct dvb_tuner_ops cocci_id/* drivers/media/dvb-frontends/dvb-pll.c 833 */;
	struct dvb_pll_priv cocci_id/* drivers/media/dvb-frontends/dvb-pll.c 823 */;
	const struct dvb_pll_desc *cocci_id/* drivers/media/dvb-frontends/dvb-pll.c 789 */;
	struct dvb_pll_priv *cocci_id/* drivers/media/dvb-frontends/dvb-pll.c 787 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/dvb-pll.c 786 */;
	u8 *cocci_id/* drivers/media/dvb-frontends/dvb-pll.c 785 */;
	unsigned int cocci_id/* drivers/media/dvb-frontends/dvb-pll.c 783 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/dvb-pll.c 782 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/dvb-pll.c 781 */;
	const struct dvb_tuner_ops cocci_id/* drivers/media/dvb-frontends/dvb-pll.c 771 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/dvb-pll.c 730 */;
	u32 cocci_id/* drivers/media/dvb-frontends/dvb-pll.c 704 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/dvb-pll.c 701 */;
	u8 cocci_id/* drivers/media/dvb-frontends/dvb-pll.c 670 */[4];
	void cocci_id/* drivers/media/dvb-frontends/dvb-pll.c 634 */;
	const u32 cocci_id/* drivers/media/dvb-frontends/dvb-pll.c 597 */;
	const struct dvb_pll_desc *cocci_id/* drivers/media/dvb-frontends/dvb-pll.c 568 */[];
	const struct dvb_pll_desc cocci_id/* drivers/media/dvb-frontends/dvb-pll.c 513 */;
	struct dvb_pll_desc {
		const char *name;
		u32 min;
		u32 max;
		u32 iffreq;
		void (*set)(struct dvb_frontend *fe, u8 *buf);
		u8 *initdata;
		u8 *initdata2;
		u8 *sleepdata;
		int count;
		struct {
			u32 limit;
			u32 stepsize;
			u8 config;
			u8 cb;
		} entries[];
	} cocci_id/* drivers/media/dvb-frontends/dvb-pll.c 51 */;
	unsigned int cocci_id/* drivers/media/dvb-frontends/dvb-pll.c 44 */[DVB_PLL_MAX];
	int cocci_id/* drivers/media/dvb-frontends/dvb-pll.c 40 */;
	u8 cocci_id/* drivers/media/dvb-frontends/dvb-pll.c 350 */;
	struct dvb_pll_priv {
		int nr;
		int pll_i2c_address;
		struct i2c_adapter *i2c;
		const struct dvb_pll_desc *pll_desc;
		u32 frequency;
		u32 bandwidth;
	} cocci_id/* drivers/media/dvb-frontends/dvb-pll.c 21 */;
	u8 cocci_id/* drivers/media/dvb-frontends/dvb-pll.c 141 */[];
}
