cocci_test_suite() {
	u32 cocci_id/* net/bridge/netfilter/ebt_stp.c 49 */;
	u16 cocci_id/* net/bridge/netfilter/ebt_stp.c 48 */;
	const struct ebt_stp_config_info *cocci_id/* net/bridge/netfilter/ebt_stp.c 47 */;
	const struct stp_config_pdu *cocci_id/* net/bridge/netfilter/ebt_stp.c 45 */;
	bool cocci_id/* net/bridge/netfilter/ebt_stp.c 44 */;
	const struct ebt_stp_info *cocci_id/* net/bridge/netfilter/ebt_stp.c 44 */;
	struct stp_config_pdu {
		u8 flags;
		u8 root[8];
		u8 root_cost[4];
		u8 sender[8];
		u8 port[2];
		u8 msg_age[2];
		u8 max_age[2];
		u8 hello_time[2];
		u8 forward_delay[2];
	} cocci_id/* net/bridge/netfilter/ebt_stp.c 29 */;
	struct stp_header {
		u8 dsap;
		u8 ssap;
		u8 ctrl;
		u8 pid;
		u8 vers;
		u8 type;
	} cocci_id/* net/bridge/netfilter/ebt_stp.c 20 */;
	void __exit cocci_id/* net/bridge/netfilter/ebt_stp.c 187 */;
	void cocci_id/* net/bridge/netfilter/ebt_stp.c 187 */;
	int __init cocci_id/* net/bridge/netfilter/ebt_stp.c 182 */;
	struct ebt_stp_info cocci_id/* net/bridge/netfilter/ebt_stp.c 178 */;
	struct xt_match cocci_id/* net/bridge/netfilter/ebt_stp.c 172 */;
	const struct ebt_entry *cocci_id/* net/bridge/netfilter/ebt_stp.c 157 */;
	const struct xt_mtchk_param *cocci_id/* net/bridge/netfilter/ebt_stp.c 154 */;
	int cocci_id/* net/bridge/netfilter/ebt_stp.c 154 */;
	struct stp_config_pdu cocci_id/* net/bridge/netfilter/ebt_stp.c 143 */;
	const u8 cocci_id/* net/bridge/netfilter/ebt_stp.c 126 */[6];
	struct stp_header cocci_id/* net/bridge/netfilter/ebt_stp.c 125 */;
	const struct stp_header *cocci_id/* net/bridge/netfilter/ebt_stp.c 124 */;
	const struct sk_buff *cocci_id/* net/bridge/netfilter/ebt_stp.c 121 */;
	struct xt_action_param *cocci_id/* net/bridge/netfilter/ebt_stp.c 121 */;
}
