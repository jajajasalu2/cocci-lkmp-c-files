cocci_test_suite() {
	struct mdio_mux_child_bus *cocci_id/* drivers/net/phy/mdio-mux.c 97 */;
	struct mdio_mux_parent_bus *cocci_id/* drivers/net/phy/mdio-mux.c 96 */;
	struct mii_bus *cocci_id/* drivers/net/phy/mdio-mux.c 90 */;
	void *cocci_id/* drivers/net/phy/mdio-mux.c 89 */;
	void **cocci_id/* drivers/net/phy/mdio-mux.c 88 */;
	int (*cocci_id/* drivers/net/phy/mdio-mux.c 87 */)(int cur,
							   int desired,
							   void *data);
	struct device_node *cocci_id/* drivers/net/phy/mdio-mux.c 86 */;
	struct device *cocci_id/* drivers/net/phy/mdio-mux.c 85 */;
	int cocci_id/* drivers/net/phy/mdio-mux.c 85 */;
	u16 cocci_id/* drivers/net/phy/mdio-mux.c 62 */;
	struct mdio_mux_child_bus {
		struct mii_bus *mii_bus;
		struct mdio_mux_parent_bus *parent;
		struct mdio_mux_child_bus *next;
		int bus_number;
	} cocci_id/* drivers/net/phy/mdio-mux.c 28 */;
	void cocci_id/* drivers/net/phy/mdio-mux.c 193 */;
	struct mdio_mux_parent_bus {
		struct mii_bus *mii_bus;
		int current_child;
		int parent_id;
		void *switch_data;
		int (*switch_fn)(int current_child, int desired_child,
				 void *data);
		struct mdio_mux_child_bus *children;
	} cocci_id/* drivers/net/phy/mdio-mux.c 17 */;
	struct mdio_mux_child_bus cocci_id/* drivers/net/phy/mdio-mux.c 15 */;
}
