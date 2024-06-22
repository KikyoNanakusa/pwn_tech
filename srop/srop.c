static const char* shell = "/bin/sh";

int set_eax() {  return 15; }
void fire()   {     asm("syscall");    }

int main() {
  char buf[30];
  const int read_b = read(0, buf, 1000);
  return 0;
}
