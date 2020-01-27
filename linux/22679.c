cocci_test_suite() {
	int __init cocci_id/* sound/sound_core.c 609 */;
	void __exit cocci_id/* sound/sound_core.c 59 */;
	struct inode *cocci_id/* sound/sound_core.c 536 */;
	struct file *cocci_id/* sound/sound_core.c 536 */;
	struct sound_unit *cocci_id/* sound/sound_core.c 522 */;
	int cocci_id/* sound/sound_core.c 522 */;
	char cocci_id/* sound/sound_core.c 356 */[16];
	const char *cocci_id/* sound/sound_core.c 355 */;
	const int cocci_id/* sound/sound_core.c 353 */;
	struct device *cocci_id/* sound/sound_core.c 351 */;
	struct sound_unit *cocci_id/* sound/sound_core.c 335 */[SOUND_STEP];
	umode_t *cocci_id/* sound/sound_core.c 33 */;
	char *cocci_id/* sound/sound_core.c 33 */;
	struct class *cocci_id/* sound/sound_core.c 26 */;
	umode_t cocci_id/* sound/sound_core.c 242 */;
	void cocci_id/* sound/sound_core.c 23 */;
	void cocci_id/* sound/sound_core.c 20 */(void);
	int __init cocci_id/* sound/sound_core.c 19 */(void);
	const struct file_operations *cocci_id/* sound/sound_core.c 162 */;
	struct sound_unit **cocci_id/* sound/sound_core.c 162 */;
	const struct file_operations cocci_id/* sound/sound_core.c 149 */;
	int cocci_id/* sound/sound_core.c 147 */(struct inode *,
						 struct file *);
	struct sound_unit {
		int unit_minor;
		const struct file_operations *unit_fops;
		struct sound_unit *next;
		char name[32];
	} cocci_id/* sound/sound_core.c 109 */;
}
