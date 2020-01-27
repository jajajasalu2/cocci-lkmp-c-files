cocci_test_suite() {
	bool cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 932 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 931 */[MLXSW_REG_TNDEM_LEN];
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 929 */;
	struct mlxsw_sp *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 928 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 928 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 915 */[MLXSW_REG_TNEEM_LEN];
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 902 */[MLXSW_REG_TNQCR_LEN];
	struct mlxsw_sp_port *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 896 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 890 */[MLXSW_REG_TNQDR_LEN];
	const union mlxsw_sp_l3addr *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 88 */;
	struct net_device *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 862 */;
	struct mlxsw_sp_fid *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 859 */;
	struct mlxsw_sp_nve_config cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 814 */;
	struct mlxsw_sp_nve *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 812 */;
	struct netlink_ext_ack *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 810 */;
	struct mlxsw_sp_nve_mc_list cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 81 */;
	struct mlxsw_sp_nve_params *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 809 */;
	enum mlxsw_sp_nve_type cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 799 */;
	const struct mlxsw_sp_nve_ops *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 798 */;
	__be32 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 796 */;
	const struct net_device *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 795 */;
	const struct mlxsw_sp_fid *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 794 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 793 */;
	const struct rhashtable_params cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 79 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 786 */[MLXSW_REG_SFDF_LEN];
	u16 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 784 */;
	struct mlxsw_sp_nve_mc_list {
		struct list_head records_list;
		struct rhash_head ht_node;
		struct mlxsw_sp_nve_mc_list_key key;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 73 */;
	struct mlxsw_sp_nve_config *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 727 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 716 */;
	const struct mlxsw_sp *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 716 */;
	struct mlxsw_sp_nve_mc_list_key cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 628 */;
	union mlxsw_sp_l3addr *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 626 */;
	enum mlxsw_sp_l3proto cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 625 */;
	struct mlxsw_sp_nve_mc_record {
		struct list_head list;
		enum mlxsw_sp_l3proto proto;
		unsigned int num_entries;
		struct mlxsw_sp *mlxsw_sp;
		struct mlxsw_sp_nve_mc_list *mc_list;
		const struct mlxsw_sp_nve_mc_record_ops *ops;
		u32 kvdl_index;
		struct mlxsw_sp_nve_mc_entry entries[0];
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 62 */;
	struct mlxsw_sp_nve_mc_record cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 616 */;
	struct mlxsw_sp_nve_mc_record *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 607 */;
	struct mlxsw_sp_nve_mc_list *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 605 */;
	struct mlxsw_sp_nve_mc_entry {
		union {
			__be32 addr4;
			struct mlxsw_sp_nve_mc_ipv6_entry ipv6_entry;
		};
		u8 valid:1;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 54 */;
	struct mlxsw_sp_nve_mc_entry **cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 528 */;
	struct mlxsw_sp_nve_mc_ipv6_entry {
		struct in6_addr addr6;
		u32 addr6_kvdl_index;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 49 */;
	struct mlxsw_sp_nve_mc_list_key {
		u16 fid_index;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 45 */;
	unsigned int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 408 */;
	struct mlxsw_sp_nve_mc_entry *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 403 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 356 */[MLXSW_REG_TNUMT_LEN];
	enum mlxsw_reg_tnumt_record_type cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 353 */;
	struct mlxsw_sp_nve_mc_record_ops {
		enum mlxsw_reg_tnumt_record_type type;
		int (*entry_add)(struct mlxsw_sp_nve_mc_record *mc_record,
				 struct mlxsw_sp_nve_mc_entry *mc_entry,
				 const union mlxsw_sp_l3addr *addr);
		void (*entry_del)(const struct mlxsw_sp_nve_mc_record *mc_record,
				  const struct mlxsw_sp_nve_mc_entry *mc_entry);
		void (*entry_set)(const struct mlxsw_sp_nve_mc_record *mc_record,
				  const struct mlxsw_sp_nve_mc_entry *mc_entry,
				  char *tnumt_pl, unsigned int entry_index);
		bool (*entry_compare)(const struct mlxsw_sp_nve_mc_record *mc_record,
				      const struct mlxsw_sp_nve_mc_entry *mc_entry,
				      const union mlxsw_sp_l3addr *addr);
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 30 */;
	struct mlxsw_sp_nve_mc_entry cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 26 */;
	const struct mlxsw_sp_nve_mc_list_key *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 203 */;
	const struct mlxsw_sp_nve_ops *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 18 */[];
	const struct mlxsw_sp_nve_mc_record_ops *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 171 */[];
	const struct mlxsw_sp_nve_mc_record_ops cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 119 */;
	const struct mlxsw_sp_nve_mc_entry *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 113 */;
	const struct mlxsw_sp_nve_mc_record *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 112 */;
	char *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_nve.c 104 */;
}
