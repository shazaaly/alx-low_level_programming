#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <elf.h>

void print_error(char* message) {
    fprintf(stderr, "Error: %s\n", message);
    exit(98);
}

int main(int argc, char** argv) {
    if (argc != 2) {
        print_error("Usage: elf_header elf_filename");
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        print_error(strerror(errno));
    }

    // Read the ELF header
    Elf64_Ehdr header;
    if (read(fd, &header, sizeof(header)) != sizeof(header)) {
        print_error(strerror(errno));
    }

    // Verify that the file is an ELF file
    if (header.e_ident[EI_MAG0] != ELFMAG0 ||
        header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 ||
        header.e_ident[EI_MAG3] != ELFMAG3) {
        print_error("Not an ELF file");
    }

    // Print the header information
    printf("ELF Header:\n");
    printf("Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header.e_ident[i]);
    }
    printf("\n");

    printf("Class:                             ");
    switch (header.e_ident[EI_CLASS]) {
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("Invalid class\n");
            break;
    }

    printf("Data:                              ");
    switch (header.e_ident[EI_DATA]) {
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("Invalid data encoding\n");
            break;
    }

    printf("Version:                           %d (current)\n", header.e_ident[EI_VERSION]);

    printf("OS/ABI:                            ");
    switch (header.e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_NETBSD:
            printf("UNIX - NetBSD\n");
            break;
        default:
            printf("Other\n");
            break;
    }

    printf("ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);

    printf("Type:                              ");
    switch (header.e_type) {
        case ET_NONE:
            printf("NONE (No file type)\n");
            break;
        case ET_REL:
            printf("REL (Relocatable file)\n");
            break;
        case ET_EXEC:
            printf("EXEC (Executable file)\n");
            break;
        case ET_DYN:
            printf("DYN (Shared object file)\n");
            break;
        case ET_CORE:
            printf("CORE (Core file)\n");
            break;
        default:
            printf("Other\n");
            break;
    }

    printf("Entry point address:               %#lx\n", header.e_entry);

    close(fd);
    return 0;
}
