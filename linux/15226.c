cocci_test_suite() {
	unsigned int cocci_id/* drivers/leds/trigger/ledtrig-cpu.c 73 */;
	bool cocci_id/* drivers/leds/trigger/ledtrig-cpu.c 50 */;
	struct led_trigger_cpu *cocci_id/* drivers/leds/trigger/ledtrig-cpu.c 49 */;
	enum cpu_led_event cocci_id/* drivers/leds/trigger/ledtrig-cpu.c 47 */;
	void cocci_id/* drivers/leds/trigger/ledtrig-cpu.c 47 */;
	atomic_t cocci_id/* drivers/leds/trigger/ledtrig-cpu.c 38 */;
	struct led_trigger *cocci_id/* drivers/leds/trigger/ledtrig-cpu.c 37 */;
	struct led_trigger_cpu {
		bool is_active;
		char name[MAX_NAME_LEN];
		struct led_trigger *_trig;
	} cocci_id/* drivers/leds/trigger/ledtrig-cpu.c 29 */;
	int cocci_id/* drivers/leds/trigger/ledtrig-cpu.c 129 */;
	int __init cocci_id/* drivers/leds/trigger/ledtrig-cpu.c 127 */;
	struct syscore_ops cocci_id/* drivers/leds/trigger/ledtrig-cpu.c 109 */;
	__typeof__(struct led_trigger_cpu) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
