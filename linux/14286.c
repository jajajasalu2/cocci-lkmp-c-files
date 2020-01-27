cocci_test_suite() {
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/cx22702.c 98 */[];
	struct i2c_msg cocci_id/* drivers/media/dvb-frontends/cx22702.c 77 */;
	u8 cocci_id/* drivers/media/dvb-frontends/cx22702.c 76 */[];
	struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/cx22702.c 599 */;
	struct cx22702_state cocci_id/* drivers/media/dvb-frontends/cx22702.c 585 */;
	struct cx22702_state *cocci_id/* drivers/media/dvb-frontends/cx22702.c 582 */;
	struct i2c_adapter *cocci_id/* drivers/media/dvb-frontends/cx22702.c 580 */;
	const struct cx22702_config *cocci_id/* drivers/media/dvb-frontends/cx22702.c 579 */;
	struct dvb_frontend *cocci_id/* drivers/media/dvb-frontends/cx22702.c 579 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/dvb-frontends/cx22702.c 577 */;
	void cocci_id/* drivers/media/dvb-frontends/cx22702.c 571 */;
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/dvb-frontends/cx22702.c 565 */;
	u8 cocci_id/* drivers/media/dvb-frontends/cx22702.c 558 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-frontends/cx22702.c 554 */;
	int cocci_id/* drivers/media/dvb-frontends/cx22702.c 553 */;
	u16 cocci_id/* drivers/media/dvb-frontends/cx22702.c 521 */;
	u16 *cocci_id/* drivers/media/dvb-frontends/cx22702.c 490 */;
	u32 *cocci_id/* drivers/media/dvb-frontends/cx22702.c 472 */;
	const u8 cocci_id/* drivers/media/dvb-frontends/cx22702.c 45 */[];
	enum fe_status *cocci_id/* drivers/media/dvb-frontends/cx22702.c 443 */;
	struct cx22702_state {
		struct i2c_adapter *i2c;
		const struct cx22702_config *config;
		struct dvb_frontend frontend;
		u8 prevUCBlocks;
	} cocci_id/* drivers/media/dvb-frontends/cx22702.c 25 */;
}
