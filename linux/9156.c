cocci_test_suite() {
	struct mlxsw_sp_fid_family {
		enum mlxsw_sp_fid_type type;
		size_t fid_size;
		u16 start_index;
		u16 end_index;
		struct list_head fids_list;
		unsigned long *fids_bitmap;
		const struct mlxsw_sp_flood_table *flood_tables;
		int nr_flood_tables;
		enum mlxsw_sp_rif_type rif_type;
		const struct mlxsw_sp_fid_ops *ops;
		struct mlxsw_sp *mlxsw_sp;
		u8 lag_vid_valid:1;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 92 */;
	struct mlxsw_sp_fid_8021q cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 879 */;
	struct mlxsw_sp_fid_8021d cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 838 */;
	const struct mlxsw_sp_fid_family cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 836 */;
	const struct mlxsw_sp_flood_table cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 814 */[];
	const struct mlxsw_sp_fid_ops cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 798 */;
	const struct net_device *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 793 */;
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 774 */;
	__be32 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 756 */;
	struct mlxsw_sp_port *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 715 */;
	struct mlxsw_sp_fid_ops {
		void (*setup)(struct mlxsw_sp_fid *fid, const void *arg);
		int (*configure)(struct mlxsw_sp_fid *fid);
		void (*deconfigure)(struct mlxsw_sp_fid *fid);
		int (*index_alloc)(struct mlxsw_sp_fid *fid, const void *arg,
				   u16 *p_fid_index);
		bool (*compare)(const struct mlxsw_sp_fid *fid,
				const void *arg);
		u16 (*flood_index)(const struct mlxsw_sp_fid *fid);
		int (*port_vid_map)(struct mlxsw_sp_fid *fid,
				    struct mlxsw_sp_port *port, u16 vid);
		void (*port_vid_unmap)(struct mlxsw_sp_fid *fid,
				       struct mlxsw_sp_port *port, u16 vid);
		int (*vni_set)(struct mlxsw_sp_fid *fid, __be32 vni);
		void (*vni_clear)(struct mlxsw_sp_fid *fid);
		int (*nve_flood_index_set)(struct mlxsw_sp_fid *fid,
					   u32 nve_flood_index);
		void (*nve_flood_index_clear)(struct mlxsw_sp_fid *fid);
		void (*fdb_clear_offload)(const struct mlxsw_sp_fid *fid,
					  const struct net_device *nve_dev);
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 70 */;
	struct mlxsw_sp_port_vlan *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 696 */;
	int *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 639 */;
	const struct mlxsw_sp_fid *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 637 */;
	const void *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 637 */;
	struct mlxsw_sp_flood_table {
		enum mlxsw_sp_flood_type packet_type;
		enum mlxsw_reg_sfgc_bridge_type bridge_type;
		enum mlxsw_flood_table_type table_type;
		int table_index;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 63 */;
	u16 *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 622 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 614 */;
	struct mlxsw_sp_fid_family *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 609 */;
	struct mlxsw_sp_fid *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 607 */;
	struct mlxsw_sp_fid_8021d *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 594 */;
	const struct rhashtable_params cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 51 */;
	struct mlxsw_sp_fid_8021q *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 463 */;
	struct mlxsw_sp_fid_8021d {
		struct mlxsw_sp_fid common;
		int br_ifindex;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 46 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 454 */[MLXSW_REG_SVFA_LEN];
	enum mlxsw_reg_svfa_mt cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 453 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 451 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 451 */;
	u16 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 450 */;
	struct mlxsw_sp *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 450 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 450 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 418 */[MLXSW_REG_SFMR_LEN];
	struct mlxsw_sp_fid_8021q {
		struct mlxsw_sp_fid common;
		u16 vid;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 41 */;
	enum mlxsw_reg_sfmr_op cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 409 */;
	struct mlxsw_sp_fid_core *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 386 */;
	const struct mlxsw_sp *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 383 */;
	enum mlxsw_sp_rif_type cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 382 */;
	struct mlxsw_sp_rif *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 377 */;
	char *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 325 */;
	const struct mlxsw_sp_flood_table *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 324 */;
	enum mlxsw_sp_flood_type cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 319 */;
	const struct mlxsw_sp_fid_ops *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 296 */;
	struct mlxsw_sp_fid {
		struct list_head list;
		struct mlxsw_sp_rif *rif;
		unsigned int ref_count;
		u16 fid_index;
		struct mlxsw_sp_fid_family *fid_family;
		struct rhash_head ht_node;
		struct rhash_head vni_ht_node;
		enum mlxsw_sp_nve_type nve_type;
		__be32 vni;
		u32 nve_flood_index;
		int nve_ifindex;
		u8 vni_valid:1,nve_flood_index_valid:1;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 24 */;
	enum mlxsw_sp_nve_type cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 238 */;
	__be32 *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 191 */;
	struct mlxsw_sp_fid_core {
		struct rhashtable fid_ht;
		struct rhashtable vni_ht;
		struct mlxsw_sp_fid_family *fid_family_arr[MLXSW_SP_FID_TYPE_MAX];
		unsigned int *port_fid_mappings;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 17 */;
	enum mlxsw_sp_nve_type *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 168 */;
	struct mlxsw_sp_fid_family cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 15 */;
	unsigned int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 1256 */;
	const int *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 123 */[];
	const struct mlxsw_sp_fid_family *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 1189 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 1154 */[MLXSW_REG_SFGC_LEN];
	const int *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 1148 */;
	const int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 111 */[MLXSW_REG_SFGC_TYPE_MAX];
	enum mlxsw_sp_fid_type cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 1041 */;
	const struct mlxsw_sp_fid_family *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 1015 */[];
	struct mlxsw_sp_fid cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_fid.c 1009 */;
}
