#include "doom.h"

void	ft_unpack(void)
{
	if (system("test -d music/ ") != 0 && system("test -d Textures/") != 0 && \
		system("test -d fonts/") != 0)
	{
		if (system("test -f pack.RTv1") == 0)
			system("tar -xf pack.RTv1");
		else
			ft_error("file mne verni gad\n");
	}
}

void	ft_check_folders(void)
{
	if (system("test -d music/ ") == 0 && system("test -d Textures/") == 0 &&\
		system("test -d fonts/") == 0)
	{
		if (system("test -f ""pack.doom") == 0)
			system("rm -rf pack.doom");
		if (system("tar -cf pack.RTv1 music/ Textures/ fonts/") == 0)
		{
			ft_putstr_fd("bomb has been planted\n", 2);
			system("rm -rf music/ Textures/ fonts/");
		}
	}
}
