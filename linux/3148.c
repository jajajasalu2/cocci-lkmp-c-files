cocci_test_suite() {
	const struct icm_fr_event_xdomain_disconnected *cocci_id/* drivers/thunderbolt/icm.c 966 */;
	const struct icm_fr_event_xdomain_connected *cocci_id/* drivers/thunderbolt/icm.c 880 */;
	const struct icm_fr_event_device_disconnected *cocci_id/* drivers/thunderbolt/icm.c 852 */;
	struct icm {
		struct mutex request_lock;
		struct delayed_work rescan_work;
		struct pci_dev *upstream_port;
		size_t max_boot_acl;
		int vnd_cap;
		bool safe_mode;
		bool rpm;
		bool can_upgrade_nvm;
		bool veto;
		bool (*is_supported)(struct tb *tb);
		int (*cio_reset)(struct tb *tb);
		int (*get_mode)(struct tb *tb);
		int (*get_route)(struct tb *tb, u8 link, u8 depth, u64 *route);
		void (*save_devices)(struct tb *tb);
		int (*driver_ready)(struct tb *tb,
				    enum tb_security_level *security_level,
				    size_t *nboot_acl, bool *rpm);
		void (*set_uuid)(struct tb *tb);
		void (*device_connected)(struct tb *tb,
					 const struct icm_pkg_header *hdr);
		void (*device_disconnected)(struct tb *tb,
					    const struct icm_pkg_header *hdr);
		void (*xdomain_connected)(struct tb *tb,
					  const struct icm_pkg_header *hdr);
		void (*xdomain_disconnected)(struct tb *tb,
					     const struct icm_pkg_header *hdr);
		void (*rtd3_veto)(struct tb *tb,
				  const struct icm_pkg_header *hdr);
	} cocci_id/* drivers/thunderbolt/icm.c 78 */;
	const struct icm_fr_event_device_connected *cocci_id/* drivers/thunderbolt/icm.c 704 */;
	u8 cocci_id/* drivers/thunderbolt/icm.c 663 */;
	const uuid_t *cocci_id/* drivers/thunderbolt/icm.c 662 */;
	struct icm_fr_pkg_approve_xdomain cocci_id/* drivers/thunderbolt/icm.c 547 */;
	struct icm_fr_pkg_approve_xdomain_response cocci_id/* drivers/thunderbolt/icm.c 546 */;
	struct icm_fr_pkg_challenge_device_response cocci_id/* drivers/thunderbolt/icm.c 518 */;
	struct icm_fr_pkg_challenge_device cocci_id/* drivers/thunderbolt/icm.c 517 */;
	const u8 *cocci_id/* drivers/thunderbolt/icm.c 515 */;
	u8 *cocci_id/* drivers/thunderbolt/icm.c 515 */;
	struct icm_fr_pkg_add_device_key_response cocci_id/* drivers/thunderbolt/icm.c 490 */;
	struct icm_fr_pkg_add_device_key cocci_id/* drivers/thunderbolt/icm.c 489 */;
	struct icm_fr_pkg_approve_device cocci_id/* drivers/thunderbolt/icm.c 462 */;
	struct icm_fr_pkg_driver_ready_response cocci_id/* drivers/thunderbolt/icm.c 442 */;
	struct icm_fr_pkg_get_topology cocci_id/* drivers/thunderbolt/icm.c 385 */;
	struct icm_fr_pkg_get_topology_response *cocci_id/* drivers/thunderbolt/icm.c 384 */;
	const struct tb_nhi *cocci_id/* drivers/thunderbolt/icm.c 358 */;
	const struct ctl_pkg *cocci_id/* drivers/thunderbolt/icm.c 268 */;
	struct tb_cfg_request *cocci_id/* drivers/thunderbolt/icm.c 268 */;
	const struct tb_cfg_request *cocci_id/* drivers/thunderbolt/icm.c 254 */;
	struct icm cocci_id/* drivers/thunderbolt/icm.c 2196 */;
	enum tb_cfg_space cocci_id/* drivers/thunderbolt/icm.c 215 */;
	const struct tb_cm_ops cocci_id/* drivers/thunderbolt/icm.c 2135 */;
	struct tb_port *cocci_id/* drivers/thunderbolt/icm.c 1984 */;
	struct device *cocci_id/* drivers/thunderbolt/icm.c 1956 */;
	void *cocci_id/* drivers/thunderbolt/icm.c 1956 */;
	unsigned long cocci_id/* drivers/thunderbolt/icm.c 195 */;
	u32 cocci_id/* drivers/thunderbolt/icm.c 1711 */;
	struct tb_cfg_result cocci_id/* drivers/thunderbolt/icm.c 1710 */;
	unsigned int cocci_id/* drivers/thunderbolt/icm.c 1696 */;
	struct icm *cocci_id/* drivers/thunderbolt/icm.c 1695 */;
	bool *cocci_id/* drivers/thunderbolt/icm.c 1693 */;
	size_t *cocci_id/* drivers/thunderbolt/icm.c 1693 */;
	struct tb *cocci_id/* drivers/thunderbolt/icm.c 1692 */;
	enum tb_security_level *cocci_id/* drivers/thunderbolt/icm.c 1692 */;
	int cocci_id/* drivers/thunderbolt/icm.c 1691 */;
	struct tb cocci_id/* drivers/thunderbolt/icm.c 168 */;
	struct icm_notification *cocci_id/* drivers/thunderbolt/icm.c 1678 */;
	const void *cocci_id/* drivers/thunderbolt/icm.c 1676 */;
	enum tb_cfg_pkg_type cocci_id/* drivers/thunderbolt/icm.c 1675 */;
	typeof(*n) cocci_id/* drivers/thunderbolt/icm.c 1638 */;
	struct work_struct *cocci_id/* drivers/thunderbolt/icm.c 1636 */;
	const struct icm_icl_event_rtd3_veto *cocci_id/* drivers/thunderbolt/icm.c 1625 */;
	u32 cocci_id/* drivers/thunderbolt/icm.c 1607 */[4];
	struct icm_tr_pkg_driver_ready_response cocci_id/* drivers/thunderbolt/icm.c 1585 */;
	const struct intel_vss *cocci_id/* drivers/thunderbolt/icm.c 157 */;
	const u32 *cocci_id/* drivers/thunderbolt/icm.c 1550 */;
	u32 *cocci_id/* drivers/thunderbolt/icm.c 1518 */;
	struct icm_ar_pkg_preboot_acl cocci_id/* drivers/thunderbolt/icm.c 1503 */;
	struct icm_ar_pkg_preboot_acl_response cocci_id/* drivers/thunderbolt/icm.c 1502 */;
	uuid_t *cocci_id/* drivers/thunderbolt/icm.c 1500 */;
	size_t cocci_id/* drivers/thunderbolt/icm.c 1500 */;
	struct icm_ar_pkg_get_route cocci_id/* drivers/thunderbolt/icm.c 1481 */;
	struct icm_ar_pkg_get_route_response cocci_id/* drivers/thunderbolt/icm.c 1480 */;
	u64 *cocci_id/* drivers/thunderbolt/icm.c 1478 */;
	struct icm_pkg_driver_ready cocci_id/* drivers/thunderbolt/icm.c 1456 */;
	struct icm_ar_pkg_driver_ready_response cocci_id/* drivers/thunderbolt/icm.c 1455 */;
	struct tb_nhi *cocci_id/* drivers/thunderbolt/icm.c 1432 */;
	const struct ep_name_entry *cocci_id/* drivers/thunderbolt/icm.c 139 */;
	struct pci_dev *cocci_id/* drivers/thunderbolt/icm.c 1359 */;
	const struct icm_tr_event_xdomain_disconnected *cocci_id/* drivers/thunderbolt/icm.c 1345 */;
	const struct icm_tr_event_xdomain_connected *cocci_id/* drivers/thunderbolt/icm.c 1291 */;
	const struct icm_tr_event_device_disconnected *cocci_id/* drivers/thunderbolt/icm.c 1271 */;
	struct intel_vss {
		u16 vendor;
		u16 model;
		u8 mc;
		u8 flags;
		u16 pci_devid;
		u32 nvm_version;
	} cocci_id/* drivers/thunderbolt/icm.c 123 */;
	u64 cocci_id/* drivers/thunderbolt/icm.c 1176 */;
	struct tb_xdomain *cocci_id/* drivers/thunderbolt/icm.c 1175 */;
	struct tb_switch *cocci_id/* drivers/thunderbolt/icm.c 1174 */;
	enum tb_security_level cocci_id/* drivers/thunderbolt/icm.c 1173 */;
	const struct icm_tr_event_device_connected *cocci_id/* drivers/thunderbolt/icm.c 1170 */;
	bool cocci_id/* drivers/thunderbolt/icm.c 1168 */;
	const struct icm_pkg_header *cocci_id/* drivers/thunderbolt/icm.c 1167 */;
	void cocci_id/* drivers/thunderbolt/icm.c 1166 */;
	struct ep_name_entry {
		u8 len;
		u8 type;
		u8 data[0];
	} cocci_id/* drivers/thunderbolt/icm.c 114 */;
	struct icm_tr_pkg_disconnect_xdomain cocci_id/* drivers/thunderbolt/icm.c 1132 */;
	struct icm_tr_pkg_disconnect_xdomain_response cocci_id/* drivers/thunderbolt/icm.c 1131 */;
	struct icm_tr_pkg_approve_xdomain cocci_id/* drivers/thunderbolt/icm.c 1103 */;
	struct icm_tr_pkg_approve_xdomain_response cocci_id/* drivers/thunderbolt/icm.c 1102 */;
	struct icm_notification {
		struct work_struct work;
		struct icm_pkg_header *pkg;
		struct tb *tb;
	} cocci_id/* drivers/thunderbolt/icm.c 108 */;
	struct icm_tr_pkg_challenge_device cocci_id/* drivers/thunderbolt/icm.c 1073 */;
	struct icm_tr_pkg_challenge_device_response cocci_id/* drivers/thunderbolt/icm.c 1072 */;
	struct icm_tr_pkg_add_device_key cocci_id/* drivers/thunderbolt/icm.c 1044 */;
	struct icm_tr_pkg_add_device_key_response cocci_id/* drivers/thunderbolt/icm.c 1043 */;
	struct icm_tr_pkg_approve_device cocci_id/* drivers/thunderbolt/icm.c 1016 */;
}
