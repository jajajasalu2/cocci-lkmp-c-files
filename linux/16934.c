cocci_test_suite() {
	unsigned char cocci_id/* drivers/input/touchscreen/penmount.c 96 */;
	int cocci_id/* drivers/input/touchscreen/penmount.c 90 */;
	bool cocci_id/* drivers/input/touchscreen/penmount.c 88 */;
	unsigned char *cocci_id/* drivers/input/touchscreen/penmount.c 88 */;
	struct pm {
		struct input_dev *dev;
		struct serio *serio;
		int idx;
		unsigned char data[PM_MAX_LENGTH];
		char phys[32];
		unsigned char packetsize;
		unsigned char maxcontacts;
		struct mt_slot slots[PM_MAX_MTSLOT];
		void (*parse_packet)(struct pm *);
	} cocci_id/* drivers/input/touchscreen/penmount.c 50 */;
	struct mt_slot {
		unsigned short x,y;
		bool active;
	} cocci_id/* drivers/input/touchscreen/penmount.c 41 */;
	struct serio_driver cocci_id/* drivers/input/touchscreen/penmount.c 304 */;
	const struct serio_device_id cocci_id/* drivers/input/touchscreen/penmount.c 292 */[];
	struct pm cocci_id/* drivers/input/touchscreen/penmount.c 202 */;
	struct input_dev *cocci_id/* drivers/input/touchscreen/penmount.c 198 */;
	struct pm *cocci_id/* drivers/input/touchscreen/penmount.c 197 */;
	struct serio_driver *cocci_id/* drivers/input/touchscreen/penmount.c 195 */;
	struct serio *cocci_id/* drivers/input/touchscreen/penmount.c 195 */;
	void cocci_id/* drivers/input/touchscreen/penmount.c 177 */;
	unsigned int cocci_id/* drivers/input/touchscreen/penmount.c 162 */;
	irqreturn_t cocci_id/* drivers/input/touchscreen/penmount.c 161 */;
}
