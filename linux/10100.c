cocci_test_suite() {
	enum{I2400M_HDIv_MAJOR=9, I2400M_HDIv_MINOR=1, I2400M_HDIv_MINOR_2=2,} cocci_id/* drivers/net/wimax/i2400m/control.c 985 */;
	void *cocci_id/* drivers/net/wimax/i2400m/control.c 970 */;
	const struct i2400m_tlv_detailed_device_info *cocci_id/* drivers/net/wimax/i2400m/control.c 936 */;
	enum{I2400M_TLV_DETAILED_DEVICE_INFO=140,} cocci_id/* drivers/net/wimax/i2400m/control.c 911 */;
	char cocci_id/* drivers/net/wimax/i2400m/control.c 869 */[32];
	struct i2400m_cmd_enter_power_save *cocci_id/* drivers/net/wimax/i2400m/control.c 868 */;
	struct sk_buff *cocci_id/* drivers/net/wimax/i2400m/control.c 867 */;
	struct device *cocci_id/* drivers/net/wimax/i2400m/control.c 866 */;
	struct i2400m *cocci_id/* drivers/net/wimax/i2400m/control.c 863 */;
	int cocci_id/* drivers/net/wimax/i2400m/control.c 863 */;
	struct i2400m_cmd_enter_power_save {
		struct i2400m_l3l4_hdr hdr;
		struct i2400m_tlv_hdr tlv;
		__le32 val;
	}__packed cocci_id/* drivers/net/wimax/i2400m/control.c 850 */;
	enum{I2400M_WAKEUP_ENABLED=0x01, I2400M_WAKEUP_DISABLED=0x02, I2400M_TLV_TYPE_WAKEUP_MODE=144,} cocci_id/* drivers/net/wimax/i2400m/control.c 844 */;
	unsigned long cocci_id/* drivers/net/wimax/i2400m/control.c 718 */;
	const void *cocci_id/* drivers/net/wimax/i2400m/control.c 708 */;
	unsigned int cocci_id/* drivers/net/wimax/i2400m/control.c 570 */;
	typeof(*ms) cocci_id/* drivers/net/wimax/i2400m/control.c 460 */;
	typeof(*rfss) cocci_id/* drivers/net/wimax/i2400m/control.c 451 */;
	typeof(*ss) cocci_id/* drivers/net/wimax/i2400m/control.c 443 */;
	const struct i2400m_tlv_rf_switches_status *cocci_id/* drivers/net/wimax/i2400m/control.c 440 */;
	const struct i2400m_tlv_system_state *cocci_id/* drivers/net/wimax/i2400m/control.c 439 */;
	const struct i2400m_tlv_media_status *cocci_id/* drivers/net/wimax/i2400m/control.c 438 */;
	enum i2400m_media_status cocci_id/* drivers/net/wimax/i2400m/control.c 394 */;
	struct net_device *cocci_id/* drivers/net/wimax/i2400m/control.c 393 */;
	struct wimax_dev *cocci_id/* drivers/net/wimax/i2400m/control.c 392 */;
	enum i2400m_system_state cocci_id/* drivers/net/wimax/i2400m/control.c 316 */;
	const char *cocci_id/* drivers/net/wimax/i2400m/control.c 287 */;
	enum i2400m_ms cocci_id/* drivers/net/wimax/i2400m/control.c 286 */;
	char *cocci_id/* drivers/net/wimax/i2400m/control.c 283 */;
	const struct {
		char *msg;
		int errno;
	} cocci_id/* drivers/net/wimax/i2400m/control.c 245 */[I2400M_MS_MAX];
	enum i2400m_tlv cocci_id/* drivers/net/wimax/i2400m/control.c 227 */;
	ssize_t cocci_id/* drivers/net/wimax/i2400m/control.c 227 */;
	void cocci_id/* drivers/net/wimax/i2400m/control.c 1430 */;
	unsigned cocci_id/* drivers/net/wimax/i2400m/control.c 1357 */;
	const struct i2400m_tlv_hdr *cocci_id/* drivers/net/wimax/i2400m/control.c 1356 */[9];
	struct i2400m_tlv_config_dl_host_reorder cocci_id/* drivers/net/wimax/i2400m/control.c 1355 */;
	struct i2400m_tlv_config_d2h_data_format cocci_id/* drivers/net/wimax/i2400m/control.c 1354 */;
	struct i2400m_tlv_config_idle_timeout cocci_id/* drivers/net/wimax/i2400m/control.c 1353 */;
	struct i2400m_tlv_config_idle_parameters cocci_id/* drivers/net/wimax/i2400m/control.c 1352 */;
	struct {
		struct i2400m_l3l4_hdr hdr;
		struct i2400m_tlv_config_idle_timeout cit;
	} *cocci_id/* drivers/net/wimax/i2400m/control.c 1287 */;
	const struct i2400m_tlv_hdr **cocci_id/* drivers/net/wimax/i2400m/control.c 1195 */;
	size_t cocci_id/* drivers/net/wimax/i2400m/control.c 1148 */;
	const struct i2400m_l3l4_hdr *cocci_id/* drivers/net/wimax/i2400m/control.c 1147 */;
	struct i2400m_l3l4_hdr *cocci_id/* drivers/net/wimax/i2400m/control.c 1098 */;
	typeof(*l4mv) cocci_id/* drivers/net/wimax/i2400m/control.c 1053 */;
	const struct i2400m_tlv_l4_message_versions *cocci_id/* drivers/net/wimax/i2400m/control.c 1018 */;
	const struct i2400m_tlv_hdr *cocci_id/* drivers/net/wimax/i2400m/control.c 1017 */;
}
