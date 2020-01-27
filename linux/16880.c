cocci_test_suite() {
	struct input_dev *cocci_id/* drivers/input/mouse/byd.c 466 */;
	u8 cocci_id/* drivers/input/mouse/byd.c 438 */[4];
	struct ps2dev *cocci_id/* drivers/input/mouse/byd.c 437 */;
	bool cocci_id/* drivers/input/mouse/byd.c 435 */;
	int cocci_id/* drivers/input/mouse/byd.c 435 */;
	const struct {
		u16 command;
		u8 arg;
	} cocci_id/* drivers/input/mouse/byd.c 345 */[];
	size_t cocci_id/* drivers/input/mouse/byd.c 343 */;
	s32 cocci_id/* drivers/input/mouse/byd.c 307 */;
	u32 cocci_id/* drivers/input/mouse/byd.c 305 */;
	typeof(jiffies) cocci_id/* drivers/input/mouse/byd.c 293 */;
	u8 *cocci_id/* drivers/input/mouse/byd.c 276 */;
	psmouse_ret_t cocci_id/* drivers/input/mouse/byd.c 273 */;
	struct psmouse *cocci_id/* drivers/input/mouse/byd.c 255 */;
	struct byd_data *cocci_id/* drivers/input/mouse/byd.c 254 */;
	struct timer_list *cocci_id/* drivers/input/mouse/byd.c 252 */;
	void cocci_id/* drivers/input/mouse/byd.c 252 */;
	struct byd_data {
		struct timer_list timer;
		struct psmouse *psmouse;
		s32 abs_x;
		s32 abs_y;
		typeof(jiffies) last_touch_time;
		bool btn_left;
		bool btn_right;
		bool touch;
	} cocci_id/* drivers/input/mouse/byd.c 225 */;
}
