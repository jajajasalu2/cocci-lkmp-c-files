cocci_test_suite() {
	struct device_node *cocci_id/* drivers/hsi/clients/nokia-modem.c 74 */;
	struct device *cocci_id/* drivers/hsi/clients/nokia-modem.c 72 */;
	int cocci_id/* drivers/hsi/clients/nokia-modem.c 72 */;
	irqreturn_t cocci_id/* drivers/hsi/clients/nokia-modem.c 52 */;
	void *cocci_id/* drivers/hsi/clients/nokia-modem.c 52 */;
	struct nokia_modem_device *cocci_id/* drivers/hsi/clients/nokia-modem.c 41 */;
	unsigned long cocci_id/* drivers/hsi/clients/nokia-modem.c 39 */;
	void cocci_id/* drivers/hsi/clients/nokia-modem.c 39 */;
	void __exit cocci_id/* drivers/hsi/clients/nokia-modem.c 291 */;
	struct nokia_modem_device {
		struct tasklet_struct nokia_modem_rst_ind_tasklet;
		int nokia_modem_rst_ind_irq;
		struct device *device;
		struct nokia_modem_gpio *gpios;
		int gpio_amount;
		struct hsi_client *ssi_protocol;
		struct hsi_client *cmt_speech;
	} cocci_id/* drivers/hsi/clients/nokia-modem.c 29 */;
	int __init cocci_id/* drivers/hsi/clients/nokia-modem.c 285 */;
	struct hsi_client_driver cocci_id/* drivers/hsi/clients/nokia-modem.c 275 */;
	const struct of_device_id cocci_id/* drivers/hsi/clients/nokia-modem.c 266 */[];
	struct nokia_modem_gpio {
		struct gpio_desc *gpio;
		const char *name;
	} cocci_id/* drivers/hsi/clients/nokia-modem.c 24 */;
	unsigned int cocci_id/* drivers/hsi/clients/nokia-modem.c 19 */;
	struct hsi_board_info cocci_id/* drivers/hsi/clients/nokia-modem.c 134 */;
	struct hsi_port *cocci_id/* drivers/hsi/clients/nokia-modem.c 132 */;
	struct hsi_client *cocci_id/* drivers/hsi/clients/nokia-modem.c 131 */;
}
