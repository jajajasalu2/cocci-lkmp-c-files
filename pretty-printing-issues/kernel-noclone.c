/* kernel/kexec_core.c 938 */
void __noclone __crash_kexec(struct pt_regs *regs)
{
	/* Take the kexec_mutex here to prevent sys_kexec_load
	 * running on one cpu from replacing the crash kernel
	 * we are using after a panic on a different cpu.
	 *
	 * If the crash kernel was not located in a fixed area
	 * of memory the xchg(&kexec_crash_image) would be
	 * sufficient.  But since I reuse the memory...
	 */
	if (mutex_trylock(&kexec_mutex)) {
		if (kexec_crash_image) {
			struct pt_regs fixed_regs;

			crash_setup_regs(&fixed_regs, regs);
			crash_save_vmcoreinfo();
			machine_crash_shutdown(&fixed_regs);
			machine_kexec(kexec_crash_image);
		}
		mutex_unlock(&kexec_mutex);
	}
}
