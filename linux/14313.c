cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/media/dvb-frontends/zd1301_demod.c 530 */;
	struct zd1301_demod_platform_data *cocci_id/* drivers/media/dvb-frontends/zd1301_demod.c 457 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/zd1301_demod.c 443 */;
	const struct i2c_algorithm cocci_id/* drivers/media/dvb-frontends/zd1301_demod.c 438 */;
	u32 cocci_id/* drivers/media/dvb-frontends/zd1301_demod.c 433 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/zd1301_demod.c 41 */;
	unsigned long cocci_id/* drivers/media/dvb-frontends/zd1301_demod.c 315 */;
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/zd1301_demod.c 310 */[];
	struct zd1301_demod_dev *cocci_id/* drivers/media/dvb-frontends/zd1301_demod.c 301 */;
	struct platform_device *cocci_id/* drivers/media/dvb-frontends/zd1301_demod.c 299 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/zd1301_demod.c 299 */;
	u16 cocci_id/* drivers/media/dvb-frontends/zd1301_demod.c 29 */;
	u8 *cocci_id/* drivers/media/dvb-frontends/zd1301_demod.c 29 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/zd1301_demod.c 272 */;
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/zd1301_demod.c 226 */;
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/dvb-frontends/zd1301_demod.c 212 */;
	int cocci_id/* drivers/media/dvb-frontends/zd1301_demod.c 211 */;
	struct zd1301_demod_dev {
		struct platform_device *pdev;
		struct dvb_frontend frontend;
		struct i2c_adapter adapter;
		u8 gain;
	} cocci_id/* drivers/media/dvb-frontends/zd1301_demod.c 14 */;
	u8 cocci_id/* drivers/media/dvb-frontends/zd1301_demod.c 10 */;
}
