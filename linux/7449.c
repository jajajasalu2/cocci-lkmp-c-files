cocci_test_suite() {
	u8 __user *cocci_id/* drivers/video/fbdev/smscufx.c 996 */;
	struct dloarea *cocci_id/* drivers/video/fbdev/smscufx.c 989 */;
	unsigned int cocci_id/* drivers/video/fbdev/smscufx.c 985 */;
	const int cocci_id/* drivers/video/fbdev/smscufx.c 972 */;
	struct fb_deferred_io *cocci_id/* drivers/video/fbdev/smscufx.c 959 */;
	struct page *cocci_id/* drivers/video/fbdev/smscufx.c 958 */;
	struct list_head *cocci_id/* drivers/video/fbdev/smscufx.c 956 */;
	struct fb_info *cocci_id/* drivers/video/fbdev/smscufx.c 955 */;
	const struct fb_fillrect *cocci_id/* drivers/video/fbdev/smscufx.c 941 */;
	const struct fb_image *cocci_id/* drivers/video/fbdev/smscufx.c 930 */;
	struct ufx_data {
		struct usb_device *udev;
		struct device *gdev;
		struct fb_info *info;
		struct urb_list urbs;
		struct kref kref;
		int fb_count;
		bool virtualized;
		struct delayed_work free_framebuffer_work;
		atomic_t usb_active;
		atomic_t lost_pixels;
		u8 *edid;
		size_t edid_size;
		u32 pseudo_palette[256];
	} cocci_id/* drivers/video/fbdev/smscufx.c 92 */;
	const struct fb_copyarea *cocci_id/* drivers/video/fbdev/smscufx.c 918 */;
	loff_t *cocci_id/* drivers/video/fbdev/smscufx.c 898 */;
	const char __user *cocci_id/* drivers/video/fbdev/smscufx.c 897 */;
	ssize_t cocci_id/* drivers/video/fbdev/smscufx.c 897 */;
	struct urb_list {
		struct list_head list;
		spinlock_t lock;
		struct semaphore limit_sem;
		int available;
		int count;
		size_t size;
	} cocci_id/* drivers/video/fbdev/smscufx.c 83 */;
	void *cocci_id/* drivers/video/fbdev/smscufx.c 795 */;
	struct vm_area_struct *cocci_id/* drivers/video/fbdev/smscufx.c 775 */;
	struct urb_node {
		struct list_head entry;
		struct ufx_data *dev;
		struct delayed_work release_urb_work;
		struct urb *urb;
	} cocci_id/* drivers/video/fbdev/smscufx.c 76 */;
	struct dloarea {
		int x,y;
		int w,h;
	} cocci_id/* drivers/video/fbdev/smscufx.c 71 */;
	u16 cocci_id/* drivers/video/fbdev/smscufx.c 661 */;
	struct pll_values cocci_id/* drivers/video/fbdev/smscufx.c 615 */;
	struct pll_values *cocci_id/* drivers/video/fbdev/smscufx.c 529 */;
	void cocci_id/* drivers/video/fbdev/smscufx.c 529 */;
	struct pll_values {
		u32 div_r0;
		u32 div_f0;
		u32 div_q0;
		u32 range0;
		u32 div_r1;
		u32 div_f1;
		u32 div_q1;
		u32 range1;
	} cocci_id/* drivers/video/fbdev/smscufx.c 494 */;
	u32 cocci_id/* drivers/video/fbdev/smscufx.c 239 */;
	char *cocci_id/* drivers/video/fbdev/smscufx.c 1849 */;
	struct urb_node *cocci_id/* drivers/video/fbdev/smscufx.c 1848 */;
	struct urb *cocci_id/* drivers/video/fbdev/smscufx.c 1847 */;
	struct ufx_data *cocci_id/* drivers/video/fbdev/smscufx.c 1844 */;
	int cocci_id/* drivers/video/fbdev/smscufx.c 1844 */;
	size_t cocci_id/* drivers/video/fbdev/smscufx.c 1844 */;
	struct urb_node cocci_id/* drivers/video/fbdev/smscufx.c 1833 */;
	unsigned long cocci_id/* drivers/video/fbdev/smscufx.c 1815 */;
	struct usb_driver cocci_id/* drivers/video/fbdev/smscufx.c 1767 */;
	struct usb_interface *cocci_id/* drivers/video/fbdev/smscufx.c 1741 */;
	struct usb_device *cocci_id/* drivers/video/fbdev/smscufx.c 1611 */;
	const struct usb_device_id *cocci_id/* drivers/video/fbdev/smscufx.c 1609 */;
	const struct fb_videomode *cocci_id/* drivers/video/fbdev/smscufx.c 1484 */;
	u8 *cocci_id/* drivers/video/fbdev/smscufx.c 1422 */;
	void cocci_id/* drivers/video/fbdev/smscufx.c 138 */(struct ufx_data *dev);
	int cocci_id/* drivers/video/fbdev/smscufx.c 137 */(struct ufx_data *dev,
							    int count,
							    size_t size);
	int cocci_id/* drivers/video/fbdev/smscufx.c 136 */(struct ufx_data *dev,
							    struct urb *urb,
							    size_t len);
	struct urb *cocci_id/* drivers/video/fbdev/smscufx.c 135 */(struct ufx_data *dev);
	void cocci_id/* drivers/video/fbdev/smscufx.c 134 */(struct urb *urb);
	bool cocci_id/* drivers/video/fbdev/smscufx.c 130 */;
	unsigned char *cocci_id/* drivers/video/fbdev/smscufx.c 1295 */;
	struct fb_ops cocci_id/* drivers/video/fbdev/smscufx.c 1272 */;
	u16 *cocci_id/* drivers/video/fbdev/smscufx.c 1242 */;
	struct fb_videomode cocci_id/* drivers/video/fbdev/smscufx.c 1221 */;
	const struct usb_device_id cocci_id/* drivers/video/fbdev/smscufx.c 122 */[];
	struct fb_var_screeninfo *cocci_id/* drivers/video/fbdev/smscufx.c 1218 */;
	const struct fb_bitfield cocci_id/* drivers/video/fbdev/smscufx.c 1208 */;
	struct fb_videomode *cocci_id/* drivers/video/fbdev/smscufx.c 1186 */;
	const u32 cocci_id/* drivers/video/fbdev/smscufx.c 118 */;
	struct work_struct *cocci_id/* drivers/video/fbdev/smscufx.c 1128 */;
	struct ufx_data cocci_id/* drivers/video/fbdev/smscufx.c 1109 */;
	struct kref *cocci_id/* drivers/video/fbdev/smscufx.c 1107 */;
	struct fb_fix_screeninfo cocci_id/* drivers/video/fbdev/smscufx.c 108 */;
	u32 *cocci_id/* drivers/video/fbdev/smscufx.c 1046 */;
	unsigned cocci_id/* drivers/video/fbdev/smscufx.c 1035 */;
}
