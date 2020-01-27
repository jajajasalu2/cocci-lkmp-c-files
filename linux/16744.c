cocci_test_suite() {
	bool cocci_id/* drivers/input/serio/ps2mult.c 78 */;
	const struct serio_device_id cocci_id/* drivers/input/serio/ps2mult.c 52 */[];
	const unsigned char cocci_id/* drivers/input/serio/ps2mult.c 46 */[];
	struct ps2mult {
		struct serio *mx_serio;
		struct ps2mult_port ports[PS2MULT_NUM_PORTS];
		spinlock_t lock;
		struct ps2mult_port *in_port;
		struct ps2mult_port *out_port;
		bool escape;
	} cocci_id/* drivers/input/serio/ps2mult.c 35 */;
	struct serio_driver cocci_id/* drivers/input/serio/ps2mult.c 292 */;
	struct ps2mult_port {
		struct serio *serio;
		unsigned char sel;
		bool registered;
	} cocci_id/* drivers/input/serio/ps2mult.c 25 */;
	unsigned long cocci_id/* drivers/input/serio/ps2mult.c 237 */;
	struct ps2mult_port *cocci_id/* drivers/input/serio/ps2mult.c 236 */;
	unsigned int cocci_id/* drivers/input/serio/ps2mult.c 233 */;
	unsigned char cocci_id/* drivers/input/serio/ps2mult.c 233 */;
	irqreturn_t cocci_id/* drivers/input/serio/ps2mult.c 232 */;
	void cocci_id/* drivers/input/serio/ps2mult.c 211 */;
	struct ps2mult *cocci_id/* drivers/input/serio/ps2mult.c 165 */;
	struct serio_driver *cocci_id/* drivers/input/serio/ps2mult.c 163 */;
	struct serio *cocci_id/* drivers/input/serio/ps2mult.c 163 */;
	int cocci_id/* drivers/input/serio/ps2mult.c 163 */;
	struct serio cocci_id/* drivers/input/serio/ps2mult.c 130 */;
}
