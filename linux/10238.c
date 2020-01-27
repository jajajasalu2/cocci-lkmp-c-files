cocci_test_suite() {
	struct at91_cf_socket cocci_id/* drivers/pcmcia/at91_cf.c 91 */;
	struct at91_cf_socket *cocci_id/* drivers/pcmcia/at91_cf.c 86 */;
	u_int *cocci_id/* drivers/pcmcia/at91_cf.c 84 */;
	struct pcmcia_socket *cocci_id/* drivers/pcmcia/at91_cf.c 84 */;
	unsigned cocci_id/* drivers/pcmcia/at91_cf.c 70 */;
	irqreturn_t cocci_id/* drivers/pcmcia/at91_cf.c 65 */;
	void *cocci_id/* drivers/pcmcia/at91_cf.c 65 */;
	struct at91_cf_socket {
		struct pcmcia_socket socket;
		unsigned present:1;
		struct platform_device *pdev;
		struct at91_cf_data *board;
		unsigned long phys_baseaddr;
	} cocci_id/* drivers/pcmcia/at91_cf.c 42 */;
	struct platform_driver cocci_id/* drivers/pcmcia/at91_cf.c 399 */;
	struct regmap *cocci_id/* drivers/pcmcia/at91_cf.c 38 */;
	pm_message_t cocci_id/* drivers/pcmcia/at91_cf.c 367 */;
	struct resource *cocci_id/* drivers/pcmcia/at91_cf.c 249 */;
	struct at91_cf_data *cocci_id/* drivers/pcmcia/at91_cf.c 221 */;
	struct platform_device *cocci_id/* drivers/pcmcia/at91_cf.c 219 */;
	int cocci_id/* drivers/pcmcia/at91_cf.c 219 */;
	const struct of_device_id cocci_id/* drivers/pcmcia/at91_cf.c 213 */[];
	struct pccard_operations cocci_id/* drivers/pcmcia/at91_cf.c 201 */;
	struct pccard_mem_map *cocci_id/* drivers/pcmcia/at91_cf.c 183 */;
	u32 cocci_id/* drivers/pcmcia/at91_cf.c 148 */;
	struct pccard_io_map *cocci_id/* drivers/pcmcia/at91_cf.c 145 */;
	struct socket_state_t *cocci_id/* drivers/pcmcia/at91_cf.c 110 */;
}
