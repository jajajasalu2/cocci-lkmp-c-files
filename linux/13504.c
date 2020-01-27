cocci_test_suite() {
	enum fe_sec_voltage cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 969 */;
	int *cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 960 */;
	struct dvb_usb_device_description **cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 959 */;
	unsigned int cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 94 */;
	int cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 83 */;
	u8 cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 828 */[256];
	u8 cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 824 */[6];
	struct i2c_algorithm cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 799 */;
	u32 cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 784 */;
	struct dw2102_state {
		u8 initialized;
		u8 last_lock;
		u8 data[MAX_XFER_SIZE + 4];
		struct i2c_client *i2c_client_demod;
		struct i2c_client *i2c_client_tuner;
		int (*old_set_voltage)(struct dvb_frontend *f,
				       enum fe_sec_voltage v);
		int (*fe_read_status)(struct dvb_frontend *fe,
				      enum fe_status *status);
	} cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 63 */;
	u8 cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 572 */[5];
	u8 cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 425 */[19];
	u8 cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 346 */[2];
	u8 cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 279 */[MAX_XFER_SIZE];
	struct i2c_msg cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 265 */[];
	struct i2c_adapter *cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 265 */;
	struct usb_driver cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 2449 */;
	struct i2c_client *cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 2430 */;
	struct dvb_usb_device *cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 2428 */;
	struct usb_interface *cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 2426 */;
	void cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 2426 */;
	struct dvb_usb_device_properties cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 2336 */;
	struct dvb_usb_device_properties *cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 2330 */;
	const struct usb_device_id *cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 2327 */;
	const struct dvb_usb_device_description cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 2101 */;
	struct dw2102_state cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 2057 */;
	u8 cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 1789 */;
	u8 *cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 1787 */;
	const struct firmware *cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 1785 */;
	struct usb_device *cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 1784 */;
	struct usb_device_id cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 1750 */[];
	enum dw2102_table_entry{CYPRESS_DW2102, CYPRESS_DW2101, CYPRESS_DW2104, TEVII_S650, TERRATEC_CINERGY_S, CYPRESS_DW3101, TEVII_S630, PROF_1100, TEVII_S660, PROF_7500, GENIATECH_SU3000, TERRATEC_CINERGY_S2, TEVII_S480_1, TEVII_S480_2, X3M_SPC1400HD, TEVII_S421, TEVII_S632, TERRATEC_CINERGY_S2_R2, TERRATEC_CINERGY_S2_R3, TERRATEC_CINERGY_S2_R4, GOTVIEW_SAT_HD, GENIATECH_T220, TECHNOTREND_S2_4600, TEVII_S482_1, TEVII_S482_2, TERRATEC_CINERGY_S2_BOX, TEVII_S662,} cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 1720 */;
	struct i2c_msg cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 1658 */;
	struct m88ds3103_platform_data cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 1534 */;
	struct i2c_board_info cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 1533 */;
	u8 cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 1339 */[];
	struct dw2102_state *cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 1338 */;
	struct dvb_usb_adapter *cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 1336 */;
	u16 cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 122 */;
	struct dvb_tuner_ops *cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 1185 */;
	struct m88rs2000_config cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 1178 */;
	struct tda18271_config cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 1155 */;
	struct cxd2820r_config cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 1149 */;
	struct stv6110_config cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 1124 */;
	struct stv0900_config cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 1113 */;
	struct stb6100_config cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 1108 */;
	struct ts2020_config cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 1079 */;
	struct ds3000_config cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 1075 */;
	struct mt312_config cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 1071 */;
	struct tda10023_config cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 1066 */;
	struct si21xx_config cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 1060 */;
	struct cx24116_config cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 1055 */;
	struct stv0299_config cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 1043 */;
	enum fe_status *cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 1026 */;
	struct dvb_frontend *cocci_id/* drivers/media/usb/dvb-usb/dw2102.c 1007 */;
}
