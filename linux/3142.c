cocci_test_suite() {
	struct tb_nhi *cocci_id/* drivers/thunderbolt/tb.c 987 */;
	const struct tb_cm_ops cocci_id/* drivers/thunderbolt/tb.c 975 */;
	struct device *cocci_id/* drivers/thunderbolt/tb.c 819 */;
	void *cocci_id/* drivers/thunderbolt/tb.c 819 */;
	u64 cocci_id/* drivers/thunderbolt/tb.c 780 */;
	const struct cfg_event_pkg *cocci_id/* drivers/thunderbolt/tb.c 779 */;
	const void *cocci_id/* drivers/thunderbolt/tb.c 777 */;
	size_t cocci_id/* drivers/thunderbolt/tb.c 777 */;
	enum tb_cfg_pkg_type cocci_id/* drivers/thunderbolt/tb.c 776 */;
	typeof(*ev) cocci_id/* drivers/thunderbolt/tb.c 688 */;
	struct tb_hotplug_event *cocci_id/* drivers/thunderbolt/tb.c 688 */;
	struct work_struct *cocci_id/* drivers/thunderbolt/tb.c 686 */;
	struct tb_switch *cocci_id/* drivers/thunderbolt/tb.c 655 */;
	struct tb_tunnel *cocci_id/* drivers/thunderbolt/tb.c 654 */;
	struct tb_port *cocci_id/* drivers/thunderbolt/tb.c 653 */;
	struct tb_xdomain *cocci_id/* drivers/thunderbolt/tb.c 651 */;
	struct tb *cocci_id/* drivers/thunderbolt/tb.c 651 */;
	void cocci_id/* drivers/thunderbolt/tb.c 651 */;
	struct tb_cm *cocci_id/* drivers/thunderbolt/tb.c 62 */;
	int cocci_id/* drivers/thunderbolt/tb.c 618 */;
	u8 cocci_id/* drivers/thunderbolt/tb.c 42 */;
	bool cocci_id/* drivers/thunderbolt/tb.c 42 */;
	void cocci_id/* drivers/thunderbolt/tb.c 40 */(struct work_struct *work);
	const struct tb_port *cocci_id/* drivers/thunderbolt/tb.c 384 */;
	enum tb_port_type cocci_id/* drivers/thunderbolt/tb.c 347 */;
	struct tb_hotplug_event {
		struct work_struct work;
		struct tb *tb;
		u64 route;
		u8 port;
		bool unplug;
	} cocci_id/* drivers/thunderbolt/tb.c 32 */;
	enum tb_tunnel_type cocci_id/* drivers/thunderbolt/tb.c 263 */;
	struct tb_cm {
		struct list_head tunnel_list;
		struct list_head dp_resources;
		bool hotplug_active;
	} cocci_id/* drivers/thunderbolt/tb.c 26 */;
	void cocci_id/* drivers/thunderbolt/tb.c 161 */(struct tb_port *port);
}
