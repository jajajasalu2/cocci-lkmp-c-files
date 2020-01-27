cocci_test_suite() {
	struct tps6598x {
		struct device *dev;
		struct regmap *regmap;
		struct mutex lock;
		u8 i2c_protocol:1;
		struct typec_port *port;
		struct typec_partner *partner;
		struct usb_pd_identity partner_identity;
	} cocci_id/* drivers/usb/typec/tps6598x.c 88 */;
	const char *const cocci_id/* drivers/usb/typec/tps6598x.c 78 */[];
	enum{TPS_MODE_APP, TPS_MODE_BOOT, TPS_MODE_BIST, TPS_MODE_DISC,} cocci_id/* drivers/usb/typec/tps6598x.c 71 */;
	struct tps6598x_rx_identity_reg {
		u8 status;
		struct usb_pd_identity identity;
		u32 vdo[3];
	}__packed cocci_id/* drivers/usb/typec/tps6598x.c 61 */;
	struct i2c_driver cocci_id/* drivers/usb/typec/tps6598x.c 572 */;
	const struct i2c_device_id cocci_id/* drivers/usb/typec/tps6598x.c 566 */[];
	enum{TPS_PORTINFO_SINK, TPS_PORTINFO_SINK_ACCESSORY, TPS_PORTINFO_DRP_UFP, TPS_PORTINFO_DRP_UFP_DRD, TPS_PORTINFO_DRP_DFP, TPS_PORTINFO_DRP_DFP_DRD, TPS_PORTINFO_SOURCE,} cocci_id/* drivers/usb/typec/tps6598x.c 46 */;
	struct typec_capability cocci_id/* drivers/usb/typec/tps6598x.c 453 */;
	struct i2c_client *cocci_id/* drivers/usb/typec/tps6598x.c 451 */;
	const struct regmap_config cocci_id/* drivers/usb/typec/tps6598x.c 445 */;
	char cocci_id/* drivers/usb/typec/tps6598x.c 421 */[5];
	u64 cocci_id/* drivers/usb/typec/tps6598x.c 377 */;
	irqreturn_t cocci_id/* drivers/usb/typec/tps6598x.c 374 */;
	const struct typec_operations cocci_id/* drivers/usb/typec/tps6598x.c 369 */;
	enum typec_role cocci_id/* drivers/usb/typec/tps6598x.c 339 */;
	const char *cocci_id/* drivers/usb/typec/tps6598x.c 311 */;
	enum typec_data_role cocci_id/* drivers/usb/typec/tps6598x.c 309 */;
	struct typec_port *cocci_id/* drivers/usb/typec/tps6598x.c 309 */;
	unsigned long cocci_id/* drivers/usb/typec/tps6598x.c 250 */;
	u8 *cocci_id/* drivers/usb/typec/tps6598x.c 247 */;
	void cocci_id/* drivers/usb/typec/tps6598x.c 235 */;
	u16 cocci_id/* drivers/usb/typec/tps6598x.c 197 */;
	enum typec_pwr_opmode cocci_id/* drivers/usb/typec/tps6598x.c 196 */;
	struct typec_partner_desc cocci_id/* drivers/usb/typec/tps6598x.c 195 */;
	u32 cocci_id/* drivers/usb/typec/tps6598x.c 193 */;
	struct tps6598x_rx_identity_reg cocci_id/* drivers/usb/typec/tps6598x.c 180 */;
	u64 *cocci_id/* drivers/usb/typec/tps6598x.c 152 */;
	u32 *cocci_id/* drivers/usb/typec/tps6598x.c 147 */;
	u16 *cocci_id/* drivers/usb/typec/tps6598x.c 142 */;
	const void *cocci_id/* drivers/usb/typec/tps6598x.c 129 */;
	u8 cocci_id/* drivers/usb/typec/tps6598x.c 108 */[TPS_MAX_LEN + 1];
	u8 cocci_id/* drivers/usb/typec/tps6598x.c 106 */;
	struct tps6598x *cocci_id/* drivers/usb/typec/tps6598x.c 106 */;
	void *cocci_id/* drivers/usb/typec/tps6598x.c 106 */;
	size_t cocci_id/* drivers/usb/typec/tps6598x.c 106 */;
	int cocci_id/* drivers/usb/typec/tps6598x.c 105 */;
}