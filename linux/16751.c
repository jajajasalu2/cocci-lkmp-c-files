cocci_test_suite() {
	unsigned cocci_id/* drivers/input/serio/arc_ps2.c 89 */;
	irqreturn_t cocci_id/* drivers/input/serio/arc_ps2.c 76 */;
	void *cocci_id/* drivers/input/serio/arc_ps2.c 76 */;
	unsigned char cocci_id/* drivers/input/serio/arc_ps2.c 51 */;
	unsigned int cocci_id/* drivers/input/serio/arc_ps2.c 49 */;
	struct arc_ps2_port *cocci_id/* drivers/input/serio/arc_ps2.c 47 */;
	void cocci_id/* drivers/input/serio/arc_ps2.c 46 */;
	struct arc_ps2_data {
		struct arc_ps2_port port[ARC_PS2_PORTS];
		void __iomem *addr;
		unsigned int frame_error;
		unsigned int buf_overflow;
		unsigned int total_int;
	} cocci_id/* drivers/input/serio/arc_ps2.c 38 */;
	struct arc_ps2_port {
		void __iomem *data_addr;
		void __iomem *status_addr;
		struct serio *io;
	} cocci_id/* drivers/input/serio/arc_ps2.c 32 */;
	struct platform_driver cocci_id/* drivers/input/serio/arc_ps2.c 261 */;
	const struct of_device_id cocci_id/* drivers/input/serio/arc_ps2.c 254 */[];
	struct arc_ps2_data cocci_id/* drivers/input/serio/arc_ps2.c 193 */;
	struct resource *cocci_id/* drivers/input/serio/arc_ps2.c 185 */;
	struct serio cocci_id/* drivers/input/serio/arc_ps2.c 158 */;
	struct platform_device *cocci_id/* drivers/input/serio/arc_ps2.c 151 */;
	u32 cocci_id/* drivers/input/serio/arc_ps2.c 140 */;
	bool cocci_id/* drivers/input/serio/arc_ps2.c 126 */;
	int cocci_id/* drivers/input/serio/arc_ps2.c 126 */;
	struct arc_ps2_data *cocci_id/* drivers/input/serio/arc_ps2.c 125 */;
	void __iomem *cocci_id/* drivers/input/serio/arc_ps2.c 125 */;
	struct serio *cocci_id/* drivers/input/serio/arc_ps2.c 117 */;
}
