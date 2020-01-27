cocci_test_suite() {
	unsigned char cocci_id/* drivers/video/console/vgacon.c 92 */;
	unsigned int cocci_id/* drivers/video/console/vgacon.c 91 */;
	struct {
		unsigned char SeqCtrlIndex;
		unsigned char CrtCtrlIndex;
		unsigned char CrtMiscIO;
		unsigned char HorizontalTotal;
		unsigned char HorizDisplayEnd;
		unsigned char StartHorizRetrace;
		unsigned char EndHorizRetrace;
		unsigned char Overflow;
		unsigned char StartVertRetrace;
		unsigned char EndVertRetrace;
		unsigned char ModeControl;
		unsigned char ClockingMode;
	} cocci_id/* drivers/video/console/vgacon.c 892 */;
	const unsigned char *cocci_id/* drivers/video/console/vgacon.c 870 */;
	u16 cocci_id/* drivers/video/console/vgacon.c 86 */;
	unsigned long cocci_id/* drivers/video/console/vgacon.c 83 */;
	void cocci_id/* drivers/video/console/vgacon.c 77 */(struct vc_data *c,
							     u16 *p,
							     int count);
	int cocci_id/* drivers/video/console/vgacon.c 75 */(struct vc_data *c);
	void cocci_id/* drivers/video/console/vgacon.c 74 */(struct vc_data *c,
							     int lines);
	int cocci_id/* drivers/video/console/vgacon.c 73 */(struct vc_data *c,
							    int blank,
							    int mode_switch);
	void cocci_id/* drivers/video/console/vgacon.c 71 */(struct vc_data *c,
							     int mode);
	void cocci_id/* drivers/video/console/vgacon.c 70 */(struct vc_data *c);
	void cocci_id/* drivers/video/console/vgacon.c 69 */(struct vc_data *c,
							     int init);
	const char *cocci_id/* drivers/video/console/vgacon.c 68 */(void);
	const bool cocci_id/* drivers/video/console/vgacon.c 666 */;
	u16 *cocci_id/* drivers/video/console/vgacon.c 664 */;
	u8 cocci_id/* drivers/video/console/vgacon.c 632 */;
	struct vgastate cocci_id/* drivers/video/console/vgacon.c 59 */;
	struct uni_pagedir *cocci_id/* drivers/video/console/vgacon.c 582 */;
	u32 cocci_id/* drivers/video/console/vgacon.c 57 */;
	int cocci_id/* drivers/video/console/vgacon.c 55 */;
	struct resource cocci_id/* drivers/video/console/vgacon.c 430 */;
	volatile u16 *cocci_id/* drivers/video/console/vgacon.c 394 */;
	const char *cocci_id/* drivers/video/console/vgacon.c 390 */;
	size_t cocci_id/* drivers/video/console/vgacon.c 362 */;
	bool cocci_id/* drivers/video/console/vgacon.c 183 */;
	struct vgacon_scrollback_info cocci_id/* drivers/video/console/vgacon.c 182 */[MAX_NR_CONSOLES];
	struct vgacon_scrollback_info *cocci_id/* drivers/video/console/vgacon.c 181 */;
	struct vgacon_scrollback_info {
		void *data;
		int tail;
		int size;
		int rows;
		int cnt;
		int cur;
		int save;
		int restore;
	} cocci_id/* drivers/video/console/vgacon.c 170 */;
	struct vc_data *cocci_id/* drivers/video/console/vgacon.c 163 */;
	const struct consw cocci_id/* drivers/video/console/vgacon.c 1423 */;
	const unsigned short *cocci_id/* drivers/video/console/vgacon.c 1420 */;
	enum con_scroll cocci_id/* drivers/video/console/vgacon.c 1365 */;
	struct console_font *cocci_id/* drivers/video/console/vgacon.c 1303 */;
	char *cocci_id/* drivers/video/console/vgacon.c 126 */;
	int __init cocci_id/* drivers/video/console/vgacon.c 126 */;
	unsigned cocci_id/* drivers/video/console/vgacon.c 1224 */;
	unsigned short cocci_id/* drivers/video/console/vgacon.c 1080 */;
	void *cocci_id/* drivers/video/console/vgacon.c 1045 */;
	struct vgastate *cocci_id/* drivers/video/console/vgacon.c 1008 */;
	void cocci_id/* drivers/video/console/vgacon.c 1008 */;
}
