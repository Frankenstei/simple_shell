#include "shell.h"

/**
 * is_cmd - determines a file is executable
 * @info: info struct
 * @path: path to file
 *
 * Return: 1 if true, 0 otherwise
 */

int is_cmd(info_t *info, char *path)
{
	struct stat st;

	(void)info;
	if (!path || stat(path, &st))
	{
		return (0);
	}
	if (st.st_mode & S_IFREG)
	{
		return (1);
	}
	return (0);
}

/**
 * dup_chars - duplicates characters
 * @pathstr: the PATH string
 * @start: start index
 * @stop: end index
 *
 * Return: pointer to new buffer
 */

char *dup_chars(char *pathstr, int start, int stop)
{
	static char buf[1024];
	int i = 0, k = 0;

	for (k = 0, i = start; i < stop; i++)
	{
		if (pathstr[i] != ':')
		{
			buf[k++] = pathstr[i];
		}
	}
	buf[k] = 0;
	return (buf);
}

/**
 * find_path - finds this cmd in the PATH string
 *
 * @info: info struct
 * @pathstr: PATH string
 * @cmd: cm to find
 *
 * Return: full path of cmd
 */

char *find_path(info_t *info, char *pathstr, char *cmd)
{
	int i = 0, curr_pos = 0;
	char *path;

	if (!pathstr)
	{
		return (NULL);
	}
	if ((strlen_(cmd) > 2) && strstart_(cmd, "./"))
	{
		if (is_cmd(info, cmd))
			return (cmd);
	}
	while (1)
	{
		if (!pathstr[i] || pathstr[i] == ':')
			path = dup_chars(pathstr, curr_pos, i);
			if (!*path)
				strcat_(path, cmd);
			else
				strcat_(path, "/");
				strcat_(path, cmd);
			if (is_cmd(info, path))
				return (path);
			if (!pathstr[i])
				break;
			curr_pos = i;
		}
		i++;
	}
	return (NULL);
}
