cocci_test_suite() {
	long cocci_id/* drivers/net/ethernet/netronome/nfp/devlink_param.c 90 */;
	char cocci_id/* drivers/net/ethernet/netronome/nfp/devlink_param.c 89 */[32];
	struct nfp_nsp *cocci_id/* drivers/net/ethernet/netronome/nfp/devlink_param.c 88 */;
	struct nfp_pf *cocci_id/* drivers/net/ethernet/netronome/nfp/devlink_param.c 87 */;
	const struct nfp_devlink_param_u8_arg *cocci_id/* drivers/net/ethernet/netronome/nfp/devlink_param.c 86 */;
	struct devlink_param_gset_ctx *cocci_id/* drivers/net/ethernet/netronome/nfp/devlink_param.c 84 */;
	u32 cocci_id/* drivers/net/ethernet/netronome/nfp/devlink_param.c 83 */;
	struct devlink *cocci_id/* drivers/net/ethernet/netronome/nfp/devlink_param.c 83 */;
	int cocci_id/* drivers/net/ethernet/netronome/nfp/devlink_param.c 82 */;
	const struct nfp_devlink_param_u8_arg cocci_id/* drivers/net/ethernet/netronome/nfp/devlink_param.c 31 */[];
	void cocci_id/* drivers/net/ethernet/netronome/nfp/devlink_param.c 245 */;
	bool cocci_id/* drivers/net/ethernet/netronome/nfp/devlink_param.c 210 */;
	struct nfp_devlink_param_u8_arg {
		const char *hwinfo_name;
		const char *default_hi_val;
		int invalid_dl_val;
		u8 hi_to_dl[4];
		u8 dl_to_hi[4];
		u8 max_dl_val;
		u8 max_hi_val;
	} cocci_id/* drivers/net/ethernet/netronome/nfp/devlink_param.c 21 */;
	const struct devlink_param cocci_id/* drivers/net/ethernet/netronome/nfp/devlink_param.c 194 */[];
	struct netlink_ext_ack *cocci_id/* drivers/net/ethernet/netronome/nfp/devlink_param.c 172 */;
	union devlink_param_value cocci_id/* drivers/net/ethernet/netronome/nfp/devlink_param.c 171 */;
}
