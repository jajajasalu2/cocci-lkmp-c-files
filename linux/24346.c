cocci_test_suite() {
	unsigned long cocci_id/* net/smc/smc_ism.c 71 */;
	struct smc_ism_vlanid *cocci_id/* net/smc/smc_ism.c 70 */;
	struct smc_connection *cocci_id/* net/smc/smc_ism.c 42 */;
	unsigned int cocci_id/* net/smc/smc_ism.c 382 */;
	struct smcd_event *cocci_id/* net/smc/smc_ism.c 358 */;
	void *cocci_id/* net/smc/smc_ism.c 31 */;
	size_t cocci_id/* net/smc/smc_ism.c 31 */;
	const struct smc_ism_position *cocci_id/* net/smc/smc_ism.c 30 */;
	const struct smcd_ops *cocci_id/* net/smc/smc_ism.c 280 */;
	const char *cocci_id/* net/smc/smc_ism.c 279 */;
	struct device *cocci_id/* net/smc/smc_ism.c 279 */;
	struct smcd_dev cocci_id/* net/smc/smc_ism.c 273 */;
	struct smc_ism_event_work cocci_id/* net/smc/smc_ism.c 256 */;
	struct smc_ism_event_work *cocci_id/* net/smc/smc_ism.c 255 */;
	struct work_struct *cocci_id/* net/smc/smc_ism.c 253 */;
	void cocci_id/* net/smc/smc_ism.c 253 */;
	u64 cocci_id/* net/smc/smc_ism.c 24 */;
	struct smcd_dev *cocci_id/* net/smc/smc_ism.c 24 */;
	unsigned short cocci_id/* net/smc/smc_ism.c 24 */;
	int cocci_id/* net/smc/smc_ism.c 24 */;
	union smcd_sw_event_info cocci_id/* net/smc/smc_ism.c 237 */;
	union smcd_sw_event_info {
		u64 info;
		struct {
			u8 uid[SMC_LGR_ID_SIZE];
			unsigned short vlan_id;
			u16 code;
		};
	} cocci_id/* net/smc/smc_ism.c 203 */;
	struct smc_ism_event_work {
		struct work_struct work;
		struct smcd_dev *smcd;
		struct smcd_event event;
	} cocci_id/* net/smc/smc_ism.c 191 */;
	struct smcd_dev_list cocci_id/* net/smc/smc_ism.c 18 */;
	struct smcd_dmb cocci_id/* net/smc/smc_ism.c 172 */;
	struct smc_buf_desc *cocci_id/* net/smc/smc_ism.c 170 */;
	struct smc_link_group *cocci_id/* net/smc/smc_ism.c 169 */;
	bool cocci_id/* net/smc/smc_ism.c 116 */;
}
