cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 957 */;
	const struct of_device_id cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 951 */[];
	const struct acpi_device_id cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 945 */[];
	struct resource *cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 895 */;
	struct platform_device *cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 884 */;
	struct goldfish_pipe_dev_buffers *cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 860 */;
	struct goldfish_pipe_command {
		s32 cmd;
		s32 id;
		s32 status;
		s32 reserved;
		union {
			struct {
				u32 buffers_count;
				s32 consumed_size;
				u64 ptrs[MAX_BUFFERS_PER_COMMAND];
				u32 sizes[MAX_BUFFERS_PER_COMMAND];
			} rw_params;
		};
	} cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 86 */;
	struct goldfish_pipe_dev_buffers cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 859 */;
	struct goldfish_pipe_dev cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 83 */;
	const unsigned long cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 814 */;
	void __iomem *cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 812 */;
	struct miscdevice *cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 803 */;
	const struct file_operations cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 794 */;
	enum{MAX_BUFFERS_PER_COMMAND=336, MAX_SIGNALLED_PIPES=64, INITIAL_PIPES_CAPACITY=64,} cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 77 */;
	u64 cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 754 */;
	struct goldfish_pipe_command *cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 732 */;
	struct goldfish_pipe_command cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 730 */;
	enum{PIPE_DRIVER_VERSION=2, PIPE_CURRENT_DEVICE_VERSION=2,} cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 72 */;
	struct inode *cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 709 */;
	struct file *cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 709 */;
	struct goldfish_pipe **cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 677 */;
	u32 cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 676 */;
	struct goldfish_pipe_dev *cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 663 */;
	int cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 663 */;
	irqreturn_t cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 631 */;
	void *cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 631 */;
	void cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 615 */(struct platform_device *pdev,
									 struct goldfish_pipe_dev *dev);
	struct goldfish_pipe *cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 595 */;
	unsigned long cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 591 */;
	void cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 591 */;
	int *cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 564 */;
	__poll_t cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 504 */;
	poll_table *cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 504 */;
	const char __user *cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 494 */;
	loff_t *cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 487 */;
	size_t cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 487 */;
	char __user *cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 486 */;
	ssize_t cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 486 */;
	s32 cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 429 */;
	unsigned int cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 411 */;
	s32 *cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 346 */;
	struct page **cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 301 */;
	unsigned int *cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 265 */;
	struct page *cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 264 */[MAX_BUFFERS_PER_COMMAND];
	enum PipeCmdCode cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 231 */;
	struct goldfish_pipe_dev {
		void *magic;
		spinlock_t lock;
		struct goldfish_pipe **pipes;
		u32 pipes_capacity;
		struct goldfish_pipe_dev_buffers *buffers;
		struct goldfish_pipe *first_signalled_pipe;
		struct device *pdev_dev;
		int irq;
		int version;
		unsigned char __iomem *base;
		struct tasklet_struct irq_tasklet;
		struct miscdevice miscdev;
	} cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 171 */;
	struct goldfish_pipe {
		u32 id;
		unsigned long flags;
		unsigned long signalled_flags;
		struct goldfish_pipe_command *command_buffer;
		struct goldfish_pipe *prev_signalled;
		struct goldfish_pipe *next_signalled;
		struct mutex lock;
		wait_queue_head_t wake_queue;
		struct goldfish_pipe_dev *dev;
		struct page *pages[MAX_BUFFERS_PER_COMMAND];
	} cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 126 */;
	struct goldfish_pipe_dev_buffers {
		struct open_command_param open_command_params;
		struct signalled_pipe_buffer signalled_pipe_buffers[MAX_SIGNALLED_PIPES];
	} cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 119 */;
	struct open_command_param {
		u64 command_buffer_ptr;
		u32 rw_params_max_count;
	} cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 113 */;
	struct signalled_pipe_buffer {
		u32 id;
		u32 flags;
	} cocci_id/* drivers/platform/goldfish/goldfish_pipe.c 107 */;
}
