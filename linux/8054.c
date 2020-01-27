cocci_test_suite() {
	size_t cocci_id/* drivers/net/phy/sfp-bus.c 94 */;
	unsigned int cocci_id/* drivers/net/phy/sfp-bus.c 93 */;
	const struct sfp_quirk *cocci_id/* drivers/net/phy/sfp-bus.c 90 */;
	const struct sfp_eeprom_id *cocci_id/* drivers/net/phy/sfp-bus.c 90 */;
	bool cocci_id/* drivers/net/phy/sfp-bus.c 81 */;
	const char *cocci_id/* drivers/net/phy/sfp-bus.c 81 */;
	const struct sfp_socket_ops *cocci_id/* drivers/net/phy/sfp-bus.c 716 */;
	struct sfp *cocci_id/* drivers/net/phy/sfp-bus.c 715 */;
	struct device *cocci_id/* drivers/net/phy/sfp-bus.c 715 */;
	const struct sfp_upstream_ops *cocci_id/* drivers/net/phy/sfp-bus.c 642 */;
	struct sfp_bus *cocci_id/* drivers/net/phy/sfp-bus.c 640 */;
	struct phy_device *cocci_id/* drivers/net/phy/sfp-bus.c 640 */;
	int cocci_id/* drivers/net/phy/sfp-bus.c 640 */;
	void cocci_id/* drivers/net/phy/sfp-bus.c 625 */;
	void *cocci_id/* drivers/net/phy/sfp-bus.c 588 */;
	struct fwnode_reference_args cocci_id/* drivers/net/phy/sfp-bus.c 550 */;
	struct fwnode_handle *cocci_id/* drivers/net/phy/sfp-bus.c 548 */;
	u8 *cocci_id/* drivers/net/phy/sfp-bus.c 486 */;
	struct ethtool_eeprom *cocci_id/* drivers/net/phy/sfp-bus.c 485 */;
	const struct sfp_quirk cocci_id/* drivers/net/phy/sfp-bus.c 47 */[];
	struct ethtool_modinfo *cocci_id/* drivers/net/phy/sfp-bus.c 468 */;
	struct sfp_bus cocci_id/* drivers/net/phy/sfp-bus.c 400 */;
	struct kref *cocci_id/* drivers/net/phy/sfp-bus.c 398 */;
	phy_interface_t cocci_id/* drivers/net/phy/sfp-bus.c 331 */;
	struct sfp_bus {
		struct kref kref;
		struct list_head node;
		struct fwnode_handle *fwnode;
		const struct sfp_socket_ops *socket_ops;
		struct device *sfp_dev;
		struct sfp *sfp;
		const struct sfp_quirk *sfp_quirk;
		const struct sfp_upstream_ops *upstream_ops;
		void *upstream;
		struct phy_device *phydev;
		bool registered;
		bool started;
	} cocci_id/* drivers/net/phy/sfp-bus.c 22 */;
	struct sfp_quirk {
		const char *vendor;
		const char *part;
		void (*modes)(const struct sfp_eeprom_id *id,
			      unsigned long *modes);
	} cocci_id/* drivers/net/phy/sfp-bus.c 13 */;
	unsigned long *cocci_id/* drivers/net/phy/sfp-bus.c 121 */;
}
