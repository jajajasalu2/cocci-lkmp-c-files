cocci_test_suite() {
	const struct switchdev_attr *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 828 */;
	struct mlxsw_sp_bridge_ops {
		int (*port_join)(struct mlxsw_sp_bridge_device *bridge_device,
				 struct mlxsw_sp_bridge_port *bridge_port,
				 struct mlxsw_sp_port *mlxsw_sp_port,
				 struct netlink_ext_ack *extack);
		void (*port_leave)(struct mlxsw_sp_bridge_device *bridge_device,
				   struct mlxsw_sp_bridge_port *bridge_port,
				   struct mlxsw_sp_port *mlxsw_sp_port);
		int (*vxlan_join)(struct mlxsw_sp_bridge_device *bridge_device,
				  const struct net_device *vxlan_dev, u16 vid,
				  struct netlink_ext_ack *extack);
		struct mlxsw_sp_fid *(*fid_get)(struct mlxsw_sp_bridge_device *bridge_device,
						u16 vid,
						struct netlink_ext_ack *extack);
		struct mlxsw_sp_fid *(*fid_lookup)(struct mlxsw_sp_bridge_device *bridge_device,
						   u16 vid);
		u16 (*fid_vid)(struct mlxsw_sp_bridge_device *bridge_device,
			       const struct mlxsw_sp_fid *fid);
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 79 */;
	struct mlxsw_sp_bridge_vlan {
		struct list_head list;
		struct list_head port_vlan_list;
		u16 vid;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 73 */;
	struct switchdev_trans *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 650 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 638 */[MLXSW_REG_SFDAT_LEN];
	u32 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 636 */;
	struct mlxsw_sp_bridge_port {
		struct net_device *dev;
		struct mlxsw_sp_bridge_device *bridge_device;
		struct list_head list;
		struct list_head vlans_list;
		unsigned int ref_count;
		u8 stp_state;
		unsigned long flags;
		bool mrouter;
		bool lagged;
		union {
			u16 lag_id;
			u16 system_port;
		};
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 57 */;
	struct mlxsw_sp_bridge_vlan *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 518 */;
	enum mlxsw_sp_flood_type cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 515 */;
	struct mlxsw_sp_bridge_device {
		struct net_device *dev;
		struct list_head list;
		struct list_head ports_list;
		struct list_head mids_list;
		u8 vlan_enabled:1,multicast_enabled:1,mrouter:1;
		const struct mlxsw_sp_bridge_ops *ops;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 46 */;
	const struct mlxsw_sp_bridge_port *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 379 */;
	struct notifier_block *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 3515 */;
	struct notifier_block cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 3468 */;
	struct switchdev_notifier_port_obj_info *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 3404 */;
	struct switchdev_obj_port_vlan *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 3322 */;
	u8 *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 3166 */;
	struct switchdev_notifier_info *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 3124 */;
	struct vxlan_config *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 3082 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 2931 */[ETH_ALEN];
	struct switchdev_notifier_vxlan_fdb_info *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 2928 */;
	struct mlxsw_sp_switchdev_event_work cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 2874 */;
	struct mlxsw_sp_switchdev_event_work *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 2873 */;
	struct mlxsw_sp_bridge {
		struct mlxsw_sp *mlxsw_sp;
		struct {
			struct delayed_work dw;
#define MLXSW_SP_DEFAULT_LEARNING_INTERVAL 100
			unsigned int interval;
		} fdb_notify;
#define MLXSW_SP_MIN_AGEING_TIME 10
#define MLXSW_SP_MAX_AGEING_TIME 1000000
#define MLXSW_SP_DEFAULT_AGEING_TIME 300
		u32 ageing_time;
		bool vlan_enabled_exists;
		struct list_head bridges_list;
	DECLARE_BITMAP(mids_bitmap,MLXSW_SP_MID_MAX)
		;
		const struct mlxsw_sp_bridge_ops *bridge_8021q_ops;
		const struct mlxsw_sp_bridge_ops *bridge_8021d_ops;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 28 */;
	struct mlxsw_sp_switchdev_event_work {
		struct work_struct work;
		union {
			struct switchdev_notifier_fdb_info fdb_info;
			struct switchdev_notifier_vxlan_fdb_info vxlan_fdb_info;
		};
		struct net_device *dev;
		unsigned long event;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 2762 */;
	struct mlxsw_sp_bridge cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 2742 */;
	struct work_struct *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 2729 */;
	enum mlxsw_sp_l3proto cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 2649 */;
	__be32 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 2637 */;
	union mlxsw_sp_l3addr cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 2633 */;
	enum mlxsw_reg_sfn_uc_tunnel_protocol cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 2630 */;
	struct vxlan_dev *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 2606 */;
	struct mlxsw_sp_bridge_ops cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 26 */;
	struct net_device *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 2582 */;
	struct mlxsw_sp_bridge_device *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 2581 */;
	u16 *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 2579 */;
	__be32 *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 2579 */;
	struct net_device **cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 2578 */;
	bool cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 2577 */;
	const struct mlxsw_sp_fid *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 2576 */;
	struct mlxsw_sp *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 2575 */;
	int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 2574 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 2519 */[ETH_ALEN];
	struct switchdev_notifier_fdb_info cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 2441 */;
	enum switchdev_notifier_type cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 2437 */;
	union mlxsw_sp_l3addr *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 2427 */;
	struct switchdev_notifier_vxlan_fdb_info cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 2408 */;
	union vxlan_addr *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 2388 */;
	enum mlxsw_sp_l3proto *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 2373 */;
	const union vxlan_addr *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 2372 */;
	const struct mlxsw_sp_bridge_ops cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 2271 */;
	const struct net_device *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 227 */;
	const struct mlxsw_sp_bridge_device *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 226 */;
	struct mlxsw_sp_bridge_port *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 225 */;
	struct netlink_ext_ack *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 2218 */;
	struct mlxsw_sp_nve_params cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 2179 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 2155 */;
	struct mlxsw_sp_port_vlan *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 2133 */;
	const struct mlxsw_sp_port *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 2111 */;
	struct list_head *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 2027 */;
	struct mlxsw_sp_port *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 1824 */;
	const struct switchdev_obj *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 1746 */;
	struct mlxsw_sp_span_respin_work *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 1733 */;
	struct mlxsw_sp_span_respin_work cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 1723 */;
	struct mlxsw_sp_span_respin_work {
		struct work_struct work;
		struct mlxsw_sp *mlxsw_sp;
	} cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 1715 */;
	const struct switchdev_obj_port_mdb *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 1620 */;
	struct device *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 160 */;
	unsigned long cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 1574 */;
	struct mlxsw_sp_bridge *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 157 */;
	size_t cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 1568 */;
	u16 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 1565 */;
	const unsigned char *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 1564 */;
	struct mlxsw_sp_mid *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 1561 */;
	long cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 1524 */;
	long *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 1512 */;
	u64 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 1472 */;
	unsigned long *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 1469 */;
	void *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 139 */;
	struct switchdev_notifier_fdb_info *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 1342 */;
	const struct mlxsw_sp *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 132 */;
	char *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 1271 */;
	enum mlxsw_reg_sfd_rec_policy cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 1269 */;
	enum mlxsw_reg_sfd_rec_action cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 1268 */;
	const char *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 1267 */;
	u8 cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 1266 */;
	enum mlxsw_reg_sfd_uc_tunnel_protocol cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 1227 */;
	const union mlxsw_sp_l3addr *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 1224 */;
	enum mlxsw_reg_sfd_op cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 1215 */;
	const struct mlxsw_sp_bridge *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 120 */;
	char cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 1198 */[MLXSW_REG_SFDF_LEN];
	enum mlxsw_reg_sfdf_flush_type cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 1186 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 114 */(struct mlxsw_sp_port *mlxsw_sp_port, struct mlxsw_sp_bridge_port *bridge_port, bool add);
	struct mlxsw_sp_fid *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 1111 */;
	struct mlxsw_sp_rif *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 1110 */;
	const struct switchdev_obj_port_vlan *cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 1108 */;
	void cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 109 */(struct mlxsw_sp_port *mlxsw_sp_port, struct mlxsw_sp_bridge_device *bridge_device);
	void cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 105 */(struct mlxsw_sp_port *mlxsw_sp_port, struct mlxsw_sp_bridge_port *bridge_port);
	int cocci_id/* drivers/net/ethernet/mellanox/mlxsw/spectrum_switchdev.c 100 */(struct mlxsw_sp *mlxsw_sp, struct mlxsw_sp_bridge_port *bridge_port, u16 fid_index);
}
