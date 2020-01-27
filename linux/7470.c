cocci_test_suite() {
	struct mbxfb_debugfs_data {
		struct dentry *dir;
		struct dentry *sysconf;
		struct dentry *clock;
		struct dentry *display;
		struct dentry *gsctl;
		struct dentry *sdram;
		struct dentry *misc;
	} cocci_id/* drivers/video/fbdev/mbx/mbxdebugfs.c 9 */;
	char cocci_id/* drivers/video/fbdev/mbx/mbxdebugfs.c 7 */[BIG_BUFFER_SIZE];
	struct dentry *cocci_id/* drivers/video/fbdev/mbx/mbxdebugfs.c 214 */;
	struct mbxfb_info *cocci_id/* drivers/video/fbdev/mbx/mbxdebugfs.c 213 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/mbx/mbxdebugfs.c 211 */;
	void cocci_id/* drivers/video/fbdev/mbx/mbxdebugfs.c 211 */;
	const char __user *cocci_id/* drivers/video/fbdev/mbx/mbxdebugfs.c 19 */;
	const struct file_operations cocci_id/* drivers/video/fbdev/mbx/mbxdebugfs.c 176 */;
	char *cocci_id/* drivers/video/fbdev/mbx/mbxdebugfs.c 112 */;
	loff_t *cocci_id/* drivers/video/fbdev/mbx/mbxdebugfs.c 110 */;
	size_t cocci_id/* drivers/video/fbdev/mbx/mbxdebugfs.c 110 */;
	struct file *cocci_id/* drivers/video/fbdev/mbx/mbxdebugfs.c 109 */;
	char __user *cocci_id/* drivers/video/fbdev/mbx/mbxdebugfs.c 109 */;
	ssize_t cocci_id/* drivers/video/fbdev/mbx/mbxdebugfs.c 109 */;
}
