cocci_test_suite() {
	char cocci_id/* drivers/net/wimax/i2400m/op-rfkill.c 80 */[32];
	struct {
		struct i2400m_l3l4_hdr hdr;
		struct i2400m_tlv_rf_operation sw_rf;
	}__packed *cocci_id/* drivers/net/wimax/i2400m/op-rfkill.c 76 */;
	struct sk_buff *cocci_id/* drivers/net/wimax/i2400m/op-rfkill.c 75 */;
	struct device *cocci_id/* drivers/net/wimax/i2400m/op-rfkill.c 74 */;
	struct i2400m *cocci_id/* drivers/net/wimax/i2400m/op-rfkill.c 73 */;
	enum wimax_rf_state cocci_id/* drivers/net/wimax/i2400m/op-rfkill.c 70 */;
	struct wimax_dev *cocci_id/* drivers/net/wimax/i2400m/op-rfkill.c 69 */;
	int cocci_id/* drivers/net/wimax/i2400m/op-rfkill.c 69 */;
	enum wimax_st cocci_id/* drivers/net/wimax/i2400m/op-rfkill.c 157 */;
	enum i2400m_rf_switch_status cocci_id/* drivers/net/wimax/i2400m/op-rfkill.c 156 */;
	const struct i2400m_tlv_rf_switches_status *cocci_id/* drivers/net/wimax/i2400m/op-rfkill.c 153 */;
	void cocci_id/* drivers/net/wimax/i2400m/op-rfkill.c 151 */;
}
