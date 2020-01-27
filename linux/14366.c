cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/media/dvb-frontends/cxd2099.c 692 */;
	const struct i2c_device_id cocci_id/* drivers/media/dvb-frontends/cxd2099.c 686 */[];
	u16 cocci_id/* drivers/media/dvb-frontends/cxd2099.c 62 */;
	u8 *cocci_id/* drivers/media/dvb-frontends/cxd2099.c 62 */;
	unsigned int cocci_id/* drivers/media/dvb-frontends/cxd2099.c 619 */;
	const struct regmap_config cocci_id/* drivers/media/dvb-frontends/cxd2099.c 615 */;
	struct cxd2099_cfg *cocci_id/* drivers/media/dvb-frontends/cxd2099.c 614 */;
	const struct i2c_device_id *cocci_id/* drivers/media/dvb-frontends/cxd2099.c 611 */;
	struct i2c_client *cocci_id/* drivers/media/dvb-frontends/cxd2099.c 610 */;
	const struct dvb_ca_en50221 cocci_id/* drivers/media/dvb-frontends/cxd2099.c 597 */;
	struct dvb_ca_en50221 *cocci_id/* drivers/media/dvb-frontends/cxd2099.c 540 */;
	struct cxd {
		struct dvb_ca_en50221 en;
		struct cxd2099_cfg cfg;
		struct i2c_client *client;
		struct regmap *regmap;
		u8 regs[0x23];
		u8 lastaddress;
		u8 clk_reg_f;
		u8 clk_reg_b;
		int mode;
		int ready;
		int dr;
		int write_busy;
		int slot_stat;
		u8 amem[1024];
		int amem_read;
		int cammode;
		struct mutex lock;
		u8 rbuf[1028];
		u8 wbuf[1028];
	} cocci_id/* drivers/media/dvb-frontends/cxd2099.c 35 */;
	int cocci_id/* drivers/media/dvb-frontends/cxd2099.c 33 */(struct dvb_ca_en50221 *ca,
								   int slot,
								   u8 *ebuf,
								   int ecount);
	u32 cocci_id/* drivers/media/dvb-frontends/cxd2099.c 300 */;
	int cocci_id/* drivers/media/dvb-frontends/cxd2099.c 29 */;
	u8 cocci_id/* drivers/media/dvb-frontends/cxd2099.c 210 */;
	struct cxd *cocci_id/* drivers/media/dvb-frontends/cxd2099.c 208 */;
	void cocci_id/* drivers/media/dvb-frontends/cxd2099.c 208 */;
	u8 cocci_id/* drivers/media/dvb-frontends/cxd2099.c 120 */[2];
	unsigned int *cocci_id/* drivers/media/dvb-frontends/cxd2099.c 117 */;
	u8 cocci_id/* drivers/media/dvb-frontends/cxd2099.c 109 */[256];
}
