cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/usb/typec/tcpm/tcpci.c 604 */;
	const struct of_device_id cocci_id/* drivers/usb/typec/tcpm/tcpci.c 597 */[];
	const struct i2c_device_id cocci_id/* drivers/usb/typec/tcpm/tcpci.c 590 */[];
	enum typec_cc_status cocci_id/* drivers/usb/typec/tcpm/tcpci.c 56 */;
	const struct i2c_device_id *cocci_id/* drivers/usb/typec/tcpm/tcpci.c 543 */;
	struct i2c_client *cocci_id/* drivers/usb/typec/tcpm/tcpci.c 542 */;
	void cocci_id/* drivers/usb/typec/tcpm/tcpci.c 536 */;
	struct tcpci_data *cocci_id/* drivers/usb/typec/tcpm/tcpci.c 498 */;
	struct device *cocci_id/* drivers/usb/typec/tcpm/tcpci.c 498 */;
	const struct regmap_config cocci_id/* drivers/usb/typec/tcpm/tcpci.c 477 */;
	struct tcpci_chip *cocci_id/* drivers/usb/typec/tcpm/tcpci.c 472 */;
	irqreturn_t cocci_id/* drivers/usb/typec/tcpm/tcpci.c 470 */;
	void *cocci_id/* drivers/usb/typec/tcpm/tcpci.c 470 */;
	int cocci_id/* drivers/usb/typec/tcpm/tcpci.c 470 */;
	u16 *cocci_id/* drivers/usb/typec/tcpm/tcpci.c 46 */;
	struct pd_message cocci_id/* drivers/usb/typec/tcpm/tcpci.c 434 */;
	struct tcpci cocci_id/* drivers/usb/typec/tcpm/tcpci.c 43 */;
	struct tcpci *cocci_id/* drivers/usb/typec/tcpm/tcpci.c 41 */;
	struct tcpc_dev *cocci_id/* drivers/usb/typec/tcpm/tcpci.c 41 */;
	u16 cocci_id/* drivers/usb/typec/tcpm/tcpci.c 403 */;
	struct tcpci_chip {
		struct tcpci *tcpci;
		struct tcpci_data data;
	} cocci_id/* drivers/usb/typec/tcpm/tcpci.c 36 */;
	unsigned long cocci_id/* drivers/usb/typec/tcpm/tcpci.c 352 */;
	const struct pd_message *cocci_id/* drivers/usb/typec/tcpm/tcpci.c 317 */;
	enum tcpm_transmit_type cocci_id/* drivers/usb/typec/tcpm/tcpci.c 316 */;
	bool cocci_id/* drivers/usb/typec/tcpm/tcpci.c 249 */;
	enum typec_role cocci_id/* drivers/usb/typec/tcpm/tcpci.c 231 */;
	enum typec_data_role cocci_id/* drivers/usb/typec/tcpm/tcpci.c 231 */;
	struct tcpci {
		struct device *dev;
		struct tcpm_port *port;
		struct regmap *regmap;
		bool controls_vbus;
		struct tcpc_dev tcpc;
		struct tcpci_data *data;
	} cocci_id/* drivers/usb/typec/tcpm/tcpci.c 23 */;
	enum typec_cc_polarity cocci_id/* drivers/usb/typec/tcpm/tcpci.c 189 */;
	unsigned int cocci_id/* drivers/usb/typec/tcpm/tcpci.c 171 */;
	enum typec_cc_status *cocci_id/* drivers/usb/typec/tcpm/tcpci.c 168 */;
	enum typec_port_type cocci_id/* drivers/usb/typec/tcpm/tcpci.c 104 */;
}
