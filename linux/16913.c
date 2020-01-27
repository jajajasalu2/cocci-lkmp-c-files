cocci_test_suite() {
	const struct ff_envelope *cocci_id/* drivers/input/ff-memless.c 79 */;
	const struct ff_envelope cocci_id/* drivers/input/ff-memless.c 60 */;
	const struct ff_effect *cocci_id/* drivers/input/ff-memless.c 58 */;
	struct ml_device cocci_id/* drivers/input/ff-memless.c 518 */;
	struct ml_device *cocci_id/* drivers/input/ff-memless.c 513 */;
	int (*cocci_id/* drivers/input/ff-memless.c 511 */)(struct input_dev *,
							    void *,
							    struct ff_effect *);
	struct input_dev *cocci_id/* drivers/input/ff-memless.c 510 */;
	void *cocci_id/* drivers/input/ff-memless.c 510 */;
	struct ml_device {
		void *private;
		struct ml_effect_state states[FF_MEMLESS_EFFECTS];
		int gain;
		struct timer_list timer;
		struct input_dev *dev;
		int (*play_effect)(struct input_dev *dev, void *data,
				   struct ff_effect *effect);
	} cocci_id/* drivers/input/ff-memless.c 47 */;
	struct timer_list *cocci_id/* drivers/input/ff-memless.c 403 */;
	struct ml_effect_state {
		struct ff_effect *effect;
		unsigned long flags;
		int count;
		unsigned long play_at;
		unsigned long stop_at;
		unsigned long adj_at;
	} cocci_id/* drivers/input/ff-memless.c 38 */;
	struct ff_effect cocci_id/* drivers/input/ff-memless.c 335 */;
	unsigned long *cocci_id/* drivers/input/ff-memless.c 327 */;
	u32 cocci_id/* drivers/input/ff-memless.c 272 */;
	unsigned int cocci_id/* drivers/input/ff-memless.c 248 */;
	void cocci_id/* drivers/input/ff-memless.c 243 */;
	s32 cocci_id/* drivers/input/ff-memless.c 236 */;
	s16 cocci_id/* drivers/input/ff-memless.c 234 */;
	u16 cocci_id/* drivers/input/ff-memless.c 216 */;
	struct ff_device *cocci_id/* drivers/input/ff-memless.c 198 */;
	unsigned long cocci_id/* drivers/input/ff-memless.c 156 */;
	struct ff_effect *cocci_id/* drivers/input/ff-memless.c 155 */;
	struct ff_envelope *cocci_id/* drivers/input/ff-memless.c 153 */;
	struct ml_effect_state *cocci_id/* drivers/input/ff-memless.c 152 */;
	int cocci_id/* drivers/input/ff-memless.c 152 */;
}
